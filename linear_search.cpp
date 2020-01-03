//searching a key element in any array
//using linear searching algorithm
#include<iostream>
#include<conio.h>
using namespace std;
linear_search(int arr[],int key,int num){
	int i;
	if(num==0){
		return -1;
	}
	else{
	for(i=0;i<num;i++){
		if(key==arr[i]){
			return i;
		}
		}
		
			return -1;
	
	}
}

int main(void){
	
	int arr[]={1,2,3,4,5,6};
	int key=4;//here we assume the element to search in an array
	
	int num_of_ele=sizeof(arr)/sizeof(arr[0]);
	
	int key_index=linear_search(arr,key,num_of_ele);
	
	cout<<"The index of searching element is:"<<key_index<<endl;
	
	
	getch();
	return 0;
}
