/**
 * @file two_dimension.c
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2022-05-15
 * 
 * @copyright Copyright (c) 2022
 * 
 * 1、定义 初始化
 *  【存储类型】 数据类型 标识符 【行下标】 【列下标】
 *   在内存中存储的方式是按行存储
 *      如2行3列数组在内存中存储的方式为 ：a[0][0] a[0][1] a[0][2] a[1][0] a[1][1] a[1][2]
 *   定义二维数组行号可省略
 * 2、练习
 *  行列互换
 *  求最大值所在位置
 *  求行或列和
 *  矩阵乘积
 * 
 * 
 */


#include <stdio.h>
#include <stdlib.h>

#include "array.h"

#define DIM_X 2
#define DIM_Y 3
void two_dim_test(void)
{
    int arr[DIM_X][DIM_Y] = {{1,2,3}, {10,20,30}};
    int arr2[DIM_X][DIM_Y] = {1,2,3,6,7};
}

#define M 2
#define N 3
void revert(void)
{
    int a[M][N] = {{1,2,3}, {4,5,6}}, b[N][M];
    for (int i = 0; i < M; i++)
    {
        for (int j = 0; j < N; j++)
        {
            printf("%d ", a[i][j]);
            b[j][i] =  a[i][j];
        }
        printf("\n");
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
    exit(0);
}

void max(void)
{
     int a[M][N] = {{1,2,3}, {4,5,6}};
     int max = a[0][0], row = 0, col = 0;

     for (int i = 0; i < M; i++)
     {
          for (int j = 0; j < N; j++)
          {
              if (max <= a[i][j])
              {
                  max = a[i][j];
                  row = i;
                  col = j;
              }
          }
     }
     printf("max:[%d][%d] = %d\n", row, col, a[row][col]);
}

#define X  5
#define Y  4
void sum(void)
{
     int a[X][Y] = {{1,2,3}, {4,5,6},{7,8,9},{10,11,12}};

    for (int i = 0; i < X - 1; i++)
    {
        for (int j = 0; j < Y - 1; j++)
        {
            a[X-1][Y-1] += a[i][j];
            a[X-1][j] += a[i][j];
            a[i][Y-1] += a[i][j];
        }
    }

    for (int i = 0; i < X; i++)
    {
        for (int j = 0; j < Y; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}

#define R 2
#define C 3
void mul(void)
{
    int a[R][C] = {{1,2,3}, {4,5,6}}, b[C][R] = {{7,8,9}, {10,11,12}};
    int mul[R][R] = {0};

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R; j++)
        {
            for (int k = 0; k < C; k++)
            {
                mul[i][j] += a[i][k] * b[k][j];
            }
            
        }
    }

    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < R; j++)
        {
            printf("%4d", mul[i][j]);
        }
        printf("\n");
    }
    exit(0);
}