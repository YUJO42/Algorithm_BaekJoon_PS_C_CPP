/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1309.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/17 21:02:57 by yujo              #+#    #+#             */
/*   Updated: 2020/03/17 21:10:17 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int arr[100001] = {0, };

int dp(int n)
{
	arr[0] = 1;
	arr[1] = 3;
	arr[2] = 7;

	if (arr[n])
		return arr[n];
	arr[n] = ((dp(n - 1) * 2) + dp(n - 2)) % 9901;
	return
		arr[n];
}

int main(void)
{
	int n;
	scanf("%d", &n);
	printf("%d", dp(n));

	return 0;
}