#include<iostream>

using namespace std;

int main(){
int N;
cout<<"Enter the size of the array: "<<endl;
cin>>N;
int arr[N];
int maxi=arr[0];
int sndmaxi;
cout<<"Enter the values of the array: "<<endl;
for(int i=0; i<N; i++){
    cin>>arr[i];
    }


for(int j=0; j<N; j++){
    if(arr[j]>maxi){maxi=arr[j];}
    }
cout<<"Largest Number is "<<maxi<<endl;


for(int j=0; j<N; j++){
    if(arr[j]<maxi){sndmaxi=arr[j];}
    }
cout<<"Second Largest Number is "<<sndmaxi<<endl;


return 0;
}
