#include<iostream>
using namespace std;

void converter(int n){
    string s;
    int index=0;
    while(n!=0){
        if(n%2==0){
            s[index] = '0';
        }
        else{s[index] = '1';}
        n/=2;
        index++;
    }
    cout<<"The binary number : "<<endl;
    for(int i=index; i>=0; i--){
        cout<<s[i];
    }
    cout<<endl;
}

int main(){
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    converter(num);
    return 0;

}
