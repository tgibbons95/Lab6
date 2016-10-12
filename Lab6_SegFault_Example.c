#include <stdio.h>
#include <string.h>

void tester(int* c, int k) {
	printf("x[%d] = %d\n", k, c[k]);
	//changed to value between 0 and 9999
	c[500]=1309;
}

int main(int argc, char* argv[]) {
	int i = 0, j, k;
	int x[10000];
	
	//changed to 10000
	while(i < 10000){
		x[i] = i;
		i++;
	}

	printf("Enter an integer between 0 to 9999: ");
	fflush(stdout);
	scanf("%d",&k);

	tester(x, k);
}
