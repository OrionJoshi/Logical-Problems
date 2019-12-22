//Check for pair in an array with a given sum
//By using brute force algorithm
#include<iostream>
#include<conio.h>
using namespace std;

int main(void){
	
	int arr[]={1,23,6,7,9};
	int n=sizeof(arr)/sizeof(arr[0]);
	int sum=13,i,j;//assumning that the te pair has sum equal to 13
	
	//outer forloop
	for(i=0;i<n;i++){
		
		for(j=0;j<n;j++){
			if(arr[i]+arr[j]==sum){
				
				cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;//for printting the pair in formate (a,b)
			}
		}
	}
	
	
	getch();
	return 0;
}
