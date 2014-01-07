/**
 * @file gui_w_text.h
 * @brief text area implementation
 * @author Duboisset Philippe
 * @version 0.2b
 * @date (yyyy-mm-dd)
 *  0.1b  2013-07-13 : initial version
 *  0.2b  2013-09-07 : Add alignment & word wrap
 *
 * Copyright (C) <2013>  Duboisset Philippe <duboisset.philippe@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef _gui_w_text_h_
#define _gui_w_text_h_

#include "gui.h"

/**
 * @function GUI_W_TextAdd
 * @brief add a text area
 * @param const rect_st *rec: object dimension
 * @param const void *str: text of the text area (will be copied into it)
 * @return g_obj_st *: pointer to the associated generic object if succedeed, NULL if error.
 */
g_obj_st /*@null@*/ *GUI_W_TextAdd(const rect_st *rec, const void /*@null@*/ *str);


#endif
