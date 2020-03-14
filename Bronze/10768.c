/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10768.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 18:46:17 by yujo              #+#    #+#             */
/*   Updated: 2020/03/13 18:52:20 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int m, d;

	scanf("%d", &m);
	scanf("%d", &d);
	
	if (m == 2 && d == 18)
		printf("Special");
	else if ((m == 2 && d < 18) || m < 2)
		printf("Before");
	else
		printf("After");

	return 0;
}