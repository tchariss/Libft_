/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:32:19 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/16 20:14:52 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
		return ;
	write(fd, s, ft_strlen(s)); 
}
//Функция ft_putstr_fd выводит строку s в файловый дискриптор fd //

/*
1 - идентификатор потока ввода/вывода (дескриптор потока)
2 - адрес, куда нужно помещать или откуда нужно брать байты
3 - максимальное количество байт, которое мы хотим считать (напечатать)

стандартный ввод - 0
вывод - 1
ошибка - 2
*/