#include<iostream>

using namespace std;

int main()
{
    int r,c;

    cout<< "Enter the number of rows: ";
    cin>>r;
    cout<< "Enter the number of colums: ";
    cin>>c;

    int A[r][c],B[r][c],ans[r][c];

    cout<<"\n";
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>A[i][j];
        }
    }
     cout<<"\n";
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]= ";
            cin>>B[i][j];
        }
    }

    cout<< "\nA= ";
     for(int i=0;i<r;i++)
    {   cout<<"\t";
        for(int j=0;j<c;j++)
        {
            cout<<A[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<< "\nB= ";
     for(int i=0;i<r;i++)
    {   cout<<"\t";
        for(int j=0;j<c;j++)
        {
            cout<<B[i][j]<<" ";
        }
        cout<<endl;
    }


     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            ans[i][j] = A[i][j] + B[i][j];
        }
    }

     cout<< "\nAns= ";
     for(int i=0;i<r;i++)
    {   cout<<"\t";
        for(int j=0;j<c;j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

return 0;
}
