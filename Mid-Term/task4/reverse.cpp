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
}
cout<<"Reverse Order: "<<endl;
for(int i=N-1; i>=0; i--){
    cout<<arr[i]<<endl;
}






return 0;
}
