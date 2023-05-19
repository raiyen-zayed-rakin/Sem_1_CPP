#include<iostream>
using namespace std;


class Complex{
int a,b;
public:
    //creating a constructor
    /*Constructor is a special member function with same name of
    the class.
    it is automatically invoked wgenever an object is created.
    It is used to initialize the objects of its class.*/
     Complex(void);
    void printnum(){
        cout<<"Your number is "<<a<<" + "<<b<<"i"<<endl;

    }
};

Complex :: Complex(void){
    a = 10;
    b = 0;
}


int main(){
 Complex c;
 c.printnum();

    return 0;
}
