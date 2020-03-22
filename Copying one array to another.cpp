//Program to copy all the elements of one array into another array.
/*
	



*/
#include<stdio.h>
#include<conio.h>  
       
int main(void){ 
 
        //Initialize array   
        int arr1[] = {1, 2, 3, 4, 5};  
          
        //Calculate length of array arr1  
        int length = sizeof(arr1)/sizeof(arr1[0]);  
          
        //Create another array arr2 with the size of arr1.  
      
        int arr2[length];  
          
        //Copying all elements of one array into another  
        for (int i = 0; i < length; i++) {   
            arr2[i] = arr1[i];   
        }    
          
        //Displaying elements of array arr1   
        printf("Elements of original array: \n");  
        for (int i = 0; i < length; i++) {   
            printf("%d ", arr1[i]);  
        }  
          
        printf("\n");  
          
        //Displaying elements of array arr2   
        printf("Elements of new array: \n");  
        for (int i = 0; i < length; i++) {   
            printf("%d ", arr2[i]);  
        }  
        
        getch();
        return 0;  
    }  
