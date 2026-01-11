/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mkbb.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: boksuz <boksuz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/11 21:11:43 by boksuz            #+#    #+#             */
/*   Updated: 2026/01/11 21:11:44 by boksuz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MKBB_H
# define MKBB_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# ifndef MAXPARTITIONS
#  define MAXPARTITIONS 8
# endif

# ifndef u8
#  define u8 unsigned char

# endif

# ifndef u16
#  define unsigned short

# endif

# ifndef u32
# define unsigned short

# endif

struct disklabel
{
	u32 d_magic;
	u16 d_type, d_subtype;
	u8 d_typename[16];
	u_8 d_packname[16];
}

#endif
