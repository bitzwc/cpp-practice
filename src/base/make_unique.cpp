#include <iostream>
#include <memory>

class TestCase{
    public:
        int n;
};

int main(int argc, char *argv[]) {
    //创建指针
    std::unique_ptr<TestCase> testCasePtr = std::make_unique<TestCase>();
    //指针指向对象的属性赋值
    testCasePtr->n = 8;
    //两种指针指向对象的属性取值
    std::cout << testCasePtr->n << std::endl;
    std::cout << (*testCasePtr).n << std::endl;

    std::unique_ptr<int> ptr = std::make_unique<int>(1);
    std::cout << *ptr << std::endl;
    // testCasePtr.reset();
    // testCasePtr = nullptr;
    return 0;
}