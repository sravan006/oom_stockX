//
//  stockstatus.hpp
//  OOMproject.cpp
//
//  Created by depp  on 07/07/21.
//
#include<string>
using std::string;
#ifndef stockstatus_hpp
#define stockstatus_hpp

class stockstatus{
private:
    int base_stock_value;
    int current_stock_value;
public:
    int k;
    int a[6];
    string p[6];
    void setInt(int x);
    int getInt();
    void stockstatus1();
};

#endif /* stockstatus_hpp */
