    #include<stdio.h>
    #include<conio.h>
    int main() {
        int year;
        printf("Enter a year: ");
        scanf("%d", &year);
        if (year % 4 == 0) {
            if (year % 100 == 0) {
                // the year is a leap year if it is divisible by 400.
                if (year % 400 == 0)
                    printf("%d is a leap year.", year);
                else
                    printf("%d is not a leap year.", year);
            } else
                printf("%d is a leap year.", year);
        } else{
        	     printf("%d is not a leap year.", year);

		}
		
        getch();    
        return 0;
    }

