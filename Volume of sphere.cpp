/*
Program to calculate the volume of the sphere
Algorithm

    Define the radius of the sphere
    Define the pie and assign (22/7)
    Calculate the volume of the sphere as (4/3)*pie*r3
    Assign the volume of the sphere to volume_of_sphere
    Print the volume of the sphere.


*/
#include<stdio.h>
#include<conio.h>  
    
int main(void)  
    {  
        int radius=48;  
        float pie=3.14285714286;  
        double volume=(4.0/3.0)*pie*(radius*radius*radius);  
        printf("Volume of the sphere=%f",volume);  
        getch();
        return 0;
    }  
