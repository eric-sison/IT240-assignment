#include <cstdio>
#include "stack.h"
using namespace std;

stack::stack() {
	top = 0;
}

void stack::push(char x) {
    if (top < MAX) {
        Store[top++] = x;
    }
    else {
        printf("full\n");
    }
}

char stack::pop() {
    if (top > 0) {
        return Store[--top];
    } else {
        printf("empty\n");
        return 0; // makes sure something is returned regardless
    }
}