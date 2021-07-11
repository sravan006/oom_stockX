//
//  login.cpp
//  OOMproject.cpp
//
//  Created by depp  on 30/06/21.
//

#include "login.hpp"
#include<iomanip>
#include<iostream>
#include<string>
#include"menu.hpp"
 
using namespace std;
string name;
string userid;
long int mobile_no;
int age;
long long int bank_account_no;

void login::signup() {
        cout<<"Name: ";
        cin>>Name;
        setName(Name);
        name=Name;
        cout<<"Mobile_no: ";
        cin>>fixed>>setw(10)>>mobile_no;
        cout<<"Age: ";
        cin>>age;
        cout<<"Bank_account_no:  ";
        cin>>bank_account_no;
        cout<<"Userid: ";
        cin>>userid;
        cout << "we are signing you up "<< getName()<<" 😊"<<endl;
    menu oobb;
    oobb.mainmenu();
    }

    void login::loginpage(){
        cout<<"Welcome To STOCKX 😎"<<endl;
        cout<<"1. Login"<<endl;
        cout<<"2. exit console"<<endl;
        string a1;
            cout<<"enter a for login and b to exit console"<<endl;
            cin>>a1;
        if(a1 == "1")
            loging();
        else if (a1=="2")
            cout<<"thanks for the trade ....."<<endl;
        else{
            cout<<"give appropriate input"<<endl;
            loginpage();}
    }
void login::loginpage1(){
    cout<<"Welcome To STOCKX 😎"<<endl;
    cout<<"1.Signup ########"<<endl;
    cout<<"2.exit console"<<endl;
    string v;
    cin>>v;
    if(v=="1")
    signup();
    else if(v=="2")
        cout<<"thanks for the trade ....."<<endl;
    else
    {
        cout<<"give appropriate input"<<endl;
        loginpage();
        
    }
}
void login::loging(){
    cout<<"Userid: ";
    string l;
    
    cin>>l;
    if (l == userid){
    cout << "we are logging you in "<< name<<" 😊"<<endl;
        menu o;
        o.mainmenu();
    }
    else{
        cout<<"enter appropriate user id"<<endl;
        loging();
    }
}
login::login(){
    Name=name;
    Mobile_no=mobile_no;
    Age=age;
    Userid=userid;
    Bank_account_no=bank_account_no;
}
    

