/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_base.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <qvan-ste@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/24 17:37:08 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:32:52 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
	{
		len++;
	}
	return (len);
}

int	check_base(char *str)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = i + 1;
	len = str_len(str);
	while (str[i])
	{
		if (str[i] == '-' || str[i] == '+' || str[i] == '*'
			|| str[i] == '/' || str[i] == '%')
			return (0);
		while (len > 0)
		{
			if (str[i] == str[j])
				return (0);
			len--;
			j++;
		}
		i++;
		j = i + 1;
	}
	if (str_len(str) <= 1)
		return (0);
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	base_len;

	i = 0;
	base_len = str_len(base);
	if (check_base(base) == 0)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			ft_putnbr_base(-(nbr / base_len), base);
			write(1, &base[-(nbr % base_len)], 1);
			return ;
		}
		else
			nbr *= -1;
	}
	if (nbr >= base_len)
		ft_putnbr_base((nbr / base_len), base);
	i = nbr % base_len;
	write(1, &base[i], 1);
}
