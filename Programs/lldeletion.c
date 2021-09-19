#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node*next;
    int data;
};
void trns(struct node *ptr){
    while (ptr!=NULL){
        printf("Element is:%d\n",ptr->data);
        ptr=ptr->next;
    }
}
struct node* del1(struct node* ptr,struct node* head){
    ptr=head;
    head=head->next;
    free(ptr);
    return head;
}
struct node*del2(struct node* head,int in){
    
    struct node*p=head;
    struct node*q=head->next;
    while(in==in-1){   
    p=p->next;
    q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node*del3(struct node* head){
    struct node*p=head;
    struct node*q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=q->next;
    free(q);
    return head;
}
struct node* del4(struct node* head,int value){
    struct node*p=head;
    struct node*q=head->next;
    while(q->next==value && q->next==NULL){
        p=p->next;
        q=q->next;
    }
    if(q->next==value){
        p->next=q->next;
        free(q);
    }
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
    third->next=NULL;

    trns(head);
    // printf("the list after deleting first node\n");
    // head=del1(0,head);
    // trns(head);
    // printf("the list after deleting at index 2 node\n");
    // head=del2(head,2);
    // trns(head);
    // printf("the list after deleting last node\n");
    // head=del3(head);
    // trns(head);
     printf("the list after deleting a node with given value\n");
    head=del4(head,11);
    trns(head);
}
    