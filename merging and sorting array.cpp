//program to merge two array and sort them in ascending order
#include<stdio.h>
#include<conio.h>

int main(void){
	
	
	int arr1[]={5,3,7,8,9};
	int arr2[]={1,6,2,4,10},i,j,temp;
	
	//for finding the size of array
	int num1=sizeof(arr1)/sizeof(arr1[0]);
	int num2=sizeof(arr2)/sizeof(arr2[0]);
	
	//definnig the arrray for merging two array
	int num=num1+num2;
	int arr[num];
	
	//for merging two array
	
	for(i=0;i<num;i++){
		if(i<num1){
			arr[i]=arr1[i];
		}else{
			arr[i]=arr2[i-num1];
		}
	}
	
	//for sorting of merged array
	for(i=0;i<num;i++){
		for(j=i+1;j<num;j++){
			
			if(arr[i]>arr[j]){
				
				temp = arr[i];
				arr[i] =arr[j];
				arr[j] = temp;
			}
		}
	}
	
	//for printing the two mergred array in ascending order
	
	for(i=0;i<num;i++){
		
		printf("%d\n",arr[i]);
	}

	
	getch();
	return 0;
}
