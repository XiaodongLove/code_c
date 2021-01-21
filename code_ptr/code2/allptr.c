#include <stdio.h>

int main(int argc, char *argv[], char *env[])
{
    int a[3][5] = {0};
    int c;

    printf("Information for array：a[3][5]：\n");
    printf("a = 0x%08X, a + 1 = 0x%08X, sizeof(a) = %d\n", a, a + 1, sizeof(a));
    printf("&a = 0x%08X, &a + 1 = 0x%08X, sizeof(&a) = %d, sizeof(*&a) = %d\n",
               &a, &a + 1, sizeof(&a),sizeof(*&a));
    
    //int 是4字节的，地址是8字节的
    printf("int = %d, a[0][0] = %d\n", sizeof(int), sizeof(a[0][0]));
    printf("\n");

    //a[i]指向一个一维数组的首元素，a[i]+1指向该行第2个元素。sizeof(a[i])时不能看成首元素，而是这行整个一维数组
    for(c=0;c< 5;c++)
    {
        printf("a[%d] = 0x%08X, a[%d] + 1 = 0x%08X, sizeof(a[%d]) = %d,\n",
                c, a[c], c, a[c] + 1,c, sizeof(a[c]));
    }

    printf("\n");

    //对a[i]进行&取地址符时，a[i]不能看作这一行的首元素，而是整个一维数组。即&a[i]表示第i+1的整个数组
    //&a[i]+1表示下一行。
    for(c=0;c< 5;c++) {
        printf("&a[%d] = 0x%08X, &a[%d] + 1 = 0x%08X, sizeof(&a[%d]) = %d, sizeof(*&a[%d]) = %d\n",
               c, &a[c],c, &a[c] + 1,c, sizeof(&a[c]), c, sizeof(*&a[c]));
    }

    return 0;


}