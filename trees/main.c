#define _CRT_SECURE_NO_WARNINGS

#include "tree.h"
#include "queue.h"
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
void main()
{
	FILE *fi = fopen("input.txt", "r");
	FILE *fo = fopen("output.txt", "w");
	tree * d = NULL;
	int c;
	do
	{
		fscanf(fi, "%d", &c);
		add_tree(&d, c);
	} while (c!=0);
	show_tree(d, fo);
	fclose(fi);
	fclose(fo);
}
