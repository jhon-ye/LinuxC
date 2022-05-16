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

void revert(void)
{

}