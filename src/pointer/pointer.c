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
 * *p = *(&i)
 * 
 */

#include<stdio.h>
#include<stdlib.h>
#include "pointer.h"

void point_test(void)
{
    int i = 1;
    int *p = &i;
    int **q = &p;

}

