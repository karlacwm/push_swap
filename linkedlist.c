/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   linkedlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcheung <wcheung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 19:49:12 by wcheung           #+#    #+#             */
/*   Updated: 2026/01/09 19:49:28 by wcheung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

// typedef struct t_node {
// 	int				x;
// 	struct t_node	*next;
// }	t_node;

// // ----basic----
// // int	main(int argc, char *argv[])
// // {
// // 	t_node	root;
// // 	t_node	elem2;
// // 	root.x = 15;
// // 	root.next = &elem2;
// // 	elem2.x = -2;
// // 	elem2.next = NULL;
// // 	printf("%d\n", root.x);
// // 	printf("%d\n", elem2.x);
// // 	return (0);
// // }

// // ----move to next node from root----
// // int	main(int argc, char *argv[])
// // {
// // 	t_node	root;
// // 	root.x = 15;
// // 	root.next = malloc(sizeof(t_node));
// // 	// malloc(sizeof(t_node)) allocates memory for the entire
// // 	// node (both x and next) that root.next will point to.
// // 	// malloc returns the address of that memory, which we
// // 	// store in root.next.
// // 	root.next->x = -2;
// // 	// "->x" means to access the x member of the node root.next
// // 	root.next->next = NULL;
// // 	// last node's next pointer is NULL, which marks the end of the list
// // 	t_node*	current = &root;
// // 	// starts at the first node, which is on the stack, not heap
// // 	// that’s why you don’t free it
// // 	while (current != NULL)
// // 	{
// // 		printf("%d\n", current->x);
// // 		current = current->next;
// // 		// to move to next node
// // 	}
// // 	printf("root: %d\n", root.x);
// // 	printf("next: %d\n", (*root.next).x);
// // 	// (*pointer).member
// // 	free(root.next);
// // 	return (0);
// // }

// // ----3 elements----
// // int	main(int argc, char *argv[])
// // {
// // 	t_node	root;
// // 	root.x = 15;
// // 	root.next = malloc(sizeof(t_node));
// // 	root.next->x = -2;
// // 	root.next->next = malloc(sizeof(t_node));
// // 	root.next->next->x = 56;
// // 	root.next->next->next = NULL;
// // 	t_node*	current = &root;
// // 	while (current != NULL)
// // 	{
// // 		printf("%d\n", current->x);
// // 		current = current->next;
// // 	}
// // 	free(root.next->next);
// // 	// free order matters, if i free root.next first, ->next is invalid
// // 	free(root.next);
// // 	return (0);
// // }

// // ----insert element at the end and beginning and handle empty root----
// void	insert_end(t_node **root, int value)
// {
// 	t_node	*new_node;
// 	new_node = malloc(sizeof(t_node));
// 	if (!new_node)
// 		return ;
// 	new_node->next = NULL;
// 	new_node->x = value;
// 	if (*root == NULL)
// 	{
// 		*root = new_node;
// 		return ;
// 	}
// 	t_node *current;
// 	current = *root;
// 	while (current->next != NULL)
// 	{
// 		current=current->next;
// 	}
// 	current->next = new_node;
// }

// void	insert_beginning(t_node **root, int value)
// {
// 	t_node	*new_node = malloc(sizeof(t_node));
// 	if (!new_node)
// 		return ;
// 	new_node->x = value;
// 	new_node->next = *root;
// 	*root = new_node;
// }

// int	main(int argc, char *argv[])
// {
// 	t_node	*root;
// 	root = NULL;
// 	// root = malloc(sizeof(t_node));
// 	// if (!root)
// 	// 	return (0);
// 	// root->x = 15;
// 	// root->next = NULL;
// 	insert_end(&root, -2);
// 	insert_beginning(&root, 6);
// 	t_node*	current = root;
// 	while (current != NULL)
// 	{
// 		printf("%d\n", current->x);
// 		current = current->next;
// 	}
// 	free (root);
// 	return (0);
// }

// // ----deallocate (free malloc)----
// // void	insert_end(t_node **root, int value)
// // {
// // 	t_node	*new_node;
// // 	new_node = malloc(sizeof(t_node));
// // 	if (!new_node)
// // 		return ;
// // 	new_node->next = NULL;
// // 	new_node->x = value;
// // 	if (*root == NULL)
// // 	{
// // 		*root = new_node;
// // 		return ;
// // 	}
// // 	t_node *current;
// // 	current = *root;
// // 	while (current->next != NULL)
// // 	{
// // 		current=current->next;
// // 	}
// // 	current->next = new_node;
// // }
// //
// // void	deallocate(t_node **root)
// // {
// // 	t_node*	current = *root;
// // 	while (current != NULL)
// // 	{
// // 		t_node	*tmp = current;
// // 		current = current->next;
// // 		free (tmp);
// // 	}
// // 	*root = NULL;
// // }
// //
// // int	main(int argc, char *argv[])
// // {
// // 	t_node	*root;
// // 	root = NULL;
// // 	insert_end(&root, -2);
// // 	insert_end(&root, 11);
// // 	t_node*	current = root;
// // 	while (current != NULL)
// // 	{
// // 		printf("%d\n", current->x);
// // 		current = current->next;
// // 	}
// // 	deallocate(&root);
// // 	return (0);
// // }
