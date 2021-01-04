//add and subtract 2 number using function
#include<stdio.h>
#include<math.h>
int add(int *a,int *b)
{
	return (*a+*b);
}
int sub(int *a,int *b)
{
	return (*a-*b);
}
main()
{
	int a,b;
	printf("enter 2 numbers\n");
	scanf("%d%d",&a,&b);
	printf("\nSUM OF GIVEN NUMBER=%d",add(&a,&b));
	printf("\nSUBTRACTION OF GIVEN 2 NUMBERS=%d",sub(&a,&b));
	return 0;
}
