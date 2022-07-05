#include <stdio.h>
#include <stdlib.h>

struct Point
{
    double x;
    double y;
};

// Forward Function Declaration
void Point_print(const struct Point *self);

int main()
{
    struct Point aPoint = {4.0, 8.0};
    Point_print(&aPoint); // (4.000000, 8.000000)
}

void Point_print(const struct Point *self)
{
    printf("(%f, %f)\n", (*self).x, (*self).y);
}