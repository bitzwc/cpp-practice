#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(int argc, char **argv){
    //读文件流
    ifstream ifs;
    
    //打开文件，std::ios::in表示读取文件
    ifs.open("/home/zhangwencheng/Documents/project/cpp-practice/src/data/cpp-practice.txt", ios::in);

    //判断文件是否打开成功
    if(!ifs.is_open()){
        cout << "文件打开失败" << endl;
        return -1;
    }

    string line;
    //从ifs文件流中按行读取，赋值给line
    while (getline(ifs, line)){
        cout << line << endl;
    }
    cout << "读取文件完成" << endl;
    //关闭文件流
    ifs.close();
    return 0;
}