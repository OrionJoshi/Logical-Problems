//Program to find the area of the parallelogram
/*

Algorithm

    Define the base of the parallelogram.
    Define the height of the parallelogram.
    Calculate the area of the parallelogram as base X height

Complexity

O(1)

*/
#include<stdio.h> 
#include<conio.h> 
int main(){ 
 
      int base,height,area_parallelogram;  
      
      printf("Enter base and height respectively ");
      scanf("%d%d",&base,&height);
      
      area_parallelogram = base*height;  
      printf("Area of the parallelogram=%d",area_parallelogram);  
      
      getch();
      return 0;  
    }  
