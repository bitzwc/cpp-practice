#include <iostream>

int main(){

    int a = 2;
    switch (a)
    {
    case 1:
        std::cout << "a=1" << std::endl;
        std::cout << a;
        break;
    case 2:
        std::cout << "a=2" << std::endl;
        std::cout << a;
        break;
    case 10086:
        std::cout << "a=2" << std::endl;
        std::cout << a;
        break;
    default:
        break;
    }


    int b = 2;
    int c = b > 1? 2:3;
    std::cout << c << std::endl;
    return 0;

}