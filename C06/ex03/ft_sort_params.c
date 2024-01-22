/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_sort_params.c                                   :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/26 18:04:33 by qvan-ste      #+#    #+#                 */
/*   Updated: 2023/07/31 16:44:19 by qvan-ste      ########   odam.nl         */
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

int	str_cmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if ((unsigned char)s1[i] > (unsigned char)s2[i])
			return (1);
		if ((unsigned char)s1[i] < (unsigned char)s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	swap(char **s1, char **s2)
{
	char	*temp;

	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}

void	sort_arr(char *arr[], int size)
{
	int	i;
	int	j;
	int	k;

	i = 1;
	j = i + 1;
	k = 0;
	while (k < size)
	{
		while (j < size)
		{
			if (str_cmp(arr[i], arr[j]) == 1)
				swap(&arr[i], &arr[j]);
			i++;
			j++;
		}
		k++;
		i = 1;
		j = i + 1;
	}
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	sort_arr(argv, argc);
	while (i < argc)
	{
		write(1, argv[i], str_len(argv[i]));
		write(1, "\n", 1);
		i++;
	}
}
