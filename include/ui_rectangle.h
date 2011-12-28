#ifndef ui_rectangle_h
#define ui_rectangle_h

#include "texture.h"

typedef struct ui_rectangle_temp {

  vector2 top_left;
  vector2 bottom_right;
  
  vector4 color;
  texture* texture;
  
  float border_size;
  vector4 border_color;
  
} ui_rectangle;

ui_rectangle* ui_rectangle_new(vector2 top_left, vector2 bottom_right);
void ui_rectangle_delete(ui_rectangle* rect);

void ui_rectangle_event(ui_rectangle* rect, SDL_Event e);
void ui_rectangle_update(ui_rectangle* rect);
void ui_rectangle_render(ui_rectangle* rect);

void ui_rectangle_set_texture(ui_rectangle* rect, texture* t);

int ui_rectangle_contains_position(ui_rectangle* text, vector2 position);

#endif
