/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
#include "vector.h"
using namespace std;

void diceSum(int dice,int desiredSum);
void diceSumHelper(int dice,int desiredSum,Vector<int>& chosen,int sumSoFar);
void permuteHelper(string s,string chosen);
void permute (string s);
int main()
{
    string name = getLine("What is your name?");
    cout << "Hello, " << name << endl;
    return 0;
}
void diceSum(int dice,int desiredSum){
    Vector<int>chosen;
    diceSumHelper(dice,desiredSum,chosen,0);
}
void diceSumHelper(int dice,int desiredSum,Vector<int>& chosen,int sumSoFar){
    if(dice==0){
        cout<<chosen<<endl;
    }else{
        for(int i=1;i<=6;i++){
            if(sumSoFar+i+1*(dice-1)<=desiredSum&&
                sumSoFar+i+6*(dice-1)>=desiredSum ){
                chosen.add(i);
                diceSumHelper(dice-1,desiredSum,chosen,sumSoFar+i);
                chosen.remove(chosen.size()-1);
            }
        }
    }
}
void permuteHelper(string s,string chosen){
    if(s.empty()){
        cout<<chosen<<endl;

    }else{
        for(int i=0;i<s.length();i++){
            char c=s[i];
            chosen+=c;
            s.erase(i,1);
            permuteHelper(s,chosen);
            s.insert(i,1,c);
            chosen.erase(chosen.length()-1,1);

        }
    }
}
void permute (string s){
    permuteHelper(s,"");
}









