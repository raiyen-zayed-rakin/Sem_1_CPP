#include<iostream>
using namespace std;

class Employee{
private:
    string name = "";
    int yearOfJoin = 0;
    int salary;
    string address;
public:
    void setName(string s1){
        name = s1;
    }
    void setJoin(int a){
        yearOfJoin = a;
    }
    void setSalary(int b){
        salary = b;
    }
    void setAddress(string s2){
        address = s2;
    }

    void employeeInfo(){
        cout<<name<<"\t\t"<<yearOfJoin<<"\t\t\t"<<address<<endl;
    }
};
 void print(){
        cout<<"Name\t\tYear of joining\t\tAddress"<<endl;
    }

int main(){
Employee s1, s2, s3;

s1.setName("Robert");
s1.setJoin(1994);
s1.setSalary(70000);
s1.setAddress("64C-WallsStreet");

s2.setName("Sam");
s2.setJoin(2000);
s2.setSalary(60000);
s2.setAddress("68D- WallsStreet");

s3.setName("John");
s3.setJoin(1999);
s3.setSalary(50000);
s3.setAddress("26B- WallsStreet");

print();
s1.employeeInfo();
s2.employeeInfo();
s3.employeeInfo();

return 0;
}


