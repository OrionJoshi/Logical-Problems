//A juggling algorithum for shifting an array
#include<iostream>
#include<conio.h>
using namespace std;
int gcd(int a,int b);
void Arrayrotate(int A[],int n,int k);

int main(void){
	
	int A[]={1,2,3,4,5,6};
	//here we assume to shift two positon to left 
	int k=2;
	int n=sizeof(A);//for finding size of array
	
	Arrayrotate(A,n,k);
	
	
	
	getch();
	return 0;
}
int gcd(int a,int b){
	if(b==0){
		return a;
	}
	else{
		return gcd(b,a%b);
	}
}
void Arrayrotate(int A[],int n,int k){
	
	int d=0,i,temp,j;
//outer for loop 	
	for(i=0;i<gcd(n,k);i++){
		j=i;
		temp=A[i];
		
		//inner While loop
		while(1){
			d=(j+k)%n;
			
			if(d==i){
				break;
			}
			A[j]=A[d];//here this is for shifting left postion
			j=d;
		}
	}
	
}
