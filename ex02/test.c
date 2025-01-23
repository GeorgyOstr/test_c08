/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gostroum <gostroum@student.42tokyo.jp      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 10:32:11 by gostroum          #+#    #+#             */
/*   Updated: 2025/01/23 10:45:27 by gostroum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_abs.h"

int	main(int argc, char **argv)
{
	if (argc == 2)
		printf("%i\n", ABS(atoi(argv[1])));
}
