#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates an unprecised binary tree node
 * @parent: pointer to the parent node of another node
 * @value: the integer value to store in the new node
 * Return: the pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
