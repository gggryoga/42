/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rozeki <rozeki@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 16:07:14 by rozeki            #+#    #+#             */
/*   Updated: 2022/12/04 16:08:03 by rozeki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstnew(void *content)
{
        t_list  *node;

        node = (t_list*)malloc(sizeof(t_list));
        if (node == NULL)
                return (NULL);
        node->content = (void*)content;
        node->next = NULL;
        return (node);
}