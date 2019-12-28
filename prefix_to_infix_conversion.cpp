//program to convert prefix to infix expression
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#define MAX 10

struct stack{
	
	char item[MAX];
	int top;
	
};

void create_empty_stack(stack s){
	s.top=-1;
}


void push(stack s,char c[]){
	s.item[++top]=c;
	
}
char pop(stack s){
	return (s.item[top--]);
}

int main(void){
	

	
	stack s;
	create_empty_stack(s);
	int i;
	
	char exp[10],op1,op2;
	printf("Enter the valid prefix expression");
	gets(exp);
	
	int length=strlen(exp);
	
	for(i=length-1;i>=0;i++){
		
		if(isalnum(exp[i])){
			push(s,exp[i]);
		}else{
			op1=pop(s);
			op2=pop(s);
			
			char c[]="("+op1+exp[i]+op2+")";
			
			push(s,c);
			
			push()
			
		}
	}
	
	printf("%s",s.top);
	
}
