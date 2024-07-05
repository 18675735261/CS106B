/*
 * File: main.cpp
 * --------------
 * Blank C++ project configured to use Stanford cslib and Qt
 */

#include "console.h"
#include "stack.h"
using namespace std;

int main()
{
    Stack<int> s;
    s.push(123);
    s.push(-2);
    s.push(467);
    cout<<s.peek()<<endl;
    cout <<s.pop()<<endl;
    cout <<s.peek()<<endl;
    cout <<s.pop()<<endl;
    cout <<s.peek()<<endl;
    return 0;
}
