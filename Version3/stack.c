
#include <stdio.h>
#include "stack.h"

void push(struct stack *s, char x)
{
   if (s->top < MAX)
      s->Store[(s->top)++] = x;
   else
      printf("full\n");
}

char pop(struct stack *s)
{
   if (s->top > 0)
      return s->Store[--(s->top)];
   else
      printf("empty\n");
   return 0; /* makes sure something is returned regardless */
}

void initstack(struct stack *s)
{
     s->top = 0;
}
