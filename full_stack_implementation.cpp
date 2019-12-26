/*Array implementation of stack*/
#include<stdio.h>
#include<conio.h>
#define MAX 10

 struct  stack{
	int items[MAX];       //Decleration an array to store items
	int top;              //Top of a stack
};


void create_empty_stack(stack *s);//function prototype
void push(stack *s,int);
void pop(stack *s);
void display(stack *s);
int isempty(stack *s);
int isfull(stack *s);


//Main function

int main(void){
	
	int element,choice;
	stack d;
	stack *s=&d;

	
	
	int flag=1;
		printf("\n\nEnter your Choice:");
	create_empty_stack(s);//indicate empty stack
			printf("\n\nEnter your Choice:");

	
	do{
		
		printf("\n\nEnter your Choice:");
		printf("\n\n\t  1:Push the elements");
		printf("\n\n\t  2:To display the elements");
		printf("\n\n\t  3:Pop the elements");
		printf("\n\n\t  4:Exit");
		
		scanf("%d",&choice);
		
		switch(choice){
			
			case 1:
				printf("\n Enter the number:");
				scanf("%d",&element);             //Read an element from keybord
				push(s,element);
				break;
			case 2:
				display(s);
				break;
			case 3:
				pop(s);
				break;
			case 4:
				flag = 0;
				break;
			default:
				printf("\n  Invalid Choice");
		}
		
	}while(flag);
	
	getch();
	return 0;
}
//function to create an empty stack

void create_empty_stack(stack *s){
	printf("jkb");
	
	s->top=-1;
		printf("jkb");
}

// function to check whether the stack is empty or not

int isempty(stack *s){
	if(s->top<0){
		return 1;
	}else{
		return 0;
	}
}

//function to check whether the stack is full or not

int isfull(stack *s){
	if(s->top==MAX-1){
		return 1;
	}
	else{
		return 0;
	}
}

//push() function defination

void push(stack *s,int element){
	
	if(isfull(s)){
		
		printf("\n\nThe stack is overflow : Stack overflow");
	}
	else{
		s->items[++(s->top)] = element; //First increase the top br 1 and store element at top position
	}
}

//function for displaying elements of the stack

void display(stack *s){
	int i;
	printf("fakn");
	
	if(isempty(s)){
		
		printf("\nThe stack does not contain any Elements");
	}else{
		
		printf("\nThe elements in the stack is /are :\n");
		
		for(i=s->top;i>=0;i--){
			
			printf("%d\n",s->items[i]);
		}
	}
}

//the pop function defination

void pop(stack *s){
	
	if(isempty(s)){
		printf("\n\bStack Underflow :Empty stack!!!");
	}
	else{
		
		printf("\n\nThe deleted item is %d:\t",s->items[s->top--]);
		
		//deletes the top elements and decrease top by 1
	}
}
