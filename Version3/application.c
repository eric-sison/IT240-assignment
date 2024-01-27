#include <stdio.h>
#include "stack.h"

void application()
{
    struct stack s0;
    struct stack s1;
    initstack(&s0);
    initstack(&s1);

    push(&s0, 'x');
    push(&s1, 'y');
    push(&s1, 'z');
    push(&s0, 'a');

    // Accessing and modifying internal data directly
    printf("Internal data of s0:\n");
    for (int i = 0; i < s0.top; i++) {
        printf("%c ", s0.Store[i]);
    }
    printf("\n");

    s0.Store[0] = 'm';  // Changing a value directly

    char ans = pop(&s1);
    printf("popped: %c\n", ans);
    printf("popped: %c\n", pop(&s0));
}

int main()
{
    application();
    return 0;
}
