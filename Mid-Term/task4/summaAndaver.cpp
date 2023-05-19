#include<iostream>

using namespace std;

int main(){
int N;
cout<<"Enter the number of students: "<<endl;
cin>>N;

int arr[N];
int sum=0;
int aver;
cout<<"Enter the marks: "<<endl;
for(int i=0; i<N; i++){
    cin>>arr[i];
    sum+=arr[i];
}
cout<<"Summation result is: "<<sum<<endl;
aver=(float)sum/N;
cout<<"Average result is: "<<aver<<endl;






return 0;
}

