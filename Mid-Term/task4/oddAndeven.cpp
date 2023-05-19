#include<iostream>

using namespace std;

int main(){
int N;
cout<<"Enter the size of the array: "<<endl;
cin>>N;

int arr[N];
cout<<"Enter the values of the array: "<<endl;
for(int i=0; i<N; i++){
    cin>>arr[i];
    if(arr[i]%2==0){
        cout<<"The number is EVEN"<<endl;
    }
    else{
        cout<<"The number is ODD"<<endl;
    }
}

return 0;
}
