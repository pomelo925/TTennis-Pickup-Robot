/********************************************************************************
** Form generated from reading UI file 'editConstraintDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITCONSTRAINTDIALOG_H
#define UI_EDITCONSTRAINTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditConstraintDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QLabel *label;
    QDoubleSpinBox *x;
    QLabel *label_4;
    QDoubleSpinBox *roll;
    QLabel *label_2;
    QDoubleSpinBox *y;
    QLabel *label_5;
    QDoubleSpinBox *pitch;
    QLabel *label_3;
    QDoubleSpinBox *z;
    QLabel *label_6;
    QDoubleSpinBox *yaw;
    QDoubleSpinBox *linear_sigma;
    QDoubleSpinBox *angular_sigma;
    QLabel *label_7;
    QLabel *label_8;
    QCheckBox *checkBox_radians;
    QSpacerItem *verticalSpacer;
    QLabel *label_9;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *EditConstraintDialog)
    {
        if (EditConstraintDialog->objectName().isEmpty())
            EditConstraintDialog->setObjectName(QString::fromUtf8("EditConstraintDialog"));
        EditConstraintDialog->resize(430, 231);
        verticalLayout = new QVBoxLayout(EditConstraintDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(EditConstraintDialog);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        x = new QDoubleSpinBox(EditConstraintDialog);
        x->setObjectName(QString::fromUtf8("x"));
        x->setDecimals(6);
        x->setMinimum(-9999.000000000000000);
        x->setMaximum(9999.000000000000000);
        x->setSingleStep(0.001000000000000);

        gridLayout->addWidget(x, 0, 1, 1, 1);

        label_4 = new QLabel(EditConstraintDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 0, 2, 1, 1);

        roll = new QDoubleSpinBox(EditConstraintDialog);
        roll->setObjectName(QString::fromUtf8("roll"));
        roll->setDecimals(6);
        roll->setMinimum(-3.150000000000000);
        roll->setMaximum(3.150000000000000);
        roll->setSingleStep(0.001000000000000);

        gridLayout->addWidget(roll, 0, 3, 1, 1);

        label_2 = new QLabel(EditConstraintDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        y = new QDoubleSpinBox(EditConstraintDialog);
        y->setObjectName(QString::fromUtf8("y"));
        y->setDecimals(6);
        y->setMinimum(-9999.000000000000000);
        y->setMaximum(9999.000000000000000);
        y->setSingleStep(0.001000000000000);

        gridLayout->addWidget(y, 1, 1, 1, 1);

        label_5 = new QLabel(EditConstraintDialog);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 2, 1, 1);

        pitch = new QDoubleSpinBox(EditConstraintDialog);
        pitch->setObjectName(QString::fromUtf8("pitch"));
        pitch->setDecimals(6);
        pitch->setMinimum(-3.150000000000000);
        pitch->setMaximum(3.150000000000000);
        pitch->setSingleStep(0.001000000000000);

        gridLayout->addWidget(pitch, 1, 3, 1, 1);

        label_3 = new QLabel(EditConstraintDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        z = new QDoubleSpinBox(EditConstraintDialog);
        z->setObjectName(QString::fromUtf8("z"));
        z->setDecimals(6);
        z->setMinimum(-9999.000000000000000);
        z->setMaximum(9999.000000000000000);
        z->setSingleStep(0.001000000000000);

        gridLayout->addWidget(z, 2, 1, 1, 1);

        label_6 = new QLabel(EditConstraintDialog);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 2, 2, 1, 1);

        yaw = new QDoubleSpinBox(EditConstraintDialog);
        yaw->setObjectName(QString::fromUtf8("yaw"));
        yaw->setDecimals(6);
        yaw->setMinimum(-3.150000000000000);
        yaw->setMaximum(3.150000000000000);
        yaw->setSingleStep(0.001000000000000);

        gridLayout->addWidget(yaw, 2, 3, 1, 1);

        linear_sigma = new QDoubleSpinBox(EditConstraintDialog);
        linear_sigma->setObjectName(QString::fromUtf8("linear_sigma"));
        linear_sigma->setDecimals(6);
        linear_sigma->setMinimum(0.000000000000000);
        linear_sigma->setMaximum(9999.000000000000000);
        linear_sigma->setSingleStep(0.001000000000000);
        linear_sigma->setValue(0.000000000000000);

        gridLayout->addWidget(linear_sigma, 3, 1, 1, 1);

        angular_sigma = new QDoubleSpinBox(EditConstraintDialog);
        angular_sigma->setObjectName(QString::fromUtf8("angular_sigma"));
        angular_sigma->setDecimals(6);
        angular_sigma->setMinimum(0.000000000000000);
        angular_sigma->setMaximum(3.150000000000000);
        angular_sigma->setSingleStep(0.001000000000000);
        angular_sigma->setValue(0.000000000000000);

        gridLayout->addWidget(angular_sigma, 3, 3, 1, 1);

        label_7 = new QLabel(EditConstraintDialog);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 3, 0, 1, 1);

        label_8 = new QLabel(EditConstraintDialog);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 3, 2, 1, 1);

        checkBox_radians = new QCheckBox(EditConstraintDialog);
        checkBox_radians->setObjectName(QString::fromUtf8("checkBox_radians"));
        checkBox_radians->setChecked(true);

        gridLayout->addWidget(checkBox_radians, 4, 3, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        label_9 = new QLabel(EditConstraintDialog);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        verticalLayout->addWidget(label_9);

        buttonBox = new QDialogButtonBox(EditConstraintDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(EditConstraintDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EditConstraintDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EditConstraintDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditConstraintDialog);
    } // setupUi

    void retranslateUi(QDialog *EditConstraintDialog)
    {
        EditConstraintDialog->setWindowTitle(QCoreApplication::translate("EditConstraintDialog", "Edit Constraint", nullptr));
        label->setText(QCoreApplication::translate("EditConstraintDialog", "x", nullptr));
        x->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        label_4->setText(QCoreApplication::translate("EditConstraintDialog", "roll", nullptr));
        roll->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        label_2->setText(QCoreApplication::translate("EditConstraintDialog", "y", nullptr));
        y->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        label_5->setText(QCoreApplication::translate("EditConstraintDialog", "pitch", nullptr));
        pitch->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        label_3->setText(QCoreApplication::translate("EditConstraintDialog", "z", nullptr));
        z->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        label_6->setText(QCoreApplication::translate("EditConstraintDialog", "yaw", nullptr));
        yaw->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        linear_sigma->setSuffix(QCoreApplication::translate("EditConstraintDialog", " m", nullptr));
        angular_sigma->setSuffix(QCoreApplication::translate("EditConstraintDialog", " rad", nullptr));
        label_7->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>Linear &sigma; </p></body></html>", nullptr));
        label_8->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>Angular \317\203</p></body></html>", nullptr));
        checkBox_radians->setText(QCoreApplication::translate("EditConstraintDialog", "Radians", nullptr));
        label_9->setText(QCoreApplication::translate("EditConstraintDialog", "<html><head/><body><p>Setting \317\203 to 0 will set 9999 covariance.</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditConstraintDialog: public Ui_EditConstraintDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITCONSTRAINTDIALOG_H
