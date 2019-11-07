#ifndef CALCULATORDLG_H
#define CALCULATORDLG_H

#include <QDialog>

namespace Ui {
class CalculatorDlg;
}

class CalculatorDlg : public QDialog
{
    Q_OBJECT
    
public:
    explicit CalculatorDlg(QWidget *parent = 0);
    ~CalculatorDlg();
private slots:
    void enableCalcButton(void);
    void calcClicked(void);
private:
    Ui::CalculatorDlg *ui;
};

#endif // CALCULATORDLG_H
