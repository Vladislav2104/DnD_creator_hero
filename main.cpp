#include "playeranketa.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PlayerAnketa w;
    w.show();

    return a.exec();
}
