/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

void  printBinary(int a);
int main()
{
    printBinary(-6);
    return 0;
}
void  printBinary(int a){
    /*cout<<a%2;
    if(a==0||a==1){
    }else{
        return printBinary(a/2);
    }*/
    if(a<0){
        cout<<"-";
        printBinary(-a);
    }
    else if(a<2){
        cout<<a;
    }else{
        int lastDigit=a%2;
        int restofDigits=a/2;
        printBinary(restofDigits);
        cout<<lastDigit;
    }
}
void reverseLines(ifstream& input){
    string line;
    if(getline(input,line)){
        reverseLines(input);
        cout<<line<<endl;
    }else{

    }
}
