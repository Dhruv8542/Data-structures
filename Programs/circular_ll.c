#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node* next;
    int data;
};
void trns(struct node * head){
    struct node * ptr=head;
    do{
        printf("The element is :%d\n",ptr->data);
        ptr=ptr->next;
    }while(ptr!=head);
    }
    struct node* fun1(struct node* head,int data){
        struct node * ptr=(struct node*)malloc(sizeof(struct node));
        ptr->data=data;

        struct node*p=head->next;
        while(p->next!=head){
            p=p->next;
        }
        p->next=ptr;
        ptr->next=head;
        head=ptr;
        return head;
    }

int main(){
   struct node *head;
   struct node *second;
   struct node *third;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    
    head->data=7;
    head->next=second;

    second->data=11;
    second->next=third;

    third->data=18;
    third->next=head;

    // trns(head);
    head=fun1(head,90);
    printf("The Circular linked list after insertion at head\n");
    trns(head);
    return 0;
}