/********************************************************************************
** Form generated from reading UI file 'multiSessionLocSubView.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MULTISESSIONLOCSUBVIEW_H
#define UI_MULTISESSIONLOCSUBVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rtabmap/gui/ImageView.h"

QT_BEGIN_NAMESPACE

class Ui_multiSessionLocSubView
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    rtabmap::ImageView *imageView;
    QProgressBar *locProgressBar;

    void setupUi(QWidget *multiSessionLocSubView)
    {
        if (multiSessionLocSubView->objectName().isEmpty())
            multiSessionLocSubView->setObjectName(QString::fromUtf8("multiSessionLocSubView"));
        multiSessionLocSubView->resize(192, 296);
        verticalLayout = new QVBoxLayout(multiSessionLocSubView);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(multiSessionLocSubView);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        imageView = new rtabmap::ImageView(multiSessionLocSubView);
        imageView->setObjectName(QString::fromUtf8("imageView"));

        verticalLayout->addWidget(imageView);

        locProgressBar = new QProgressBar(multiSessionLocSubView);
        locProgressBar->setObjectName(QString::fromUtf8("locProgressBar"));
        locProgressBar->setValue(24);
        locProgressBar->setTextVisible(true);

        verticalLayout->addWidget(locProgressBar);

        verticalLayout->setStretch(1, 1);

        retranslateUi(multiSessionLocSubView);

        QMetaObject::connectSlotsByName(multiSessionLocSubView);
    } // setupUi

    void retranslateUi(QWidget *multiSessionLocSubView)
    {
        multiSessionLocSubView->setWindowTitle(QCoreApplication::translate("multiSessionLocSubView", "Form", nullptr));
        label->setText(QCoreApplication::translate("multiSessionLocSubView", "Map 0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class multiSessionLocSubView: public Ui_multiSessionLocSubView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MULTISESSIONLOCSUBVIEW_H
