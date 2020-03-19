//Program to find the area of a pentagon

/*

Algorithm

    Create variables 's' and 'a' and assign its value as 10 and 6.
    Create variable area_pentagon equals to (5/2)X(s)X(a) as per the formula of calculating the area of the Pentagon.

Complexity

O(1)
*/

#include<stdio.h> 
#include<conio.h> 

 int main(){
   
       int s = 13;  
       int a =  5;  
       float area_pentagon = (5.0/2.0)*s*a;  
       printf("Area of the pentagon=%0.1f",area_pentagon);  
       
       getch();
       return 0;
	}  
	
	
    
