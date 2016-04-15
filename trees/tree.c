#pragma once
#include "queue.h"
#include "tree.h"

tree * create_tree(tree_data c)
{
	tree *t = malloc(sizeof(tree));
	t->data = c;
	t->left = NULL;
	t->right = NULL;
	return t;
}

void add_tree(tree **t, tree_data c)
{
	if (*t==NULL)
	{
		*t = create_tree(c);
	}
	else
	{
		tree * k = *t;
		while (k->data != c)
		{
			if (c<k->data)
			{
				if (k->left ==NULL)
				{
					k->left = create_tree(c);
					k = k->left;
				}
				else k = k->left;
			}
			else if (c>k->data)
			{
				if (k->right == NULL)
				{
					k->right = create_tree(c);
					k = k->right;
				}
				else k = k->right;
			}
		}
	}
};

void show_tree(tree * t, FILE *fo)
{
	int flag;
	queue *q = create_queue();
	if (t != NULL)
	{
		add(q, t);
		do
		{
			t = pop(q, &flag);
			fprintf(fo, "%d ", t->data);
			if (t->left != NULL) add(q, t->left);
			if (t->right != NULL) add(q, t->right);
		} while (!is_empty(q));
	}
}

