/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pars_champ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/06 15:15:07 by abrichar          #+#    #+#             */
/*   Updated: 2018/03/06 16:06:08 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"
#include "libft.h"

int pars_champ(t_champ *champ, char *path_file, int number)
{
	char	str[128];
	int		fd;
	int		i;

	fd = open(path_file, O_RDONLY);
	if (fd == -1)
		return (0);
	if ((read(fd, str, 112)) > 0)
	{
		ft_putstr(str);
		ft_putstr("coucou\n");
		champ->name = (char*)malloc(sizeof(char) * ft_strlen(str) + 1);
		champ->name = str;
		lseek(fd, -7, SEEK_END);
		read(fd, str, 7);
		ft_putstr(str);
		return (1);
	}
	return (0);
}

int	main()
{
	t_champ champ;

	if (pars_champ(&champ, "barriere.cor", 1) == 0)
	{
		ft_putstr("error42\n");
		return (0);
	}
	return (1);
}
