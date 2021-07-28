#include "MainWindow.h"

void MainWindow::load() {
    // lv_obj_t *label = lv_label_create( lv_scr_act() );
    // lv_label_set_recolor(label, true);   
    // lv_label_set_text( label, "#0000FF Hello#");
    // lv_obj_align( label, LV_ALIGN_CENTER, 0, 0 );
    lv_obj_t * img = lv_img_create(lv_scr_act());
    lv_img_set_src(img, "/tigr.jpg");
    lv_obj_align(img, LV_ALIGN_CENTER, 50, 50);
}