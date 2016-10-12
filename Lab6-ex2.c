#include <stdio.h>
void main()
{
    //changed dynamic unallocated pointer to static allocated array
    char p[6] = "Mizzou";
    p[ 3 ] = 'P';
    printf("%s\n",p);
}
