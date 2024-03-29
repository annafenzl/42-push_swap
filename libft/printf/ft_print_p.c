/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afenzl <afenzl@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/22 11:30:09 by afenzl            #+#    #+#             */
/*   Updated: 2022/06/08 19:50:59 by afenzl           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*ft_hex_p_to_str(unsigned long usn, int c, int num)
{
	char			*str;
	unsigned long	tmp;

	str = malloc((num + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[num] = '\0';
	if (usn == 0)
	{
		*str = '0';
		return (str);
	}
	while (usn)
	{
		num--;
		tmp = usn % 16;
		if (tmp < 10)
			tmp = tmp + '0';
		else
			tmp = tmp - 10 + c;
		str[num] = tmp;
		usn = usn / 16;
	}
	return (str);
}

int	ft_do_hex_p(unsigned long usn, int c)
{
	int				num;
	unsigned long	tmp;
	char			*str;

	num = 0;
	tmp = usn;
	if (usn == 0)
		num++;
	while (usn)
	{
		usn /= 16;
		num++;
	}
	usn = tmp;
	str = ft_hex_p_to_str(usn, c, num);
	ft_putstr_fd(str, 1);
	free(str);
	return (num);
}

int	ft_do_void(unsigned long ptr, int c)
{
	ft_do_char('0');
	ft_do_char('x');
	return (ft_do_hex_p(ptr, c) + 2);
}
