#include <stdio.h>
#include <header.h>
#include <math.h>

float OriginDistance(int x, int y)
{
    float dist = 0;
    dist = sqrt(x*x + y*y);
    return dist;
}