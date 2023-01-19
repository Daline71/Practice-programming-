#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct btnode
{
	int value;
	struct btnode *l;
	struct btnode *r;
};
typedef struct btnode bt;
bt* root;
bt* new, *list;
bt* create_node();
void display(bt *);
void construct_tree();
void dfs(bt *);

int main()
{
	construct_tree();
	display(root);
	printf("\n");
	
	printf("Depth first traversal\n");
	dfs(root);
	getch();
	return 0;
}

bt *create_node()
{
	new=(bt *)malloc(sizeof(bt));
	new->l=NULL;
	new->l=NULL;
}

void construct_tree()
{
	root=create_node();
	root->value=10;
	root->l=create_node();
	root->l->value=5;
	root->r=create_node();
	root->r->value=20;
	root->l->l=create_node();
	root->l->l->value=3;
	root->l->r=create_node();
	root->l->r->value=7;
	root->l->r->r=create_node();
	root->l->r->r->value=9;
	root->l->l->l=create_node();
	root->l->l->l->value=1;
}

void display(bt *list)
{
	if(list==NULL)
	{
		return;
	}
	
	display(list->l);
	printf("->%d ",list->value);
	display(list->r);
}

void dfs(bt *list)
{
	if(list==NULL)
	{
		return;
	}
	dfs(list->l);
	dfs(list->r);
	printf("->%d ",list->value);
}
