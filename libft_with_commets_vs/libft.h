/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchariss <tchariss@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 11:33:09 by tchariss          #+#    #+#             */
/*   Updated: 2020/11/20 12:02:43 by tchariss         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H //ifdefined имя
# define LIBFT_H //if !defined имя

# include <string.h> //обработка строк
# include <strings.h> // *s?
# include <unistd.h> // основной заг. файл, содержит символические константы 
# include <ctype.h> //проверка характеристик символов
// и преобразование символов верхнего регистра в нижний и наоборот 
# include <stdlib.h>  // преобразование чисел в текст и наоборот, размещение памяти и генерация случайных чисел
# include <stdio.h> // printf

typedef struct		s_list
{
	void			*content;
	struct s_list  	*next;
}					t_list;

void	*ft_memset(void *b, int c, size_t len); // <string.h>
void	ft_bzero(void *s, size_t n); // <strings.h>
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcpy(char * restrict dst, const char * restrict src, size_t dstsize);
size_t	ft_strlcat(char * restrict dst, const char * restrict src, size_t dstsize);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_atoi(const char *str); //<stdlib.h>
int	ft_isalpha(int c); //<ctype.h> ... Standard C Library (libc, -lc) ??
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
void	*ft_calloc(size_t count, size_t size); //<stdlib.h>, using "malloc"
char	*ft_strdup(const char *s1); //<string.h>, using "malloc"

char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **lst, t_list *new);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *));

#endif