#ifndef SHOWPICSDLG_H
#define SHOWPICSDLG_H

#include <QDialog>

namespace Ui {
class ShowPicsDlg;
}

class ShowPicsDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit ShowPicsDlg(QWidget *parent = 0);
    ~ShowPicsDlg();
private:
    void paintEvent(QPaintEvent*);
private slots:
    void prevClicked(void);
    void nextClicked(void);
private:
    Ui::ShowPicsDlg *ui;
    int m_idxImage;
};

#endif // SHOWPICSDLG_H
