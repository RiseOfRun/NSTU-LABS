#pragma once

#include "objects.h"


queue * create_queue();

void add(queue *q, queue_data c);

queue_data pop(queue *q, int *flag);

int is_empty(queue *q);

void show_queue(queue **q, FILE *fo);

int queue_search(queue *q, queue_data z);

void free_queue(queue *q);

