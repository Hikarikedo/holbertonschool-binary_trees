#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: If tree is NULL, function returns 0
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	while (tree != NULL && tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
