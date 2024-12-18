#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>

// Struct definition
typedef struct s_list
{
    void            *content;   // Pointer to the content of the node
    struct s_list   *next;      // Pointer to the next node
}   t_list;

// Function prototypes
t_list  *ft_lstnew(void *content);
void    ft_lstadd_front(t_list **lst, t_list *new);
int     ft_lstsize(t_list *lst);
t_list  *ft_lstlast(t_list *lst);
void    ft_lstadd_back(t_list **lst, t_list *new);
void    ft_lstdelone(t_list *lst, void (*del)(void *));
void    ft_lstclear(t_list **lst, void (*del)(void *));
void    ft_lstiter(t_list *lst, void (*f)(void *));
t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif
