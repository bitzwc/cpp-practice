#include <iostream>
#include <memory>

class TestCase{
    public:
        int n;
};

int main(int argc, char *argv[]) {
    //创建指针
    std::shared_ptr<TestCase> testCasePtr = std::make_shared<TestCase>();
    //指针指向对象的属性赋值
    testCasePtr->n = 10;
    //两种指针指向对象的属性取值
    std::cout << testCasePtr->n << std::endl;
    std::cout << (*testCasePtr).n << std::endl;
    // testCasePtr.reset();
    // testCasePtr = nullptr;
    return 0;
}