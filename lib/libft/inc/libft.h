/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 21:54:08 by marvin            #+#    #+#             */
/*   Updated: 2021/09/29 17:40:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <stdio.h>

# define MAX_LINE 200000

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

/*
**				Part 1
*/

int				ft_atoi(const char *str);
void			ft_bzero(void *s, size_t n);
void			*ft_calloc(size_t nmemb, size_t size);
int				ft_isalnum(int c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *str1, const void *str2, size_t n);
void			*ft_memcpy(void *dst, const void *src, size_t n);
void			*ft_memmove(void *str1, const void *str2, size_t n);
void			*ft_memset(void *str, int c, size_t n);
char			*ft_strchr(const char *s, int c);
char			*ft_strdup(const char *s1);
size_t			ft_strlcat(char *dest, const char *src, size_t size);
size_t			ft_strlcpy(char *dst, const char *src, size_t size);
size_t			ft_strlen(const char *str);
int				ft_strncmp(const char *s1, const char *s2, unsigned int n);
char			*ft_strnstr(const char *hay, const char *needle, size_t len);
char			*ft_strrchr(const char *s, int c);
int				ft_tolower(int c);
int				ft_toupper(int c);

/*
**				Part 2
*/

char			*ft_substr(char const *s, unsigned int start, size_t len);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strtrim(char const *s1, char const *set);
char			**ft_split(char const *s, char c);
char			*ft_itoa(int n);
char			*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int				ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *s, int fd);
void			ft_putendl_fd(char *s, int fd);
void			ft_putnbr_fd(int n, int fd);

/*
**				Bonus
*/

void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstlast(t_list *lst);
t_list			*ft_lstmap(t_list *lst, void *(*f)(void *), \
void (*del)(void *));
t_list			*ft_lstnew(void *content);
int				ft_lstsize(t_list *lst);

/*
**				Additional
*/

int				ft_islower_bonus(int c);
int				ft_isnegative_bonus(int n);
int				ft_isspace_bonus(int c);
int				ft_isupper_bonus(int c);
void			*ft_memfiteme_bonus(void *coisa, size_t nmemb, size_t size);
size_t			ft_mkterny_bonus(size_t check, size_t elseret);
int				ft_numlength_bonus(int n);
void			ft_putchar(char c);
char			*ft_strtok_bonus(char *str, const char *delim);
void			*ft_malloc(size_t size);
int				ft_abs(int x);
int8_t			ft_set8(int8_t *a, int8_t b);
int16_t			ft_set16(int16_t *a, int16_t b);
int32_t			ft_set32(int32_t *a, int32_t b);
int64_t			ft_set64(int64_t *a, int64_t b);
int				ft_str_isdigit(char *str);
char			*ft_char_to_str(char c);
char			*ft_strcat_char(char *str, char c);
int				ft_strcmp(char *s1, char *s2);
int				get_next_line(int fd, char **line);
int				ft_strisdigit(char *s);
t_list			*ft_lstnew(void *content);
void			ft_lstadd_front(t_list **lst, t_list *new);
void			ft_lstadd_back(t_list **lst, t_list *new);
void			ft_lstadd_after_another(t_list *node,
					t_list *node_to_insert);
int				ft_lstsize(t_list *lst);
t_list			*ft_lstlast(t_list *lst);
void			ft_lstdelone(t_list *lst, void (*del)(void*));
void			ft_lstdel_first(t_list **lst, void (*del)(void*));
void			ft_lstdel_last(t_list *lst, void (*del)(void*));
void			ft_lstclear(t_list **lst, void (*del)(void*));
void			ft_lstdel_int(void *content);
void			ft_lstiter(t_list *lst, void (*f)(void *));
t_list			*ft_lstmap(t_list *lst,
					void *(*f)(void *),
					void (*del)(void *));
void			ft_lst_print_s(t_list *lst);
void			ft_lst_print_d(t_list *lst);
long long		ft_lst_get_min(t_list *lst);
long long		ft_lst_get_max(t_list *lst);
long long		ft_lst_get_median(t_list *lst);
long long		ft_lst_get_qrtl(t_list *lst, int qrtl_picked);
long long		ft_lst_get_decile(t_list *lst, int dcl_picked);
long long		ft_lst_get_centile(t_list *lst, int ctl_picked);
int				ft_lst_get_node_index(t_list *lst, long long data_to_find);
void			*ft_lst_get_data_node(t_list *lst, int index);
t_list			*ft_lstdup(t_list *lst);
void			ft_lst_sort(t_list **lst, int (*op)(int, int));
int				ascending(int a, int b);
int				descending(int a, int b);
void			*ft_lst_get_data_last_node(t_list *lst);
long long		ft_round(long double nb);

#endif
