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

