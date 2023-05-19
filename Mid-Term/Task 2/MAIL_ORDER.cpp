
#include<iostream>
#include<math.h>

using namespace std;

int main(){

  int pro_no, sold;
  cout<<"Enter a product number: "<<endl;
  cin>>pro_no;
  cout<<"Enter sold quantity: "<<endl;
  cin>>sold;

  if(pro_no==1){cout<<"Total retail value: "<<200.75*sold<<endl;}
  else if(pro_no==2){cout<<"Total retail value: "<<345.50*sold<<endl;}
  else if(pro_no==3){cout<<"Total retail value: "<<775.75*sold<<endl;}
  else if(pro_no==4){cout<<"Total retail value: "<<400.35*sold<<endl;}
  else{cout<<"Total retail value: "<<1200.75*sold<<endl;}
 return 0;
 }
