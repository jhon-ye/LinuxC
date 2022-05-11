
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * @brief 
 * 
 * 计算 
 * 
 * @param argc 
 * @param argv 
 * @return int 
 */

#define WEIGHT 3.0e-23
#define QUART 950 

static void water(void)
{
    float num;
    float sum;
    scanf("%f", &num);
    sum = num * QUART / WEIGHT;
    printf("total is = %e", sum);
}

/**
 * @brief 
 *  求三角形面积
 *  s = 1/2 * (a + b + c);
 *  area = sqrt(s * (s - a) * (s -b) * (s - c));
 *
 * @param a 
 * @param b 
 * @param c 
 * @return float 
 */
static void area(void) 
{
    float a, b, c;
    float s, area;
    printf("please input: ");
    scanf("%f%f%f", &a, &b, &c);
    s = 1.0/2 * (a + b + c);
    area = sqrt(s * (s - a) * (s -b) * (s - c));
    printf("area = %f\n", area);

}

void call_area(void)
{
    area();
}

void call_water(void)
{
    water();
}

