/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 15:16:10 by pbillett          #+#    #+#             */
/*   Updated: 2016/05/09 19:07:01 by pbillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCT_H
# define STRUCT_H

typedef struct		s_map
{
	char			**map;
	int				size;
}					t_map;

typedef struct		s_pos
{
	int				x;
	int				y;
}					t_pos;

typedef struct		s_compt
{
	int				ligne;
	int				dieze;
	int				point;
	int				car;
}					t_compt;

#endif
