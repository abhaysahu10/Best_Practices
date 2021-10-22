#include <header.h>
#include <stdio.h>

int SetBit(int number, int KthBit)
{
    return (number | (1<< (KthBit-1)));
}