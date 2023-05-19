#include <iostream>
using namespace std;

int main(){
int n;
cout<<"Enter a number for rows and columns."<<endl;
cin>>n;
int mat1[n][n], mat2[n][n];
cout<<"Enter the Value to matrix1 : "<<endl;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
     cout<<"mat1["<<i<<"]["<<j<<"] = ";
     cin>>mat1[i][j];
    }
}
cout<<endl<<endl<<"So, Matrix1 is : "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
     cout<<"\t"<<mat1[i][j];
    }
    cout<<endl;
}
cout<<endl;
cout<<"Enter the Value to matrix2 : "<<endl;

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
     cout<<"mat2["<<i<<"]["<<j<<"] = ";
     cin>>mat2[i][j];
    }
}
cout<<endl<<endl<<"So, Matrix2 is : "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
     cout<<"\t"<<mat2[i][j];
    }
    cout<<endl;
}
cout<<endl;

int sum[n][n];
cout<<"Summation Result : "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
     cout<<"\t"<<mat1[i][j] + mat2[i][j];
    }
    cout<<endl;
}
cout<<endl<<endl;

int sub[n][n];
cout<<"Subtraction result : "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
     cout<<"\t"<<mat1[i][j] - mat2[i][j];
    }
    cout<<endl;
}
cout<<endl<<endl;

int multi[n][n];
cout<<"Multiplication result : "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
     multi[i][j] = 0;
        for(int k=0; k<n; k++){
            multi[i][j] = multi[i][j] + mat1[i][k] * mat2[k][j];//brainfuck;
        }
        cout<<"\t"<<multi[i][j];
    }
    cout<<endl;
}


return 0;
}

