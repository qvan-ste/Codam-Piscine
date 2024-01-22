/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/24 13:22:35 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:33:54 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	check_space(char *str, int *i)
{
	while (str[*i] == ' ' || str[*i] == '\t'
		|| str[*i] == '\n' || str[*i] == '\v'
		|| str[*i] == '\f')
	{
		*i = *i + 1;
	}
	if (!(str[*i] == '+' || str[*i] == '-'
			|| (str[*i] >= '0' && str[*i] <= '9')))
		return (0);
	return (1);
}

int	check_sign(char *str, int *i, int *sign)
{
	int	min;

	min = 0;
	while (str[*i] == '+' || str[*i] == '-')
	{
		if (str[*i] == '-')
			min = min + 1;
		*i = *i + 1;
	}
	if (!(str[*i] >= '0' && str[*i] <= '9'))
		return (0);
	if (min % 2 == 0)
		*sign = 1;
	else
		*sign = -1;
	return (1);
}

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	n;
	int	sign;

	i = 0;
	nbr = 0;
	n = 0;
	if (check_space(str, &i) == 0)
		return (0);
	if (check_sign(str, &i, &sign) == 0)
		return (0);
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = str[i] - '0';
		n = n * 10 + nbr;
		i++;
	}
	return (sign * n);
}
