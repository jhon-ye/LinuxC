
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
    return;
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
    if ((a + b) <= c || (a + c) <= b || (b + c) <= a)
    {
        fprintf(stderr, "invalid input value\n");
        exit(0);
    }
    s = 1.0/2 * (a + b + c);
    area = sqrt(s * (s - a) * (s -b) * (s - c));
    printf("area = %f\n", area);
    return;

}

/**
 * @brief 
 * 求方程根
 * ax^2 + bx + c = 0 设：b^2 - 4ac > 0
 * x1 = (-b + sqrt(b^2 -4ac)) / 2a
 * x2 = (-b - sqrt(b^2 -4ac)) / 2a
 * 
 */
static void root(void)
{
    float a, b, c;
    float disc, p, q, x1, x2;
    printf("please input: ");
    scanf("%f%f%f", &a, &b, &c);
    if ((b*b - 4*a*c) <= 0)
    {
        fprintf(stderr, "invalid input value\n");
        exit(0);
    }
    disc = b * b - 4 * a * c;
    p = -b / 2*a;
    q = sqrt(disc)/2*a;
    x1 = p + q;
    x2 = p - q;
    printf("x1 = %f\n", x1);
    printf("x2 = %f\n", x2);
    return;
}

void call_root(void)
{
    root();
}

void call_area(void)
{
    area();
}

void call_water(void)
{
    water();
}

