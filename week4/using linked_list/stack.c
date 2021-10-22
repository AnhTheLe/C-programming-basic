#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *link;
} node;

struct node * push(struct node *p, int value)
{
	struct node *temp;
	temp = (struct node *) malloc(sizeof(struct node));
	if(temp == NULL)
	{
		printf("Loi cap phat bo nho\n");
		exit(0);
	}
	
	temp->data = value;
	temp->link = p;
	p = temp;
	return p;
}

struct node *pop(struct node *p, int *value)
{
	struct node *temp;
	if(p == NULL)
	{
		printf("Stack rong");
		exit(0);
	}
	*value = p->data;
	temp = p;
	p = p->link;
	free(temp);
	return p;
}
