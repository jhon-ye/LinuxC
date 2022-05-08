

/**
 * 1.全局变量、局部变量
 * 2、
 * 
 * @brief 
 * 
 */

#include <stdio.h>
#include <stdlib.h>

#if 0
func() 
{
    // 局部变量
    //auto int x = 0;
    static int x;
    x++;
    printf("%d\n", x);
    printf("%p->%d\n", &x, x);
}
#endif



// 变量的作用范围
int i = 100;
void func() {
    int i = 2;
    //printf("%d\n", i);
    {
        int i = 10;
        printf("%d\n", i);
    }
    func_a(i);
}

void func_a(int i) {
     printf("%d\n", i);
}


// 全局变量的影响
int i = 0;
void print_star(void)
{
    for (int i = 0; i < 5; i++)
        printf("*");
    printf("\n");  
    printf("%s", __FUNCTION__);
}



int main(int argc, char const *argv[])
{
    /* code */
    //auto int i = 0;
    //func();

    for (int i = 0; i < 5; i++)
    {
       print_star();
       printf("%s", __FUNCTION__);
    }
    return 0;
}


