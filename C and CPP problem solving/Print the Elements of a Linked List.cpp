#include<bits/stdc++.h>
#include<malloc.h>
struct node
{
    int data;
    struct node *link;
};
int main()
{
     struct node *t,*f,*e;
     struct node *t1,*t2,*t3;
    int z;
    scanf("%d",&z);

     for(int i=0;i<z;i++)
     {
         t=(struct node*)malloc(sizeof(node));
         //t->data=i+1;
         scanf("%d",&t->data);
         t->link=NULL;
         if(i==0)
         {
             f=t;
         }
         else
         {
            e->link=t;
         }
         e=t;
     }

     while(f!=NULL)
     {
         printf("%d\n",f->data);
         f=f->link;
     }
}
