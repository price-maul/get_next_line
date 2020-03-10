/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmaul <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 13:35:32 by pmaul             #+#    #+#             */
/*   Updated: 2019/09/24 13:35:44 by pmaul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nbr)
{
	int sqrt;

	if (nbr < 0)
		return (0);
	sqrt = 1;
	while (sqrt * sqrt < nbr)
		++sqrt;
	if (sqrt * sqrt == nbr)
		return (sqrt);
	return (0);
}
