#include<iostream>
using namespace std;

int largest_ele(int arr[],int n);

int main(){

int s;
cout<<"Enter a size of the array : " <<endl;
cin>>s;
int arr[s];
for(int i=0; i<s; i++){
    cin>>arr[i];
}
cout<<"Largest element of the array is : "<<largest_ele(arr,s);

return 0;
}


int largest_ele(int arr[],int n){
int lar = arr[0];
for(int i=0; i<n; i++){
    if(arr[i]>lar){
        lar = arr[i];
    }
}
return lar;
}
