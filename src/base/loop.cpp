#include <iostream>
#include <list>

void increase(int input){
    std::cout << input + 1 << std::endl;
}

int main(){

    //range base循环
    std::list<int> l = {2, 3, 5};
    for(int n:l){
        std::cout << n << std::endl;
    }

    //for_each循环
    std::list<int> l2 = {2, 3, 5};
    std::for_each(l2.begin(), l2.end(), increase);
    
    return 0;

}