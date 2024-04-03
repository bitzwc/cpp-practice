#include <math.h>
#include <cppad/cppad.hpp>

using namespace CppAD;
using namespace std;

int main(void){
    double theta = 60 * M_PI / 180;
    cout << theta << endl;
    cout << typeid(cos(theta)).name() << endl;

    //定义自动微分变量x
    CppAD::AD<double> x;
    x = 0;
    CppAD::AD<double> y = CppAD::cos(x); // 计算余弦函数及其导数
    cout << y << endl;
    cout << typeid(y).name() << endl;
    return 0;
}
