#include <QtGui/QApplication>
#include "CalculatorDlg.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    CalculatorDlg w;
    w.show();
    
    return a.exec();
}
