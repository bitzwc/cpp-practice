#include <iostream>
#include <vector>
#include <Eigen/Dense>
#include <unsupported/Eigen/MatrixFunctions> // For matrix exponential function

using namespace std;
using namespace Eigen;

// Define system dynamics (state-space representation)
// x_dot = Ax + Bu
// y = Cx
MatrixXd A(2, 2); // System matrix
MatrixXd B(2, 1); // Input matrix
MatrixXd C(1, 2); // Output matrix

// Define MPC parameters
int N = 10; // Prediction horizon
int T = 1; // Sampling time

// Define cost function weights
double Q = 1.0; // State cost weight
double R = 0.1; // Input cost weight

// MPC Controller class
class MPCController {
public:
    // Constructor
    MPCController() {}

    // Destructor
    ~MPCController() {}

    // MPC control function
    VectorXd control(VectorXd x) {
        // Initialize optimization variables
        VectorXd u_opt(1);

        // Define optimization problem
        MatrixXd QN = MatrixXd::Identity(2, 2); // Terminal state cost
        MatrixXd Q_bar = Q * MatrixXd::Identity(2, 2); // State cost
        MatrixXd R_bar = R * MatrixXd::Identity(1, 1); // Input cost

        // Initialize optimization matrices
        MatrixXd H = MatrixXd::Zero(N, N);
        MatrixXd F = MatrixXd::Zero(N, 1);
        MatrixXd A_eq = MatrixXd::Zero(N, N);
        MatrixXd B_eq = MatrixXd::Zero(N, 1);
        VectorXd g = VectorXd::Zero(N);

        // Fill in optimization matrices
        MatrixXd A_pow = MatrixXd::Identity(2, 2); // A^0
        for (int i = 0; i < N; ++i) {
            H.block(i, i, 1, 1) = (B.transpose() * Q_bar * B + R_bar).inverse();
            F(i, 0) = -2 * B.transpose() * Q_bar * A_pow * x;
            A_eq.block(i, i, 1, 1) = A_pow * B;
            B_eq(i, 0) = A_pow * B * x;
            g(i) = QN * x;
            A_pow = A_pow * A;
        }

        // Solve optimization problem
        u_opt = H.ldlt().solve(F - A_eq.transpose() * g - B_eq);

        return u_opt;
    }
};

int main() {
    // Initialize system dynamics
    A << 1, T, 0, 1; // Example system dynamics
    B << 0.5 * T * T, T; // Example input matrix
    C << 1, 0; // Example output matrix

    // Initialize MPC controller
    MPCController controller;

    // Initialize state vector
    VectorXd x(2);
    x << 0, 0; // Initial state

    // Perform MPC control
    for (int i = 0; i < 10; ++i) { // Example time steps
        // Compute control input
        VectorXd u = controller.control(x);

        // Simulate system
        x = A * x + B * u;

        // Print state and input
        cout << "State: " << x.transpose() << ", Input: " << u << endl;
    }

    return 0;
}
