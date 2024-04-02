#include <iostream>
#include <string>
#include <sstream>
#include <cstring>

using namespace std;

int main(int argc, char *argv[]) {
    string line = "a,b,c";
    //字符串输出流
    stringstream ss;
    //流读取
    ss << line << endl;
    string _sub;
    //ss字符串流按照,分割后，会出现多行，每行写入_sub
    while(getline(ss, _sub, ',')){
        cout << _sub << endl;
    }
    //流转化字符串打印
    // cout << ss.str() << endl;

    //字符串定义
    string str1 = "abc";
    //字符数组定义
    char str2[] = "abc";
    //字符串长度
    cout << str1.length() << endl;
    cout << str1.size() << endl;
    //字符数组长度，包含最后的结束字符\0，所以是4
    cout << sizeof(str2) << endl;
    return 0;
}