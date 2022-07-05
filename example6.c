#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
    double x;
    double y;
} Point;

int main()
{
    Point a = {0};
    Point b = a;
    Point *c = &a;
    (*c).x = 1.0;
    printf("%f %f %f \n", a.x, b.x, (*c).x);
}
