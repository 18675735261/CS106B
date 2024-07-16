#include "list.h"
int main(){
    List* node1=new List();
    node1->date=42;
    //“->”表示一个pointer去访问那个变量，就跟xx.date一样
    //node1->42
    node1->next=new List();
    //node1->42->[];
    node1->next->date=12;
     //node1->42->[12];
    node1->next->next=NULL;
     //node1->42->[12]->/
}
