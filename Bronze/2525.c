/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2525.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yujo <yujo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/14 20:16:25 by yujo              #+#    #+#             */
/*   Updated: 2020/03/14 20:21:46 by yujo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int main(void)
{
	int h, m;
	int time;

	scanf("%d %d", &h, &m);
	scanf("%d", &time);

	if (time < 60)
		m += time;
	else if (time >= 60)
	{
		h += time / 60;
		m += time % 60;
	}

	if (m >= 60)
	{
		h += 1;
		m -= 60;
	}

	if (h > 23)
		h -= 24;

	printf("%d %d", h, m);

	return 0;
}
