#include<iostream>
#include<math.h>

using namespace std;

int main(){
 int m;
 float h,BMI;
 cout<<"Enter Mass: "<<endl;
 cin>>m;
 cout<<"Enter Height: "<<endl;
 cin>>h;

 BMI = (float)m/(h*h);

 cout<<"BMI is: "<<BMI<<endl;

 return 0;
 }
