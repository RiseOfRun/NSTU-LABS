#include "queue.h"

queue * create_queue()
{
	queue *q = malloc(sizeof(queue));
	q->head = NULL;
	q->end = NULL;
	return q;
}

void free_queue(queue *q)
{
	queel *k;
	while (q->head != NULL)
	{
		k = q->head;
		q->head = q->head->next;
		free(k);
	}
	free(q);
}
int is_empty(queue *q)
{
	return !(int)q->head;
}

void add(queue *q, queue_data c)
{
	if (q->head != NULL)
	{
		q->end->next = malloc(sizeof(queel));
		q->end = q->end->next;
		q->end->data = c;
		q->end->next = NULL;
	}
	else
	{
		q->head = malloc(sizeof(queel));
		q->head->data = c;
		q->end = q->head;
		q->end->next = NULL;
	}
}

queue_data pop(queue *q, int *flag)
{
	*flag = 1;
	queue_data  c = NULL;
	if (!is_empty(q))
	{
		queel *k = q->head;
		q->head = q->head->next;
		c = k->data;
		free(k);
	}
	else
	{
		*flag = 0;
	}
	return c;
}

void show_queue(queue **q, FILE *fo)
{
	int flag;
	queue *k = create_queue();
	queue_data c;
	while (!is_empty(*q))
	{
		c = pop(*q, &flag);
		add(k, c);
		fprintf_s(fo, "%queue_data", c);
	}
	free_queue(*q);
	*q = k;
}

int queue_search(queue *q, queue_data z)
{

	queel *k = q->head;
	while (k != NULL)
	{
		if (k->data == z)
		{
			return 1;
		}
		k = k->next;
	}
	return 0;
}