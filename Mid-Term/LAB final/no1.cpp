#include<iostream>

using namespace std;

int main(){
int num;
int rem,zer=0, one=0, two=0, the=0, fou=0, fiv=0, six=0, sev=0, eig=0, nin=0;
cout<<"Input any number: ";
cin>>num;
for(int i=0; ; i++){
    rem=num%10;
    if(rem==0){     //faulty
        zer++;
    }
    else if(rem==1){
        one++;
    }

    else if(rem==2){
        two++;
    }
    else if(rem==3){
        the++;
    }
    else if(rem==4){
        fou++;
    }
    else if(rem==5){
        fiv++;
    }
    else if(rem==6){
        six++;
    }
    else if(rem==7){
        sev++;
    }
    else if(rem==8){
        eig++;
    }
    else{nin++;}
    num=num/10;
    if(num==0){break;}
}

cout<<"The frequency of 0 = "<<zer<<endl;
cout<<"The frequency of 1 = "<<one<<endl;
cout<<"The frequency of 2 = "<<two<<endl;
cout<<"The frequency of 3 = "<<the<<endl;
cout<<"The frequency of 4 = "<<fou<<endl;
cout<<"The frequency of 5 = "<<fiv<<endl;
cout<<"The frequency of 6 = "<<six<<endl;
cout<<"The frequency of 7 = "<<sev<<endl;
cout<<"The frequency of 8 = "<<eig<<endl;
cout<<"The frequency of 9 = "<<nin<<endl;

return 0;
}
