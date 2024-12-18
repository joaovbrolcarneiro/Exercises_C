#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void *)) {
    if (!lst || !del)
        return;
    del(lst->content);  // Free the content
    free(lst);  // Free the node
}
