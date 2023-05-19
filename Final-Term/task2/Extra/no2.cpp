#include <iostream>
using namespace std;

int main(){
int n,m;
cout<<"Enter the number of rows : "<<endl;
cin>>n;
cout<<"Enter the number of columns : "<<endl;
cin>>m;

float a[n][m];
cout<<"Enter the Values to matrix : "<<endl;

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
     cout<<"a["<<i<<"]["<<j<<"] = ";
     cin>>a[i][j];
    }
}
cout<<endl<<endl<<"So, Matrix a is : "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
     cout<<"\t"<<a[i][j];
    }
    cout<<endl;
}
int value;
int checker=0;
cout<<"Enter a value to search : "<<endl;
cin>>value;

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
     if(a[i][j]==value){
        checker++;
     }
    }
    cout<<endl;
}
if(checker>0){
    cout<<"Present."<<endl;
}
else{
    cout<<"Not Present."<<endl;
}

return 0;
}

