#include<iostream>
#include<math.h>
using namespace std;

int main(){
int year, rem_4, rem_100, rem_400;
cout<<"Enter the year to be tested: "<<endl;
cin>>year;
rem_4 = year % 4;
rem_100 = year % 100;
rem_400 = year % 400;
if((rem_4 == 0 && rem_100 != 0) || rem_400 == 0)
{
    cout<<"Its's a Leap Year!"<<endl;
}
else{cout<<"Not Leap Year."<<endl;}




return 0;
}
