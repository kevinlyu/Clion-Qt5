/********************************************************************************************
   1. Copy "Qt5Core.dll", "Qt5Gui.dll", and "Qt5Widgets.dll" into cmake-build-debug directory
   2. In "CMake" --> "CMake options"
      add "-DCMAKE_PREFIX_PATH=C:\Qt\Qt5.14.2\5.14.2\mingw73_64\"
   3. In "Edit Run/Debug configurations" --> "Environment Variables"
      add "QT_QPA_PLATFORM_PLUGIN_PATH=C:\Qt\Qt5.14.2\5.14.2\mingw73_64\plugins\platforms"
*********************************************************************************************/

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    QLabel *label = new QLabel(
            "<h1>Qt5 config for clion OK!</h1>");
    label->setWindowTitle("Success");
    label->resize(400, 100);
    label->show();

    return app.exec();
}