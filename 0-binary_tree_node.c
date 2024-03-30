#include "binary_trees.h"
#include <stdlib.h>
/*
 * @ binary_tree_node - creates a binary tree node
 * @value- value of new node
 * @parent- pointer of parent binary tree
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t * new_node = (binary_tree_t*)malloc(sizeof(binary_tree_t));
	if(new_node == NULL)
	{
		return NULL;
	}
	new_node->value = value;
	new_node->parent = parent;
	new_node-> left = NULL;
	new_node->right = NULL;

	return (new_node);
}
