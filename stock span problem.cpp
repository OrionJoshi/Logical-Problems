//program to evaluate the stock span problem
#include<stdio.h>
#include<conio.h>

void calculateSpan(int price[],int n,int s[]){
	//intializing the spanvalues
	int i,j;
	s[0]=1;
	
	for(i=1;i<n;i++){
		s[i]=1;
		
		for(j=i-1;j>=0;j--){
			
			if(price[i]>price[j]){
				s[i]++;
			}else{
				break;
			}
		}
		
	}
}

//for displaying the stockvalues

void printspan(int s[],int n){
	int i;
	
	for(i=0;i<n;i++){
		printf("%d ",s[i]);
	}
}

int main(void){
	
	
	int price[]={10,4,5,90,120,80};
	int n=sizeof(price)/sizeof(price[0]);
	int s[n];
	
	calculateSpan(price,n,s);
	
	//for printing the span values
	
	printspan(s,n);
	
	
	getch();
	return 0;
	
}
