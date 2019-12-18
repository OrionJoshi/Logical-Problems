//Program to split an array and move to end part
#include<iostream>
#include<conio.h>
using namespace std;

//split funtion defination
void SplitArr(int arr[],int n,int pos){
	int i,j;
	for(i=0;i<pos;i++){
		//rotate array by 1
		int x=arr[0];
		
		for(j=0;j<n-1;j++){
			arr[j] = arr[j+1];
			
		}
		arr[n-1] = x;
	}
}

//main function

int main(void){

	int arr[]={1,2,3,4,5,6,7},i;
	int n = sizeof(arr)/sizeof(arr[0]);//calculating the numbers of elements in array
	
	int position = 2;//numbers of element to be splited
	
	SplitArr(arr,n,position);
//printing new resultant array	
	for(i=0;i<n;i++){
		
		cout<<arr[i]<<endl;
	}


	getch();
	return 0;
}

