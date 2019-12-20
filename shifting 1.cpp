//method 1 for shifting the array first two number to last
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int num,i;
	
	cout<<"Enter the number of elements in array :"<<endl;
	cin>>num;
	
	int arr[num],temp[2];
	
	cout<<"Enter the value to the array"<<endl;
	for(i=0;i<num;i++){
		
		cin>>arr[i];
	}
	
	//for shifting
	temp[0]=arr[0];
	temp[1]=arr[1];
	for(i=2;i<num;i++){
		arr[i-2]=arr[i];
	}
	arr[num-2]=temp[0];
	arr[num-1]=temp[1];
	
//for printing array
for(i=0;i<num;i++){
	cout<<arr[i];
	cout<<endl;
}

getch();
return 0;
}
