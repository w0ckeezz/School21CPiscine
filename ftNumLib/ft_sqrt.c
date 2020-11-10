/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gjanei <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/28 19:24:10 by gjanei            #+#    #+#             */
/*   Updated: 2020/07/29 05:16:27 by gjanei           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;

	i = 0;
	while ((i * i) <= nb && i < 46341)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
