#include<iostream> //rakin
#include<string.h>

//FUll User input based##

using namespace std;

class Account{
private:
    string account_name;
    int account_no;
    float balance;
    string account_type;
public:
//empty constructor
Account(){
    account_name = "";
    account_no = 0;
    balance = 0;
    account_type = "";
}
//parameterized Constructor
Account(string m, int a, float b, string n){
    account_name = m;
    account_no = a;
    balance = b;
    account_type = n;
}

//destructor
~Account(){
//no body
}

//setters
void setName(string m){
    account_name = m;
}
void setNo(int a){
    account_no = a;
}
void setBalance(float b){
    balance = b;
}
void setType(string n){
    account_type = n;
}
//getters
string getName(){
    return account_name;
}
int getNo(){
    return account_no;
}
float getBalance(){
    return balance;
}
string getType(){
    return account_type;
}

//custom methods
float deposit(float amount){
    balance += amount;
}
int withdraw(float amount){
    if(amount<=balance){
        balance -= amount;
    }
    else{
        cout<<"Insufficient balance."<<endl;
    }
}

int trasfer(int amount, Account& new_ac){
    if(amount<=balance){
        balance -= amount;
        new_ac.deposit(amount);
    }
    else{
        cout<<"Insufficient balance."<<endl;
    }
}

void ShowAccountDetails(){
    cout<<"Account Name : "<<account_name<<endl;
    cout<<"Account No.  : "<<account_no<<endl;
    cout<<"Balance      : "<<balance<<endl;
    cout<<"Account Type : "<<account_type<<endl;
}
};

int main(){

Account default_acc = {"rakin2", 231041, 100000.00, "Savings"}; //for transfer

string name,type;
int acc_no;

cout<<"Enter your new account name : "<<endl;
cin>>name;
cout<<"Your account No. is 23500711."<<endl;
cout<<"Current balance : 500.00 TK"<<endl;
cout<<"Enter your account type : "<<endl;
cin>>type;

Account new_acc = {name, 23500711, 500.00, type};
float amount;
int choice;
m:
cout<<"Enter an option to process : (1) Deposit    (2) Withdraw    (3) Transfer "<<endl;
cin>>choice;
char a;
switch(choice){
case 1:
    cout<<"Enter amount to deposit : "<<endl;
    cin>>amount;
    new_acc.deposit(amount);
    cout<<endl<<"New changes : "<<endl;
    new_acc.ShowAccountDetails();
    break;
case 2:
    cout<<"Enter amount to withdraw : "<<endl;
    cin>>amount;
    new_acc.withdraw(amount);
    cout<<endl<<"New changes : "<<endl;
    new_acc.ShowAccountDetails();
    break;
case 3:
    cout<<"Enter amount to transfer to your default savings account : "<<endl;
    cin>>amount;
    new_acc.trasfer(amount, default_acc);
    cout<<endl<<"New changes in this account : "<<endl;
    new_acc.ShowAccountDetails();
    cout<<endl<<"New changes in savings account : "<<endl;
    default_acc.ShowAccountDetails();
    break;
}
cout<<"Want to edit again? y/n?"<<endl;
cin>>a;
if(a=='y' || a=='Y'){
    goto m;
}
else{
    cout<<"\n\nThank you for using our bank!"<<endl;
}

return 0;
}
