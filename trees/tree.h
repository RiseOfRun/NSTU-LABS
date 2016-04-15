#pragma once

#include "objects.h"

tree * create_tree(tree_data c);

void add_tree(tree **t, tree_data c);

void show_tree(tree *t, FILE *fo);