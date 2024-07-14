/********************************************************************************
** Form generated from reading UI file 'linkRefiningDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LINKREFININGDIALOG_H
#define UI_LINKREFININGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_linkRefiningDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox_link_type;
    QComboBox *comboBox_link_inter_intra;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QLabel *label_2;
    QRadioButton *radioButton_nodes;
    QSpinBox *spinBox_node_from;
    QSpinBox *spinBox_node_to;
    QRadioButton *radioButton_maps;
    QSpinBox *spinBox_map_from;
    QSpinBox *spinBox_map_to;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *linkRefiningDialog)
    {
        if (linkRefiningDialog->objectName().isEmpty())
            linkRefiningDialog->setObjectName(QString::fromUtf8("linkRefiningDialog"));
        linkRefiningDialog->resize(333, 286);
        verticalLayout_2 = new QVBoxLayout(linkRefiningDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox = new QGroupBox(linkRefiningDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout = new QVBoxLayout(groupBox);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox_link_type = new QComboBox(groupBox);
        comboBox_link_type->setObjectName(QString::fromUtf8("comboBox_link_type"));

        verticalLayout->addWidget(comboBox_link_type);

        comboBox_link_inter_intra = new QComboBox(groupBox);
        comboBox_link_inter_intra->addItem(QString());
        comboBox_link_inter_intra->addItem(QString());
        comboBox_link_inter_intra->addItem(QString());
        comboBox_link_inter_intra->setObjectName(QString::fromUtf8("comboBox_link_inter_intra"));

        verticalLayout->addWidget(comboBox_link_inter_intra);


        verticalLayout_2->addWidget(groupBox);

        groupBox_2 = new QGroupBox(linkRefiningDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout = new QGridLayout(groupBox_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 2, 1, 1);

        radioButton_nodes = new QRadioButton(groupBox_2);
        radioButton_nodes->setObjectName(QString::fromUtf8("radioButton_nodes"));

        gridLayout->addWidget(radioButton_nodes, 1, 0, 1, 1);

        spinBox_node_from = new QSpinBox(groupBox_2);
        spinBox_node_from->setObjectName(QString::fromUtf8("spinBox_node_from"));
        spinBox_node_from->setMinimum(1);
        spinBox_node_from->setMaximum(999999);

        gridLayout->addWidget(spinBox_node_from, 1, 1, 1, 1);

        spinBox_node_to = new QSpinBox(groupBox_2);
        spinBox_node_to->setObjectName(QString::fromUtf8("spinBox_node_to"));
        spinBox_node_to->setMinimum(1);
        spinBox_node_to->setMaximum(999999);

        gridLayout->addWidget(spinBox_node_to, 1, 2, 1, 1);

        radioButton_maps = new QRadioButton(groupBox_2);
        radioButton_maps->setObjectName(QString::fromUtf8("radioButton_maps"));

        gridLayout->addWidget(radioButton_maps, 2, 0, 1, 1);

        spinBox_map_from = new QSpinBox(groupBox_2);
        spinBox_map_from->setObjectName(QString::fromUtf8("spinBox_map_from"));
        spinBox_map_from->setMinimum(0);
        spinBox_map_from->setMaximum(999999);
        spinBox_map_from->setValue(0);

        gridLayout->addWidget(spinBox_map_from, 2, 1, 1, 1);

        spinBox_map_to = new QSpinBox(groupBox_2);
        spinBox_map_to->setObjectName(QString::fromUtf8("spinBox_map_to"));
        spinBox_map_to->setMinimum(0);
        spinBox_map_to->setMaximum(999999);
        spinBox_map_to->setValue(0);

        gridLayout->addWidget(spinBox_map_to, 2, 2, 1, 1);


        verticalLayout_2->addWidget(groupBox_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(linkRefiningDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(linkRefiningDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), linkRefiningDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), linkRefiningDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(linkRefiningDialog);
    } // setupUi

    void retranslateUi(QDialog *linkRefiningDialog)
    {
        linkRefiningDialog->setWindowTitle(QCoreApplication::translate("linkRefiningDialog", "Link Refining", nullptr));
        groupBox->setTitle(QCoreApplication::translate("linkRefiningDialog", "Link Type", nullptr));
        comboBox_link_inter_intra->setItemText(0, QCoreApplication::translate("linkRefiningDialog", "Inter and Intra Sessions", nullptr));
        comboBox_link_inter_intra->setItemText(1, QCoreApplication::translate("linkRefiningDialog", "Intra-only", nullptr));
        comboBox_link_inter_intra->setItemText(2, QCoreApplication::translate("linkRefiningDialog", "Inter-only", nullptr));

        groupBox_2->setTitle(QCoreApplication::translate("linkRefiningDialog", "Range", nullptr));
        label_3->setText(QCoreApplication::translate("linkRefiningDialog", "From", nullptr));
        label_2->setText(QCoreApplication::translate("linkRefiningDialog", "To", nullptr));
        radioButton_nodes->setText(QCoreApplication::translate("linkRefiningDialog", "Nodes:", nullptr));
        radioButton_maps->setText(QCoreApplication::translate("linkRefiningDialog", "Maps:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class linkRefiningDialog: public Ui_linkRefiningDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LINKREFININGDIALOG_H
