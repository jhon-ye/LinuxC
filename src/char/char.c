
/**
 * @file char.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-16
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * string.h 函数
 * 1.strcpy  strncpy
 * 2.strcat strncat
 * 3.strcmp strncmp
 * 4. strlen sizeof
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "char.h"

#define STR_LEN 32
void char_func(void)
{
    char str[STR_LEN] = "hello";
    printf("strlen=%lu\n", strlen(str));
    printf("sizeof=%lu\n", sizeof(str));

    strcpy(str, "abcde");
    strncpy(str, "abcdef", STR_LEN);
    puts(str);

    strcat(str, "kkkk");
    puts(str);

    strncat(str, "aaaaaa", STR_LEN);
    puts(str);

    char str_1[STR_LEN] = "world";
    printf("strcmp=%d\n", strcmp(str, str_1));
    char str_2[STR_LEN] = "abcdefkkkkaaaaaa";
    printf("strcmp=%d\n", strcmp(str, str_2));

    char str_3[STR_LEN] = "abcd";
    printf("strncmp=%d\n", strncmp(str, str_2, strlen(str_3)));
}