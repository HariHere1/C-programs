#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 100 // Maximum length of the string

int main(void) {
    char a[MAX_LENGTH];
    setbuf(stdout, NULL);

    printf("Enter a string: ");
    scanf("%s", a);

    printf("String you have entered: %s\n", a);

    return EXIT_SUCCESS;
}
