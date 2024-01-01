#include <stdio.h>
#include <math.h>

/* define struct point, point_newXY(), point_[xyr](), point_printXY() here */
struct point
{
    double x, y;
};

struct point point_newXY(double x, double y)
{
    struct point newPoint;
    newPoint.x = x;
    newPoint.y = y;
    return newPoint;
};

double point_x(struct point p)
{
    return p.x;
}

double point_y(struct point p)
{
    return p.y;
}

struct point point_printXY(struct point p)
{
    printf("%f %f", point_x(p), point_y(p));
    return p;
}

struct point point_newRA(double r, double a)
{
    a = (a/360) * 2 * M_PI;
    return point_newXY(r * cos(a), r * sin(a));
}

int main(int argc, char **argv)
{
    struct point p = point_newRA(5, 53.13);
    point_printXY(p);
    putchar('\n');
    return 0;
}
