#include<iostream>
using namespace std;

class Box{
private:
    float len;
    float width;
    float height;
public:
    void setLen(float a){
        len = a;
    }
    void setWid(float b){
        width = b;
    }
    void setHei(float c){
        height = c;
    }
    float returnVol(){
        float Volume = len*width*height;
        return Volume;
    }
};

int main(){
float m,n,o;

cout<<"Enter Length : "<<endl;
cin>>m;
cout<<"Enter Width : "<<endl;
cin>>n;
cout<<"Enter Height : "<<endl;
cin>>o;

Box cat1;
cat1.setLen(m);
cat1.setWid(n);
cat1.setHei(o);

cout<<cat1.returnVol();


return 0;
}

