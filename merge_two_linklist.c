merge_two_linklist.c
Que : Write a program that merges two orderd linked list into third new list.When two lists are merged the data in the resulting list are also orderd.The two original lists should be left unchanged.That is merged list should be new one.Use linked implementation.*
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"merge_two_linklist.h"
struct node *head1=NULL,*head2=NULL,*head3=NULL;
void merge(struct node *head1,struct node *head2,struct node *head3)
{ 
struct node *t1=NULL,*t2=NULL,*t3=NULL;
t1=head2;
t2=head1; 
while(t1!=NULL && t2!=NULL) 
{ nw=(struct node *)malloc(sizeof(struct node));
nw->next=NULL; 
if(t1->data<t2->data) 
{ nw->data=t1->data; 
t1=t1->next; } 
else { nw->data=t2->data;
t2=t2->next; 
if(head3==NULL) 
head3=t3=nw;
else { 
t3->next=nw;
t3=nw; } }
if(t1!=NULL) t3->next=t1;
if(t2!=NULL) t3->next=t2;
} ptr=head3;
do{
printf("%d \t",ptr->data);
ptr=ptr->next;
}while(ptr!=NULL);
}void main(){
struct node *create1(); 
void display(); 
void merge();
printf("\n Enter elements of first list \n"); 
head1=create1(head1);
printf("\n The first link list is \n");
display(head1);
printf("\n Enter elements of second list \n");
head2=create1(head2);
printf("\n The merged list is\n");
merge(head1,head2,head3);}
