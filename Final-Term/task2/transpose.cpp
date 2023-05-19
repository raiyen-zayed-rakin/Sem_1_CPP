#include<iostream>

using namespace std;

int main(){
int n,m;
cout<<"Enter the row of the matrix : "<<endl;
cin>>n;
cout<<"Enter the columb of the matrix : "<<endl;
cin>>m;

int mat[n][m], res[n][m];
cout<<"Enter the elements for Matrix : "<<endl;

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<"mat1["<<i<<"]["<<j<<"] = ";
        cin>>mat[i][j];
    }
}

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
       res[i][j]=mat[j][i];
    }
}
cout<<"Transpose result : "<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<"\t"<<res[i][j];
    }
    cout<<endl;
}


return 0;
}

