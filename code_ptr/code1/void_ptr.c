#include <stdio.h>
#include <stdlib.h>

int main() {
    char *str = (char *) malloc(sizeof(char) * 30);
    gets(str);
    printf("%s\n", str);
    return 0;
}