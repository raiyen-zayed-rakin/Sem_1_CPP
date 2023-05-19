#include<iostream>

using namespace std;

int main()
{
    int r,c;

    cout<< "Enter the row size: ";
    cin>> r;
    cout<< "Enter the column size: ";
    cin>>c;

    int mat[r][c],tran[r][c];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>mat[i][j];
        }
    }

    cout<<"\nMatrix= "<<endl<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;

    }
    cout<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            tran[i][j]=mat[j][i];
        }
    }


    cout<<"\nTranspose Matrix= "<<endl<<endl;

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<tran[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
