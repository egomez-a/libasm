/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libasm.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pperea-d <pperea-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 20:08:48 by pperea-d          #+#    #+#             */
/*   Updated: 2021/03/02 14:17:54 by pperea-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBASM_H
# define LIBASM_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <errno.h>

size_t		ft_strlen(const char *str);
char		*ft_strcpy(char *dest, const char *str);
int			ft_strcmp(const char *sr1, const char *sr2);
ssize_t		ft_write(int fd, const void *buffer, size_t nbyte);
ssize_t		ft_read(int fd, void *buffer, size_t nbyte);
char		*ft_strdup(const char *s1);

#endif
