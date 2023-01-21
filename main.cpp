#include <QApplication>
#include <QWidget>
#include "calculator.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Calculator clc;
    clc.setWindowTitle("claculator");
    clc.resize(230, 200);

    clc.show();
    return a.exec();
}
