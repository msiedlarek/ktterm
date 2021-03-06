/*
 * ktterm - ktutils.h
 * Copyright (c) 2013 Arkadiusz Bokowy
 *
 * This file is a part of a ktterm.
 *
 * This project is licensed under the terms of the MIT license.
 *
 */

#ifndef KTTERM_KTUTILS_H_
#define KTTERM_KTUTILS_H_

#include <gtk/gtk.h>
#include <vte/vte.h>


/* Kindle mouse gesture (button) definitions. With every button action
 * an appropriate coordinations are associated. "Tap" and "Hold" actions
 * are obvious - action point. For "Double Tap" the coordinations of the
 * "Tap" is returned, and for pinching and stretching the coordinations
 * of an average (in between) point. */
#define KT_TOUCH_TAP 1
#define KT_TOUCH_TAP_DOUBLE 2
#define KT_TOUCH_PINCH 7
#define KT_TOUCH_STRETCH 8
#define KT_TOUCH_HOLD 9


typedef enum {
	/* place window in the application zone */
	KT_WINDOW_PLACEMENT_APPLICATION,
	/* place window in the chrome zone */
	KT_WINDOW_PLACEMENT_MAXIMIZED,
	/* fill-in the whole screen area */
	KT_WINDOW_PLACEMENT_FULLSCREEN,
} KTWindowPlacement;


void kt_window_set_placement(GtkWindow *window, KTWindowPlacement placement, const char *app);

void kt_terminal_set_colors(VteTerminal *terminal, gboolean reversed);
gint kt_terminal_get_font_size(VteTerminal *terminal);
void kt_terminal_set_font_size(VteTerminal *terminal, gint size);

#endif  /* KTTERM_KTUTILS_H_ */
