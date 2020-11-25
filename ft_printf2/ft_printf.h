/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lolivero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 10:29:23 by lolivero          #+#    #+#             */
/*   Updated: 2020/09/28 10:47:10 by lolivero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./libft/libft.h"

typedef struct			s_flags
{
	int		minus;
	int		zero;
	int		width;
	int		point;
	int		precision;
	int		advance;
}						t_flags;

int						ft_printf(const char *input, ...);

t_flags					parser_flags(const char *input, t_flags flags,
		va_list args);
t_flags					init_flags(t_flags flags);
t_flags					treat_flags(char input, t_flags flags, va_list args);
t_flags					treat_wild(t_flags flags, va_list args);

int						special_putchar(char c);
int						is_flag(char c);
int						ft_adjust(int width, char c);
int						parser_conv(char input, t_flags flags, va_list args);
int						char_conv(t_flags flags, va_list args);
int						str_precision(char *str, int len,
		int precision, int mod);
int						str_adjust(int zero, int width);
int						str_conv(t_flags flags, va_list args);
int						put_ullnbr(unsigned long long nb, char *base,
		char *str, int l);
int						pos_minus(t_flags flags, int len, char *str);
int						pos_conv(t_flags flags, va_list args);
int						int_adjust(t_flags flags, int len, int nb);
int						int_precision(t_flags flags, int len, int nb);
int						int_minus(t_flags flags, int len, char *str, int nb);
int						int_conv(t_flags flags, va_list args);
int						unsign_adjust(t_flags flags, int len);
int						unsign_precision(int precision, int len);
int						unsign_minus(t_flags flags, int len, char *str);
int						unsign_conv(t_flags flags, va_list args);
int						putnbr(unsigned int nb, char *base, char *str, int l);
int						hexa_adjust(t_flags flags, int len);
int						hexa_precision(int precision, int len);
int						hexa_minus(t_flags flags, int len, char *str);
int						hexa_conv(t_flags flags, va_list args, char *base);
int						percent_conv(t_flags flags);

char					*ft_ulltoa_base(unsigned long long nbr, char *base);
char					*str_special(char *str, t_flags flags);
char					*ft_itoa_base(unsigned int nbr, char *base);

#endif
