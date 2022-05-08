

#include <stdio.h>
#include <stdlib.h>

#include "static.h"

static int i = 100;

void func_c()
{
    printf("[%s]:%d", __FUNCTION__, i);
    exit(0);
}

// static 修饰函数， func_d 只能在当前 c 文件中使用 
static void func_d(void) 
{
     printf("[%s]:%d", __FUNCTION__, i);
    exit(0);
}

void call_func_d(void) 
{
    func_d();
}