
#include <stdio.h>
#include "stack.h"

#define MAX 100
char Store[5][MAX];
int top[5] = {0,0,0,0,0};

void push(int stacknum, char x)
{
   if (top[stacknum] < MAX)
      Store[stacknum][top[stacknum]++] = x;
   else
      printf("full\n");
}

char pop(int stacknum)
{
   if (top[stacknum] > 0)
      return Store[stacknum][--top[stacknum]];
   else
      printf("empty\n");
   return 0; /* makes sure something is returned regardless */
}

