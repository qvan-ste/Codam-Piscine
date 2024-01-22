/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_ultimate_div_mod.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: qvan-ste <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/07/13 19:08:17 by qvan-ste      #+#    #+#                 */
/*   Updated: 2024/01/22 19:22:41 by qvan-ste      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	store_div;
	int	store_mod;

	store_div = *a / *b;
	store_mod = *a % *b;
	*a = store_div;
	*b = store_mod;
}
