#include<iostream>

using namespace std;

int main(){
int N;
cout<<"Enter the size of the array: "<<endl;
cin>>N;

char arr[N];
cout<<"Enter the characters of the array: "<<endl;
for(int i=0; i<N; i++){
    cin>>arr[i];
}
cout<<"Vowels: "<<endl;
for(int i=0; i<N; i++){

    if(arr[i]=='a' ||arr[i]=='e' ||arr[i]=='i' ||arr[i]=='o' ||arr[i]=='u' ||arr[i]=='A' ||arr[i]=='E' ||arr[i]=='I' ||arr[i]=='O' ||arr[i]=='U'){
        cout<<arr[i]<<endl;
    }
}

return 0;
}

