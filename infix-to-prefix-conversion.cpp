//program to convert the infix expression to prefix expression
#include<stdio.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int precedency(char);

int main(void){
	
	char prestack[100],opstack[100],infix[100];
	int otop=-1,ptop=-1,l,i;
	
	printf("Enter a valid infix expression:");
	gets(infix);
	
	l=strlen(infix);
	
	for(i=l-1;i>=0;i++){
		
		if(infix[i]==')'){
			opstack[++otop]=infix[i];
		}
		else if(isalnum(infix[i])){
			prestack[++ptop]=infix[i];
		}
		else if(infix[i]=='*' || infix[i]=='/' || infix[i]=='+' ||infix[i]=='-' ||infix[i]=='$' ||infix[i]=='%'){
			
			if(precedency(opstack[otop])>precedency(infix[i])){
				prestack[++ptop]=opstack[otop--];
			}
			opstack[++otop]=infix[i];
			
		}
		else if(infix[i]=='('){
			while(opstack[otop]!=')'){
				
				prestack[++ptop]=opstack[otop];
				otop--;
			}
			otop--;
		
		}
		
	}
	while(otop!=-1){
			prestack[++ptop]=opstack[otop];
			otop--;
		}
	
	
		printf("\nThe obtained prefix expression is:");
		
		while(ptop!=-1){
			
			printf("%c",prestack[ptop]);
			ptop--;
		}
	
	
	
	getch();
	return 0;
}
int precedency(char c){
	switch(c){
		
		case'$':
			return 4;
			
		case '*':
		case '/':
			return 3;
			
		case '+':
		case '-':
			return 2;
			
		default:
			return 1;
	}
}
