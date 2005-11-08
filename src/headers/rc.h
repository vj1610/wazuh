/*   $OSSEC, rc.h, v0.1, 2005/11/06, Daniel B. Cid$   */

/* Copyright (C) 2004,2005 Daniel B. Cid <dcid@ossec.net>
 * All right reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 2) as published by the FSF - Free Software
 * Foundation
 */

/* Remote Control shared headers */

#ifndef __RC_H

#define __RC_H


/* Global headers */
#define CONTROL_HEADER      "#!-"

#define IsValidHeader(str)  ((str[0] == '#') && \
                             (str[1] == '!') && \
                             (str[2] == '-') && \
                             (str+=3) )       


/* Exec message */
#define EXECD_HEADER        "execd "

/* File update message */
#define FILE_UPDATE_HEADER  "up file "

/* File closing message */
#define FILE_CLOSE_HEADER   "close file "

#endif

/* EOF */
