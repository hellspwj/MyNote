#ifndef ERNIEDLG_H
#define ERNIEDLG_H

#include <QDialog>
#include<QVector>
#include<QPair>

namespace Ui {
class ErnieDlg;
}

class ErnieDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit ErnieDlg(QWidget *parent = 0);
    ~ErnieDlg();
private:
    void loadPhotos(QString const& path);
    
private:
    Ui::ErnieDlg *ui;
    QVector<QPair<QString,QImage> > m_vecPhotos;
};

#endif // ERNIEDLG_H
