/********************************************************************************
** Form generated from reading UI file 'exportBundlerDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTBUNDLERDIALOG_H
#define UI_EXPORTBUNDLERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ExportBundlerDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_40;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_laplacianVariance;
    QLabel *label_38;
    QDoubleSpinBox *doubleSpinBox_linearSpeed;
    QLabel *label_39;
    QDoubleSpinBox *doubleSpinBox_angularSpeed;
    QLabel *label_41;
    QGroupBox *groupBox_export_points;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QSpinBox *sba_iterations;
    QLabel *label_8;
    QLabel *label_variance;
    QDoubleSpinBox *sba_variance;
    QLabel *label_10;
    QComboBox *comboBox_sbaType;
    QLabel *label_variance_2;
    QCheckBox *sba_rematchFeatures;
    QHBoxLayout *horizontalLayout;
    QLabel *label_42;
    QLineEdit *lineEdit_path;
    QToolButton *toolButton_path;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportBundlerDialog)
    {
        if (ExportBundlerDialog->objectName().isEmpty())
            ExportBundlerDialog->setObjectName(QString::fromUtf8("ExportBundlerDialog"));
        ExportBundlerDialog->resize(557, 466);
        verticalLayout = new QVBoxLayout(ExportBundlerDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(ExportBundlerDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_40 = new QLabel(groupBox);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setWordWrap(true);
        label_40->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        verticalLayout_2->addWidget(label_40);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        doubleSpinBox_laplacianVariance = new QDoubleSpinBox(groupBox);
        doubleSpinBox_laplacianVariance->setObjectName(QString::fromUtf8("doubleSpinBox_laplacianVariance"));
        doubleSpinBox_laplacianVariance->setDecimals(0);
        doubleSpinBox_laplacianVariance->setMinimum(0.000000000000000);
        doubleSpinBox_laplacianVariance->setMaximum(9999.000000000000000);
        doubleSpinBox_laplacianVariance->setValue(0.000000000000000);

        gridLayout->addWidget(doubleSpinBox_laplacianVariance, 0, 0, 1, 1);

        label_38 = new QLabel(groupBox);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setWordWrap(true);
        label_38->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_38, 0, 1, 1, 1);

        doubleSpinBox_linearSpeed = new QDoubleSpinBox(groupBox);
        doubleSpinBox_linearSpeed->setObjectName(QString::fromUtf8("doubleSpinBox_linearSpeed"));
        doubleSpinBox_linearSpeed->setMinimum(0.000000000000000);
        doubleSpinBox_linearSpeed->setValue(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox_linearSpeed, 1, 0, 1, 1);

        label_39 = new QLabel(groupBox);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setWordWrap(true);
        label_39->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_39, 1, 1, 1, 1);

        doubleSpinBox_angularSpeed = new QDoubleSpinBox(groupBox);
        doubleSpinBox_angularSpeed->setObjectName(QString::fromUtf8("doubleSpinBox_angularSpeed"));
        doubleSpinBox_angularSpeed->setMinimum(0.000000000000000);
        doubleSpinBox_angularSpeed->setValue(0.100000000000000);

        gridLayout->addWidget(doubleSpinBox_angularSpeed, 2, 0, 1, 1);

        label_41 = new QLabel(groupBox);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setWordWrap(true);
        label_41->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_41, 2, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout_2->addLayout(gridLayout);


        verticalLayout->addWidget(groupBox);

        groupBox_export_points = new QGroupBox(ExportBundlerDialog);
        groupBox_export_points->setObjectName(QString::fromUtf8("groupBox_export_points"));
        groupBox_export_points->setCheckable(true);
        groupBox_export_points->setChecked(false);
        verticalLayout_3 = new QVBoxLayout(groupBox_export_points);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sba_iterations = new QSpinBox(groupBox_export_points);
        sba_iterations->setObjectName(QString::fromUtf8("sba_iterations"));
        sba_iterations->setMinimum(1);
        sba_iterations->setMaximum(999999);
        sba_iterations->setValue(100);

        gridLayout_2->addWidget(sba_iterations, 1, 0, 1, 1);

        label_8 = new QLabel(groupBox_export_points);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_2->addWidget(label_8, 1, 1, 1, 1);

        label_variance = new QLabel(groupBox_export_points);
        label_variance->setObjectName(QString::fromUtf8("label_variance"));
        label_variance->setWordWrap(true);

        gridLayout_2->addWidget(label_variance, 2, 1, 1, 1);

        sba_variance = new QDoubleSpinBox(groupBox_export_points);
        sba_variance->setObjectName(QString::fromUtf8("sba_variance"));
        sba_variance->setDecimals(2);
        sba_variance->setMinimum(0.010000000000000);
        sba_variance->setMaximum(999.000000000000000);
        sba_variance->setSingleStep(0.010000000000000);
        sba_variance->setValue(1.000000000000000);

        gridLayout_2->addWidget(sba_variance, 2, 0, 1, 1);

        label_10 = new QLabel(groupBox_export_points);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setWordWrap(true);

        gridLayout_2->addWidget(label_10, 0, 1, 1, 1);

        comboBox_sbaType = new QComboBox(groupBox_export_points);
        comboBox_sbaType->addItem(QString());
        comboBox_sbaType->addItem(QString());
        comboBox_sbaType->setObjectName(QString::fromUtf8("comboBox_sbaType"));

        gridLayout_2->addWidget(comboBox_sbaType, 0, 0, 1, 1);

        label_variance_2 = new QLabel(groupBox_export_points);
        label_variance_2->setObjectName(QString::fromUtf8("label_variance_2"));
        label_variance_2->setWordWrap(true);

        gridLayout_2->addWidget(label_variance_2, 3, 1, 1, 1);

        sba_rematchFeatures = new QCheckBox(groupBox_export_points);
        sba_rematchFeatures->setObjectName(QString::fromUtf8("sba_rematchFeatures"));

        gridLayout_2->addWidget(sba_rematchFeatures, 3, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout_3->addLayout(gridLayout_2);


        verticalLayout->addWidget(groupBox_export_points);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_42 = new QLabel(ExportBundlerDialog);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setWordWrap(true);
        label_42->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_42);

        lineEdit_path = new QLineEdit(ExportBundlerDialog);
        lineEdit_path->setObjectName(QString::fromUtf8("lineEdit_path"));
        lineEdit_path->setReadOnly(true);

        horizontalLayout->addWidget(lineEdit_path);

        toolButton_path = new QToolButton(ExportBundlerDialog);
        toolButton_path->setObjectName(QString::fromUtf8("toolButton_path"));

        horizontalLayout->addWidget(toolButton_path);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExportBundlerDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ExportBundlerDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportBundlerDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportBundlerDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ExportBundlerDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportBundlerDialog)
    {
        ExportBundlerDialog->setWindowTitle(QCoreApplication::translate("ExportBundlerDialog", "Export Bundler", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExportBundlerDialog", "Motion Blur Filtering", nullptr));
        label_40->setText(QCoreApplication::translate("ExportBundlerDialog", "These optional parameters can be used to avoid exporting blurred images. 0 means not used.", nullptr));
        doubleSpinBox_laplacianVariance->setSuffix(QString());
        label_38->setText(QCoreApplication::translate("ExportBundlerDialog", "Laplacian variance threshold. Below this threshold, the image is considered blurred. 50 can be good default.", nullptr));
        doubleSpinBox_linearSpeed->setSuffix(QCoreApplication::translate("ExportBundlerDialog", " m/s", nullptr));
        label_39->setText(QCoreApplication::translate("ExportBundlerDialog", "Maximum linear speed. Images taken on fast motions would be more blurry. 0.1 m/s can be good default.", nullptr));
        doubleSpinBox_angularSpeed->setSuffix(QCoreApplication::translate("ExportBundlerDialog", " rad/s", nullptr));
        label_41->setText(QCoreApplication::translate("ExportBundlerDialog", "Maximum angular speed. Images taken on fast motions would be more blurry. 0.4 rad/s can be good default.", nullptr));
        groupBox_export_points->setTitle(QCoreApplication::translate("ExportBundlerDialog", "Export 3D Points", nullptr));
        label_8->setText(QCoreApplication::translate("ExportBundlerDialog", "SBA Iterations", nullptr));
        label_variance->setText(QCoreApplication::translate("ExportBundlerDialog", "SBA Pixel variance used by g2o.", nullptr));
        sba_variance->setSuffix(QString());
        label_10->setText(QCoreApplication::translate("ExportBundlerDialog", "SBA Type", nullptr));
        comboBox_sbaType->setItemText(0, QCoreApplication::translate("ExportBundlerDialog", "g2o", nullptr));
        comboBox_sbaType->setItemText(1, QCoreApplication::translate("ExportBundlerDialog", "cvsba", nullptr));

        label_variance_2->setText(QCoreApplication::translate("ExportBundlerDialog", "Rematch features.", nullptr));
        sba_rematchFeatures->setText(QString());
        label_42->setText(QCoreApplication::translate("ExportBundlerDialog", "Output folder:", nullptr));
        toolButton_path->setText(QCoreApplication::translate("ExportBundlerDialog", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ExportBundlerDialog: public Ui_ExportBundlerDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTBUNDLERDIALOG_H
