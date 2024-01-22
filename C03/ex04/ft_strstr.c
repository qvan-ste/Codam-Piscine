/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strstr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/19 16:41:53 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:25:08 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2, int str_i)
{
	int	to_find_i;

	to_find_i = 0;
	while (s2[to_find_i])
	{
		if (s1[str_i] == s2[to_find_i])
		{
			to_find_i++;
			str_i++;
		}
		else
			return (0);
	}
	return (1);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (to_find[0] == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			if (ft_strcmp(str, to_find, i) == 1)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
