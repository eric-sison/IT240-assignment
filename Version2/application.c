
#include <stdio.h>
#include "stack.h"
extern static int top;

void application()
{
   push( 'x' );
   push( 'y' );
   push( 'z' );

   top = 2;
   char ans = pop();
   printf( "popped: %c\n", ans );
}

int main()
{
   application();
   return 0;
}
