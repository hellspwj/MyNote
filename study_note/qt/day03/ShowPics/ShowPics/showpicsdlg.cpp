#include "showpicsdlg.h"
#include<QPainter>
#include "ui_showpicsdlg.h"

ShowPicsDlg::ShowPicsDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowPicsDlg),
    m_idxImage(0)
{
    ui->setupUi(this);

    connect(ui->m_btnPrev,SIGNAL(clicked(void)),this,SLOT(prevClicked(void)));
    connect(ui->m_btnNext,SIGNAL(clicked(void)),this,SLOT(nextClicked(void)));
    connect(ui->m_btnClose,SIGNAL(clicked(void)),this,SLOT(close(void)));
}

ShowPicsDlg::~ShowPicsDlg()
{
    delete ui;
}
void ShowPicsDlg::paintEvent(QPaintEvent*)
{
    QPainter painter(this);
    QRect rcImage=ui->m_frmImage->frameRect();
    rcImage.translate(ui->m_frmImage->pos());
    QImage image(":/"+QString::number(m_idxImage)+".jpg");
    painter.drawImage(rcImage,image);
}
void ShowPicsDlg::prevClicked(void)
{
    m_idxImage--;
    if(m_idxImage<0)
        m_idxImage=5;
    update();
}
void ShowPicsDlg::nextClicked(void)
{
    m_idxImage++;
    if(m_idxImage>5)
        m_idxImage=0;
    update();
}
