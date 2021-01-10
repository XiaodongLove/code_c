#include <stdio.h>

int main() {
    int arr[] = {99, 15, 100, 888, 252};
    int *p = arr;

    int len_a = sizeof(arr) / sizeof(int);
    int len_p = sizeof(p) / sizeof(int);
    int len_i = sizeof(int);

    printf("len_a = %d, len_p = %d, len_i = %d\n", len_a, len_p, len_i);
}