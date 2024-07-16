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
    int* a=new int[3];//这个初始化这个数组是随机数
    int* b=new int[4]();//这个初始化这个数组为0
    //定义一个一维数组
    delete[] a;//当你用完这个数组的时候，你需要将这个数组释放，来清空内存
    return 0;
}
