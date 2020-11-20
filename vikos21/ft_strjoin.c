/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/12 13:22:06 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/16 16:46:59 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
/*
Функция ft_strjoin выделяет (с помощью malloc) и возвращает «свежую» строку, 
заканчивающуюся на \0, в результате объединения s1 и s2. Если распределение завершается неудачно, функция возвращает NULL
*/ 

// объединяет строки в строку, разделенную пробелом {'a', 'bc', 'def'}
{
	char *str;
	size_t len;
	int a;
	int b;

	a = 0;
	b = 0;
	if (s1 == NULL || s2 == NULL)
		return(NULL);
	len = ft_strlen(s1) + ft_strlen(s2); 
	if (!(str = malloc(sizeof(char) * (len + 1)))) // выделяем память для str (+1) - с последним знаком '\0' 
		return (NULL); // ( if str == 0 -> return 0)/Users/tchariss/Desktop/vsc/libft/ft_strjoin.c
	while (s1[a] != '\0')
	{
		str[a] = s1[a];
		a++;
	}
	while (s2[b] != '\0')
	{
		str[a] = s2[b];
		b++;
		a++;
	}
	str[a] = '\0';
	return(str);
}
/*
int main()
{
    char s1[] = "abc";
    char s2[] = "def";
//  char *str = ft_strjoin(s1, s2); -> printf("%s\n", str);
    
    printf( "%s\n", ft_strjoin(s1, s2));
    return 0;
}
*/