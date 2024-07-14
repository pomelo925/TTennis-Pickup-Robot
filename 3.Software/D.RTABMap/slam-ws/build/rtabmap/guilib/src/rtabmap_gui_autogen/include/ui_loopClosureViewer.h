/********************************************************************************
** Form generated from reading UI file 'loopClosureViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOOPCLOSUREVIEWER_H
#define UI_LOOPCLOSUREVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rtabmap/gui/CloudViewer.h"

QT_BEGIN_NAMESPACE

class Ui_loopClosureViewer
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_idA;
    QLabel *label_idB;
    QLabel *label_transform;
    QSpacerItem *horizontalSpacer_2;
    QCheckBox *checkBox_rawCloud;
    rtabmap::CloudViewer *cloudViewerTransform;

    void setupUi(QWidget *loopClosureViewer)
    {
        if (loopClosureViewer->objectName().isEmpty())
            loopClosureViewer->setObjectName(QString::fromUtf8("loopClosureViewer"));
        loopClosureViewer->resize(515, 390);
        verticalLayout = new QVBoxLayout(loopClosureViewer);
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_idA = new QLabel(loopClosureViewer);
        label_idA->setObjectName(QString::fromUtf8("label_idA"));
        label_idA->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_idA);

        label_idB = new QLabel(loopClosureViewer);
        label_idB->setObjectName(QString::fromUtf8("label_idB"));
        label_idB->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_idB);

        label_transform = new QLabel(loopClosureViewer);
        label_transform->setObjectName(QString::fromUtf8("label_transform"));
        label_transform->setAlignment(Qt::AlignCenter);
        label_transform->setWordWrap(true);
        label_transform->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_2->addWidget(label_transform);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        checkBox_rawCloud = new QCheckBox(loopClosureViewer);
        checkBox_rawCloud->setObjectName(QString::fromUtf8("checkBox_rawCloud"));

        horizontalLayout_2->addWidget(checkBox_rawCloud);


        verticalLayout->addLayout(horizontalLayout_2);

        cloudViewerTransform = new rtabmap::CloudViewer(loopClosureViewer);
        cloudViewerTransform->setObjectName(QString::fromUtf8("cloudViewerTransform"));

        verticalLayout->addWidget(cloudViewerTransform);

        verticalLayout->setStretch(1, 1);

        retranslateUi(loopClosureViewer);

        QMetaObject::connectSlotsByName(loopClosureViewer);
    } // setupUi

    void retranslateUi(QWidget *loopClosureViewer)
    {
        loopClosureViewer->setWindowTitle(QCoreApplication::translate("loopClosureViewer", "Form", nullptr));
        label_idA->setText(QString());
        label_idB->setText(QString());
        label_transform->setText(QString());
        checkBox_rawCloud->setText(QCoreApplication::translate("loopClosureViewer", "Raw  cloud", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loopClosureViewer: public Ui_loopClosureViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOOPCLOSUREVIEWER_H
