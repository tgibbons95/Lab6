 
#include<stdio.h>
#include<string.h>
void main()
{
    int i=0;
    //changed size of array
    char arr1[ 20 ] = "Trumantiger";
    char arr2[ 20 ];
    while(i<19){
        arr2[ i ] = 'A';
	++i;
    }
    //added null terminator
	arr2[19]='\0';
    strcpy( arr1 , arr2 );
    printf("%s\n",arr1);
}
