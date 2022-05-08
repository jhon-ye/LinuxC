
#include <stdio.h>
#include <stdlib.h>

#define LEN 3

int main(int argc, char const *argv[])
{
    
    int i;
    float f;
    printf("please enter:\n");
    scanf("%d%f", &i, &f);
    printf("i = %d", i);



    char ch, str[LEN];

    // scanf("%d", &i);
    // ch = getchar();
    // // 此时程序终止，ch 打印为输入i 后的 换行符的 ascii值
    // printf("i = %d\n, ch = %c", i, ch);

    // 可以通过 抑制符 解决
    scanf("%d", &i);
    scanf("%*%c", &ch);
    printf("i = %d\n, ch = %c", i, ch);


#if 0
    int ret;
    while (1)
    {
        ret = scanf("%s", str);
        if (ret != 1) 
        {
            printf("enter error \n");
            break;
        }
        printf("str = %s", str);
    }

#endif    
    


    return 0;
}
