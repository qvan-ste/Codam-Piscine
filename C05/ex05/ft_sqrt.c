/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sqrt.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/25 19:11:14 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:26:58 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	i;
	int		min;
	int		max;

	min = 1;
	max = nb;
	while (min <= max)
	{
		i = min + (max - min) / 2;
		if (i * i == nb)
			return (i);
		else if (i * i < nb)
			min = i + 1;
		else if (i * i > nb)
			max = i - 1;
	}
	return (0);
}
