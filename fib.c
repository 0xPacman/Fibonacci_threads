/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fib.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahjadani <ahjadani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 14:43:10 by ahjadani          #+#    #+#             */
/*   Updated: 2022/02/20 14:51:40 by ahjadani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fib.h"

long long   sum;

long long		ft_fibonacci(long long index)
{
	if (index < 0)
		return (-1);
	if (index == 1)
		return (1);
	if (index == 0)
		return (0);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

void *thread_function(void *data)
{
	sum = ft_fibonacci((long long)data);
	pthread_exit(0);
}

int main(int argc, char *argv[])
{
    long long n;
    long long i;
    
    i = 1;
    if(argc == 2)
    {
        n = atoi(argv[1]);
        while (i <= n)
        {
            pthread_t thread;
            pthread_create(&thread, NULL, thread_function, (void *)i);
            pthread_join(thread, NULL);
            printf("Fibonacci of %lld is: %lld\n", i,  sum);
            i++;
        }
    }
    else
    {
        write (2, "Error! invalid argument\n" ,25);
        exit(0);
    }
        
}