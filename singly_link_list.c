singly_link_list.c
#include<stdio.h>
#include"singly_link_list.h"
#include<malloc.h>
#include<stdlib.h>
void main()
{int ch,q=0;do 
{ printf("\n1)Create \n2)Display"); printf("\n3)Insert \n4)Delete"); 
printf("\n5)Search \n6)Exit\n"); 
printf("\nENTER YOUR CHOICE : ");
scanf("%d",&ch); 
switch(ch) { 
case 1: create(); 
break; 
case 2:display(); 
break;
case 3: insert();
break;
case 4: delete();
break; 
case 5: search(); 
break; 
case 6:q=1;
break; } 
}while(q==0); 
}
