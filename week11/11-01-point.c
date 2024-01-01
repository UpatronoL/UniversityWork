#include <stdio.h>

/* define struct point here */
struct point
{
    double x, y;
};
/* define point_newXY() here */
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

// void point_printXY(struct point p)
// {
//     printf("%f %f", point_x(p), point_y(p));
// }

int main(int argc, char **argv)
{
    struct point p = point_newXY(3.0, 4.0);

    point_printXY(p);
    putchar('\n');

    return 0;
}
