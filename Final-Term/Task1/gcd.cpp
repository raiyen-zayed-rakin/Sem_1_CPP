#include<iostream>

using namespace std;

void gcd(int u, int v)
{
   int temp;
   while(v!=0){
    temp = u%v;
    u = v;
    v = temp;
   }
   cout<<u<<endl;
}

int main(){

gcd(150,35);


return 0;
}
