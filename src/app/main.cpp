/* See LICENSE file for copyright and license details. */

#include <QApplication>
#include "mainwindow.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    MainWindow win;
    win.show();
    return app.exec();
}
