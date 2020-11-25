/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:32:25 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/17 21:24:57 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
/*
    dst – указатель на массив в который будут скопированы данные.
    src – указатель на массив источник копируемых данных.
    len – количество байт для копирования.
*/
/*  Memmove копирует блок из n байт  из  src  в  dest.
    Копирование  будет  произведено  корректно,  даже, если блоки перекрываются.. */
// Функция memmove () возвращает исходное значение dst (возвращает указатель на dst)
//{
 //char     *a; // указатель, для перемещения байтов len в src
  //* malloc захватывает блок памяти
  // Возвращает  char-указатель  на захваченное пространство.*/
  //a = (char *)malloc(sizeof(char)) * len); // определяем размер malloc
 //if ( a =)
  //   return(NULL);
 //ft_memcpy(dst, src, len); // копирует len байтов из области памяти src в область dst
 //return (dst);
// }
{
    size_t a; //счетчик
    unsigned char    *d; // указатели
    unsigned char    *s;
    
    a = 0;
    d = (unsigned char *)dst; // dst - char указатель, помещенный в paste(переменную)
    s = (unsigned char *)src;
    if ( src == dst )
        return (d);
    if (d > s)
    {
        while (len-- > 0)
        {
            d[len] = s[len];
        }
    }
    else
    {
        while (a < len)
        {
            d[a] = s[a];    // printf("%c\n",s[a]);
            a++;
        }
    }
    return(d);
}
// int main()
// {
//     char src[]="abcdefg"; // Исходный массив данных
//     char dst[8];
    
//     printf("%s\n",ft_memmove(dst,src, 2));
//     printf("%s\n",memmove(dst,src, 2));
    
    

//     return 0;
// }
