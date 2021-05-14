/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_strlen_long_str_test.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tarata <tarata@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 01:28:52 by tarata            #+#    #+#             */
/*   Updated: 2021/05/14 19:40:55 by tarata           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/test_strlen.h"

int	ft_check_long_str(void)
{
	char	*str;
	int		ret;

	str = malloc(sizeof(char) * (1000 + 1));
	memset(str, 'a', 1000);
	str[1000] = '\0';
	if (ft_strlen(str) == strlen(str))
		ret = 1;
	else
		ret = 0;
	free(str);
	return (ret);
}

int	long_str_test(void)
{
	if (ft_check_long_str())
		return (STAT_SUCCESS);
	else
		return (STAT_FAILURE);
}
