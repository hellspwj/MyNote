#include "CalculatorDlg.h"
#include "ui_CalculatorDlg.h"

CalculatorDlg::CalculatorDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CalculatorDlg)
{
    ui->setupUi(this);

    ui->m_editX->setValidator(new QDoubleValidator(this));
    connect(ui->m_editX,SIGNAL(textChanged(QString const&)),this,SLOT(enableCalcButton(void)));

    ui->m_editY->setValidator(new QDoubleValidator(this));
    connect(ui->m_editY,SIGNAL(textChanged(QString const&)),this,SLOT(enableCalcButton(void)));

    connect(ui->m_btnCalc,SIGNAL(clicked(void)),this,SLOT(calcClicked(void)));
}

CalculatorDlg::~CalculatorDlg()
{
    delete ui;
}

void CalculatorDlg::enableCalcButton(void)
{
    bool bXOk,bYOk;
    ui->m_editX->text().toDouble(&bXOk);
    ui->m_editY->text().toDouble(&bYOk);
    ui->m_btnCalc->setEnabled(bXOk&&bYOk);
    if(!ui->m_btnCalc->isEnabled())
       ui->m_editZ->setText("");
}
void CalculatorDlg::calcClicked(void)
{
    ui->m_editZ->setText(QString::number(ui->m_editX->text().toDouble()+ui->m_editY->text().toDouble(),'g',15));
}
