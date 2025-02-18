#ifndef VIEWS_H__
#define VIEWS_H__


#include <surface.h>

#include "menu.h"


void view_init_display (menu_t *menu, surface_t *display);

void view_browser_init (menu_t *menu);
void view_browser_display (menu_t *menu, surface_t *display);

void view_file_info_init (menu_t *menu);
void view_file_info_display (menu_t *menu, surface_t *display);

void view_credits_init (menu_t *menu);
void view_credits_display (menu_t *menu, surface_t *display);

void view_load_init (menu_t *menu);
void view_load_display (menu_t *menu, surface_t *display);

void view_error_init (menu_t *menu);
void view_error_display (menu_t *menu, surface_t *display);


#endif
