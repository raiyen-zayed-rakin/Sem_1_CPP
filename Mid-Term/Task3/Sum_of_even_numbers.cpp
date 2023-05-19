#include <iostream>

using namespace std;

int main(){
int first,sec;
int sum=0;
cout<<"Enter 1st number: "<<endl;
cin>>first;
cout<<"Enter 2nd number: "<<endl;
cin>>sec;

for(int i=first+1; i<sec; i++)
{
   if(i%2==0)
        {
            sum=sum+i;
        }
}
cout<<"Sum of even numbers : "<<sum<<endl;

return 0;
}
