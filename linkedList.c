#include<stdio.h>
	
int main()
{
	struct node
	{
		int data;
		struct node *next;
	};
	struct node *head;
	struct node *one= NULL;
	struct node *two= NULL;
	struct node *three= NULL;
	
	one =malloc(sizeof(struct node));
	two =malloc(sizeof(struct node));
	three =malloc(sizeof(struct node));
	
	one->data=10;
	two->data=20;
	three->data=30;
	
	one->next=two;
	two->next=three;
	three->next=NULL;
	
	head=one;
    void printList(struct node *p)
{
	while(p!=NULL)
	{
		printf("->%d",p->data);
		p=p->next;
	}
}
	printList(head);
	return 0;
}
