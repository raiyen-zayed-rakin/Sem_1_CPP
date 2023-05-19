#include<iostream>

using namespace std;

struct student{
    int uniId;
    int credits;
    float cgpa;
};


int main(){

student check[10];

for(int i=0; i<10; i++){
    cout<<"For student No."<<i+1<<" : "<<endl;
    cout<<"Unique ID : "<<endl;
    cin>>check[i].uniId;
    //cout<<endl;
    cout<<"Credits completed : "<<endl;
    cin>>check[i].credits;
    //cout<<endl;
    cout<<"CGPA : "<<endl;
    cin>>check[i].cgpa;
    cout<<endl<<endl;

}
cout<<"Students whose CGPA is more than 3.75 : "<<endl;
for(int i=0; i<10; i++){
    if(check[i].cgpa>3.75){
        cout<<"Student No."<<i+1<<", ID : "<<check[i].uniId<<endl;
    }
}
cout<<endl<<endl;
cout<<"Students who completed more than 50 credits : "<<endl;
for(int i=0; i<10; i++){
    if(check[i].credits>50){
        cout<<"Student No."<<i+1<<", ID : "<<check[i].uniId<<endl;
    }
}

return 0;
}
