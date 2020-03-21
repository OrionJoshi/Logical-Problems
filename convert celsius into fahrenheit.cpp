//Program to convert Celsius into Fahrenheit
/*

Algorithm

    Define temperature in Celsius unit.
    Apply in the formula.
    Print the temperature in Fahrenheit.

Complexity

O(1)

*/
#include<stdio.h> 
#include<conio.h> 
int main(void){  
 
    float fahrenheit, celsius;  
    celsius = 24;  
    fahrenheit =( (celsius*9)/5)+32;  
    printf("\n\n Temperature in fahrenheit is:  %f",fahrenheit);
	
	getch();  
    return (0);                     
    }  
