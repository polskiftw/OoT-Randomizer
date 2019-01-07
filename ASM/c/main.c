#include "dungeon_info.h"
#include "file_select.h"
#include "get_items.h"
#include "models.h"
#include "gfx.h"
#include "text.h"
#include "util.h"
#include "dpad.h"
#include "z64.h"
#include "chests.h"

void c_init() {
    heap_init();
    gfx_init();
    text_init();
    item_overrides_init();
    models_init();
}

void before_game_state_update() {
    handle_pending_items();
    handle_dpad();
}

void after_game_state_update() {
    draw_dungeon_info(&(z64_ctxt.gfx->overlay));
}

void after_scene_init() {
    models_reset();
}
