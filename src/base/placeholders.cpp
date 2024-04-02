//
// Created by zhangwencheng on 2024/3/25.
//
#include <functional>
#include "iostream"

using std::placeholders::_1;

void func_name(int num){
    std::cout << num << std::endl;
};

int main(){
    auto new_func = std::bind(func_name, _1);
    new_func(1);
    return 0;
}
