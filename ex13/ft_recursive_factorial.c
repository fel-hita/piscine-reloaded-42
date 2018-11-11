/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/03 16:10:09 by fel-hita          #+#    #+#             */
/*   Updated: 2018/10/03 21:33:56 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int n)
{
	if (n == 0 || n == 1)
		return (1);
	else if (n < 13 && n > 1)
		return (ft_recursive_factorial((n - 1)) * n);
	else
		return (0);
}
