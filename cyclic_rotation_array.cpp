//program to cyclically rotate an array by one
#include<iostream>
#include<conio.h>
using namespace std;

void rotate_by_one(int arr[],int n){
	
	int temp=arr[n-1],i;
	
	for(i=n-1;i>0;i--){
		arr[i]=arr[i-1];
	}
	arr[0]=temp;
}
void print_array(int arr[],int n){
	int i;
	for(i=0;i<n-1;i++){
		
		cout<<arr[i]<<endl;
	}
}

int main(void){
	
	
	int arr[]={1,2,3,4,5,6};
	int n=sizeof(arr)/sizeof(arr[0]);
	
	//for rotation of array ony cyclicly
	rotate_by_one(arr,n);
	//for printing array
	print_array(arr,n);
	
	
	getch();
	return 0;
}
