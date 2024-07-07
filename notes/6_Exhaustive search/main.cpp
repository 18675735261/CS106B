/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include "vector.h"
#include "vector"
using namespace std;

void diceHelper(int dice,vector<int>& chosen);
void printBainary(int digits,string prefix="");
void diceRoll(int dice);
int main()
{
    printBainary(3);
    return 0;
}
void printBainary(int digits,string prefix){
    cout<<"printbanary("<<digits<<" "<<prefix<<")"<<endl;
    if(digits==0){
        cout<<prefix<<endl;
    }else{
        for(int i=0;i<=1;i++){
            printBainary(digits-1,prefix+to_string(i));
        }
        //printBainary(digits-1,prefix+"0");
        //printBainary(digits-1,prefix+"1");
    }
}
void diceHelper(int dice,Vector<int>& chosen){
    if(dice==0){
        cout<< chosen<<endl;
    }else{
        for(int i=0;i<6;i++){
            chosen.add(i);
            diceHelper(dice-1,chosen);
            chosen.remove(chosen.size()-1);

        }
    }
}
void diceRoll(int dice){
    Vector<int> chosen;
    diceHelper(dice,chosen);
}











