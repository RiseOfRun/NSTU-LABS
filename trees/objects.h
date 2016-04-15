#pragma once
#include <stdlib.h>
#include <stdio.h>

typedef int tree_data;

typedef struct tree
{
	tree_data data;
	struct tree *right;
	struct tree *left;
}tree;

typedef tree * queue_data;

typedef struct queel
{
	queue_data data;
	struct queel * next;
}queel;

typedef struct queue
{
	queel *head;
	queel *end;
}queue;

