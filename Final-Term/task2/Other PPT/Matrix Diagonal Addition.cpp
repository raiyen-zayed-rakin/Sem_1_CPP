#include<iostream>
using namespace std;

int main()
{
     int r,c;

    cout<< "ROW AND COLUMN WILL BE SAME!!!!"<<endl;
    cout<< "Enter the row size: ";
    cin>> r;
    cout<< "Enter the column size: ";
    cin>>c;

    int mat[r][c],sum1=0,sum2=0;
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]= ";
            cin>>mat[i][j];
        }
    }

     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i==j && i+j!=r-1)
            {
              sum1 = sum1 + mat[i][j];
            }
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(i+j==r-1)
            {
              sum2 = sum2 + mat[i][j];
            }
        }
    }

    cout<< "Total= "<<sum1+sum2;

    return 0;
}
