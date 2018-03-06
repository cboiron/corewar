/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corewar.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 18:11:25 by abrichar          #+#    #+#             */
/*   Updated: 2018/03/06 16:01:08 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COREWAR_H
# define COREWAR_H

# include <stdlib.h>
# include "../../libft/includes/libft.h"
# include "./op.h"

typedef	struct	s_champ
{
	char		*name;
	size_t		size;
	int			magic_number;
	int			player_number;
}				t_champ;

#endif
