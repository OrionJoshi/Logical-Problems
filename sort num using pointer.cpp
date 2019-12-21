//program to sort given 10 numbers using pointer and array
#include<stdio.h>
#include<conio.h>

int main(void){
	
	int arr[10]={0,2,3,5,8,7,9,10,6,1};
	int i,j,temp;
	
	int *p=arr;
	
	
	//for Sorting of an array
	
	for(i=0;i<10;i++){
		for(j=i+1;j<10;j++){
			
			if(*(p+i)<*(p+j)){
				
				temp = *(p+i);
				*(p+i) =*(p+j);
				*(p+j) = temp;
			}
		}
	}
	//for printing of sorted array
	printf("The number in desending order are /n");
	for(i=0;i<10;i++){
		
		printf("%d\n",*(p+i));
	}
	
	getch();
	return 0;
}
