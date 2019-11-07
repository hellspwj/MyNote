#include <QtGui/QApplication>
#include "erniedlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ErnieDlg w;
    w.show();
    
    return a.exec();
}
