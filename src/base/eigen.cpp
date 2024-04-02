#include <Eigen/Core>
#include <iostream>

int main(int argc, char *argv[]) {
    //new一个double矩阵
    Eigen::MatrixXd A(3, 3);
    
    //随机写入元素
    A = Eigen::MatrixXd::Random(3, 3);
    std::cout << A << std::endl;

    //new一个int矩阵
    Eigen::Matrix3i B;
    B = Eigen::MatrixXi::Random(3,3);
    std::cout << B << std::endl;

    //new一个double vector
    Eigen::Vector3d C;
    C = Eigen::VectorXd::Random(3);
    std::cout << C << std::endl;

    //Eigen::RowVectorXd
    Eigen::RowVectorXd D;
    D = Eigen::RowVectorXd::Random(3);
    std::cout << D << std::endl;

    return 0;
}