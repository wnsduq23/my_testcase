/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:46:30 by junykim           #+#    #+#             */
/*   Updated: 2022/05/09 17:49:07 by junykim          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/** #include "" */

int main(void)
{
	int	a;
	int	*p;

	printf("-----------------ex01-----------------\n");

	printf("-----------------ex02-----------------\n");

	printf("-----------------ex03-----------------\n");

	printf("-----------------ex04-----------------\n");

	printf("-----------------ex05-----------------\n");

	printf("-----------------ex06-----------------\n");

	printf("-----------------ex07-----------------\n");

	printf("-----------------ex08-----------------\n");

	printf("-----------------ex09-----------------\n");

	system("leaks a.out > leaks_result_temp; cat leaks_result_temp | grep leaked && rm -rf leaks_result_temp");
	return (0);
}
