
#include <stdio.h>
#define MAX 100

char Store[MAX];
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
   return 0; /* make sure something is returned regardless */
}

void application()
{
   push( 'x' );
   push( 'y' );
   push( 'z' );
   char ans = pop();
   printf( "popped: %c\n", ans );
}

int main()
{
   application();
   return 0;
}
