/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wrhett <wrhett@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 19:58:24 by wrhett            #+#    #+#             */
/*   Updated: 2020/01/14 11:18:15 by wrhett           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdio.h>
# include "libft/libft.h"
# define BUFF_SIZE 4096
# define MESSAGE1 "USAGE: (1 source file) ./fillit <name file.txt>\n"
# define TESTBIT(str, k) (str[k] == '1')

typedef struct	s_fillit
{
	int			id;
	int			tetrimino;
	int			shift;
}				t_fillit;

t_fillit		**ft_fillit_validation(char *str);
t_fillit		**ft_array_struct_create(char *str);
int				ft_tetrimino_validation(char *str);
size_t			ft_min_map(t_fillit **head, size_t len_tab);
void			ft_puzzle_soluthion(t_fillit **head, size_t len, size_t side);
void			ft_print_tetrimino(t_fillit **head, size_t len, size_t side);
void			ft_free_array(t_fillit **tab, size_t index);

#endif
