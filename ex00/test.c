/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:09:56 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/23 10:24:18 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void    ft_putchar(char c)
{
	(void)c;
	write(1, "OK\n", 3);
}
void    ft_swap(int *a, int *b)
{
	(void)a;
	(void)b;
	write(1, "OK\n", 3);
}
void    ft_putstr(char *str)
{
	(void)str;
	write(1, "OK\n", 3);
}
int     ft_strlen(char *str)
{
	(void)str;
	write(1, "OK\n", 3);
	return (0);
}
int     ft_strcmp(char *s1, char *s2)
{
	(void)s1;
	(void)s2;
	write(1, "OK\n", 3);
	return (0);
}
int main()
{
	ft_putchar('a');
}
