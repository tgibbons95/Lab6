#include<stdio.h>
#include<malloc.h>
void main()
{
	//no need to free
    char *a = "hey";
    a = "hello";
    printf("%s\n",a);
}
