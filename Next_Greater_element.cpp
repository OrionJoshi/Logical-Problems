//Next greater elements in a given array
#include<stdio.h>
#include<conio.h>

void printNGE(int arr[],int length){
	int i,j,temp;
	for(i=0;i<length;i++){
		temp=-1;
		for(j=i+1;j<length;j++){
			//comparing that if there exits a elements greater than currents array elements
			if(arr[i]<arr[j]){
				
				temp=arr[j];
				break;
			}
			
		}
		//printing the next greater elements of the array elements
		printf("%d -- %d\n",arr[i],temp);
		
	}
}

int main(void){
	
	
	int arr[] = {11,13,21,3};
	int length = sizeof(arr)/sizeof(arr[0]);
	//function call for next greater elements
	printNGE(arr,length);
	
	getch();
	return 0;
}
