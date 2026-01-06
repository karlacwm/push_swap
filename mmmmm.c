#include <stdlib.h>
#include <stdio.h>

typedef struct t_Node {
	int				x;
	struct t_Node	*next;
}	t_Node;

// int	main(int argc, char *argv[])
// {
// 	t_Node	root;
// 	t_Node	elem2;
// 	root.x = 15;
// 	root.next = &elem2;
// 	elem2.x = -2;
// 	elem2.next = NULL;
// 	printf("%d\n", root.x);
// 	printf("%d\n", elem2.x);
// 	return (0);
// }

int	main(int argc, char *argv[])
{
	t_Node	root;
	root.x = 15;
	root.next = malloc(sizeof(t_Node));
	// malloc(sizeof(t_Node)) allocates memory for the entire
	// node (both x and next) that root.next will point to.
	// malloc returns the address of that memory, which we
	// store in root.next.
	root.next->x = -2;
	// "->x" means to access the x member of the node root.next
	root.next->next = NULL;
	// last node's next pointer is NULL, which marks the end of the list
	
	t_Node*	current = &root;
	// starts at the first node, which is on the stack, not heap
	// that’s why you don’t free it
	while (current != NULL)
	{
		printf("%d\n", current->x);
		current = current->next;
		// to move to next node
	}

	// printf("%d\n", root.x);
	// printf("%d\n", (*root.next).x);
	// (*pointer).member
	free(root.next);
	return (0);
}
