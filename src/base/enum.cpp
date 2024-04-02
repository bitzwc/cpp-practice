#include <iostream>

using namespace std;
int main(){
    enum class Color{
        RED = 1, 
        BLUE = 1
    };
    Color c = Color::BLUE;
    cout << "hello world" << endl;
    // printf("%02d", 1);
    printf("%d", static_cast<int>(c));
    return 0;
}