
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 * 运算符 
 * 1. 运算符所需要参与运算的操作数个数
 * 2、结合性
 * 3、优先级
 * 4、运算符的特殊用法
 * 5、位运算的重要意义
 * 
 * 
 * 算术运算符： + - * / % ++ --
 *     ++ -- 原则：运算符在前，先进行计算，再取变量值使用
 *                变量在前， 先取值使用，再进行计算
 *  
 *
 * 关系运算符： < <= == > >= !=
 * 逻辑运算符： ! && ||
 *   逻辑运算符的短路特性： 
 * 位运算符：  << >> ~ | ^ &
 * 赋值运算符： =
 * 条件运算符： ？=
 * 逗号运算符： ,
 * 指针运算符： * &
 * 求字节数： sizeof
 *  
 * 强制类型转换：
 * 分量运算符： . -> 
 * 下标运算符： []
 * 其他： 
 * 
 * 位运算
 * 
 * 将操作数中的第 n 个位置置1， 其他位不变：  num = num | 1 << n
 * 将操作数中的第 n 个位置置0， 其他位不变：  num = num & ~(1 << n)
 * 测试第 n 位： if ( num | 1 << n)
 * 从一个指定宽度的数中取出其中的几位：
 *
 */

int main(int argc, char const *argv[])
{
    /* code */
    int a = 1, b = 2, c = 3, d = 4;
    int m = 1, n = 1;

    // 逻辑运算符的短路特性
    (m = (a > b)) && (n = (c > d));
    printf("m = %d\n n = %d", m, n);
    // 结果：m = 0 n = 1; 与运算当 m = (a > b）为 假时，不会再计算 (n = (c > d))
    return 0;
}

