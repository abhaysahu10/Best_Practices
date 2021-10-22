#include <header.h>
#include <stdio.h>

int ClearBit(int number, int KthBit)
{
    return (number & (~(1 << (KthBit-1))));
}