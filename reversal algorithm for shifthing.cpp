//The reversal algorithm for shifthing the array to left postition
#include<iostream>
#include<conio.h>
using namespace std;

void reverseArray(int arr[],int start,int end){
	
	while(start<end){
			int temp=arr[start];
	arr[start]=arr[end];
	arr[end]=temp;
	start--;
	end++;
		
	}

}
void printArray(int arr[],int size){
	int i;
	for(i=0;i<size;i++){
		
		cout<<arr[i]<<endl;
	}
}


void leftrotate(int arr[],int n,int d){
	reverseArray(arr,0,d-1);
	reverseArray(arr,d,n-1);
	reverseArray(arr,0,n-1);
}

int main(void){
	
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	leftrotate(arr,n,2);//here we are shifting 2 position only
	printArray(arr,n);
	
	
	getch();
	return 0;
}
