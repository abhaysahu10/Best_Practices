#include <header.h>
#include <stdio.h>

int main()
{
    printf("Set Bit %d in %d = %d\n",1,8,SetBit(8,1));
    printf("Clear Bit %d in %d = %d\n",1,8,ClearBit(8,1));
    printf("Flip/toggle Bit %d in %d = %d\n",1,8,FlipBit(8,1));

}