#include<stdio.h>
int main()
{
	int x=1309;
	//gave p an address to point to
	int *p = &x;
	printf("\n The value of x is = %d",x);
	printf("\n The pointer points to the value = %d\n",*p);
	return 1;
}
