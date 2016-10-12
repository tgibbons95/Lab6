#include <stdio.h>
 
int main()
{
	//changed dynamic unallocated pointer to static allocated array
    char fileName[30];
    printf("Specify file name you would like to print to: \n");
    scanf("%s",fileName);
 

    FILE* file1 = fopen(fileName, "a+");
    FILE* temp=file1;
    char c;
    //changed getchar to fgetc and printed to stdout
    while (c != EOF)
    {
 		c=fgetc(temp);
		printf("%c",c);
    }
 
    fclose(file1);
 
    printf("\nCTRL+d is a correct ending");
 
    return 0;
}
