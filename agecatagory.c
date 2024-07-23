//Give one age, find the person is from which category in age
#include<stdio.h>
int main() {
	int a;
	printf("Put the age: ");
	scanf("%d",&a);
	if(a<18) {
		printf("He/She is Non-adult");
	}
	if(a>=18){
		printf("He/She is Adult");
	}
	if(a>=60){
		printf(" and Senior-cityzent");
	}
	return 0;
}
