/*
 * ITE Tech IT9137 silicon tuner driver
 *
 *  Copyright (C) 2011 Malcolm Priestley (tvboxspy@gmail.com)
 *  IT9137 Copyright (C) ITE Tech Inc.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.=
 */

#ifndef IT913X_PRIV_H
#define IT913X_PRIV_H

#include "it913x.h"
#include <linux/regmap.h>

#define TRIGGER_OFSM		0x0000

struct it913xset {	u32 address;
			u8 reg[15];
			u8 count;
};

static struct it913xset set_it9135_template[] = {
	{0x80ee06, {0x00}, 0x01},
	{0x80ec56, {0x00}, 0x01},
	{0x80ec4c, {0x00}, 0x01},
	{0x80ec4d, {0x00}, 0x01},
	{0x80ec4e, {0x00}, 0x01},
	{0x80011e, {0x00}, 0x01}, /* Older Devices */
	{0x80011f, {0x00}, 0x01},
	{0x000000, {0x00}, 0x00}, /* Terminating Entry */
};

#endif
