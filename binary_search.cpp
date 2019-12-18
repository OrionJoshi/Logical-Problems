//Searching a key element in array
//using binary search algorithm
#include<iostream>
#include<conio.h>
using namespace std;
int binary_search(int arr[],int key,int l,int r){
	if(r>=1){
		int mid=(l+r)/2;
		//if the element is present at the middle itself
		if(arr[mid]==key){
			return mid;
		}
		//if key element is smaller than mid element it must lies in left side of array
		if(arr[mid]>key){
			binary_search(arr,key,l,mid-1);
		}
		else{
			binary_search(arr,key,mid+1,r);
		}
	}
	else{
		return -1;
	}
}

int main(void){
	
	//here we are assuming that the array is sorted
	int arr[]={2,3,4,5,6,7,8};
	int key=5;
	int n=sizeof(arr)/sizeof(arr[0]);
	
	//function to call the binary search function
	int result=binary_search(arr,key,0,n-1);
	
	(result==-1 ) ? cout<<"The element not found!!":cout<<"The element found at index:"<<result;
	getch();
	return 0;
}
