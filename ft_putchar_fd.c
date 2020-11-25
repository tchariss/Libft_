/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:32:27 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/16 19:41:14 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Функция ft_putchar_fd выводит символ c в файловый дискриптор fd.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}