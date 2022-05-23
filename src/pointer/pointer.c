/**
 * @file pointer.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-17
 * 
 * @copyright Copyright (c) 2022
 * 
 * 1. 变量与地址
 * 2. 指针与指针变量
 * 3. 直接访问  间接访问
 * 4. 空指针  野指针
 * 5. 空类型
 * 6. 指针定义 初始化
 * 7. 指针运算
 * 8. 指针与运算
 *      指针 一位数组
 *      指针 二维数组
 *      指针 字符数组
 * 9. const 与 指针
 * 10. 指针数组 数组指针
 * 11. 多级指针
 *    0x4000     0x3000       0x2000
 * ----------   ----------    ----------   
 * | 0x3000 |   |0x2000  |    |   1   |
 * ----------   ----------    ----------  
 *    q             p             i         
 * 
 * i = 1;
 * p  = &i = 0x2000
 * *p = *(&i) = 1
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "pointer.h"

static void point_test(void)
{
    int i = 1;
    int *p = &i;
    int **q = &p;

    int *a = NULL;
    // 野指针
    int *b;


    //编程习惯
    int *c = NULL;
    // 空指针
    void *d = NULL;
    exit(0);
}

void point_arr(void)
{
    int a[3] = {1,2,3};
    int *p = a;

    for (unsigned long i = 0; i < sizeof(a)/sizeof(a[0]); i++)
    {
        printf("%p --- > %d\n", a+i, a[i]);
        printf("%p --- > %d\n", p+i, *(p+i));
    }
    printf("\n");
    exit(0);
}


/**
 * @brief 
 * 
 * int [2][3] = {1,2,3,4,5,6}
 * int[i][j] = *(*(a+i) + j)
 */
void point_arr2(void)
{
    int a[2][3] = {1,2,3,4,5,6};
    int i,j;
    int *p = &a[0][0];

#if 0
    //int *q[3] -> int[3] *q = a;
    int *q[3] = a;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%p-----> %d\n", *(q+i) + j, *(*(q+i)+ j));
        }
        printf("\n");
    }
#endif

#if 0
    for (int i = 0; i < 6; i++, p++)
    {
       printf("%p---->%d\n", p, *p);
    }
    printf("\n");
    
#endif

#if 0
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
           printf("%p-----> %d\n", *(a+i) + j, *(*(a+i) + j));
        }
        printf("\n");
    }
 #endif   
    exit(0);
}

void point_char(void)
{


#if 0
// 段错误，str 指针指向一个 字符串常
//  char str[6] = {'h','e','l','l','o'};
//  char *p_str = &str[0];

    char *str = "hello";
    printf("%d  %d", sizeof(str), strlen(str));
    str = "world"; 
    //strcpy(str, "world"); 此语句是错误的， str代表的是一个指针，不能使用字符数组赋值既不能直接将字符串常量赋值给一个指针

#endif

    // 此时 str 是一个 已分配好的 内存空间
    char str[] = "hello";

    // 不可以直接赋值
    //str = "world"; 此时 str 代表一个字符数组指针，不能将一个字符串常量直接赋值给一个指针
    printf("%d  %d", sizeof(str), strlen(str));
    strcpy(str, "world");
    puts(str);
}

