#include<iostream>

using namespace std;

int main(){
//fixed 2X2
int mat1[2][2], mat2[2][2], res[2][2];
cout<<"Enter the elements for Matrix 1 (2X2):"<<endl;

for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        cout<<"mat1["<<i<<"]["<<j<<"] = ";
        cin>>mat1[i][j];
    }
}
cout<<endl<<endl;
cout<<"Enter the elements for Matrix 2 (2X2):"<<endl;

for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        cout<<"mat2["<<i<<"]["<<j<<"] = ";
        cin>>mat2[i][j];
    }
}

cout<<"Summation result matrix = "<<endl;
for(int i=0; i<2; i++){
    for(int j=0; j<2; j++){
        cout<<"\t"<<mat1[i][j]+mat2[i][j];
    }
    cout<<endl;
}
return 0;
}
