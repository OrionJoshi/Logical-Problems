//project euler problem 15
#include<iostream>
#include<conio.h>
using namespace std;

inline int fact(int n){
	
	if(n<=1){
		return 1;
	}else{
		return n*fact(n-1);
	}
	
}

int main(void){
	
	int x,y,total=0,n,r;
	
	cout<<"Enter the dimensions of grid(for example 2*2)"<<endl;
	cin>>x>>y;
	
	n=x+y;
	r=x;
	
	cout<<"The number of various routes are :"<<(fact(n)/(fact(n-r)*fact(r)));
	
	
	getch();
	return 0;

