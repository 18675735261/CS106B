/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "simpio.h"
using namespace std;


int main()
{
    //binary search
    //如果一个序列按顺序排列，你就可以一开始从中间开始找，然后比较你要找的数，然后只找一边
    return 0;
}
int binarySearch(vector<int>& v,int value,int start ,int end){
    int mid =(end-start)/2;

    if(v[mid]==value){
        return mid;
    }else if(value<v[mid]){
        end=mid-1;
        binarySearch(v,value,start,end);
    }else{
        start=mid+1 ;
        binarySearch(v,value,start,end);
    }
    return -1;
}
