
// CPP program to find maximum and minimum of 
// two numbers without using loop and any 
// condition. 
#include<iostream>
#include<conio.h> 

using namespace std;
  
int main () 
{ 
   int a = 15, b = 20; 
   printf("max = %d\n", ((a + b) + abs(a - b)) / 2); 
   printf("min = %d", ((a + b) - abs(a - b)) / 2); 
   getch();
   return 0; 
} 

