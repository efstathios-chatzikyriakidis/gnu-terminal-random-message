/*
 * program_typedefs.h -- this file contains new data type names.
 *
 * Copyright (C) 2006 Efstathios Chatzikyriakidis (stathis.chatzikyriakidis@gmail.com)
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301 USA
 *
 */

/* boolean data type by using enumeration. */
typedef enum bool { false, true } bool;

/* const pointer to const char. */
typedef const char *const unique;

/* const integer. */
typedef const int cint;

/* command line options. */
typedef struct options_info
{
  /* if true then verbose messages are reported. */
  bool verbose;

  /* the address where the server is running. */
  struct hostent *hostinfo;

  /* the port where the server listens. */
  uint16_t port;

} options_info;
