/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmorange <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/04 10:50:09 by gmorange          #+#    #+#             */
/*   Updated: 2020/07/04 20:18:38 by swahb            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

//void	ft_putchar(char c);

//void	ft_putchar('A');
	}
}

void	middle_line(int x)
{
	int i;
	i = 0;
	ft_putchar('B');
	if (x > 2)
	{
		while (i != (x - 2))
		{
			ft_putchar(' ');
			i++;
		}
	}
	if (x >= 2)
	{
		ft_putchar('B');
	}
}

void	last_line(int x)
{
	int i;
	i = 0;
	ft_putchar('C');
	if (x > 2)
	{
		while (i != (x - 2))
		{
			ft_putchar('B');
			i++;
		}
	}
	if (x >= 2)
	{
		ft_putchar('C');
	}
}

void	rush(int x, int y)
{
	int i;

	i = 0;
	first_line(x);
	if (y > 2)
	{
		while (i != (y - 2))
		{
			ft_putchar('\n');
			middle_line(x);
			i++;
		}
	}
	if (y >= 2)
	{
		ft_putchar('\n');
		last_line(x);
	}
}
int main (void)
{
	rush(5 , 5); 
	return (0); 
}
