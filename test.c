/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junykim <junykim@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 17:46:30 by junykim           #+#    #+#             */
/*   Updated: 2022/05/09 18:44:54 by junykim          ###   ########.fr       */
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

	printf("\n-----------------ex01-----------------\n");

	printf("\n-----------------ex02-----------------\n");

	printf("\n-----------------ex03-----------------\n");

	printf("\n-----------------ex04-----------------\n");

	printf("\n-----------------ex05-----------------\n");

	printf("\n-----------------ex06-----------------\n");

	printf("\n-----------------ex07-----------------\n");

	printf("\n-----------------ex08-----------------\n");

	printf("\n-----------------ex09-----------------\n");

	system("leaks a.out > leaks_result_temp; cat leaks_result_temp | grep leaked && rm -rf leaks_result_temp");
	return (0);
}
