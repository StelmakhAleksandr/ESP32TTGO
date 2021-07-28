#pragma once

#include <SPI.h>
#include "FS.h"
#include "SPIFFS.h"
#include "Gui.h"
#include "MainWindow.h"
#include "ITask.h"

class App {
public:
    void setup();
    void loop();
private:
    MainWindow mainWindow_;
    GUI gui_;
};
