//program to add and subtract two matrix using array and pointer
#include<stdio.h>
#include<conio.h>
int main()
{
int a[2][2],b[2][2],c[2][2],d[2][2],i,j;
	
	printf("Enter 1 matrix:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",(*(a+i)+j));
		}
	}
	printf("\nEnter 2 matrix:");
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			scanf("%d",(*(b+i)+j));
		}
	}
	printf("\nAddition Matrix:\n");
	for(i=0;i<2;i++){
	 for(j=0;j<2;j++){
			*(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
			printf("%d ",*(*(c+i)+j));
		}
		printf("\n");
	}
	printf("\nSubtraction Matrix:\n");
	for(i=0;i<2;i++){
	 for(j=0;j<2;j++){
			*(*(d+i)+j)=*(*(a+i)+j)-*(*(b+i)+j);
			printf("%d ",*(*(d+i)+j));
		}
		printf("\n");
	}
	getch();
	return 0;
}
