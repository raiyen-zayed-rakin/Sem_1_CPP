#include<iostream>
using namespace std;
int main()
{
    int A[10][10],i,j,row,col,sum=0;
    cout<< " Enter the value of Row :";
    cin>>row;
    cout<< "Enter the value of column :";
    cin>> col;

    cout<< "Enter the value of A matrix :\n";
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<< "A["<<i<<"]["<<j<<"]=";
            cin>> A[i][j];
        }
        cout<< endl;
    }
    cout<< endl;
    cout<< "A=";
    for(i=0;i<row;i++)
    {
        cout<< "\t";
        for(j=0;j<col;j++)
        {
            cout<< A[i][j]<< " ";
        }
        cout<< endl;
    }

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                sum=sum+ A[i][j];
            }
        }
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                if(i!=row-1-j)
                {
                     sum=sum+ A[i][row-1-j];
                }

            }
        }
    }

    cout<< endl<<"Sum of diagonal elements :"<< sum;



return 0;
}
