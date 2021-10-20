#include <stdio.h>
#include <header.h>

int pcount(int num1, int num2)
{
    int i, j, flag, temp, count = 0;
 
    if (num2 < 2)
    {	
	count=0;
       printf("Number of primes between are %d \n",count);
        exit(0);
    }
    temp = num1;
    if ( num1 % 2 == 0)
    {
        num1++;
    }
    for (i = num1; i <= num2; i = i + 2)
    {
        flag = 0;
        for (j = 2; j <= i / 2; j++)
        {
            if ((i % j) == 0)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            count++;
        }
    }
    printf("Number of primes between are %d \n",count);
}