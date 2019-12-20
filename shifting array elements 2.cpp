//shifting first two number of array by using rotate one by one method
#include<iostream>
#include<conio.h>
using namespace std;
void leftrotate(int arr[],int d,int n);
void print(int arr[],int n);
 void leftrotateone(int arr[],int n){
	int temp=arr[0],i;
	
	for(i=0;i<n-1;i++){
		
		arr[i]=arr[i+1];
		
	}
	arr[i]=temp;
}

int main(void){
	
	
	int arr[]={1,2,3,4,5,6};
	//here we are shifthing two numbers so
	int d=2;
	//for counting enumbers of elements in array
	int n=sizeof(arr)/sizeof(arr[0]);
	
	leftrotate(arr,d,n);
	print(arr,n);
	
	getch();
	return 0;
}
void leftrotate(int arr[],int d,int n){
	int i;
	for(i=0;i<d;i++){
		
		leftrotateone(arr,n);
	}
}
//for printing the resultant array
void print(int arr[],int n){
	int i;
	for(i=0;i<n;i++){
		
		cout<<arr[i]<<endl;
	}
}
