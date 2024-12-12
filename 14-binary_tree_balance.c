#include "binary_trees.h"

/**
 * binary_tree_height - Counts the nodes with at least 1 child in a binary tree
 * @tree: A pointer to the root node of the tree to count the nodes
 * Return: The number of nodes with at least 1 child, elsee return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
 * binary_tree_balance - measures the height of a binary tree
 * @tree: pointer to the root of the tree
 * Return: heught of the tree or 0 if the tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return (left_height - right_height);
}
