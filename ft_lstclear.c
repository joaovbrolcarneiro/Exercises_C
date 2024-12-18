#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void *))
{
    t_list *tmp;

    while (*lst)
    {
        tmp = (*lst)->next;   // Store next node
        ft_lstdelone(*lst, del); // Delete current node
        *lst = tmp;           // Move to the next node
    }
    *lst = NULL; // Set the list pointer to NULL
}
