//
//  longestPalindrome.c
//
//  5. 最长回文子串
//
//  Created by xiaodong on 2021/1/17.
//

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

bool islongest(char *s, int start, int end)
{
    if(end - start < 1) {
        return false;
    }

    while (start < end) {
        if(s[++start] != s[--end])
            return false;
    }

    return true;
}

//暴力解法
char * longestPalindrome(char * s)
{
    //
    unsigned long length;
    int max_long[2] = {0};
    char *longest = NULL;
    int i, j;

    if (s == NULL)
        return NULL;

    length = strlen(s);  //获取s的字符串长度

    if (length < 2)
        return s;

    for (i = 0; i < length; i++) {
        /* code */
        for (j = i + 1; j < length; j++) {
            //size大小为 j - i,  判断s[i:j]是不是回文子串
            if (islongest(s, i, j) && ((max_long[1] - max_long[0]) <= j - i)) {
                max_long[0] = i;
                max_long[1] = j;
            }
        }
    }
    longest = (char *)malloc(sizeof(char)*(max_long[1] - max_long[0] + 2));
    for (i = max_long[0]; i <= max_long[1]; i++) {
        longest[i - max_long[0]] = s[i];
    }
    longest[i] = '\0';
    return longest;
}

int main() {
    char *s = "abcdefgfedcbaee";
    char *b = NULL;

    b = longestPalindrome(s);
    printf("%s\n", b);
    return 0;
}
