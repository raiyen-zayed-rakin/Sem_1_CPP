#include<iostream>
using namespace std;

class student{
private:
    int roll = 0;
    int phone_number = 0;
    string address="";
public:
    void setRoll(int a){
        roll = a;
    }
    void setPhone(int n){
        phone_number = n;
    }
    void setAddress(string s){
        address = s;
    }
    int getRoll(){
        return roll;
    }
    int getPhone(){
        return phone_number;
    }
    string getAddress(){
        return address;
    }
    void studentInfo(){
        cout<<roll<<endl;
        cout<<phone_number<<endl;
        cout<<address<<endl;
    }
};

int main(){
student sam, john;

sam.setRoll(101);
sam.setPhone(0123456789);
sam.setAddress("22/1, Baker street");

john.setRoll(102);
john.setPhone(987654321);
john.setAddress("42/1, Baker street");

cout<<"Sam : "<<endl;
cout<<"Roll : "<<sam.getRoll()<<endl;
cout<<"Phone Number : "<<sam.getPhone()<<endl;
cout<<"Address : "<<sam.getAddress()<<endl;

cout<<"John : "<<endl;
cout<<"Roll : "<<john.getRoll()<<endl;
cout<<"Phone Number : "<<john.getPhone()<<endl;
cout<<"Address : "<<john.getAddress()<<endl;
return 0;
}

