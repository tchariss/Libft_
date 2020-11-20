/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:32:34 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/16 14:00:27 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/* strlcat принимает полный размер буфера.
Для корректной работы функции strlcat, ей необходимо передавать только нультерминальные строки ( символ конца строки ) */

// Терминальный ноль позволяет определить, где заканчивается обрабатываемая строка

/* (1) Функция strlcat () добавляет строку src с завершающим нулем в конец dst. 
Он будет добавлять максимум size - strlen (dst) - 1 байт, завершая результат NULL */

/* (2) Функция strncat добавляет в строку, на которую указывает аргумент s, строку, на которую указывает аргумент s2, 
пока не встретится символ конца строки или пока не будет добавлено n символов. В отличие от других функций, 
strlcat принимает полный размер буфера и гарантирует наличие терминального символа у результата. 
Для корректной работы функции strlcat, ей необходимо передавать только нультерминальные строки.

*/

size_t  ft_strlcat(char * dst, const char * src, size_t dstsize) 
/*
dst — указатель на буфер назначения ( строка куда )
src — указатель на исходную строку ( строка откуда )
dstsize - это размер строкового буфера dst
*/

// Что делает ? добавляет строку(src) к концу строки(dst) и возвращает dst(полученную строку)
{
	size_t a;
	size_t b;
	size_t len;
//  char *d;
//  char *s;
    a = 0;
//  d = (char *)dst;
//  s = (char *)src;
	len = ft_strlen(dst);
	b = len;
	if (dstsize < len)
	{
		return (dstsize + ft_strlen(src));
	}
	while (src[a] != '\0' && len < dstsize - 1)
	{
		dst[len] = src[a];
		a++;
		len++;
	}
	dst[len] = '\0';
	return (b + ft_strlen(src));
}
/*
Конкатенация («присоединение цепями; сцеплеtние») — склеиваниt обычно строк
*/
// int main()
// {
//     char src[] = "vikto";
//     char dst[] = "ria";
    
//     printf("%zu\n", ft_strlcat(dst, src, 5));
//     return 0;
 
// } 