#include <iostream>
using namespace std;

int main(){

float a[2][3];
cout<<"Enter the Value to 2X3 matrix : "<<endl;

for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
     cout<<"a["<<i<<"]["<<j<<"] = ";
     cin>>a[i][j];
    }
}
cout<<endl<<endl<<"So, Matrix a is : "<<endl;
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
     cout<<"\t"<<a[i][j];
    }
    cout<<endl;
}
float maxi = a[0][0];
float mini = a[1][0];
for(int i=0; i<2; i++){

    for(int j=0; j<3; j++){

     if(i==0 && a[i][j]>maxi){
        maxi = a[i][j];
     }
     if(i==1 && a[i][j]<mini){
        mini = a[i][j];
     }
    }
    cout<<endl;
}
cout<<endl<<endl;

cout<<"Largest element : "<<maxi<<endl;
cout<<"Smallest element : "<<mini<<endl;
cout<<"Multiplied result : "<<maxi*mini<<endl;

return 0;
}



