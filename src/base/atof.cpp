#include <iostream>

using namespace std;

int main(int argc, char **argv){
    string s = "1.2a";
    cout << atof(s.c_str()) << endl;
    cout << atol(s.c_str()) << endl;
    cout << atoi(s.c_str()) << endl;
    cout << atoll(s.c_str()) << endl;
    return 0;
}