#include<iostream>
using namespace std;
int even_int(int a); //function prototype

int main(){
cout<<"Enter a number to get all the even digits out : "<<endl;
int x;
cin>>x;
cout<<even_int(x); //function call
return 0;
}
int even_int(int a){ //function body

    int rem=0,res1=0;

    for(int i=0; ; i++){
        rem = a%10;
        if(rem%2==0){
            res1 = res1*10+rem;
        }
        a/=10;
        if(a==0){break;}
    }
    int res2=0;
    for(int i=0; ; i++){
        rem = res1%10;
        if(rem%2==0){
            res2 = res2*10+rem;
        }
        res1/=10;
        if(res1==0){break;}
    }

    return res2;
}
