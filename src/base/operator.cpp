#include <iostream>

using namespace std;

class OperatorTest{
public:
    //构造函数
    OperatorTest(int a) {
        this->age = a;
    }
    ~OperatorTest() {
    }
    //重载
    void operator()(int a, int s){
        cout << "进入重载" << endl;
        cout << a + s << endl;
    }
    int age;
    int sex;
};


int main(int argc, char **argv) {
    OperatorTest test(5);
    test(10, 2);
    cout << test.age << endl;
    return 0;
}