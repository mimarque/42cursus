/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _bonus.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mimarque <mimarque@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/04 20:01:33 by mimarque          #+#    #+#             */
/*   Updated: 2021/11/08 13:55:22 by mimarque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _BONUS_H
# define _BONUS_H

# include <stddef.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list	*ft_lstnew(void *content);
int		ft_lstsize(t_list *lst);
#endif