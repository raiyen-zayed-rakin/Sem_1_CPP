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
int mini=arr[0];

for(int j=0; j<N; j++){
    if(arr[j]<mini){mini=arr[j];}
    }
cout<<"Smallest Number is "<<mini<<endl;
int sndmini=1000;

for(int j=0; j<N; j++){
    if(arr[j]>mini && arr[j]<sndmini){sndmini=arr[j];}
    }
cout<<"Second Smallest Number is "<<sndmini<<endl;


return 0;
}
