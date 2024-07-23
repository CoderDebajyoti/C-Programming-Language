//uses of switch case
#include<stdio.h>
int main()
{
	int i,a,b;
	printf("Enter Two Number:");
	scanf("%d %d",&a,&b);
	printf("1.Addition\n2.Substraction\n3.Divition\n4.Multiplication\n");
	scanf("%d",&i);
	switch(i)
	{
		case 1:
			printf("%d",a+b);
			break;
		case 2:
			printf("%d",a-b);
			break;
		case 3:
			printf("%d",a/b);
			break;
		case 4:
			printf("%d",a*b);
			break;
		default:
			printf("PLEASE CHOOSE A CURRECT INPUT");
			break;
	}
	return 0;
}
