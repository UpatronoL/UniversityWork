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

double point_r(struct point p)
{
    return sqrt(pow(p.x, 2) + pow(p.y, 2));
}

struct point point_printXY(struct point p)
{
    printf("%f %f", point_x(p), point_y(p));
    return p;
}

int main(int argc, char **argv)
{
    struct point p = point_newXY(3, 4);

    point_printXY(p);
    putchar('\n');

    printf("%f\n", point_r(p));

    return 0;
}


