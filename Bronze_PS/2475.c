/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2475.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/06 20:40:08 by yujo              #+#    #+#             */
/*   Updated: 2020/03/06 20:42:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int arr[5];
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		scanf("%d", &arr[i]);
		sum += (arr[i] * arr[i]);
	}
	printf("%d", sum % 10);

	return 0;
}
