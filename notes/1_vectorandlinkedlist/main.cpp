/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */



#include "console.h"
#include "simpio.h"
#include "grid.h"
#include "vector.h"
#include "linkedlist.h"

using namespace std;

void bigger(int a,int b);
int main()
{
    Vector<string> hello;
    hello.add("stu");
    hello.insert(1,"why");
    cout <<hello<<endl;
    hello.remove(1);
    cout <<hello<<endl;
    Vector<string> v;
    v+="a","b","c","b","c";
    LinkedList<int>li;
    li+=1,2,3,1,4,5,1;
    //linkedlist就是列表，一个元素连接着另一个元素，
    //要找到某个元素就要先找到钱一个元素
    //他的vector不同点在于vector像一个可扩展的容器依次装着元素
    //而linkedlist就是一个元素连接着另一个元素
    //如果要找到某个index的元素，通过linkedlist的话你必须从第一个元素开始一直往后找
    //但如果用vector的话，你就可以直接通过那个index来找到那个元素
    //但如果要删除或插入某个元素在其中的话，linkedlist就可以直接断开元素间的链接然后重构新的连接
    //但是对于vector而言如果你要删除某个元素，你就要删除之后再吧后面的元素往前移，这样就会比链表慢

    cout<<v<<endl;
    bigger(2,4);
    return 0;
}
void bigger(int a,int b){
    if(a>b){
        cout<<a<<endl;
    } else cout<<b<<endl;
}
