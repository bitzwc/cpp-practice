#include <iostream>
using namespace std;

//多态
class AbstractCalculator{
public:
    int a;
    int b;
    //定义虚函数，方便多态使用
    virtual int getResult(){
        return 0;
    };
};

//加法计算器
class AddCalculator: public AbstractCalculator{
public:
    int getResult(){
        return a + b;
    }
};

//减法计算器
class SubCalculator: public AbstractCalculator{
public:
    int getResult(){
        return a - b;
    }
};

//void test01(){
//    AbstractCalculator * abc = new AddCalculator;
//
//    abc->a = 10;
//    abc->b = 20;
//    cout << abc->getResult() << endl;
//    //new创建的对象在堆区，需要手动释放
//    delete abc;
//
//    abc = new SubCalculator;
//    abc->a = 100;
//    abc->b = 200;
//    cout << abc->getResult() << endl;
//    delete abc;
//};

//int main(){
//    test01();
//    return 0;
//}