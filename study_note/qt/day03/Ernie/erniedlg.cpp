#include "erniedlg.h"
#include "ui_erniedlg.h"

ErnieDlg::ErnieDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ErnieDlg)
{
    ui->setupUi(this);
}

ErnieDlg::~ErnieDlg()
{
    delete ui;
}
void ErnieDlg::loadPhotos(QString const& path)
{
    QStringList filters;
    foreach(QByteArray format,QImageReader::supportedImageFormats())
        filters+="*."+format;
}
