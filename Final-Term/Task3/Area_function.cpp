#include<iostream>
using namespace std;

void square(int *p){
   *p = *p * *p;
}
int main(){
    int num;
    cin>>num;
    cout<<"Before square : "<<num<<endl;
    square(&num);
    cout<<"After square : "<<num<<endl;



return 0;
}

