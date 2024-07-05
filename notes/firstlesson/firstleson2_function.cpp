#include <iostream>
#include <cmath>//数学库
using namespace std;
void makefun();
int max(int a,int b);//因为cpp是从上到下进行编译；所以function要事先声明
void grow(int c);
void grow2(int& a);
void swap(int& a,int& b);
void dating (int age,int& a,int& b);
int main(){
    //介绍function也就是java中的方法
    int a;
    int b;
    cin >>a;
    cin >>b;
    cout <<"the max number is "<<max(a,b)<<endl;
    int bigger1=max(12,13);
    cout <<bigger1<<endl;
    makefun();
    int c=100;
    grow(c);
    cout <<c<<endl;
    int d=100;
    grow2(d);
    cout <<d<<endl;
    int e=1;
    int r=2;
    swap(e,r);
    cout <<"the e is "<< e<<" and the r is "<<r<<endl;
    int older;
    int younger;
    dating(18,older,younger);
    cout <<older<<" "<<younger<<endl;
    return 0;
}
int max(int a,int b){//这段代码实际上是min
    if(a>b){
        return b;
    }
    else return a;
}
void makefun(){
    string a;
    cin >>a;
    cout <<a<<endl;
}
void grow (int a){//他和java中的传参一样，只是传一个copy，不改变原来的值
    a++;
}
void grow2(int& a){//如果前面加了一个&，那传入的就是一个变量，他会改变
    a++;
}
void swap(int& a,int& b){
    int temp =a;
    a=b;
    b=temp;
}
void dating (int age,int& a,int& b){//这样子的话就可以一次性传出两个参数
    a=age+1;
    b=age-1;
}