/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;
int power(int base,int exp);
void printStars(int n);
bool isPalindrome(string s);
int main()
{
    printStars(1 );
    cout<<power(2,1)<<endl;
    cout<<isPalindrome("mame")<<endl;
    return 0;
}
void printStars(int n){
    /*if (n==0){
        return;
        //base case
    }

    else {
        cout <<"*"<<endl;
        return printStars(n-1);
    }*/

    if(n>0){
        cout <<"*"<<endl;
        return printStars(n-1);
    }
}
int power(int base,int exp){
    if(exp<0){
        throw "exp can't be negetive";
        throw exp;
    }
    if(exp==0){
        return 1;
    }
    /*if(exp==1){
        return base;
    }*/
    else{
        return base*power(base,exp-1);//awsome
    }
}
bool isPalindrome(string s){//检查是否是回文
    if(s.length()<=1){
        return true;
    }
    char first =s[0];
    char last=s[s.length()-1];
    if(first==last){
        string rest =s.substr(1,s.length()-2);
        return isPalindrome(rest);
    }else return false;

}
