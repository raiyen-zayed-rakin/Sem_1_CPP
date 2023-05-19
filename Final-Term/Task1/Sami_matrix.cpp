#include<iostream>
#include<string.h>

using namespace std;

int main(){

int r1,c1,r2,c2;
start:
cout<<"Enter the number of rows for m1 : "<<endl;
cin>>r1;
cout<<"Enter the number of colunms for m1 : "<<endl;
cin>>c1;
cout<<"Enter the number of rows for m2 : "<<endl;
cin>>r2;
cout<<"Enter the number of columns for m2 : "<<endl;
cin>>c2;

for(int i=0; ; i++){
    if(r1==c2) {break;}
    else{
        cout<<"You have entered invalid values."<<endl<<"Please try again."<<endl;
        goto start;
    }
}

int m1[r1][c1], m2[r2][c2];
cout<<"Enter the values of m1 : "<<endl;

for(int i=0; i<r1; i++){
    for(int j=0; j<c1; j++){
        cout<<"m1["<<i<<"]["<<j<<"] = ";
        cin>>m1[i][j];
    }
}
cout<<"So, M1 = "<<endl;
for(int i=0; i<r1; i++){
    for(int j=0; j<c1; j++){
        cout<<"\t"<<m1[i][j];
    }
    cout<<endl;
}
cout<<"Enter the values of m2 : "<<endl;

for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
        cout<<"m2["<<i<<"]["<<j<<"] = ";
        cin>>m2[i][j];
    }
}
cout<<"So, M2 = "<<endl;
for(int i=0; i<r2; i++){
    for(int j=0; j<c2; j++){
        cout<<"\t"<<m2[i][j];
    }
    cout<<endl;
}
cout<<endl<<endl;
start2:
int opp;
char a;
cout<<"Now, enter an operator serial to do a calculation."<<endl;
cout<<"Options are : (1) +  ,   (2) -   ,   (3) *  ."<<endl;
cin>>opp;
int res[r1][c2];
if(opp==1){
    cout<<"Addition Result is : "<<endl;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            res[i][j] = m1[i][j] + m2[i][j];
            cout<<"\t"<<res[i][j];
        }
        cout<<endl;
    }
    cout<<"Do you want to try again? y or n?"<<endl;
    cin>>a;
    if(a=='y' || a=='Y'){goto start2;}
    else{return 0;}
}
else if(opp==2){
    cout<<"Substraction Result is : "<<endl;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            res[i][j] = m1[i][j] - m2[i][j];
            cout<<"\t"<<res[i][j];
        }
        cout<<endl;
    }
    cout<<"Do you want to try again? y or n?"<<endl;
    cin>>a;
    if(a=='y' || a=='Y'){goto start2;}
    else{return 0;}
}
else if(opp==3){
    cout<<"Multiplication Result is : "<<endl;
    for(int i=0; i<r1; i++){
        for(int j=0; j<c2; j++){
            res[i][j] = 0;
            for(int k=0; k<c2; k++){
            res[i][j] = res[i][j] + m1[i][k] * m2[k][j];//brainfuck;
            }
            cout<<"\t"<<res[i][j];
        }
        cout<<endl;
    }
    cout<<"Do you want to try again? y or n?"<<endl;
    cin>>a;
    if(a=='y' || a=='Y'){goto start2;}
    else{return 0;}
}
else
{
    cout<<"Invalid input."<<endl;
    cout<<"Please, enter again."<<endl;
    goto start2;
}








return 0;
}

