#include <stdio.h>
#include <header.h>

int CheckQuardant(int x, int y)
{
    if (x==0 && y==0)
    {
        return 0;       // 0 represent point is at origin
    }
    else if (x>0 && y>0)
    {
        return 1;
    }
    else if (x==0 && y>0)
    {
        return 12;      // 12 represent point is ntw quardant 1 and 2
    }
    else if (x<0 && y>0)
    {
        return 2;
    }
    else if (x<0 && y==0)
    {
        return 23;
    }
    else if (x<0 && y<0)
    {
        return 3;
    }
    else if (x==0 && y<0)
    {
        return 34;
    }
    else if (x>0 && y<0)
    {
        return 4;
    }
    else if (x>0 && y==0)
    {
        return 41;
    }

}