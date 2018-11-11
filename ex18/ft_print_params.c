/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:45:58 by fel-hita          #+#    #+#             */
/*   Updated: 2018/10/03 17:23:51 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int n;

	n = 1;
	while (n < argc)
	{
		while (*argv[n] != '\0')
		{
			ft_putchar(*argv[n]);
			argv[n]++;
		}
		ft_putchar('\n');
		n++;
	}
}
