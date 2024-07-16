 /*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
 using namespace std;

 void queensHelper(int a[8][8],int column);
 void solveQueens(int a[8][8]);
int main()
{
    int a[8][8];
    solveQueens(a);
    return 0;
}
void solveQueens(int a[8][8]){
    queensHelper(a,0);
}
void queensHelper(int a[8][8],int column){
    if(column==8){
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                cout<<a[i][j]<<" ";
                if(j==7){
                    cout << endl;
                }
            }
        }
    }else{
        for(int row=0;row<8;row++){
            if(a[row][column]==NULL){
                //choose
                a[row][column]=1;
                //explore
                queensHelper(a,column+1);
                //unchoose
                a[row][column]=NULL;
            }
        }
    }
}
