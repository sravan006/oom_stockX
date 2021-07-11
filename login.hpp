//
//  login.hpp
//  OOMproject.cpp
//
//  Created by depp  on 30/06/21.
//
#ifndef login_hpp
#define login_hpp
#include<string>
using std::string;
class login{
private:
    string Name;
    string Userid;
    long int Mobile_no;
    int Age;
    long long int Bank_account_no;
public:
    void loging();
    void signup();
    void loginpage();
    void loginpage1();
    void setName(string e){
        this->Name=e;
    }
    string getName(){
        return Name;
    }
    login();
    string getUserid(){
        return  Userid;
    }

    long int printMobile_no(){
        return Mobile_no;
    }
 
    int printage(){
        return Age;
    }

    long long int printbank_account_no(){
        return Bank_account_no;
    }
   
protected:
   
    
    
};

#endif /* login_hpp */
