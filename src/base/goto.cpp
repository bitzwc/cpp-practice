#include <iostream>

using namespace std;
int main(){
    int a = 0;
    int sum = 0;
start:
    a++;
    sum += a;
    if(a < 10){
        cout << sum << endl;
        goto start;
    }
    return 0;
}