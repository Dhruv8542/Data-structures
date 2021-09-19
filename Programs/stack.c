#include <stdio.h>
#include <stdlib.h>
struct stack{
    int size;
    int top;
    int *ar;
};
int isEmpty(struct stack *ptr ){
    if(ptr->top==-1){
        printf("The stack is empty\n");
    }
    return 0;
}
int isFull(struct stack *p){
    if(p->top==p->size-1){
        printf("The stack is full\n");
    }
    return 0;
}
void switc(int num,struct stack *ptr){
      switch(num){
        case 1:isEmpty(ptr);
        switc(num,ptr);
        break;
        case 2:isFull(ptr);
        switc(num,ptr);
        break;
        default:
        printf("INVALID INPUT");
    }
}
int main(){
    int num;
    struct stack *s;
    s->top=-1;
    s->size=80;
    s->ar =(int*)malloc(sizeof(int));
    // s->ar[0]=85;
    // s->top++;
    printf("Enter youor choice");
    scanf("%d",&num);
    switc(num,s);
  
}