#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char** argv){
    //文件输出流
    ofstream ofs;
    
    //打开文件
    //std::ios:out相当于可以获取输出（可写），std::ios:in相当于可以获取输入（可读），ios::in|ios::out表示可读可写
    ofs.open("/home/zhangwencheng/Documents/project/cpp-practice/src/data/cpp-practice.txt", ios::out); 
    
    //写入内容
    ofs << "hello world" << endl;
    
    //关闭文件
    ofs.close();
    cout << "hello world" << endl;
    return 0;
}