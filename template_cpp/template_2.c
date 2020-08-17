#include<stdio.h>
#define MAX(a,b) (a>b)?a:b


int main()
{
	int i_max=MAX(6,89);
	
	double d_max=MAX(6.98,8.9);
	
	double mixed_max=MAX(8,8.9);
	
printf("maximum int value:%d\n",i_max);
printf("maximum double value:%lf\n",d_max);
printf("maximum mixed value:%lf\n",mixed_max);
	
}

//this method can be used in C for generic programming as it doesn't has provision for 'template' keyword
