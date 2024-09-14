#include <iostream>
using namespace std;

class calc{
    float a;
    float b;
public:
    void input(){
    cout << "Enter a:";
    cin >> a;
    cout << "Enter b:";
    cin >> b;
}
void sum(){
    cout<<"sum="<< a+b <<endl;
}
void sub(){
    cout<<"sub="<< a-b <<endl;
}    
void mul(){
    cout<<"mul="<< a*b <<endl;
}    
float div(){
    cout<<"div="<< a/b <<endl;
}    
};

int main(){
calc x;
x.input();
x.sum();
x.sub();
x.mul();
x.div();
}