#include<stdlib.h>
#include<stdio.h>

struct stack{
	int arr[5];
	int TOP;
};

void Push(struct stack *ptr){
	int n;
	if(ptr->TOP==4){
		printf("StackOver Flow\n");
	}
	else{
		printf("Enter element to push: ");
		scanf("%d",&n);
		ptr->TOP++;
		ptr->arr[ptr->TOP]=n;
		printf("One element is Pushed\n\n");
	}
	
}
int Pop(struct stack *ptr){
	int item;
	if(ptr->TOP==-1){
		printf("Stack is underflow\n");
	}
	item = ptr->arr[ptr->TOP];
	return item;
}

int Peek(struct stack *ptr){
	int item = ptr->arr[ptr->TOP];
	return item;
}

main(){
	int n,item;
	struct stack var;
	struct stack *ptr;
	var.TOP = -1;
	while(1){
	printf("1.Push\n");
	printf("2.Pop\n");
	printf("3.Peek\n");
	printf("4.Exit\n");
	printf("Choose any one of Them: ");
	scanf("%d",&n);
		switch(n){
			case 1:
				Push(&var);
				break;
			case 2:
				item = Pop(&var);
				printf("%d is popped..",item);
				break;
			case 3:
				item = Peek(&var);
				printf("%d is on top\n",item);
				break;
			case 4:
				printf("\nCome Again...Thankyou..");
				exit(0);
				break;
			default:
				printf("\nInvalid Input!!! Try again...\n");
		}
	}
	return 0;
}
