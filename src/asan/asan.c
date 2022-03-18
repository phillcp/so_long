/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   asan.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phill <phill@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 18:36:08 by phill             #+#    #+#             */
/*   Updated: 2022/03/14 18:36:15 by phill            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const char *
	__asan_default_options(void)
{
	return ("strict_string_checks=1:\
		detect_stack_use_after_return=1:\
		check_initialization_order=1:\
		strict_init_order=1:\
		detect_invalid_pointer_pairs=9:\
		halt_on_error=0:\
		use_unaligned=1");
}
