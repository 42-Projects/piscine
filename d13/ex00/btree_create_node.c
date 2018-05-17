/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:52:46 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/30 12:40:48 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree	*tree;

	tree = (t_btree*)malloc(sizeof(t_btree));
	if (tree)
	{
		tree->item = item;
		tree->right = 0;
		tree->left = 0;
	}
	return (tree);
}
