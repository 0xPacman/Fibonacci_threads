/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <ahjadani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:29:13 by ahjadani          #+#    #+#             */
/*   Updated: 2022/02/20 14:42:50 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIB_H
# define FIB_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>

void        *thread_function(void *data);
long long	ft_fibonacci(long long index);

#endif 