/***
 * Copyright 2018,2019 HAProxy Technologies
 *
 * This file is part of spoa-mirror.
 *
 * spoa-mirror is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * spoa-mirror is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */
#ifndef _PROTO_SPOA_MESSAGE_H
#define _PROTO_SPOA_MESSAGE_H

int spoa_msg_iprep(struct spoe_frame *frame, const char **buf, const char *end, int *ip_score);
void spoa_msg_iprep_action(struct spoe_frame *frame, char **buf, int ip_score);
int spoa_msg_test(struct spoe_frame *frame, const char **buf, const char *end);
int spoa_msg_mirror(struct spoe_frame *frame, const char **buf, const char *end);
void mir_ptr_free(struct mirror **data);

#endif /* _PROTO_SPOA_MESSAGE_H */

/*
 * Local variables:
 *  c-indent-level: 8
 *  c-basic-offset: 8
 * End:
 *
 * vi: noexpandtab shiftwidth=8 tabstop=8
 */
