
#include<iostream>

using namespace std;

int main(){

int num;
int arr[num];
cout<<"Your input is: ";
cin>>num;
int t1=0, t2=1,nxt;
cout<<"Fibonacci Series: "<<t1<<" "<<t2;
for(int i=2; i<num; i++){
    nxt=t1+t2;
    cout<<" "<<nxt;
    t1=t2;
    t2=nxt;
    arr[i]=nxt;
}
cout<<endl;
int findd, checker=0;

arr[0]=t1;
arr[1]=t2;
cout<<"Enter a Number to Find in the series: ";
cin>>findd;
for(int i=0; i<num; i++){
    if(arr[i]==findd){
        checker++;
    }
    else{
        checker+=0;
    }
}
if(checker==0){cout<<findd<<" does not exist in the series."<<endl;}
else{cout<<findd<<" exist in the series."<<endl;}




return 0;
}
