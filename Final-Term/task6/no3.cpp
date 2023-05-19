#include<iostream>
using namespace std;

class Rectangle{
private:
    float len;
    float width;
public:
    void setLen(float a){
        len = a;
    }
    void setWid(float b){
        width = b;
    }
    float returnArea(){
        float area = len*width;
        return area;
    }
};

int main(){
float m,n;

cout<<"Enter Length : "<<endl;
cin>>m;
cout<<"Enter Width : "<<endl;
cin>>n;

Rectangle cat1;
cat1.setLen(m);
cat1.setWid(n);

cout<<cat1.returnArea();


return 0;
}
