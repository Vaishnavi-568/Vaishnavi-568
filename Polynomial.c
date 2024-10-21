Polynomial.c 
Que: Write a program that adds two single variablepolynomials. Each polynomial should be represented as a list with linked list implementation.
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
#include"polynomial.h"
void main()
{struct node *poly1=NULL,*poly2=NULL,*poly3=NULL;
struct node *create();
void display();
printf("\n Enter elements of first polynomial \n");
poly1=create(poly1);
printf("\nThe first polynomial is \n");
display(poly1);
printf("\n Enter elements of second polynomial \n");
poly2=create(poly2);
printf("\nThe second polynomial is \n");
display(poly2);
printf("\nThe addition of two polynomials is \n");
poly3=add(poly1,poly2,poly3);
display(poly3);
}
