/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfiguet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 14:28:06 by bfiguet           #+#    #+#             */
/*   Updated: 2022/02/23 14:38:52 by bfiguet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef FT_PRINTF_H
# define FT_PRINTF_H
/*
ifdef __APPLE__
#define RETURN_NULL 0x0
#else
#define RETURN_NULL (nill)
#endif */

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void			ft_putstr(char *s);
int				ft_print_str(char *s);
int				ft_print_nbr(int n);
int				ft_print_percent(void);
char			*ft_itoa(int n);
void			ft_putchar(char c);
int				ft_printchar(int c);;
int				ft_flags(va_list args, const char type);
int				ft_printf(const char *s, ...);
void			ft_hexa(unsigned int n, const char type);
int				ft_print_hexa(unsigned int n, const char type);
void			ft_ptr(uintptr_t n);
int				ft_print_ptr(unsigned long long ptr);
char			*ft_uitoa(unsigned int n);
int				ft_print_unsigned(unsigned int n);

#endif
