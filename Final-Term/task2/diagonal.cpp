#include<iostream>

using namespace std;

int main(){
int n,m;
cout<<"Enter the row of the matrix : "<<endl;
cin>>n;
cout<<"Enter the col of the matrix : "<<endl;
cin>>m;


int mat[n][m], res=0;
cout<<"Enter the elements for Matrix : "<<endl;

for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        cout<<"mat1["<<i<<"]["<<j<<"] = ";
        cin>>mat[i][j];
    }
}
for(int i=0; i<n; i++){
    for(int j=0; j<m; j++){
        if(i==j){
            res+=mat[i][j];
        }
    }
}
int h=0,k=n-1;
for(int i=0; i<n; i++){
    if(h==k){
        res+=0;
    }
    else{
    res+=mat[h][k];
    }
    h++;
    k--;
}
cout<<res<<endl;

return 0;
}

