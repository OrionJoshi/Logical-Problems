//maximum value of Sum(i*arr[i]) with only rotations on given array allowed
#include<iostream>
#include<conio.h>
using namespace std;

int main(void){
	
	int arr[]={1,20,2,10};
	int arr_len=sizeof(arr)/sizeof(arr[0]);
	int i,j,max=0;
	for(i=0;i<arr_len;i++){
		int sum=0;
		for(j=0;j<arr_len;j++){
			//for change the start position every time
			 int index=(i+j)%arr_len;
			 
			 sum+=arr[index]*j;
		}
		if(sum>max){
			max=sum;
		}
	}
	cout<<max<<endl;
	
	getch();
	return 0;
}
