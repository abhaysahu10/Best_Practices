#include <stdio.h>
#include <header.h>

int fibo(int n)
{
    if (n<0)
    {
        return -1;
    }
    else if (n==0 || n==1)
    {
        return n;
    }
    else
    {
    return (fibo(n-1)+fibo(n-2));
    }
}