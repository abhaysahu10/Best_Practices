#include <header.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

union IpToL
{
    char Ip[16];
    long n;
};

int main()
{
    char *IpAdr = "123.456.789.155";
    printf("123.456.789.155\n");
    printf("To 32 bit integer using bitwise %ld\n",ToBitwise("123.456.789.155"));

    union IpToL Ipl;

    printf("Enter any IP Address to be converted :: ");
    scanf("%s",Ipl.Ip);

    Ipl.n = unions(Ipl.Ip);

    printf("To 32 bit integer using union %lu\n", Ipl.n);
    return 0;
}