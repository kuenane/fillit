/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/02/02 17:36:44 by pbillett          #+#    #+#             */
/*   Updated: 2016/04/14 16:26:03 by pbillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include "libft.h"
# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

# define BUF_SIZE 527

char	*openfile(char* filename);
char	**checkfile(char* filecontent, int *blocknumb);
int	**create_all_tetriminos(char **filecontent, int blocknumb);
char	**ft_createmap(int mapsize);
int	ft_showmap(char **map, int mapsize);
int	resolvesquare(int ***all_tetriminos, int nombrepieces, int mapsize, char **map, int numpiece_actuelle, int previousY, int previousX);
int	resolve_smallest_square(int **filecontent, int blocknumb, int mapsize);

#endif
