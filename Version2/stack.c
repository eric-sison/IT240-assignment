
#include <stdio.h>
#include "stack.h"

static char Store[MAX];
int top = 0;

void push(char x)
{
   if (top < MAX)
      Store[top++] = x;
   else
      printf("full\n");
}

char pop()
{
   if (top > 0)
      return Store[--top];
   else
      printf("empty\n");
   return 0; /* makes sure something is returned regardless */
}

