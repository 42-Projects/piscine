/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/30 11:44:06 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/03/30 12:41:42 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BTREE_H
# define FT_BTREE_H

typedef	struct		s_btree
{
	struct s_b_tree	*right;
	struct s_b_tree	*left;
	void			*item;
}					t_btree;
#endif
