polynomial.h
struct node
{int coeff,exp;
struct node *next;
};
struct node *ptr=NULL;
struct node *create(struct node *poly)
{
struct node *nw=NULL;
int n,i;
printf("\n How many terms : ");
scanf("%d",&n);
printf("\n Enter terms in decreasing order of exponent : \n");
for(i=0;i<n;i++)
{nw=(struct node *)malloc(sizeof(struct node));
printf("Enter coefficient : ");
scanf("%d",&nw->coeff);
printf("Enter exponent : ");
scanf("%d",&nw->exp);
nw->next=NULL;
if(poly==NULL)
{poly=nw;ptr=nw;}
else{
ptr->next=nw;ptr=nw;}}
return(poly);
}
void display(struct node *poly){ptr=poly;
do
{printf("%d",ptr->coeff);
printf("x^");
printf("%d",ptr->exp);
if(ptr->next!=NULL)printf("+");
ptr=ptr->next;
}while(ptr!=NULL);
}struct node *add(struct node *poly1,struct node *poly2,struct node *poly3)
{struct node *t1=NULL,*t2=NULL,*t3=NULL,*nw=NULL;
t1=poly1;
t2=poly2;
while(t1!=NULL && t2!=NULL)
{nw=(struct node *)malloc(sizeof(struct node));
nw->next=NULL;
if(t1->exp>t2->exp){
nw->coeff=t1->coeff;
nw->exp=t1->exp;
t1=t1->next;
}
else{if(t2->exp>t1->exp)
{nw->coeff=t2->coeff;
nw->exp=t2->exp;
t2=t2->next;
}else{
nw->coeff=t1->coeff+t2->coeff;
nw->exp=t1->exp;
t1=t1->next;
t2=t2->next;
}if(poly3==NULL)poly3=t3=nw;
else{
t3->next=nw;t3=nw;
}}
if(t1!=NULL)t3->next=t1;
if(t2!=NULL)t3->next=t2;
return(poly3);
}}
