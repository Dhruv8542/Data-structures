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
}