#include <stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node *link;
}*head=NULL;

void insertATLast(int new_data){
    struct Node *newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data=new_data;
    newnode->link=NULL;

    if(head==NULL){
        head=newnode;
        return;
    }

    struct Node *last = head;
    while(last->link!=NULL){
        last=last->link;
    }
    last->link=newnode;
}

void deleteFromlast(){
    if(head==NULL){
        printf("empty LL");
    }

    struct Node *last = head;
    while(last->link->link!=NULL){
        last=last->link;
    }

    free(last->link);
    last->link=NULL;

}

void displayLinklist(){
    struct Node *last = head;
    if(last==NULL){
        printf("empty LL");
    }

    while(last!=NULL){
        printf("%d\n",last->data);
        last=last->link;
    }
}

int main(){
    insertATLast(23);
    insertATLast(20);
    insertATLast(21);
    displayLinklist();

    printf("after deletion: \n");
    deleteFromlast();
    displayLinklist();
}