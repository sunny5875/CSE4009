//Template
#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
	int nData;
	struct Node *next;
}Node;

typedef struct Stack{
    //top노드
	Node *top;
}Stack;

void InitializeStack(Stack *stack);
void Push(Stack *stack, int nData);
int Pop(Stack *stack);


int main(void){
	Stack stack;
	InitializeStack(&stack);
    Push(&stack,1);
    Push(&stack,2);
    Push(&stack,3);
    Push(&stack,4);
    Push(&stack,5);

    printf("%d\n",Pop(&stack));
    printf("%d\n",Pop(&stack));
    printf("%d\n",Pop(&stack));
    printf("%d\n",Pop(&stack));
    printf("%d\n",Pop(&stack));

	return 0;
}

void InitializeStack(Stack* stack){
    stack->top=NULL;
}

void Push(Stack *stack, int nData){
	Node* tmp;
	tmp=(Node*)malloc(sizeof(struct Node));

    if(tmp==NULL){
        printf("Out of space!!");
        return;
    }
    else {
        tmp->nData = nData;
        tmp->next=stack->top;
        stack->top=tmp;
        Node* check=stack->top;

       while(check!=NULL){
            printf("%d ",check->nData);
            check=check->next;
        }
        printf("\n");
    }
}

int Pop(Stack *stack){
    int tmpData;
    Node* tmp;
    if(stack->top==NULL){
        printf("Empty stack");
        return -1;
    }
    else{
        tmp=stack->top;
        tmpData=tmp->nData;
        stack->top=tmp->next;
        free(tmp);
        return tmpData;
    }
}
