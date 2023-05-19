#include<iostream>
using namespace std;

class Shape{
//protected members can be accessed within the class and from the child class
protected:
    double length;

public:
    Shape(){cout<<"Shape-Empty Constructor is called"<<endl;}
    Shape(double l){
        length = l;
        cout<<"Shape-Parameterized Constructor is called"<<endl;
    }
    ~Shape(){
        cout<<"Shape-Destructor"<<endl;
    }

    void setLength(double l){
        length = l;
    }
    double getLength(){
        return length;
    }
};

// inheritance is called IS A Relation
// Square IS A Shape
//class ChildClassName: accessSpecifier ParentClassName{ //child class body };

class Square: public Shape{
public:
    Square(double l):Shape(l){
        //setLength(l);
        cout<<"Square-Parameterized Constructor is called"<<endl;
    }
    ~Square(){
        cout<<"Square Destructor"<<endl;
    }
    double getArea(){
        return length*length;
    }
};





int main(){

    Shape  s(10);
    cout<<s.getLength()<<endl;





return 0;
}
