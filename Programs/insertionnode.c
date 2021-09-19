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
// funtion for insertion of a node  in the start

struct node *fun1(struct node *head,int data){
    struct node* ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=head;
    return ptr;
}


// funtion for insertion of node at index i

struct node* fun2(struct node * head ,int data,int index){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    int i=0;
    while(i!=index-1)
    {
        ptr=p->next;
        i++;
    }
    ptr->data=data;
    ptr->next=p->next;
    p->next=ptr;
    return head;
}

// funtion for insertion at the end 


struct node* fun3(struct node* head,int data){
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head;
    ptr->data=data;
    while(p->next!=NULL){
        p->next;
    }
    p->next=ptr;
    ptr->next=NULL;
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
    third->next=NULL;

    // trns(head);
    // head=fun1(head ,56);
    // printf("The structure after fun1\n");
    // trns(head);
    // printf("The structure after fun2\n");
    // fun2(head,85,1);
    // trns(head);
    // printf("The structure after fun3\n");
    head=fun3(head,20);
    trns(head);
    return 0;
}