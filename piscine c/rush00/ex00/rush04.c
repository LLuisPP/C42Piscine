/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush_00.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ighernan <ighernan@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 17:09:57 by ighernan          #+#    #+#             */
/*   Updated: 2023/08/13 20:03:19 by ighernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_initial_final(int i, int x, char var1, char var2)
{
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar(var1);
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (i > 1 && i != x)
		{
			ft_putchar ('B');
		}
		else if (i > 1 && i == x)
		{
			ft_putchar(var2);
			ft_putchar('\n');
		}
		i++;
	}
}

void	ft_middle(int i, int x)
{
	while (i <= x)
	{
		if (i == 1)
		{
			ft_putchar('B');
			if (x == 1)
			{
				ft_putchar('\n');
			}
		}
		else if (i > 1 && i != x)
		{
			ft_putchar(' ');
		}
		else if (i > 1 && i == x)
		{
			ft_putchar('B');
			ft_putchar('\n');
		}
		i++;
	}
}

void	rush(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	if (!(x <= 0 || y <= 0))
	{
		while (j <= y)
		{
			if (j == 1)
				ft_initial_final(i, x, 'A', 'C');
			if (j > 1 && j == y)
				ft_initial_final(i, x, 'C', 'A');
			if (j > 1 && j != y)
				ft_middle(i, x);
			i = 1;
			j++;
		}
	}
	else
	{
		ft_putchar('I');
	}
}
/*
int	main(void)
{
	rush(20, 20);
	return (0);
}*/
