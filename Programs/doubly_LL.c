#include <stdio.h>
#include <stdlib.h>

struct node {
    struct node*next;
    struct node* prev;
    int data;
};
void trns(struct node* p){
    struct node *ptr=p;
while(ptr->next!=NULL){
    printf("Element is %d \n",p->data);
        p=p->next;
}      
printf("The list in reverse orderis:\n");
if(ptr->next==NULL){
    while(ptr->prev!=NULL){
    printf("Element is %d\n",p->data);
    p=p->prev;
    }
}

}
int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* sec=(struct node*)malloc(sizeof(struct node));
    struct node* thir=(struct node*)malloc(sizeof(struct node));
    struct node* last=(struct node*)malloc(sizeof(struct node));

    head->data=7;
    head->next=sec;
    head->prev=NULL;

    sec->data=11;
    sec->prev=head;
    sec->next=thir;

    thir->data=15;
    thir->next=last;
    thir->prev=sec;

    last->data=12;
    last->prev=thir;
    last->next=NULL;

    trns(head);
    return 0;
}