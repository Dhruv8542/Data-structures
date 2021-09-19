#include<stdio.h>
#include<stdlib.h>
struct stack{
    int top;
    int size;
    int *arr;
};
int isEmpty(struct stack *ptr)
{
    if(ptr->top==-1)
    return 1;
    else 
    return 0;
}
int isFull(struct stack *ptr){
    if(ptr->top==ptr->size-1)
    return 1;
    else
    return 0;
}
void push(int value,struct stack *p){
    if(isFull(p)){
        printf("The stack is full\n");
    }
    else {
        p->top++;
        value=p->arr[p->top];
    }
}
    int pop(struct stack *p){
        if(isEmpty(p)){
            printf("The stack is empty\n");
        }
        else{
            int val=p->arr[p->top];
            p->top=p->top-1;
            return val;
        }
    }
int peek(struct stack *sp,int i){
    int ari=sp->top-i+1;
    if(ari<0){
        printf("Invalid input of index");
        return -1;
    }
    else
    return ari;
}
int main(){
    int n,value,val,x;
    struct stack *s=(struct stack*)malloc(sizeof(struct stack));
    s->top=-1;
    s->size=9;
    s->arr=(int*)malloc(s->size*sizeof(int));
    push(8,s);
    push(11,s);
    push(99,s);
    push(85,s);
    push(78,s);
    push(89,s);
    push(80,s);
    push(20,s);
    printf("Enter thr opearation u want to perform \n 1:push\n 2:pop 3: peek\n");
    scanf("%d",&n);
    if(n==1)
    {
        printf("Enter the value u want to push:\n");
        scanf("%d",&value);
        push(value,s);
        printf("The value %d is pushed in the stack",value);
    }
    else if(n==2){
    val=pop(s);
    printf("The poped value is :%d\n",val);
    }
    else if(n==3){
        for (int j = 1; j <= s->top-1; j++)
        {
            printf("The element at index %d is :%d\n",j,s->arr[peek(s,j)]);
        }
        
    }
    else {
        printf("WRONG INPUT");
    }
    // if(isEmpty(s)){
    // printf("The stack is empty\n");
    // }
    // else 
    // printf("The stack is not empty\n");
    // if(isFull(s)){
    //   printf("The stack is full\n");
    // }
    // else 
    // printf("the stack is not full\n");
}

