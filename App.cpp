#include "App.h"

void App::setup() {
    Serial.begin(115200);
    SPIFFS.begin();
    gui_.init();
    mainWindow_.load();
    
    ITask::createTask("gui", &gui_);
}

void App::loop() {
}
