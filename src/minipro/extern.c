

#include <stdio.h>
#include <stdlib.h>

#include "static.h"
// 引用外部全局变量, 但 不可改变 值和值的类型
extern int i;

void func_e(void)
{
    printf("[%s]:%d", __FUNCTION__, i);
}