/********************************************************************************
** Form generated from reading UI file 'depthCalibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEPTHCALIBRATIONDIALOG_H
#define UI_DEPTHCALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DepthCalibrationDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label_111;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QCheckBox *checkBox_laserScan;
    QLabel *label_110;
    QSpinBox *spinBox_decimation;
    QLabel *label_108;
    QDoubleSpinBox *doubleSpinBox_maxDepth;
    QLabel *label_132;
    QDoubleSpinBox *doubleSpinBox_minDepth;
    QLabel *label_133;
    QDoubleSpinBox *doubleSpinBox_voxelSize;
    QLabel *label_voxel;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QSpinBox *spinBox_bin_width;
    QSpinBox *spinBox_smoothing;
    QLabel *label_113;
    QLabel *label_117;
    QLabel *label_120;
    QLabel *label_116;
    QSpinBox *spinBox_bin_height;
    QLabel *label_118;
    QLabel *label_115;
    QLabel *label_119;
    QLabel *label_width;
    QLabel *label_height;
    QDoubleSpinBox *doubleSpinBox_bin_depth;
    QDoubleSpinBox *doubleSpinBox_maxDepthModel;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_coneRadius;
    QDoubleSpinBox *doubleSpinBox_coneStdDevThresh;
    QLabel *label_voxel_2;
    QLabel *label_voxel_3;
    QLabel *label_109;
    QCheckBox *checkBox_resetModel;
    QHBoxLayout *horizontalLayout;
    QLabel *label_112;
    QLabel *label_trainingSamples;
    QLabel *label_114;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DepthCalibrationDialog)
    {
        if (DepthCalibrationDialog->objectName().isEmpty())
            DepthCalibrationDialog->setObjectName(QString::fromUtf8("DepthCalibrationDialog"));
        DepthCalibrationDialog->resize(523, 781);
        verticalLayout = new QVBoxLayout(DepthCalibrationDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_111 = new QLabel(DepthCalibrationDialog);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setTextFormat(Qt::RichText);
        label_111->setWordWrap(true);

        verticalLayout->addWidget(label_111);

        groupBox_2 = new QGroupBox(DepthCalibrationDialog);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        checkBox_laserScan = new QCheckBox(groupBox_2);
        checkBox_laserScan->setObjectName(QString::fromUtf8("checkBox_laserScan"));

        gridLayout_3->addWidget(checkBox_laserScan, 0, 0, 1, 1);

        label_110 = new QLabel(groupBox_2);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setWordWrap(true);
        label_110->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_110, 0, 1, 1, 1);

        spinBox_decimation = new QSpinBox(groupBox_2);
        spinBox_decimation->setObjectName(QString::fromUtf8("spinBox_decimation"));
        spinBox_decimation->setMinimum(1);
        spinBox_decimation->setMaximum(32);
        spinBox_decimation->setValue(1);

        gridLayout_3->addWidget(spinBox_decimation, 1, 0, 1, 1);

        label_108 = new QLabel(groupBox_2);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setWordWrap(true);
        label_108->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_108, 1, 1, 1, 1);

        doubleSpinBox_maxDepth = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_maxDepth->setObjectName(QString::fromUtf8("doubleSpinBox_maxDepth"));
        doubleSpinBox_maxDepth->setDecimals(1);
        doubleSpinBox_maxDepth->setMaximum(100.000000000000000);
        doubleSpinBox_maxDepth->setSingleStep(0.100000000000000);
        doubleSpinBox_maxDepth->setValue(4.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_maxDepth, 2, 0, 1, 1);

        label_132 = new QLabel(groupBox_2);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setWordWrap(true);
        label_132->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_132, 2, 1, 1, 1);

        doubleSpinBox_minDepth = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_minDepth->setObjectName(QString::fromUtf8("doubleSpinBox_minDepth"));
        doubleSpinBox_minDepth->setDecimals(1);
        doubleSpinBox_minDepth->setMaximum(100.000000000000000);
        doubleSpinBox_minDepth->setSingleStep(0.100000000000000);
        doubleSpinBox_minDepth->setValue(0.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_minDepth, 3, 0, 1, 1);

        label_133 = new QLabel(groupBox_2);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        label_133->setWordWrap(true);
        label_133->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_133, 3, 1, 1, 1);

        doubleSpinBox_voxelSize = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox_voxelSize->setObjectName(QString::fromUtf8("doubleSpinBox_voxelSize"));
        doubleSpinBox_voxelSize->setDecimals(3);
        doubleSpinBox_voxelSize->setMaximum(1.000000000000000);
        doubleSpinBox_voxelSize->setSingleStep(0.010000000000000);
        doubleSpinBox_voxelSize->setValue(0.010000000000000);

        gridLayout_3->addWidget(doubleSpinBox_voxelSize, 4, 0, 1, 1);

        label_voxel = new QLabel(groupBox_2);
        label_voxel->setObjectName(QString::fromUtf8("label_voxel"));
        label_voxel->setWordWrap(true);
        label_voxel->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_3->addWidget(label_voxel, 4, 1, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox_2);

        groupBox = new QGroupBox(DepthCalibrationDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spinBox_bin_width = new QSpinBox(groupBox);
        spinBox_bin_width->setObjectName(QString::fromUtf8("spinBox_bin_width"));
        spinBox_bin_width->setMinimum(1);
        spinBox_bin_width->setMaximum(999);
        spinBox_bin_width->setValue(8);

        gridLayout_2->addWidget(spinBox_bin_width, 2, 0, 1, 1);

        spinBox_smoothing = new QSpinBox(groupBox);
        spinBox_smoothing->setObjectName(QString::fromUtf8("spinBox_smoothing"));
        spinBox_smoothing->setMinimum(1);
        spinBox_smoothing->setMaximum(32);
        spinBox_smoothing->setValue(1);

        gridLayout_2->addWidget(spinBox_smoothing, 6, 0, 1, 1);

        label_113 = new QLabel(groupBox);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setWordWrap(true);
        label_113->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_113, 2, 1, 1, 1);

        label_117 = new QLabel(groupBox);
        label_117->setObjectName(QString::fromUtf8("label_117"));
        label_117->setWordWrap(true);
        label_117->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_117, 4, 1, 1, 1);

        label_120 = new QLabel(groupBox);
        label_120->setObjectName(QString::fromUtf8("label_120"));
        label_120->setWordWrap(true);
        label_120->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_120, 1, 1, 1, 1);

        label_116 = new QLabel(groupBox);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setWordWrap(true);
        label_116->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_116, 3, 1, 1, 1);

        spinBox_bin_height = new QSpinBox(groupBox);
        spinBox_bin_height->setObjectName(QString::fromUtf8("spinBox_bin_height"));
        spinBox_bin_height->setMinimum(1);
        spinBox_bin_height->setMaximum(999);
        spinBox_bin_height->setValue(6);

        gridLayout_2->addWidget(spinBox_bin_height, 3, 0, 1, 1);

        label_118 = new QLabel(groupBox);
        label_118->setObjectName(QString::fromUtf8("label_118"));
        label_118->setWordWrap(true);
        label_118->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_118, 5, 1, 1, 1);

        label_115 = new QLabel(groupBox);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setWordWrap(true);
        label_115->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_115, 6, 1, 1, 1);

        label_119 = new QLabel(groupBox);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setWordWrap(true);
        label_119->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_119, 0, 1, 1, 1);

        label_width = new QLabel(groupBox);
        label_width->setObjectName(QString::fromUtf8("label_width"));
        label_width->setWordWrap(true);
        label_width->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_width, 0, 0, 1, 1);

        label_height = new QLabel(groupBox);
        label_height->setObjectName(QString::fromUtf8("label_height"));
        label_height->setWordWrap(true);
        label_height->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_height, 1, 0, 1, 1);

        doubleSpinBox_bin_depth = new QDoubleSpinBox(groupBox);
        doubleSpinBox_bin_depth->setObjectName(QString::fromUtf8("doubleSpinBox_bin_depth"));
        doubleSpinBox_bin_depth->setDecimals(1);
        doubleSpinBox_bin_depth->setMinimum(0.100000000000000);
        doubleSpinBox_bin_depth->setMaximum(10.000000000000000);
        doubleSpinBox_bin_depth->setSingleStep(1.000000000000000);
        doubleSpinBox_bin_depth->setValue(2.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_bin_depth, 4, 0, 1, 1);

        doubleSpinBox_maxDepthModel = new QDoubleSpinBox(groupBox);
        doubleSpinBox_maxDepthModel->setObjectName(QString::fromUtf8("doubleSpinBox_maxDepthModel"));
        doubleSpinBox_maxDepthModel->setDecimals(0);
        doubleSpinBox_maxDepthModel->setMinimum(1.000000000000000);
        doubleSpinBox_maxDepthModel->setMaximum(100.000000000000000);
        doubleSpinBox_maxDepthModel->setSingleStep(1.000000000000000);
        doubleSpinBox_maxDepthModel->setValue(10.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_maxDepthModel, 5, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout->addWidget(groupBox);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        doubleSpinBox_coneRadius = new QDoubleSpinBox(DepthCalibrationDialog);
        doubleSpinBox_coneRadius->setObjectName(QString::fromUtf8("doubleSpinBox_coneRadius"));
        doubleSpinBox_coneRadius->setDecimals(2);
        doubleSpinBox_coneRadius->setMinimum(0.010000000000000);
        doubleSpinBox_coneRadius->setMaximum(1.000000000000000);
        doubleSpinBox_coneRadius->setSingleStep(0.010000000000000);
        doubleSpinBox_coneRadius->setValue(0.020000000000000);

        gridLayout->addWidget(doubleSpinBox_coneRadius, 2, 0, 1, 1);

        doubleSpinBox_coneStdDevThresh = new QDoubleSpinBox(DepthCalibrationDialog);
        doubleSpinBox_coneStdDevThresh->setObjectName(QString::fromUtf8("doubleSpinBox_coneStdDevThresh"));
        doubleSpinBox_coneStdDevThresh->setDecimals(2);
        doubleSpinBox_coneStdDevThresh->setMinimum(0.010000000000000);
        doubleSpinBox_coneStdDevThresh->setMaximum(1.000000000000000);
        doubleSpinBox_coneStdDevThresh->setSingleStep(0.010000000000000);
        doubleSpinBox_coneStdDevThresh->setValue(0.030000000000000);

        gridLayout->addWidget(doubleSpinBox_coneStdDevThresh, 3, 0, 1, 1);

        label_voxel_2 = new QLabel(DepthCalibrationDialog);
        label_voxel_2->setObjectName(QString::fromUtf8("label_voxel_2"));
        label_voxel_2->setWordWrap(true);
        label_voxel_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_voxel_2, 2, 1, 1, 1);

        label_voxel_3 = new QLabel(DepthCalibrationDialog);
        label_voxel_3->setObjectName(QString::fromUtf8("label_voxel_3"));
        label_voxel_3->setWordWrap(true);
        label_voxel_3->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_voxel_3, 3, 1, 1, 1);

        label_109 = new QLabel(DepthCalibrationDialog);
        label_109->setObjectName(QString::fromUtf8("label_109"));
        label_109->setWordWrap(true);
        label_109->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_109, 4, 1, 1, 1);

        checkBox_resetModel = new QCheckBox(DepthCalibrationDialog);
        checkBox_resetModel->setObjectName(QString::fromUtf8("checkBox_resetModel"));

        gridLayout->addWidget(checkBox_resetModel, 4, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_112 = new QLabel(DepthCalibrationDialog);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setWordWrap(true);
        label_112->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_112);

        label_trainingSamples = new QLabel(DepthCalibrationDialog);
        label_trainingSamples->setObjectName(QString::fromUtf8("label_trainingSamples"));
        label_trainingSamples->setWordWrap(true);
        label_trainingSamples->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_trainingSamples);

        label_114 = new QLabel(DepthCalibrationDialog);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setWordWrap(true);
        label_114->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout->addWidget(label_114);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(DepthCalibrationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DepthCalibrationDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), DepthCalibrationDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(DepthCalibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *DepthCalibrationDialog)
    {
        DepthCalibrationDialog->setWindowTitle(QCoreApplication::translate("DepthCalibrationDialog", "Depth Calibration", nullptr));
        label_111->setText(QCoreApplication::translate("DepthCalibrationDialog", "<html><head/><body><p>CLAMS approach is used for depth calibration. Please visit <a href=\"http://www.alexteichman.com/octo/clams/\"><span style=\" text-decoration: underline; color:#0000ff;\">CLAMS website</span></a> for tips about how to get a good map for depth calibration. If you want to process multiple mapping sessions, uncheck &quot;Reset previous model&quot;. If logger's level is debug, 3D map and generated depth images will be shown during the calibration.</p></body></html>", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("DepthCalibrationDialog", "Map generation", nullptr));
        checkBox_laserScan->setText(QString());
        label_110->setText(QCoreApplication::translate("DepthCalibrationDialog", "Use 3D laser scans for 3D map.", nullptr));
        label_108->setText(QCoreApplication::translate("DepthCalibrationDialog", "Decimation (1-2-4-8-...).", nullptr));
        doubleSpinBox_maxDepth->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " m", nullptr));
        label_132->setText(QCoreApplication::translate("DepthCalibrationDialog", "Maximum depth (0 means no limit).", nullptr));
        doubleSpinBox_minDepth->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " m", nullptr));
        label_133->setText(QCoreApplication::translate("DepthCalibrationDialog", "Minimum depth.", nullptr));
        doubleSpinBox_voxelSize->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " m", nullptr));
        label_voxel->setText(QCoreApplication::translate("DepthCalibrationDialog", "Voxel size. Set 0 to disable.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DepthCalibrationDialog", "Distortion Model", nullptr));
        spinBox_bin_width->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " pix", nullptr));
        label_113->setText(QCoreApplication::translate("DepthCalibrationDialog", "Bin width. Should be a multiple of image width.", nullptr));
        label_117->setText(QCoreApplication::translate("DepthCalibrationDialog", "Bin depth.", nullptr));
        label_120->setText(QCoreApplication::translate("DepthCalibrationDialog", "Image height.", nullptr));
        label_116->setText(QCoreApplication::translate("DepthCalibrationDialog", "Bin height. Should be a multiple of image height.", nullptr));
        spinBox_bin_height->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " pix", nullptr));
        label_118->setText(QCoreApplication::translate("DepthCalibrationDialog", "Maximum depth.", nullptr));
        label_115->setText(QCoreApplication::translate("DepthCalibrationDialog", "Smoothing.", nullptr));
        label_119->setText(QCoreApplication::translate("DepthCalibrationDialog", "Image width.", nullptr));
        label_width->setText(QCoreApplication::translate("DepthCalibrationDialog", "NA", nullptr));
        label_height->setText(QCoreApplication::translate("DepthCalibrationDialog", "NA", nullptr));
        doubleSpinBox_bin_depth->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " m", nullptr));
        doubleSpinBox_maxDepthModel->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " m", nullptr));
        doubleSpinBox_coneRadius->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " m", nullptr));
        doubleSpinBox_coneStdDevThresh->setSuffix(QCoreApplication::translate("DepthCalibrationDialog", " m", nullptr));
        label_voxel_2->setText(QCoreApplication::translate("DepthCalibrationDialog", "Cone radius.", nullptr));
        label_voxel_3->setText(QCoreApplication::translate("DepthCalibrationDialog", "Cone standard deviation threshold.", nullptr));
        label_109->setText(QCoreApplication::translate("DepthCalibrationDialog", "Reset previous model.", nullptr));
        checkBox_resetModel->setText(QString());
        label_112->setText(QCoreApplication::translate("DepthCalibrationDialog", "Current model:", nullptr));
        label_trainingSamples->setText(QCoreApplication::translate("DepthCalibrationDialog", "0", nullptr));
        label_114->setText(QCoreApplication::translate("DepthCalibrationDialog", "training samples", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DepthCalibrationDialog: public Ui_DepthCalibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEPTHCALIBRATIONDIALOG_H
