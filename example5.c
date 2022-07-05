#include <stdio.h>
#include <stdlib.h>

typedef struct Point
{
    double x;
    double y;
} Point;

// Forward Function Declaration
void Point_print(const Point *self);

int main()
{
    Point aPoint = {4.0, 8.0};
    Point_print(&aPoint); // (4.000000, 8.000000)
}

void Point_print(const Point *self)
{
    printf("(%f, %f)\n", (*self).x, (*self).y);
}