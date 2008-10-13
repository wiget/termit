#ifndef CONFIGS_H
#define CONFIGS_H

#include <gtk/gtk.h>

enum TermitKbPolicy {TermitKbUseKeycode = 1, TermitKbUseKeysym = 2};

struct Configs
{
    gchar* default_window_title;
    gchar* default_tab_name;
    gchar* default_font;
    gchar* default_command;
    gchar* default_encoding;
    gchar* default_word_chars;
    guint scrollback_lines;
    gint transparent_background;
    gdouble transparent_saturation;
    guint cols;
    guint rows;
    GArray* encodings;
    GArray* user_menus;
    GArray* user_popup_menus;
    GArray* key_bindings;
    gboolean hide_single_tab;
    gboolean show_scrollbar;
    gboolean allow_changing_title;
    enum TermitKbPolicy kb_policy;
};

struct UserMenuItem
{
    gchar* name;
    gchar* userFunc;
};
struct UserMenu
{
    gchar* name;
    GArray* items;
};

extern struct Configs configs;

void termit_deinit_config();
void termit_set_defaults();
void termit_load_config();

void trace_configs();
void trace_keybindings();


#endif /* CONFIGS_H */

