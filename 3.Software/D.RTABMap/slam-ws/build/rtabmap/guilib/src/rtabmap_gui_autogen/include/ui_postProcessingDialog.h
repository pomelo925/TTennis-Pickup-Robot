/********************************************************************************
** Form generated from reading UI file 'postProcessingDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POSTPROCESSINGDIALOG_H
#define UI_POSTPROCESSINGDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PostProcessingDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *detectMoreLoopClosures;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QDoubleSpinBox *clusterAngle;
    QDoubleSpinBox *clusterRadius;
    QLabel *label_3;
    QLabel *clusterAngle_label;
    QLabel *label_6;
    QSpinBox *iterations;
    QLabel *label_7;
    QLabel *label_9;
    QCheckBox *intraSession;
    QCheckBox *interSession;
    QLabel *label;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QCheckBox *refineNeighborLinks;
    QCheckBox *refineLoopClosureLinks;
    QGroupBox *sba;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout_2;
    QSpinBox *sba_iterations;
    QLabel *label_8;
    QLabel *label_variance;
    QDoubleSpinBox *sba_variance;
    QLabel *label_10;
    QComboBox *comboBox_sbaType;
    QLabel *label_variance_2;
    QCheckBox *sba_rematchFeatures;
    QSpacerItem *verticalSpacer;
    QLabel *label_4;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PostProcessingDialog)
    {
        if (PostProcessingDialog->objectName().isEmpty())
            PostProcessingDialog->setObjectName(QString::fromUtf8("PostProcessingDialog"));
        PostProcessingDialog->resize(552, 633);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/RTAB-Map.ico"), QSize(), QIcon::Normal, QIcon::Off);
        PostProcessingDialog->setWindowIcon(icon);
        verticalLayout_3 = new QVBoxLayout(PostProcessingDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        detectMoreLoopClosures = new QGroupBox(PostProcessingDialog);
        detectMoreLoopClosures->setObjectName(QString::fromUtf8("detectMoreLoopClosures"));
        detectMoreLoopClosures->setCheckable(true);
        verticalLayout = new QVBoxLayout(detectMoreLoopClosures);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        clusterAngle = new QDoubleSpinBox(detectMoreLoopClosures);
        clusterAngle->setObjectName(QString::fromUtf8("clusterAngle"));
        clusterAngle->setDecimals(0);
        clusterAngle->setMinimum(0.000000000000000);
        clusterAngle->setMaximum(180.000000000000000);
        clusterAngle->setValue(30.000000000000000);

        gridLayout->addWidget(clusterAngle, 1, 0, 1, 1);

        clusterRadius = new QDoubleSpinBox(detectMoreLoopClosures);
        clusterRadius->setObjectName(QString::fromUtf8("clusterRadius"));
        clusterRadius->setMinimum(0.010000000000000);
        clusterRadius->setMaximum(99.000000000000000);
        clusterRadius->setSingleStep(0.010000000000000);
        clusterRadius->setValue(0.300000000000000);

        gridLayout->addWidget(clusterRadius, 0, 0, 1, 1);

        label_3 = new QLabel(detectMoreLoopClosures);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        gridLayout->addWidget(label_3, 0, 1, 1, 1);

        clusterAngle_label = new QLabel(detectMoreLoopClosures);
        clusterAngle_label->setObjectName(QString::fromUtf8("clusterAngle_label"));
        clusterAngle_label->setWordWrap(true);

        gridLayout->addWidget(clusterAngle_label, 1, 1, 1, 1);

        label_6 = new QLabel(detectMoreLoopClosures);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);

        gridLayout->addWidget(label_6, 2, 1, 1, 1);

        iterations = new QSpinBox(detectMoreLoopClosures);
        iterations->setObjectName(QString::fromUtf8("iterations"));
        iterations->setMinimum(1);
        iterations->setMaximum(100);
        iterations->setValue(1);

        gridLayout->addWidget(iterations, 2, 0, 1, 1);

        label_7 = new QLabel(detectMoreLoopClosures);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout->addWidget(label_7, 3, 1, 1, 1);

        label_9 = new QLabel(detectMoreLoopClosures);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        gridLayout->addWidget(label_9, 4, 1, 1, 1);

        intraSession = new QCheckBox(detectMoreLoopClosures);
        intraSession->setObjectName(QString::fromUtf8("intraSession"));

        gridLayout->addWidget(intraSession, 3, 0, 1, 1);

        interSession = new QCheckBox(detectMoreLoopClosures);
        interSession->setObjectName(QString::fromUtf8("interSession"));

        gridLayout->addWidget(interSession, 4, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);

        label = new QLabel(detectMoreLoopClosures);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);


        verticalLayout_3->addWidget(detectMoreLoopClosures);

        groupBox_3 = new QGroupBox(PostProcessingDialog);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setCheckable(false);
        verticalLayout_2 = new QVBoxLayout(groupBox_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_2->addWidget(label_2);

        refineNeighborLinks = new QCheckBox(groupBox_3);
        refineNeighborLinks->setObjectName(QString::fromUtf8("refineNeighborLinks"));
        refineNeighborLinks->setChecked(false);

        verticalLayout_2->addWidget(refineNeighborLinks);

        refineLoopClosureLinks = new QCheckBox(groupBox_3);
        refineLoopClosureLinks->setObjectName(QString::fromUtf8("refineLoopClosureLinks"));
        refineLoopClosureLinks->setChecked(false);

        verticalLayout_2->addWidget(refineLoopClosureLinks);


        verticalLayout_3->addWidget(groupBox_3);

        sba = new QGroupBox(PostProcessingDialog);
        sba->setObjectName(QString::fromUtf8("sba"));
        sba->setCheckable(true);
        sba->setChecked(false);
        verticalLayout_4 = new QVBoxLayout(sba);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sba_iterations = new QSpinBox(sba);
        sba_iterations->setObjectName(QString::fromUtf8("sba_iterations"));
        sba_iterations->setMinimum(1);
        sba_iterations->setMaximum(999999);
        sba_iterations->setValue(100);

        gridLayout_2->addWidget(sba_iterations, 1, 0, 1, 1);

        label_8 = new QLabel(sba);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_2->addWidget(label_8, 1, 1, 1, 1);

        label_variance = new QLabel(sba);
        label_variance->setObjectName(QString::fromUtf8("label_variance"));
        label_variance->setWordWrap(true);

        gridLayout_2->addWidget(label_variance, 2, 1, 1, 1);

        sba_variance = new QDoubleSpinBox(sba);
        sba_variance->setObjectName(QString::fromUtf8("sba_variance"));
        sba_variance->setDecimals(2);
        sba_variance->setMinimum(0.010000000000000);
        sba_variance->setMaximum(999.000000000000000);
        sba_variance->setSingleStep(0.010000000000000);
        sba_variance->setValue(1.000000000000000);

        gridLayout_2->addWidget(sba_variance, 2, 0, 1, 1);

        label_10 = new QLabel(sba);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setWordWrap(true);

        gridLayout_2->addWidget(label_10, 0, 1, 1, 1);

        comboBox_sbaType = new QComboBox(sba);
        comboBox_sbaType->addItem(QString());
        comboBox_sbaType->addItem(QString());
        comboBox_sbaType->addItem(QString());
        comboBox_sbaType->setObjectName(QString::fromUtf8("comboBox_sbaType"));

        gridLayout_2->addWidget(comboBox_sbaType, 0, 0, 1, 1);

        label_variance_2 = new QLabel(sba);
        label_variance_2->setObjectName(QString::fromUtf8("label_variance_2"));
        label_variance_2->setWordWrap(true);

        gridLayout_2->addWidget(label_variance_2, 3, 1, 1, 1);

        sba_rematchFeatures = new QCheckBox(sba);
        sba_rematchFeatures->setObjectName(QString::fromUtf8("sba_rematchFeatures"));

        gridLayout_2->addWidget(sba_rematchFeatures, 3, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout_4->addLayout(gridLayout_2);


        verticalLayout_3->addWidget(sba);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        label_4 = new QLabel(PostProcessingDialog);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_3->addWidget(label_4);

        buttonBox = new QDialogButtonBox(PostProcessingDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(PostProcessingDialog);

        QMetaObject::connectSlotsByName(PostProcessingDialog);
    } // setupUi

    void retranslateUi(QDialog *PostProcessingDialog)
    {
        PostProcessingDialog->setWindowTitle(QCoreApplication::translate("PostProcessingDialog", "Post-Processing", nullptr));
        detectMoreLoopClosures->setTitle(QCoreApplication::translate("PostProcessingDialog", "Detect more loop closures", nullptr));
        clusterAngle->setSuffix(QCoreApplication::translate("PostProcessingDialog", " degrees", nullptr));
        clusterRadius->setSuffix(QCoreApplication::translate("PostProcessingDialog", " m", nullptr));
        label_3->setText(QCoreApplication::translate("PostProcessingDialog", "Cluster radius", nullptr));
        clusterAngle_label->setText(QCoreApplication::translate("PostProcessingDialog", "Cluster angle", nullptr));
        label_6->setText(QCoreApplication::translate("PostProcessingDialog", "Iterations", nullptr));
        label_7->setText(QCoreApplication::translate("PostProcessingDialog", "Intra-session", nullptr));
        label_9->setText(QCoreApplication::translate("PostProcessingDialog", "Inter-session", nullptr));
        intraSession->setText(QString());
        interSession->setText(QString());
        label->setText(QCoreApplication::translate("PostProcessingDialog", "See \"RTAB-Map settings/Motion Estimation\" to tune the parameters used.", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("PostProcessingDialog", "Refine links with ICP", nullptr));
        label_2->setText(QCoreApplication::translate("PostProcessingDialog", "Laser scans are required. See \"RTAB-Map settings/Motion Estimation/ICP\" to tune the parameters used.", nullptr));
        refineNeighborLinks->setText(QCoreApplication::translate("PostProcessingDialog", "Refine neighbor links", nullptr));
        refineLoopClosureLinks->setText(QCoreApplication::translate("PostProcessingDialog", "Refine loop closure links", nullptr));
        sba->setTitle(QCoreApplication::translate("PostProcessingDialog", "Sparse Bundle Adjustment (SBA)", nullptr));
        label_8->setText(QCoreApplication::translate("PostProcessingDialog", "Iterations", nullptr));
        label_variance->setText(QCoreApplication::translate("PostProcessingDialog", "Pixel variance used by g2o.", nullptr));
        sba_variance->setSuffix(QString());
        label_10->setText(QCoreApplication::translate("PostProcessingDialog", "Type", nullptr));
        comboBox_sbaType->setItemText(0, QCoreApplication::translate("PostProcessingDialog", "g2o", nullptr));
        comboBox_sbaType->setItemText(1, QCoreApplication::translate("PostProcessingDialog", "cvsba", nullptr));
        comboBox_sbaType->setItemText(2, QCoreApplication::translate("PostProcessingDialog", "Ceres", nullptr));

        label_variance_2->setText(QCoreApplication::translate("PostProcessingDialog", "Rematch features.", nullptr));
        sba_rematchFeatures->setText(QString());
        label_4->setText(QCoreApplication::translate("PostProcessingDialog", "Note: Post-processing only affects visualization in the GUI and the export actions. To actually push those optimizations to the database, use Database Viewer tool (Tools->Edit database...). You can do Edit->Download graph to revert the changes afterwards.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PostProcessingDialog: public Ui_PostProcessingDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POSTPROCESSINGDIALOG_H
