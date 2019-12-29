//Program to find the reverse of an array
#include<iostream>
#include<conio.h>
using namespace std;

void reverseArray(int arr[],int start,int end){
	int endarray=end;
	while(start<end){
		int temp=arr[start];
		arr[start]=arr[end];
		arr[end]=temp;
		start++;
		end--;
	}
	
	//for displaying array element in reverse
	int i;
	for(i=0;i<endarray+1;i++){
		cout<<arr[i]<<endl;
	}
}


int main(void){
	
	int arr[]={2,3,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
//	cout<<n;
	reverseArray(arr,0,n-1);
	
	
	getch();
	return 0;
}
