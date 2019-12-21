//program to swap two number using pointer
#include<stdio.h>
#include<conio.h>

void swap(int*a,int*b){
	
	int temp;
	
	temp=*a;
	*a=*b;
	*b=temp;
	
}

int main(void){
	
	int a=5, b=7;
	
	printf("The value of a and b before swap are %d and %d respestively\n",a,b);
	//function call for swaping of two numbers
	swap(&a,&b);
	
	printf("The value of a and b after swap are %d and %d respectively\n",a,b);
	
	getch();
	return 0;
}
