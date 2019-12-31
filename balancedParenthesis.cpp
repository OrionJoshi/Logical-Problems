//program for balancing the parenthesisi
#include<stdio.h>
#include<conio.h>

//structure defination for stack
struct stack{
	char item[10];
	int top;
};
//function for making the stack empty
void create_empty_stack(struct stack *s){
	
	s->top=-1;

}

//cheaking that the stack is empty or not
int stack_empty(struct stack *s){
	
	if(s->top==-1){
		return 1;
	}else{
		return 0;
	}
}

//function for poping the stack

void pop(struct stack *s){
	
	--s->top;

}
//function defination for checking whether the string is balanced parenthesis
int areparenthesisBalanced(char expression[],int length,struct stack *s){
	int i;
	for(i=0;i<length-1;i++){
		if(expression[i]=='(' || expression[i] =='{' || expression[i] =='['){
			//increament the top by one and put the char into the stack called item
			s->item[++s->top]=expression[i];
			continue;
			
		}
		
		if(stack_empty(s)){
			
			return 0;
		}
		
		switch(expression[i]){
			case ')':
				pop(s);
				break;
			case '}':
				pop(s);
				break;
			case ']':
				pop(s);
				break;
			default:
				return 0;
		}
	}
	//if there is balanced in parenthesis then the top of stack must be empty
	if(s->top==-1){
		return 1;
		
	}else{
		return 0;
	}
	
	
}

int main(void){
	
	struct stack d;
	struct stack *s=&d;
	int length;
	
	char expression[]="{()}[])";
	
	length = sizeof(expression)/sizeof(expression[0]);
	
	create_empty_stack(s);

	
	if(areparenthesisBalanced(expression,length,s)){
		printf("Balanced");
	}
	else{
		printf("Not Balanced");
	}
	
	
	getch();
	return 0;
}
