#include <iostream>
#include "stack.h"
using namespace std;

// constructor: initialize top
stack::stack()
{
    top = 0;
}

// push method: add element to array, increment top
// print "full" if top == MAX
void stack::push(char x)
{
    if (top < MAX)
    {
        Store[top++] = x;
    }
    else
    {
        cout << "full" << endl;
    }
}

// pop method: decrement top, then retrieve element
// print "empty" if top == 0
char stack::pop()
{
    if (top > 0)
    {
        return Store[--top];
    }
    else
    {
        cout << "empty" << endl;
        return 0; // makes sure something is returned regardless
    }
}
