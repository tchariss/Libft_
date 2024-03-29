/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:22:26 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/22 17:28:57 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
// ** Функция ft_putnbr_fd выводит число n в файловый дискриптор fd	
{
	int a;
	long int o;
	
	o = n;
	// if ( n == -2147483648)
	// 	{
	// 	ft_putstr_fd("-2147483648", fd);
	// 	return ;
	// 	}
	// if ( n == 2147483647)
	// 	{
	// 	ft_putstr_fd("2147483647", fd);
	// 	return ;
	// 	}
	if ( o < 0 ) 
	{	
		o = o * -1; // делаем n положительным
		write(fd, "-", 1);
	}
	a = o % 10 + '0'; // как 0 по таблице ascii или 48
	if ( o / 10 )
		ft_putnbr_fd(o / 10, fd);
		write (fd, &a, 1);
}

int main ()
{
	ft_putnbr_fd( -12345 , 1);
}
