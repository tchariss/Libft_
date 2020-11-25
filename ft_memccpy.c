/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:32:18 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/17 21:27:34 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
/*
    dst – указатель на массив в который будут скопированы данные ( указатель на результат )
    src – указатель на массив источник копируемых данных ( указатель на исходный буфер )
    c – код символа, при встрече которого копирование завершается ( Последний копируемый символ)
    n – количество байт для копирования ( количество символов )
*/

/* Функция копирует байты из строки src в dst вплоть до первого появления символа, 
указанного в переменной c (ивключая его), или пока не будет скопировано cnt байтов
Если в строк src есть символ С (преобразованный в char), то копия останавливается и вовзращается
указатель на байт после копирования С в строке dst. Иначе копируется n байт и возвращается NULL */

/*
Возвращаемое значение:  Функция возвращает указатель на массив, в который скопированы данные (если скопировано n байт)
    NULL если в первых n байтах массива источника встречен символ, код которого = указанному в аргументе c  
*/
{
	size_t a; //
	unsigned char *d; // 2 переменные - индикаторы  char
	unsigned char *s;

	a = 0;
	d = (unsigned char *)dst; // помещаем в переменные dst и src параметры
	s = (unsigned char *)src;
	while ( a < n )
	{
		d[a] = s[a];
		if (s[a] == (unsigned char)c) 
        // если s в позиции а = с, то вернем указатель на позицию индекса после нее в параметре dst
			return ((char *)dst + a + 1); 
		a++;
	} // если до A мы не встретим С больше N , вернем NULL
	return (0);
}
/*
int main()
{
    char s[] = "acaFbagIdaeae"; //  // Массив источник данных ( откуда )
    char d[10]; // Массив приемник данных ( куда )
    
    memccpy (d, s,'l', 9); //Копируем 6 байт из массива src в массив dst
    printf("dst: %s\n", d); // Вывод массива dst на консоль
    return 0;
}
*/

