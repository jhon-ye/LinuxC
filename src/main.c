#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 *
 *  数据类型：
 *   基本类型：
 * 		数值类型：整型：短整型 short 、整型 int 、长整型 long
 *              符点型：单精度型 float 、双精度型 double
 * 
 *      字符类型： char
 * 
 *   构造类型：数组、结构体 struct 、共用体 union、 枚举类型 eunm
 *   指针类型：
 * 	 空类型：void
 * 
 *   signed   int     32bit     -2147483648 ~ 2147483647
 *   signed  short    16bit     -32768 ~ 32767
 *   signed  long     32bit     -2147483648 ~ 2147483647
 * 
 *   unsigned int     32bit     0 ~ 4294967295
 *   unsigned short   16bit     0 ~ 65535
 *   unsigned long    32bit     0 ~ 4294967295
 *   
 *   float            32bit     3.4e-38 ~ 3.4e38
 *   double           64bit     
 *   char             8bit     -128 ~ 127
 *   unsigned  char   8bit     0 ~ 255
 * 	 
 *  254 -> 1111 1110
 * 
 *  float 存储方式
 *  3.14 -> 0.314 * 10^1
 *  32bit 存储
 *  0~22   存储精度部分
 *  23～31 存储指数部分
 *  32     存储符好位
 * 
 * 
 * 
 * 常量 变量
 *  常量：
 * 	整型常量
 *  实型常量
 * 	字符常量：
 * 			单引号引起来的单个字符：  'a'
 *          转义字符： 8进制数 '\015'  16进制数 '\x7f'
 *  字符串常量：双引号引起来的一个或多个字符组成的序列 如：“a”
 *  标识常量：define 标识的常量
 * 
 * 
 *  变量 
 *  
 * 数据类型
 * 存储类型：auto static register extern
 * 	auto: 默认存储类型，存储空间自动分配，自动回收，分配在栈空间
 * 	register: 寄存器类型，如 register int i = 1 ; 当变量需要被频繁使用。最终是否被放到寄存器中，由gcc 来决定。
 * 			  需要满足的条件：大小限制，只能定义32bit大小的数据类型
 * 							寄存器没有地址，所以一个寄存器类型的变量无法打印地址查看或使用
 * 
 *  static: 静态型， 自动初始化为0值或 NULL 值；其变量的值具有继承型; 常用于修饰变量或函数
 *  extern: 说明型， 不能改变被说明的变量的值或类型
 *  
 *  
 * 
 * @return int 
 */

// define 不会对常量进行检查
#define PI 3.14

#include "minipro/static.h"
#include "io/test.h"
#include "array/array.h"

// 修饰全局变量
static int i = 100;

int main()
{

	// int a, b, c;
	// a + PI;
	// b * PI;

	printf("Hello World!\n");

	// int i = 5, j = 3;
	// printf("%d\n", define(i, j));

    // // 经典问题
	// printf("%d\n", define(i++, j++));

	//func_c();

	// 使用被 static 修饰的函数
	//call_func_d();

	//	call_area();
	// call_root();


	// array.h
	//test();

	//fibonacci();

	//buddle_sort();

	//selection_sort();

	//base_converter();
	prime_num();
	return (0);
}

#if 0
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MAX(a, b) \
			({int A = a, B = b; ((A) > (B) ? (A) : (B));})

#define MAX(a, b) \
({typeof(a) A = a, B = b; ((A) > (B) ? (A) : (B));})


int define(int a , int b) {
	return MAX(a, b);
}
#endif