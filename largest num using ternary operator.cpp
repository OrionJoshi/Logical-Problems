
// C program to find largest among two 
// numbers using ternary operator 
  
#include<iostream>
#include<conio.h>
using namespace std; 
  
int main() 
{ 
    // variable declaration 
    int n1 = 5, n2 = 10, max; 
  
    // Largest among n1 and n2 
    max = (n1 > n2) ? n1 : n2; 
  
    // Print the largest number 
    printf("Largest number between"
           " %d and %d is %d. ", 
           n1, n2, max); 
  	getch();
    return 0; 
} 

