#include <iostream>
#include "stdlib.h"
#include <algorithm>
#include <vector>
#include <cmath>

//原函数 y = f(x) = x^3 - x^2 + 5
double f(double x){
    return -1 * pow(x, 4) - pow(x, 2) + 5;
}

//导函数 y' = 3x^2 - 2x
double d(double x){
    return -4 * pow(x, 3) - 2 * x;
}

//求x在[1,100]上的极值
int main(void) {
    std::cout << std::fmod(-4.3, 2.1) << std::endl;
    //约束范围
    int a = 0;
    int b = 100;
    double last_x;
    srand((unsigned)time(NULL)); //使用程序运行时间初始化随机数种子
    last_x = (rand() % (b-a))+ a; //获取随机初值，依赖随机值的选取，可能取到局部极小值
    std::cout << last_x << std::endl;
    double solved_x;

    for(int i = 0; i <= 50; i++) {
        if (d(last_x) == 0){
            solved_x = last_x;
            break;
        }
        double next_x = last_x - f(last_x) / d(last_x);//导数可能为0
        //防止x超出约束
        if (next_x < a) {
            next_x = a;
        }
        if (next_x > b) {
            next_x = b;
        }

        double error = next_x - last_x;
        //已经收敛了
        solved_x = next_x;
        last_x = next_x;
//        std::cout << solved_x << std::endl;
        if (abs(error) < 0.01) {
            break;
        }
    }

    //取最小值，并输出结果
    std::vector<double> x = {double(a), double(b), solved_x};
    std::vector<double> y;
    for(double i : x){
        y.push_back(f(i));
    }
//    std::cout << y[1] << std::endl;
    auto smallest = std::min_element(y.begin(), y.end());

    //最小值
    std::cout << *smallest << std::endl;
    //最小值取值的x
    std::cout << x[distance(y.begin(), smallest)] << std::endl;


    return 0; //0正常结束，-1等值代表错误结束
}
