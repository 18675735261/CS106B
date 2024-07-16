#ifndef LIST_H
#define LIST_H

#include "List_global.h"

struct List{
    //struct 和class的区别之一就是struct中的变量默认是public
    //struct可以看作是一种小型的class
    //只是定义一些变量和不太复杂的方法
    int date;
    List* next;
    List(int d=0,List*n=NULL){
        date=d;
        next=n;
    }
};
// class name
// {
// public:
//     name() {}
// };

#endif // LIST_H
