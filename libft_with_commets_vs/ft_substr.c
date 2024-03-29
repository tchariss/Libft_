/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:33:57 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/18 16:19:17 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
// substr - возвращает часть строки
/*
	s - исходная строка (строка)
	start - позиция для начала извлечения строки, равна 1 (откуда)
	len - количество символов для извлечение, если len ==  0-> substr вернет всю строку (сколько)
*/
/*
Функция ft_strsub распределяет (с помощью malloc) и возвращает «свежую» подстроку из строки, 
заданной в качестве аргумента. Подстрока начинается с start и имеет размер len. 
Если start и len не ссылаются на допустимую подстроку, поведение не определено. 
Если распределение завершается неудачно, функция возвращает NULL.
*/
{
	char *str; // новая строка
	size_t a;

	if (s ==  NULL)
		return (NULL);
	str = malloc(sizeof(char) * (len + 1)); // выдклим память для будущей строки
	if (str == 0)
		return (NULL); // защита на малок
	if (start >= ft_strlen(s))
		len = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start + 1;
	a = 0;                                           
	while (a < len && s[start] != '\0')
	{
		str[a] = s[start];
		a++;
		start++;
	}
	str[a] = '\0';
	return (str);
}

// Возвращает часть string (Входная строка)задать с помощью start и length параметров
/*start
    Если start не отрицательно, возвращаемая строка будет начинаться с start'й позиции в string, считая с нуля.
Например, в строке " abcdef" символ в позиции 0 - " a", символ в позиции 2- " c" и т. Д.
    Если start отрицательное значение, возвращаемая строка будет 
начинаться с start'го символа с конца string.
    Если длина string меньше start символов, FALSE будет возвращено
*/
/*length
    Если length задано и положительно, возвращаемая строка будет содержать не более length символов, 
начиная с start(в зависимости от длины string).
    Если length задано и имеет отрицательное значение, то такое количество символов 
будет пропущено с конца string (после вычисления начальной позиции, если а start отрицательно). 
    Если start обозначает позицию этого усечения или за его пределами, FALSE будет возвращено.
    Если length задано и равно 0, FALSE или NULL, будет возвращена пустая строка.
    Если length не указан, start будет возвращена подстрока, начинающаяся до конца строки.
*/
// Пример (substr("pear", 0, 2), true) -> ('pe')
// (substr("", 0, 1), true) -> (false)