/********************************************************************************
** Form generated from reading UI file 'showpicsdlg.ui'
**
** Created: Mon Aug 3 16:04:18 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWPICSDLG_H
#define UI_SHOWPICSDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ShowPicsDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *m_frmImage;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *m_spcLeft;
    QPushButton *m_btnPrev;
    QPushButton *m_btnNext;
    QPushButton *m_btnClose;

    void setupUi(QDialog *ShowPicsDlg)
    {
        if (ShowPicsDlg->objectName().isEmpty())
            ShowPicsDlg->setObjectName(QString::fromUtf8("ShowPicsDlg"));
        ShowPicsDlg->resize(664, 418);
        verticalLayout = new QVBoxLayout(ShowPicsDlg);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        m_frmImage = new QFrame(ShowPicsDlg);
        m_frmImage->setObjectName(QString::fromUtf8("m_frmImage"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(m_frmImage->sizePolicy().hasHeightForWidth());
        m_frmImage->setSizePolicy(sizePolicy);
        m_frmImage->setFrameShape(QFrame::Box);
        m_frmImage->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(m_frmImage);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_spcLeft = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(m_spcLeft);

        m_btnPrev = new QPushButton(ShowPicsDlg);
        m_btnPrev->setObjectName(QString::fromUtf8("m_btnPrev"));

        horizontalLayout->addWidget(m_btnPrev);

        m_btnNext = new QPushButton(ShowPicsDlg);
        m_btnNext->setObjectName(QString::fromUtf8("m_btnNext"));

        horizontalLayout->addWidget(m_btnNext);

        m_btnClose = new QPushButton(ShowPicsDlg);
        m_btnClose->setObjectName(QString::fromUtf8("m_btnClose"));
        m_btnClose->setAutoDefault(true);
        m_btnClose->setDefault(true);

        horizontalLayout->addWidget(m_btnClose);


        verticalLayout->addLayout(horizontalLayout);

        QWidget::setTabOrder(m_btnPrev, m_btnNext);
        QWidget::setTabOrder(m_btnNext, m_btnClose);

        retranslateUi(ShowPicsDlg);

        QMetaObject::connectSlotsByName(ShowPicsDlg);
    } // setupUi

    void retranslateUi(QDialog *ShowPicsDlg)
    {
        ShowPicsDlg->setWindowTitle(QApplication::translate("ShowPicsDlg", "\345\233\276\347\211\207\347\247\200", 0, QApplication::UnicodeUTF8));
        m_btnPrev->setText(QApplication::translate("ShowPicsDlg", "\344\270\212\344\270\200\345\274\240", 0, QApplication::UnicodeUTF8));
        m_btnNext->setText(QApplication::translate("ShowPicsDlg", "\344\270\213\344\270\200\345\274\240", 0, QApplication::UnicodeUTF8));
        m_btnClose->setText(QApplication::translate("ShowPicsDlg", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ShowPicsDlg: public Ui_ShowPicsDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWPICSDLG_H
