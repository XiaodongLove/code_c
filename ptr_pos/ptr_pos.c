
#include <stdio.h>

int main() {
    int urn[5] = {100, 200, 300, 400, 500};
    int *ptr1, *ptr2, *ptr3;

    //取址、赋值
    ptr1 = urn;             //把一个地址赋值给指针
    ptr2 = &urn[2];         //把一个地址赋值给指针

    printf("pointer value, dereferenced pointer, pointer address:\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    ptr1++;         //递增指针
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p\n", ptr1, *ptr1, &ptr1);

    ptr2--;         //递增指针
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p\n", ptr2, *ptr2, &ptr2);

    --ptr1;
    ++ptr2;

    printf("ptr1 = %p, ptr2 = %p, ptr1_size = %ld, ptr2_size = %ld\n", ptr1, ptr2, sizeof(ptr1), sizeof(ptr2));
    printf("ptr1 - ptr2 = %td\n", ptr1 - ptr2);

    printf("ptr1 + 1 = %p, ptr2 - 1 = %p\n", ptr1 + 1, ptr2 +1);

    printf("hello world!");
    return 0;
}
