
#include <stdio.h>

int main() {
    int c;

    // Read a character
    c = getchar();
    printf("Read character: %c\n", c);

    // Push the character back onto the input stream
    ungetc(c, stdin);

    // Read the character again to demonstrate it was pushed back
    c = getchar();
    printf("Read character again: %c\n", c);

    return 0;
}
