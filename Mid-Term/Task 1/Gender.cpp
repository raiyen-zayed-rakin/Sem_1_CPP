#include<iostream>
using namespace std;

float largest_from_1st_row(float arr[][],int row,int col)
{
    float largest;
    largest=array[0][0];

    for(int i=0;i<=row;i++)
    {
        for(int j=0;j<col;j++)
        {

        if(array[i][j]>largest)
        {
            largest=array[i][j];
        }
        }
    }
    return largest;
}


float smallest_from_2nd_row(float arr[][],int row,int col)
{
    float smallest;
    smallest=arr[1][0];

    for(int i=1;i<row;i++)
    {
         for(int j=0;j<col;j++)
        {
        if(arr[i][j]<smallest)
        {
            smallest=arr[i][j];
        }
        }
    }
    return smallest;
}
int main()
{
    float elements[2][4];

    for(int i=0;i<2;i++)
    {
        for(int j=0;j<4;j++)
        {
            cout<< "Element["<<i<<"]["<<j<<"]= ";
            cin>>elements[i][j];
        }
    }
    cout<<endl;

    //largest_from_1st_row(elements,0,4);
    float a=largest_from_1st_row(elements,0,4);

    //smallest_from_2nd_row(elements,1,4);
    float b=smallest_from_2nd_row(elements,1,4);

    cout<< "Largest*Smallest= "<< a*b<<endl;
    cout<<"Largest Element="<<a<<endl;
    cout<<"Smallest Element="<<b;

    return 0;


}

