#include <Eigen/Core>
#include <iostream>

using namespace Eigen;

int main(int argc, char *argv[]) {
    //new一个double矩阵
    Eigen::MatrixXd A(3, 3);
    
    //随机写入元素
    A = Eigen::MatrixXd::Random(3, 3);
    // std::cout << A << std::endl;

    //new一个int矩阵
    Eigen::Matrix3i B;
    B = Eigen::MatrixXi::Random(3,3);
    // std::cout << B << std::endl;

    //new一个double vector
    Eigen::Vector3d C;
    C = Eigen::VectorXd::Random(3);
    // std::cout << C << std::endl;

    //行向量
    Eigen::RowVectorXd D;
    D = Eigen::RowVectorXd::Random(3);
    // std::cout << D << std::endl;

    VectorXd E(3);
    E << 1, 2, 3;
    // std::cout << E << std::endl;

    double a = 10.0;
    double* ptrx = &a;
    //这里的Map不是映射容器，而是模板类，将ptrx的内存指针映射成Eigen::VectorXd类型，下面会得到16个元素的向量，第一个元素是10.0
    Eigen::Map<VectorXd> ptsx_transform(ptrx, 16);
    std::cout << ptsx_transform << std::endl;

    return 0;
}