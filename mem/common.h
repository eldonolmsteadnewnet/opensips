/*
 * Copyright (C) 2014 OpenSIPS Solutions
 *
 * This file is part of opensips, a free SIP server.
 *
 * opensips is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version
 *
 * opensips is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 * History:
 * --------
 */

#ifndef mem_common_h
#define mem_common_h

#	ifdef VQ_MALLOC
#		include "vq_malloc.h"
		extern struct vqm_block* mem_block;
		extern struct vqm_block* shm_block;
#	elif defined F_MALLOC
#		include "f_malloc.h"
		extern struct fm_block* mem_block;
		extern struct fm_block* shm_block;
#	elif defined HP_MALLOC
#		include "hp_malloc.h"
		extern struct hp_block* mem_block;
		extern struct hp_block* shm_block;
#   else
#		include "q_malloc.h"
		extern struct qm_block* mem_block;
		extern struct qm_block* shm_block;
#	endif

#endif
