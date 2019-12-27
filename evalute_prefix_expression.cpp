//A program for evaluating the prefix expression
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int top=-1;
float stack[10];

void push(int);
float pop();
float evaluation(char[],float[],int);


int main(void){
	
	char prefix[10];
	float data[10],result;
	int i;
	printf("Enter the valid prefix expression");
	gets(prefix);
	
	int length_string=strlen(prefix);

	for(i=length_string-1;i>=0;i--){
		
		if(isalnum(prefix[i])){
			
			printf("\nEnter the value of %c:\t",prefix[i]);
			scanf("%f",&data[i]);
			
		}
	}
	result=evaluation(prefix,data,length_string);
	
	printf("\nThe result of %s=%f",prefix,result);
	
	
	getch();
	return 0;
}
float evaluation(char prefix[],float data[],int length){
	
	int i=0;
	float op1,op2;
	char ch;
	
for(i=length-1;i>=0;i--){
	
		ch=prefix[i];
		if(isalnum(prefix[i])){
			
		push(data[i]);
			
		}
	
		else{
			op1=pop();
			op2=pop();
			switch(ch){
				case '+':
					push(op1+op2);
					break;
				case '-':
					push(op1-op2);
					break;
				case '*':
					push(op1*op2);
					break;
				case '/':
					push(op1/op2);
					break;
				case '$':
					push(pow(op1,op2));
					break;
			}
			
		}
	}
}
void push(int num){
	top+=1;
	stack[top]=num;
}
float pop(){
	return (stack[top--]);
}
