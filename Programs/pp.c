#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node* next ;
};
void trans(struct node *p){
    while(p!=NULL){
        printf("Element is :%d \n",p->data);
        p=p->next;
    }
}

struct node *pop(struct node* top)
{
    struct node *ptr;
    if(ptr==NULL){
        printf("The Staack is empty");
    }
    else {
        ptr=top;
        top=top->next;
        int x=ptr->data;
        free(ptr); 
        printf("The poped element is %d \n",x);
    }
}

int main(){
    struct node * top=(struct node*)malloc(sizeof(struct node));
    struct node * t2=(struct node*)malloc(sizeof(struct node));
    struct node * t3=(struct node*)malloc(sizeof(struct node));
    struct node * t4=(struct node*)malloc(sizeof(struct node));
    struct node * t5=(struct node*)malloc(sizeof(struct node));

    top->data=7;
    top->next=t2;

    t2->data=58;
    t2->next=t3;

    t3->data=7;
    t3->next=t4;

    t4->data=15;
    t4->next=t5;

    t5->data=20;
    t5->next=NULL;

    trans(top);
    top=pop(top);
    trans(top);
}