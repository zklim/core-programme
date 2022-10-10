/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zhlim <zhlim@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 14:55:50 by zhlim             #+#    #+#             */
/*   Updated: 2022/10/10 10:01:25 by zhlim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (content)
	{
		new = (t_list *)malloc(sizeof(*new));
		if (!new)
			return (NULL);
		new->content = content;
		new->next = NULL;
		return (new);
	}
	return (0);
}

/*int main(void)
{
    t_list *a;
    
    a = ft_lstnew("hello");
    printf("%s\n%p\n", (char *)a->content, a->next);
}*/