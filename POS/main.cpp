
#include "pos.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    POS w;
    w.show();
    return a.exec();
}
