/**
 * @file array.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-15
 * 
 * @copyright Copyright (c) 2022
 * 
 * 
 * 1、 一维数组
 *  1> 定义
 *      【存储类型】 数据类型  标识符[下标] 
 *  2> 初始化
 *  3> 元素引用
 *  4> 数组名
 *      数组名是表示地址的常量， 也是表示数组的起始位置
 *  5> 数组越界
 *    此表达式成立原因， 值是通过数组名指针偏移一个int 值得到的地址中存放的值
      arr[3] = 10;
      arr[i] = *(a+i);
      printf("arr[3] = %d\n", arr[3]);
 * 
 * 
 * 练习：
 * 1. fabonacii数列
 * 2. 排序：
 *      冒泡、选择法、快排
 * 3. 求质数
 * 4. 进制转换
 * 
 */

#include <stdio.h>
#include <stdlib.h>
#include "array.h"

#define M 3


void test(void)
{
    // 初始化
    int arr[M] = {1, 2, 3};
    static int arr2[M];


    // 语法错误
    //arr = {4, 5, 6};
    for (size_t i = 0; i < M; i++)
    {
        printf("%p ---> %d\n", &arr[i], arr[i]);
    }
    exit(0);

    // 此表达式成立原因， 值是通过数组名指针偏移一个int 值得到的地址中存放的值
    //arr[3] = 10;
    // arr[i] = *(a+i);
    //printf("arr[3] = %d\n", arr[3]);
}

#define FIB 10

void fibonacci(void)
{
    int fib[FIB] = {1, 1};
    for (size_t i = 2; i < FIB; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    int i = 0;
    int j = sizeof(fib)/sizeof(fib[0]) - 1;
    
    int tmp;

    while (i < j)
    {
        tmp = fib[i];
        fib[i] = fib[j];
        fib[j] = tmp;
        i++;
        j--;
    }

    for (size_t i = 0; i < FIB; i++)
    {
       printf("%d  ", fib[i]);
    }
    printf("\n");
    return;
}

#define N 10
void buddle_sort(void)
{
    int a[N] = {12, 8, 19, 85, 22, 180, 90, 1, 95, 37};
    int tmp, i, j;

    for (int i = 0; i < N; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n"); 
    
    for (i = 0; i < N - 1; i++)
    {
        for (j = 0; j < N - i - 1; i++)
        {
            if (a[j] > a[j + 1])
            {
                tmp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = tmp;
            }
        }     
    }

    for (i = 0; i < N; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");  
       
}

/**
 * @brief 
 * int a[N] = {12,  8,  19,  85,  22,  180,  90,  1,  95,  37};
 *            a[i] a[j] ---> a[j]
 * 
 */

void selection_sort(void)
{
     int a[N] = {12, 8, 19, 85, 22, 180, 90, 1, 95, 37};

     printf("size = %lu\n", sizeof(a)/sizeof(a[0]));

    for (size_t i = 0; i < N; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");

    int tmp;
    for (int i = 0; i < N - 1; i++)
     {
         int k = i;
         for (int j = i + 1; j < N; j++)
         {
             if (a[k] > a[j])
             {
                 k = j;
             }
         }

         if (i != k) {
            tmp = a[i];
            a[i] = a[k];
            a[k] = tmp;  
         }
         
     }


    for (size_t i = 0; i < N; i++)
    {
       printf("%d ", a[i]);
    }
    printf("\n");  
     

}

void base_converter(void)
{
    int num, base;
    int a[128];

    printf("please input num\n");
    scanf("%d", &num);
    printf("please input base\n");
    scanf("%d", &base);

    int i = 0;
    do 
    {
        a[i] = num % base;
        num = num / base;
        i++;
    } while (num != 0);
    
   for (i -- ; i >= 0; i--)
   {
       if (a[i] >= 10)
        printf("%c", a[i] - 10 + 'A');
       else 
        printf("%d", a[i]);
   }
   printf("\n");

   


}



