#include <stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};
void trns(struct node * ptr){
    while(ptr!=NULL){
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
int isEmpty(struct node*top){
    if(top->next=NULL){
        return 1;
    }
}
int isFULL(){
    struct node * n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        return 1;
    }
    else 
    return 0;
}
 struct node *push(int x,struct node * top){
    struct node * n=(struct node*)malloc(sizeof(struct node));
    if(n==NULL){
        printf("Stack Overflow");
    }
    else 
    n->data=x;
    n->next=top;
    top=n;
    return top;
}
struct node* pop(struct node* top){
    struct node * n;
    if(isEmpty(top)){
        printf("Stack Underflow\n");
    }
    else {
    n=top;
    top=top->next;
    int x=n->data;
    free(n);
    printf("The poped element is: %d \n",x);
    return top;
}
}
int main(){
    struct node *top; 
    struct node *t2; 
    struct node *t3; 
    struct node *t4; 
    struct node *t5; 

    top=(struct node*)malloc(sizeof(struct node));
    t2=(struct node*)malloc(sizeof(struct node));
    t3=(struct node*)malloc(sizeof(struct node));
    t4=(struct node*)malloc(sizeof(struct node));
    t5=(struct node*)malloc(sizeof(struct node));

    top->data=7;
    top->next=t2;

    t2->data=10;
    t2->next=t3;

    t3->data=11;
    t3->next=t4;

    t4->data=14;
    t4->next=t5;

    t5->data=80;
    t5->next=NULL;
    
    // trns(top);

    // top=push(5,top);
    // printf("After pushing the element in the stack\n");
    // trns(top);
    top=pop(top);
    printf("After poping the element from the stack\n");
    trns(top);
    return 0;

}
