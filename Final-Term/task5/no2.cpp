
#include<iostream>

using namespace std;

struct employee{
    int Id;
    string name;
    string designation;
    char c;
    int salary;
    string date;
};


int main(){

employee check[10];

for(int i=0; i<10; i++){
    cout<<"For employee No."<<i+1<<" : "<<endl;
    cout<<"ID : "<<endl;
    cin>>check[i].Id;
    cout<<"Name : "<<endl;
    cin>>check[i].name;
    cout<<"Designation : "<<endl;
    cin>>check[i].designation;
    cout<<"Gender : "<<endl;
    cin>>check[i].c;
    cout<<"Salary : "<<endl;
    cin>>check[i].salary;
    cout<<"joining date : "<<endl;
    cin>>check[i].date;
    cout<<endl<<endl;

}
cout<<"All male employee : "<<endl;
for(int i=0; i<10; i++){
    if(check[i].c=='M' || check[i].c=='m'){
        cout<<"Employee No."<<i+1<<" : "<<endl;
        cout<<"ID : "<<check[i].Id<<endl;
        cout<<"Name : "<<check[i].name<<endl;
        cout<<"Designation : "<<check[i].designation<<endl;
        cout<<"Salary : "<<check[i].salary<<endl;
        cout<<"joining date : "<<check[i].date<<endl;
    }
}
cout<<endl<<endl;
cout<<"All female employee : "<<endl;
for(int i=0; i<10; i++){
    if(check[i].c=='F' || check[i].c=='f'){
        cout<<"Employee No."<<i+1<<" : "<<endl;
        cout<<"ID : "<<check[i].Id<<endl;
        cout<<"Name : "<<check[i].name<<endl;
        cout<<"Designation : "<<check[i].designation<<endl;
        cout<<"Salary : "<<check[i].salary<<endl;
        cout<<"joining date : "<<check[i].date<<endl;
    }
}
return 0;
}
