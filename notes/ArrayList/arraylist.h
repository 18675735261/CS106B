#ifndef ARRAYLIST_H
#define ARRAYLIST_H

#include "ArrayList_global.h"
#include <iostream>

class ARRAYLIST_EXPORT ArrayList
{
public:
    ArrayList();//constructor
    ~ArrayList();//destructor
    void add(int value);
    void clear();
    int get(int index)const;
    void insert(int index,int value);
    bool isEmpty()const;
    void remove(int indexl);
    void set(int index,int value);
    int size()const;
    void debug()const;
private:
    int* myElements;
    int mySize;
    int myCapacity;
    void checkResize();
};



#endif // ARRAYLIST_H
