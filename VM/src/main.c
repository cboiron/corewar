/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abrichar <abrichar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/13 18:18:51 by abrichar          #+#    #+#             */
/*   Updated: 2018/02/24 17:16:29 by abrichar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "corewar.h"

int usage()
{
	ft_printf("Rentrer ici l'usage.\n");
	ft_printf("./corewar [joueur1] ...\n");
	ft_printf("Maximum de joueur : 4\n");
	exit(EXIT_FAILURE);
}

int main(int argc, char **argv)
{
	if (argc < 2)
		usage();
	ft_printf("%s\n", argv[0]);

	return (0);
}
