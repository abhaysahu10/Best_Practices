#include <header.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long int ToBitwise(char* Ip)
{
    char line[16], Ipl[16];
    static long int IPint=0;
    char* Ipline;
    strncpy(line,Ip,16);
    char* tok=strtok(line,".");
    char ipchr[sizeof(tok)];
    while( tok != NULL)
    {
        strncpy(ipchr,tok,sizeof(tok));
        IPint = IPint << 8;
        IPint |= atoi(ipchr);   
        tok=strtok(NULL,".");
    }

    /*long int IPintTemp = IPint;
    int n=31;
    for(int i=13; i >= 0; i -=4)
    {
        
        n -= sprintf(&Ipl[i],"%ld", (IPintTemp & 255));
        IPintTemp = IPintTemp>>8;

    }
    printf("%s\n",Ipl[3]);*/
    // printf("%ld\n",IPint);
    return IPint;
}