
#include <stdio.h>
#include "stack.h"
#include <stdlib.h> // Added for rand()

void application()
{
    push(0, 'x');
    push(1, 'y');
    push(1, 'z');
    push(0, 'a');

    // Introduce an arbitrary index for demonstration
    int arbitraryIndex = rand() % 10; // Generate a random integer between 0 and 9

    char ans = pop(arbitraryIndex); // Attempt to pop from a potentially invalid stack
    printf("popped: %c\n", ans);

    printf("popped: %c\n", pop(0));
}

int main()
{
    application();
    return 0;
}
