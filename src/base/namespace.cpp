#include <iostream>
using namespace std;

namespace prediction::base{
    class Base{
        public:
            int a;
    };

    void Infer(){
        cout << "prediction infer" << endl;
    }
}

namespace{
    void Infer(){
        cout << "perception infer" << endl;
    }
}

int main(int argc, char *argv[]){
    prediction::base::Base base;
    base.a = 1;
    cout << base.a << endl;
    prediction::base::Infer();
    Infer();
    return 0;
}