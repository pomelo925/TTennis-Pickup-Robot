/********************************************************************************
** Form generated from reading UI file 'calibrationDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALIBRATIONDIALOG_H
#define UI_CALIBRATIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "rtabmap/utilite/UImageView.h"

QT_BEGIN_NAMESPACE

class Ui_calibrationDialog
{
public:
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_left;
    UImageView *image_view;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_right;
    UImageView *image_view_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_raw;
    QRadioButton *radioButton_rectified;
    QRadioButton *radioButton_stereoRectified;
    QFrame *line;
    QCheckBox *checkBox_mirror;
    QCheckBox *checkBox_showHorizontalLines;
    QSpacerItem *horizontalSpacer;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_7;
    QComboBox *comboBox_board_type;
    QToolButton *toolButton_generateBoard;
    QLabel *label_markerDictionary;
    QComboBox *comboBox_marker_dictionary;
    QLabel *label_15;
    QHBoxLayout *horizontalLayout;
    QSpinBox *spinBox_boardWidth;
    QSpinBox *spinBox_boardHeight;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBox_squareSize;
    QLabel *label_markerLength;
    QDoubleSpinBox *doubleSpinBox_markerLength;
    QLabel *label_22;
    QSpinBox *spinBox_maxScale;
    QLabel *label_stereoBaseline_4;
    QCheckBox *checkBox_subpixel_refinement;
    QDoubleSpinBox *doubleSpinBox_subpixel_error;
    QLabel *label_stereoBaseline;
    QDoubleSpinBox *doubleSpinBox_stereoBaseline;
    QLabel *label_stereoBaseline_2;
    QComboBox *comboBox_calib_model;
    QLabel *label_stereoBaseline_3;
    QCheckBox *checkBox_saveCalibrationData;
    QLabel *label_stereoBaseline_5;
    QPushButton *pushButton_restart;
    QGroupBox *groupBox_progress;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_19;
    QLabel *label_serial;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_keep_all;
    QDoubleSpinBox *doubleSpinBox_sample_factor;
    QCheckBox *checkBox_switchImages;
    QLabel *label_5;
    QProgressBar *progressBar_count;
    QProgressBar *progressBar_count_2;
    QLabel *label;
    QProgressBar *progressBar_x;
    QProgressBar *progressBar_x_2;
    QLabel *label_2;
    QProgressBar *progressBar_y;
    QProgressBar *progressBar_y_2;
    QLabel *label_3;
    QProgressBar *progressBar_size;
    QProgressBar *progressBar_size_2;
    QLabel *label_4;
    QProgressBar *progressBar_skew;
    QProgressBar *progressBar_skew_2;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_calibrate;
    QCheckBox *checkBox_unlock;
    QPushButton *pushButton_save;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_D;
    QLabel *label_17;
    QLineEdit *lineEdit_K_2;
    QLabel *label_fovx;
    QLabel *label_11;
    QLabel *label_18;
    QLabel *label_8;
    QLabel *label_fovy_2;
    QLabel *label_cy;
    QLineEdit *lineEdit_R_2;
    QLabel *label_6;
    QLabel *label_16;
    QLineEdit *lineEdit_R;
    QLabel *label_baseline_name;
    QLabel *label_fx;
    QLabel *label_10;
    QLabel *label_9;
    QLabel *label_cy_2;
    QLineEdit *lineEdit_D_2;
    QLabel *label_7;
    QLineEdit *lineEdit_P;
    QLabel *label_cx_2;
    QLineEdit *lineEdit_P_2;
    QLabel *label_fy_2;
    QLabel *label_cx;
    QLineEdit *lineEdit_K;
    QLabel *label_fx_2;
    QLabel *label_fovy;
    QLabel *label_fy;
    QLabel *label_23;
    QLabel *label_fovx_2;
    QLabel *label_14;
    QLabel *label_error;
    QLabel *label_error_2;
    QLabel *label_baseline;
    QLabel *label_stereoError;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *calibrationDialog)
    {
        if (calibrationDialog->objectName().isEmpty())
            calibrationDialog->setObjectName(QString::fromUtf8("calibrationDialog"));
        calibrationDialog->resize(1100, 828);
        verticalLayout_5 = new QVBoxLayout(calibrationDialog);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_left = new QLabel(calibrationDialog);
        label_left->setObjectName(QString::fromUtf8("label_left"));
        label_left->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_left);

        image_view = new UImageView(calibrationDialog);
        image_view->setObjectName(QString::fromUtf8("image_view"));

        verticalLayout_2->addWidget(image_view);

        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_3->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_right = new QLabel(calibrationDialog);
        label_right->setObjectName(QString::fromUtf8("label_right"));
        label_right->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(label_right);

        image_view_2 = new UImageView(calibrationDialog);
        image_view_2->setObjectName(QString::fromUtf8("image_view_2"));

        verticalLayout_3->addWidget(image_view_2);

        verticalLayout_3->setStretch(1, 1);

        horizontalLayout_3->addLayout(verticalLayout_3);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_raw = new QRadioButton(calibrationDialog);
        radioButton_raw->setObjectName(QString::fromUtf8("radioButton_raw"));

        horizontalLayout_2->addWidget(radioButton_raw);

        radioButton_rectified = new QRadioButton(calibrationDialog);
        radioButton_rectified->setObjectName(QString::fromUtf8("radioButton_rectified"));

        horizontalLayout_2->addWidget(radioButton_rectified);

        radioButton_stereoRectified = new QRadioButton(calibrationDialog);
        radioButton_stereoRectified->setObjectName(QString::fromUtf8("radioButton_stereoRectified"));

        horizontalLayout_2->addWidget(radioButton_stereoRectified);

        line = new QFrame(calibrationDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line);

        checkBox_mirror = new QCheckBox(calibrationDialog);
        checkBox_mirror->setObjectName(QString::fromUtf8("checkBox_mirror"));

        horizontalLayout_2->addWidget(checkBox_mirror);

        checkBox_showHorizontalLines = new QCheckBox(calibrationDialog);
        checkBox_showHorizontalLines->setObjectName(QString::fromUtf8("checkBox_showHorizontalLines"));

        horizontalLayout_2->addWidget(checkBox_showHorizontalLines);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);


        verticalLayout_4->addLayout(horizontalLayout_2);


        horizontalLayout_4->addLayout(verticalLayout_4);

        scrollArea = new QScrollArea(calibrationDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(false);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 428, 1070));
        verticalLayout = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_3->addWidget(label_13, 0, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        comboBox_board_type = new QComboBox(groupBox);
        comboBox_board_type->addItem(QString());
        comboBox_board_type->addItem(QString());
        comboBox_board_type->addItem(QString());
        comboBox_board_type->setObjectName(QString::fromUtf8("comboBox_board_type"));

        horizontalLayout_7->addWidget(comboBox_board_type);

        toolButton_generateBoard = new QToolButton(groupBox);
        toolButton_generateBoard->setObjectName(QString::fromUtf8("toolButton_generateBoard"));
        toolButton_generateBoard->setAutoRaise(false);
        toolButton_generateBoard->setArrowType(Qt::RightArrow);

        horizontalLayout_7->addWidget(toolButton_generateBoard);


        gridLayout_3->addLayout(horizontalLayout_7, 0, 2, 1, 3);

        label_markerDictionary = new QLabel(groupBox);
        label_markerDictionary->setObjectName(QString::fromUtf8("label_markerDictionary"));

        gridLayout_3->addWidget(label_markerDictionary, 1, 0, 1, 1);

        comboBox_marker_dictionary = new QComboBox(groupBox);
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->addItem(QString());
        comboBox_marker_dictionary->setObjectName(QString::fromUtf8("comboBox_marker_dictionary"));

        gridLayout_3->addWidget(comboBox_marker_dictionary, 1, 2, 1, 3);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_3->addWidget(label_15, 2, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spinBox_boardWidth = new QSpinBox(groupBox);
        spinBox_boardWidth->setObjectName(QString::fromUtf8("spinBox_boardWidth"));
        spinBox_boardWidth->setKeyboardTracking(false);
        spinBox_boardWidth->setMinimum(2);
        spinBox_boardWidth->setValue(8);

        horizontalLayout->addWidget(spinBox_boardWidth);

        spinBox_boardHeight = new QSpinBox(groupBox);
        spinBox_boardHeight->setObjectName(QString::fromUtf8("spinBox_boardHeight"));
        spinBox_boardHeight->setKeyboardTracking(false);
        spinBox_boardHeight->setMinimum(2);
        spinBox_boardHeight->setValue(6);

        horizontalLayout->addWidget(spinBox_boardHeight);


        gridLayout_3->addLayout(horizontalLayout, 2, 2, 1, 3);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_3->addWidget(label_12, 3, 0, 1, 1);

        doubleSpinBox_squareSize = new QDoubleSpinBox(groupBox);
        doubleSpinBox_squareSize->setObjectName(QString::fromUtf8("doubleSpinBox_squareSize"));
        doubleSpinBox_squareSize->setKeyboardTracking(false);
        doubleSpinBox_squareSize->setDecimals(6);
        doubleSpinBox_squareSize->setMaximum(1.000000000000000);
        doubleSpinBox_squareSize->setValue(0.033000000000000);

        gridLayout_3->addWidget(doubleSpinBox_squareSize, 3, 2, 1, 3);

        label_markerLength = new QLabel(groupBox);
        label_markerLength->setObjectName(QString::fromUtf8("label_markerLength"));

        gridLayout_3->addWidget(label_markerLength, 4, 0, 1, 1);

        doubleSpinBox_markerLength = new QDoubleSpinBox(groupBox);
        doubleSpinBox_markerLength->setObjectName(QString::fromUtf8("doubleSpinBox_markerLength"));
        doubleSpinBox_markerLength->setKeyboardTracking(false);
        doubleSpinBox_markerLength->setDecimals(6);
        doubleSpinBox_markerLength->setMaximum(1.000000000000000);
        doubleSpinBox_markerLength->setValue(0.024750000000000);

        gridLayout_3->addWidget(doubleSpinBox_markerLength, 4, 2, 1, 3);

        label_22 = new QLabel(groupBox);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        gridLayout_3->addWidget(label_22, 5, 0, 1, 1);

        spinBox_maxScale = new QSpinBox(groupBox);
        spinBox_maxScale->setObjectName(QString::fromUtf8("spinBox_maxScale"));
        spinBox_maxScale->setMinimum(1);
        spinBox_maxScale->setMaximum(3);
        spinBox_maxScale->setValue(1);

        gridLayout_3->addWidget(spinBox_maxScale, 5, 2, 1, 2);

        label_stereoBaseline_4 = new QLabel(groupBox);
        label_stereoBaseline_4->setObjectName(QString::fromUtf8("label_stereoBaseline_4"));

        gridLayout_3->addWidget(label_stereoBaseline_4, 6, 0, 1, 1);

        checkBox_subpixel_refinement = new QCheckBox(groupBox);
        checkBox_subpixel_refinement->setObjectName(QString::fromUtf8("checkBox_subpixel_refinement"));
        checkBox_subpixel_refinement->setChecked(true);

        gridLayout_3->addWidget(checkBox_subpixel_refinement, 6, 2, 1, 1);

        doubleSpinBox_subpixel_error = new QDoubleSpinBox(groupBox);
        doubleSpinBox_subpixel_error->setObjectName(QString::fromUtf8("doubleSpinBox_subpixel_error"));
        doubleSpinBox_subpixel_error->setKeyboardTracking(false);
        doubleSpinBox_subpixel_error->setDecimals(2);
        doubleSpinBox_subpixel_error->setMinimum(0.000000000000000);
        doubleSpinBox_subpixel_error->setMaximum(9.000000000000000);
        doubleSpinBox_subpixel_error->setSingleStep(0.100000000000000);
        doubleSpinBox_subpixel_error->setValue(1.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_subpixel_error, 6, 4, 1, 1);

        label_stereoBaseline = new QLabel(groupBox);
        label_stereoBaseline->setObjectName(QString::fromUtf8("label_stereoBaseline"));

        gridLayout_3->addWidget(label_stereoBaseline, 7, 0, 1, 1);

        doubleSpinBox_stereoBaseline = new QDoubleSpinBox(groupBox);
        doubleSpinBox_stereoBaseline->setObjectName(QString::fromUtf8("doubleSpinBox_stereoBaseline"));
        doubleSpinBox_stereoBaseline->setDecimals(4);
        doubleSpinBox_stereoBaseline->setMaximum(10.000000000000000);
        doubleSpinBox_stereoBaseline->setValue(0.000000000000000);

        gridLayout_3->addWidget(doubleSpinBox_stereoBaseline, 7, 2, 1, 3);

        label_stereoBaseline_2 = new QLabel(groupBox);
        label_stereoBaseline_2->setObjectName(QString::fromUtf8("label_stereoBaseline_2"));

        gridLayout_3->addWidget(label_stereoBaseline_2, 8, 0, 1, 1);

        comboBox_calib_model = new QComboBox(groupBox);
        comboBox_calib_model->addItem(QString());
        comboBox_calib_model->addItem(QString());
        comboBox_calib_model->addItem(QString());
        comboBox_calib_model->setObjectName(QString::fromUtf8("comboBox_calib_model"));

        gridLayout_3->addWidget(comboBox_calib_model, 8, 2, 1, 3);

        label_stereoBaseline_3 = new QLabel(groupBox);
        label_stereoBaseline_3->setObjectName(QString::fromUtf8("label_stereoBaseline_3"));

        gridLayout_3->addWidget(label_stereoBaseline_3, 9, 0, 1, 1);

        checkBox_saveCalibrationData = new QCheckBox(groupBox);
        checkBox_saveCalibrationData->setObjectName(QString::fromUtf8("checkBox_saveCalibrationData"));

        gridLayout_3->addWidget(checkBox_saveCalibrationData, 9, 2, 1, 1);

        label_stereoBaseline_5 = new QLabel(groupBox);
        label_stereoBaseline_5->setObjectName(QString::fromUtf8("label_stereoBaseline_5"));

        gridLayout_3->addWidget(label_stereoBaseline_5, 6, 3, 1, 1);


        verticalLayout->addWidget(groupBox);

        pushButton_restart = new QPushButton(scrollAreaWidgetContents);
        pushButton_restart->setObjectName(QString::fromUtf8("pushButton_restart"));

        verticalLayout->addWidget(pushButton_restart);

        groupBox_progress = new QGroupBox(scrollAreaWidgetContents);
        groupBox_progress->setObjectName(QString::fromUtf8("groupBox_progress"));
        verticalLayout_6 = new QVBoxLayout(groupBox_progress);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_19 = new QLabel(groupBox_progress);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_6->addWidget(label_19);

        label_serial = new QLabel(groupBox_progress);
        label_serial->setObjectName(QString::fromUtf8("label_serial"));
        label_serial->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_6->addWidget(label_serial);


        verticalLayout_6->addLayout(horizontalLayout_6);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBox_keep_all = new QCheckBox(groupBox_progress);
        checkBox_keep_all->setObjectName(QString::fromUtf8("checkBox_keep_all"));

        horizontalLayout_8->addWidget(checkBox_keep_all);

        doubleSpinBox_sample_factor = new QDoubleSpinBox(groupBox_progress);
        doubleSpinBox_sample_factor->setObjectName(QString::fromUtf8("doubleSpinBox_sample_factor"));
        doubleSpinBox_sample_factor->setKeyboardTracking(false);
        doubleSpinBox_sample_factor->setDecimals(1);
        doubleSpinBox_sample_factor->setMinimum(0.100000000000000);
        doubleSpinBox_sample_factor->setMaximum(9.900000000000000);
        doubleSpinBox_sample_factor->setSingleStep(0.100000000000000);
        doubleSpinBox_sample_factor->setValue(1.000000000000000);

        horizontalLayout_8->addWidget(doubleSpinBox_sample_factor);


        gridLayout->addLayout(horizontalLayout_8, 0, 1, 1, 1);

        checkBox_switchImages = new QCheckBox(groupBox_progress);
        checkBox_switchImages->setObjectName(QString::fromUtf8("checkBox_switchImages"));

        gridLayout->addWidget(checkBox_switchImages, 0, 2, 1, 1);

        label_5 = new QLabel(groupBox_progress);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        progressBar_count = new QProgressBar(groupBox_progress);
        progressBar_count->setObjectName(QString::fromUtf8("progressBar_count"));
        progressBar_count->setValue(24);

        gridLayout->addWidget(progressBar_count, 1, 1, 1, 1);

        progressBar_count_2 = new QProgressBar(groupBox_progress);
        progressBar_count_2->setObjectName(QString::fromUtf8("progressBar_count_2"));
        progressBar_count_2->setValue(24);
        progressBar_count_2->setInvertedAppearance(true);

        gridLayout->addWidget(progressBar_count_2, 1, 2, 1, 1);

        label = new QLabel(groupBox_progress);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 2, 0, 1, 1);

        progressBar_x = new QProgressBar(groupBox_progress);
        progressBar_x->setObjectName(QString::fromUtf8("progressBar_x"));
        progressBar_x->setValue(24);

        gridLayout->addWidget(progressBar_x, 2, 1, 1, 1);

        progressBar_x_2 = new QProgressBar(groupBox_progress);
        progressBar_x_2->setObjectName(QString::fromUtf8("progressBar_x_2"));
        progressBar_x_2->setValue(24);
        progressBar_x_2->setInvertedAppearance(true);
        progressBar_x_2->setTextDirection(QProgressBar::TopToBottom);

        gridLayout->addWidget(progressBar_x_2, 2, 2, 1, 1);

        label_2 = new QLabel(groupBox_progress);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 3, 0, 1, 1);

        progressBar_y = new QProgressBar(groupBox_progress);
        progressBar_y->setObjectName(QString::fromUtf8("progressBar_y"));
        progressBar_y->setValue(24);

        gridLayout->addWidget(progressBar_y, 3, 1, 1, 1);

        progressBar_y_2 = new QProgressBar(groupBox_progress);
        progressBar_y_2->setObjectName(QString::fromUtf8("progressBar_y_2"));
        progressBar_y_2->setValue(24);
        progressBar_y_2->setInvertedAppearance(true);

        gridLayout->addWidget(progressBar_y_2, 3, 2, 1, 1);

        label_3 = new QLabel(groupBox_progress);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 4, 0, 1, 1);

        progressBar_size = new QProgressBar(groupBox_progress);
        progressBar_size->setObjectName(QString::fromUtf8("progressBar_size"));
        progressBar_size->setValue(24);

        gridLayout->addWidget(progressBar_size, 4, 1, 1, 1);

        progressBar_size_2 = new QProgressBar(groupBox_progress);
        progressBar_size_2->setObjectName(QString::fromUtf8("progressBar_size_2"));
        progressBar_size_2->setValue(24);
        progressBar_size_2->setInvertedAppearance(true);

        gridLayout->addWidget(progressBar_size_2, 4, 2, 1, 1);

        label_4 = new QLabel(groupBox_progress);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 5, 0, 1, 1);

        progressBar_skew = new QProgressBar(groupBox_progress);
        progressBar_skew->setObjectName(QString::fromUtf8("progressBar_skew"));
        progressBar_skew->setValue(24);

        gridLayout->addWidget(progressBar_skew, 5, 1, 1, 1);

        progressBar_skew_2 = new QProgressBar(groupBox_progress);
        progressBar_skew_2->setObjectName(QString::fromUtf8("progressBar_skew_2"));
        progressBar_skew_2->setValue(24);
        progressBar_skew_2->setInvertedAppearance(true);

        gridLayout->addWidget(progressBar_skew_2, 5, 2, 1, 1);


        verticalLayout_6->addLayout(gridLayout);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_calibrate = new QPushButton(groupBox_progress);
        pushButton_calibrate->setObjectName(QString::fromUtf8("pushButton_calibrate"));

        horizontalLayout_5->addWidget(pushButton_calibrate);

        checkBox_unlock = new QCheckBox(groupBox_progress);
        checkBox_unlock->setObjectName(QString::fromUtf8("checkBox_unlock"));

        horizontalLayout_5->addWidget(checkBox_unlock);

        horizontalLayout_5->setStretch(0, 1);

        verticalLayout_6->addLayout(horizontalLayout_5);

        pushButton_save = new QPushButton(groupBox_progress);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));

        verticalLayout_6->addWidget(pushButton_save);

        groupBox_3 = new QGroupBox(groupBox_progress);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        gridLayout_2 = new QGridLayout(groupBox_3);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        lineEdit_D = new QLineEdit(groupBox_3);
        lineEdit_D->setObjectName(QString::fromUtf8("lineEdit_D"));
        lineEdit_D->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_D, 9, 1, 1, 1);

        label_17 = new QLabel(groupBox_3);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 10, 0, 1, 1);

        lineEdit_K_2 = new QLineEdit(groupBox_3);
        lineEdit_K_2->setObjectName(QString::fromUtf8("lineEdit_K_2"));
        lineEdit_K_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_K_2, 8, 2, 1, 1);

        label_fovx = new QLabel(groupBox_3);
        label_fovx->setObjectName(QString::fromUtf8("label_fovx"));
        label_fovx->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fovx, 5, 1, 1, 1);

        label_11 = new QLabel(groupBox_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 4, 0, 1, 1);

        label_18 = new QLabel(groupBox_3);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_2->addWidget(label_18, 11, 0, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_2->addWidget(label_8, 1, 0, 1, 1);

        label_fovy_2 = new QLabel(groupBox_3);
        label_fovy_2->setObjectName(QString::fromUtf8("label_fovy_2"));
        label_fovy_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fovy_2, 6, 2, 1, 1);

        label_cy = new QLabel(groupBox_3);
        label_cy->setObjectName(QString::fromUtf8("label_cy"));
        label_cy->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_cy, 4, 1, 1, 1);

        lineEdit_R_2 = new QLineEdit(groupBox_3);
        lineEdit_R_2->setObjectName(QString::fromUtf8("lineEdit_R_2"));
        lineEdit_R_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_R_2, 10, 2, 1, 1);

        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_2->addWidget(label_6, 8, 0, 1, 1);

        label_16 = new QLabel(groupBox_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 5, 0, 1, 1);

        lineEdit_R = new QLineEdit(groupBox_3);
        lineEdit_R->setObjectName(QString::fromUtf8("lineEdit_R"));
        lineEdit_R->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_R, 10, 1, 1, 1);

        label_baseline_name = new QLabel(groupBox_3);
        label_baseline_name->setObjectName(QString::fromUtf8("label_baseline_name"));

        gridLayout_2->addWidget(label_baseline_name, 7, 0, 1, 1);

        label_fx = new QLabel(groupBox_3);
        label_fx->setObjectName(QString::fromUtf8("label_fx"));
        label_fx->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fx, 1, 1, 1, 1);

        label_10 = new QLabel(groupBox_3);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_2->addWidget(label_10, 3, 0, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_2->addWidget(label_9, 2, 0, 1, 1);

        label_cy_2 = new QLabel(groupBox_3);
        label_cy_2->setObjectName(QString::fromUtf8("label_cy_2"));
        label_cy_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_cy_2, 4, 2, 1, 1);

        lineEdit_D_2 = new QLineEdit(groupBox_3);
        lineEdit_D_2->setObjectName(QString::fromUtf8("lineEdit_D_2"));
        lineEdit_D_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_D_2, 9, 2, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_2->addWidget(label_7, 9, 0, 1, 1);

        lineEdit_P = new QLineEdit(groupBox_3);
        lineEdit_P->setObjectName(QString::fromUtf8("lineEdit_P"));
        lineEdit_P->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_P, 11, 1, 1, 1);

        label_cx_2 = new QLabel(groupBox_3);
        label_cx_2->setObjectName(QString::fromUtf8("label_cx_2"));
        label_cx_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_cx_2, 3, 2, 1, 1);

        lineEdit_P_2 = new QLineEdit(groupBox_3);
        lineEdit_P_2->setObjectName(QString::fromUtf8("lineEdit_P_2"));
        lineEdit_P_2->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_P_2, 11, 2, 1, 1);

        label_fy_2 = new QLabel(groupBox_3);
        label_fy_2->setObjectName(QString::fromUtf8("label_fy_2"));
        label_fy_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fy_2, 2, 2, 1, 1);

        label_cx = new QLabel(groupBox_3);
        label_cx->setObjectName(QString::fromUtf8("label_cx"));
        label_cx->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_cx, 3, 1, 1, 1);

        lineEdit_K = new QLineEdit(groupBox_3);
        lineEdit_K->setObjectName(QString::fromUtf8("lineEdit_K"));
        lineEdit_K->setReadOnly(true);

        gridLayout_2->addWidget(lineEdit_K, 8, 1, 1, 1);

        label_fx_2 = new QLabel(groupBox_3);
        label_fx_2->setObjectName(QString::fromUtf8("label_fx_2"));
        label_fx_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fx_2, 1, 2, 1, 1);

        label_fovy = new QLabel(groupBox_3);
        label_fovy->setObjectName(QString::fromUtf8("label_fovy"));
        label_fovy->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fovy, 6, 1, 1, 1);

        label_fy = new QLabel(groupBox_3);
        label_fy->setObjectName(QString::fromUtf8("label_fy"));
        label_fy->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fy, 2, 1, 1, 1);

        label_23 = new QLabel(groupBox_3);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_2->addWidget(label_23, 6, 0, 1, 1);

        label_fovx_2 = new QLabel(groupBox_3);
        label_fovx_2->setObjectName(QString::fromUtf8("label_fovx_2"));
        label_fovx_2->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_fovx_2, 5, 2, 1, 1);

        label_14 = new QLabel(groupBox_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 0, 0, 1, 1);

        label_error = new QLabel(groupBox_3);
        label_error->setObjectName(QString::fromUtf8("label_error"));

        gridLayout_2->addWidget(label_error, 0, 1, 1, 1);

        label_error_2 = new QLabel(groupBox_3);
        label_error_2->setObjectName(QString::fromUtf8("label_error_2"));

        gridLayout_2->addWidget(label_error_2, 0, 2, 1, 1);

        label_baseline = new QLabel(groupBox_3);
        label_baseline->setObjectName(QString::fromUtf8("label_baseline"));
        label_baseline->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_baseline, 7, 1, 1, 1);

        label_stereoError = new QLabel(groupBox_3);
        label_stereoError->setObjectName(QString::fromUtf8("label_stereoError"));
        label_stereoError->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_stereoError, 7, 2, 1, 1);


        verticalLayout_6->addWidget(groupBox_3);


        verticalLayout->addWidget(groupBox_progress);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_4->addWidget(scrollArea);

        horizontalLayout_4->setStretch(0, 1);

        verticalLayout_5->addLayout(horizontalLayout_4);

        buttonBox = new QDialogButtonBox(calibrationDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_5->addWidget(buttonBox);


        retranslateUi(calibrationDialog);

        comboBox_marker_dictionary->setCurrentIndex(3);
        comboBox_calib_model->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(calibrationDialog);
    } // setupUi

    void retranslateUi(QDialog *calibrationDialog)
    {
        calibrationDialog->setWindowTitle(QCoreApplication::translate("calibrationDialog", "Dialog", nullptr));
        label_left->setText(QString());
        label_right->setText(QString());
        radioButton_raw->setText(QCoreApplication::translate("calibrationDialog", "Raw", nullptr));
        radioButton_rectified->setText(QCoreApplication::translate("calibrationDialog", "Rectified", nullptr));
        radioButton_stereoRectified->setText(QCoreApplication::translate("calibrationDialog", "Stereo Rectified", nullptr));
        checkBox_mirror->setText(QCoreApplication::translate("calibrationDialog", "Mirror", nullptr));
        checkBox_showHorizontalLines->setText(QCoreApplication::translate("calibrationDialog", "Show lines", nullptr));
        groupBox->setTitle(QCoreApplication::translate("calibrationDialog", "Configuration", nullptr));
#if QT_CONFIG(tooltip)
        label_13->setToolTip(QCoreApplication::translate("calibrationDialog", "Number of inner squares on the board", nullptr));
#endif // QT_CONFIG(tooltip)
        label_13->setText(QCoreApplication::translate("calibrationDialog", "Board Type", nullptr));
        comboBox_board_type->setItemText(0, QCoreApplication::translate("calibrationDialog", "Chessboard", nullptr));
        comboBox_board_type->setItemText(1, QCoreApplication::translate("calibrationDialog", "ChArUco Board Legacy", nullptr));
        comboBox_board_type->setItemText(2, QCoreApplication::translate("calibrationDialog", "ChArUco Board", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_board_type->setToolTip(QCoreApplication::translate("calibrationDialog", "<html><head/><body><p>Legacy setting creates chessboard patterns starting with a white box in the upper left corner if there is an even row count of chessboard boxes, otherwise it starts with a black box. This setting ensures compatibility to patterns created with OpenCV versions prior OpenCV 4.7.0.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        toolButton_generateBoard->setToolTip(QCoreApplication::translate("calibrationDialog", "Generate image of the board", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_generateBoard->setText(QCoreApplication::translate("calibrationDialog", "...", nullptr));
#if QT_CONFIG(tooltip)
        label_markerDictionary->setToolTip(QCoreApplication::translate("calibrationDialog", "Number of inner squares on the board", nullptr));
#endif // QT_CONFIG(tooltip)
        label_markerDictionary->setText(QCoreApplication::translate("calibrationDialog", "Marker Dictionary", nullptr));
        comboBox_marker_dictionary->setItemText(0, QCoreApplication::translate("calibrationDialog", "4X4_50", nullptr));
        comboBox_marker_dictionary->setItemText(1, QCoreApplication::translate("calibrationDialog", "4X4_100", nullptr));
        comboBox_marker_dictionary->setItemText(2, QCoreApplication::translate("calibrationDialog", "4X4_250", nullptr));
        comboBox_marker_dictionary->setItemText(3, QCoreApplication::translate("calibrationDialog", "4X4_1000", nullptr));
        comboBox_marker_dictionary->setItemText(4, QCoreApplication::translate("calibrationDialog", "5X5_50", nullptr));
        comboBox_marker_dictionary->setItemText(5, QCoreApplication::translate("calibrationDialog", "5X5_100", nullptr));
        comboBox_marker_dictionary->setItemText(6, QCoreApplication::translate("calibrationDialog", "5X5_250", nullptr));
        comboBox_marker_dictionary->setItemText(7, QCoreApplication::translate("calibrationDialog", "5X5_1000", nullptr));
        comboBox_marker_dictionary->setItemText(8, QCoreApplication::translate("calibrationDialog", "6X6_50", nullptr));
        comboBox_marker_dictionary->setItemText(9, QCoreApplication::translate("calibrationDialog", "6X6_100", nullptr));
        comboBox_marker_dictionary->setItemText(10, QCoreApplication::translate("calibrationDialog", "6X6_250", nullptr));
        comboBox_marker_dictionary->setItemText(11, QCoreApplication::translate("calibrationDialog", "6X6_1000", nullptr));
        comboBox_marker_dictionary->setItemText(12, QCoreApplication::translate("calibrationDialog", "7X7_50", nullptr));
        comboBox_marker_dictionary->setItemText(13, QCoreApplication::translate("calibrationDialog", "7X7_100", nullptr));
        comboBox_marker_dictionary->setItemText(14, QCoreApplication::translate("calibrationDialog", "7X7_250", nullptr));
        comboBox_marker_dictionary->setItemText(15, QCoreApplication::translate("calibrationDialog", "7X7_1000", nullptr));
        comboBox_marker_dictionary->setItemText(16, QCoreApplication::translate("calibrationDialog", "ARUCO_ORIGINAL", nullptr));
        comboBox_marker_dictionary->setItemText(17, QCoreApplication::translate("calibrationDialog", "APRILTAG_16h5", nullptr));
        comboBox_marker_dictionary->setItemText(18, QCoreApplication::translate("calibrationDialog", "APRILTAG_25h9", nullptr));
        comboBox_marker_dictionary->setItemText(19, QCoreApplication::translate("calibrationDialog", "APRILTAG_36h10", nullptr));
        comboBox_marker_dictionary->setItemText(20, QCoreApplication::translate("calibrationDialog", "APRILTAG_36h11", nullptr));

#if QT_CONFIG(tooltip)
        label_15->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_15->setText(QCoreApplication::translate("calibrationDialog", "Square Size", nullptr));
#if QT_CONFIG(tooltip)
        label_12->setToolTip(QCoreApplication::translate("calibrationDialog", "Number of inner squares on the board", nullptr));
#endif // QT_CONFIG(tooltip)
        label_12->setText(QCoreApplication::translate("calibrationDialog", "Board Size", nullptr));
        doubleSpinBox_squareSize->setSuffix(QCoreApplication::translate("calibrationDialog", " m", nullptr));
#if QT_CONFIG(tooltip)
        label_markerLength->setToolTip(QString());
#endif // QT_CONFIG(tooltip)
        label_markerLength->setText(QCoreApplication::translate("calibrationDialog", "Marker Length", nullptr));
        doubleSpinBox_markerLength->setSuffix(QCoreApplication::translate("calibrationDialog", " m", nullptr));
#if QT_CONFIG(tooltip)
        label_22->setToolTip(QCoreApplication::translate("calibrationDialog", "If > 1, image is scaled down to help board detection on high definition images", nullptr));
#endif // QT_CONFIG(tooltip)
        label_22->setText(QCoreApplication::translate("calibrationDialog", "Max Scale", nullptr));
#if QT_CONFIG(tooltip)
        label_stereoBaseline_4->setToolTip(QCoreApplication::translate("calibrationDialog", "If > 1, image is scaled down to help board detection on high definition images", nullptr));
#endif // QT_CONFIG(tooltip)
        label_stereoBaseline_4->setText(QCoreApplication::translate("calibrationDialog", "Sub Pixel Refinement", nullptr));
        checkBox_subpixel_refinement->setText(QString());
#if QT_CONFIG(tooltip)
        doubleSpinBox_subpixel_error->setToolTip(QCoreApplication::translate("calibrationDialog", "0 means infinity (accept all)", nullptr));
#endif // QT_CONFIG(tooltip)
        doubleSpinBox_subpixel_error->setSuffix(QCoreApplication::translate("calibrationDialog", " pix", nullptr));
#if QT_CONFIG(tooltip)
        label_stereoBaseline->setToolTip(QCoreApplication::translate("calibrationDialog", "If > 1, image is scaled down to help board detection on high definition images", nullptr));
#endif // QT_CONFIG(tooltip)
        label_stereoBaseline->setText(QCoreApplication::translate("calibrationDialog", "Stereo Expected Baseline", nullptr));
#if QT_CONFIG(tooltip)
        doubleSpinBox_stereoBaseline->setToolTip(QCoreApplication::translate("calibrationDialog", "If you know the exact baseline of the stereo cameras, you can set it here in case the square size is not super accurate.", nullptr));
#endif // QT_CONFIG(tooltip)
        doubleSpinBox_stereoBaseline->setSuffix(QCoreApplication::translate("calibrationDialog", " m", nullptr));
#if QT_CONFIG(tooltip)
        label_stereoBaseline_2->setToolTip(QCoreApplication::translate("calibrationDialog", "If > 1, image is scaled down to help board detection on high definition images", nullptr));
#endif // QT_CONFIG(tooltip)
        label_stereoBaseline_2->setText(QCoreApplication::translate("calibrationDialog", "Calibration Model", nullptr));
        comboBox_calib_model->setItemText(0, QCoreApplication::translate("calibrationDialog", "fisheye (4 coeffs)", nullptr));
        comboBox_calib_model->setItemText(1, QCoreApplication::translate("calibrationDialog", "plumb_bob (5 coeffs)", nullptr));
        comboBox_calib_model->setItemText(2, QCoreApplication::translate("calibrationDialog", "rational (8 coeffs)", nullptr));

#if QT_CONFIG(tooltip)
        label_stereoBaseline_3->setToolTip(QCoreApplication::translate("calibrationDialog", "If > 1, image is scaled down to help board detection on high definition images", nullptr));
#endif // QT_CONFIG(tooltip)
        label_stereoBaseline_3->setText(QCoreApplication::translate("calibrationDialog", "Save Calibration Data", nullptr));
        checkBox_saveCalibrationData->setText(QString());
#if QT_CONFIG(tooltip)
        label_stereoBaseline_5->setToolTip(QCoreApplication::translate("calibrationDialog", "If > 1, image is scaled down to help board detection on high definition images", nullptr));
#endif // QT_CONFIG(tooltip)
        label_stereoBaseline_5->setText(QCoreApplication::translate("calibrationDialog", "Max Error", nullptr));
        pushButton_restart->setText(QCoreApplication::translate("calibrationDialog", "Restart", nullptr));
        groupBox_progress->setTitle(QCoreApplication::translate("calibrationDialog", "Progress", nullptr));
        label_19->setText(QCoreApplication::translate("calibrationDialog", "Serial", nullptr));
        label_serial->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        checkBox_keep_all->setText(QCoreApplication::translate("calibrationDialog", "Keep all", nullptr));
#if QT_CONFIG(tooltip)
        doubleSpinBox_sample_factor->setToolTip(QCoreApplication::translate("calibrationDialog", "Sample factor to adjust how often a new sample is added. The larger the factor is, less samples are generated.", nullptr));
#endif // QT_CONFIG(tooltip)
        doubleSpinBox_sample_factor->setSuffix(QCoreApplication::translate("calibrationDialog", "x", nullptr));
        checkBox_switchImages->setText(QCoreApplication::translate("calibrationDialog", "Switch images", nullptr));
        label_5->setText(QCoreApplication::translate("calibrationDialog", "Count", nullptr));
        progressBar_count->setFormat(QCoreApplication::translate("calibrationDialog", "%p", nullptr));
        progressBar_count_2->setFormat(QCoreApplication::translate("calibrationDialog", "%p", nullptr));
        label->setText(QCoreApplication::translate("calibrationDialog", "X", nullptr));
        progressBar_x->setFormat(QCoreApplication::translate("calibrationDialog", "%p%", nullptr));
        progressBar_x_2->setFormat(QCoreApplication::translate("calibrationDialog", "%p%", nullptr));
        label_2->setText(QCoreApplication::translate("calibrationDialog", "Y", nullptr));
        label_3->setText(QCoreApplication::translate("calibrationDialog", "Size", nullptr));
        label_4->setText(QCoreApplication::translate("calibrationDialog", "Skew", nullptr));
        pushButton_calibrate->setText(QCoreApplication::translate("calibrationDialog", "Calibrate", nullptr));
        checkBox_unlock->setText(QCoreApplication::translate("calibrationDialog", "Unlock", nullptr));
        pushButton_save->setText(QCoreApplication::translate("calibrationDialog", "Export calibration (*.yaml)", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("calibrationDialog", "Calibration parameters", nullptr));
#if QT_CONFIG(tooltip)
        label_17->setToolTip(QCoreApplication::translate("calibrationDialog", "Distorsion coefficients", nullptr));
#endif // QT_CONFIG(tooltip)
        label_17->setText(QCoreApplication::translate("calibrationDialog", "R", nullptr));
#if QT_CONFIG(tooltip)
        label_fovx->setToolTip(QCoreApplication::translate("calibrationDialog", "Deg", nullptr));
#endif // QT_CONFIG(tooltip)
        label_fovx->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_11->setText(QCoreApplication::translate("calibrationDialog", "cy", nullptr));
#if QT_CONFIG(tooltip)
        label_18->setToolTip(QCoreApplication::translate("calibrationDialog", "Distorsion coefficients", nullptr));
#endif // QT_CONFIG(tooltip)
        label_18->setText(QCoreApplication::translate("calibrationDialog", "P", nullptr));
        label_8->setText(QCoreApplication::translate("calibrationDialog", "fx", nullptr));
#if QT_CONFIG(tooltip)
        label_fovy_2->setToolTip(QCoreApplication::translate("calibrationDialog", "Deg", nullptr));
#endif // QT_CONFIG(tooltip)
        label_fovy_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_cy->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_6->setToolTip(QCoreApplication::translate("calibrationDialog", "Camera matrix", nullptr));
#endif // QT_CONFIG(tooltip)
        label_6->setText(QCoreApplication::translate("calibrationDialog", "K", nullptr));
#if QT_CONFIG(tooltip)
        label_16->setToolTip(QCoreApplication::translate("calibrationDialog", "Avg. reproduction error", nullptr));
#endif // QT_CONFIG(tooltip)
        label_16->setText(QCoreApplication::translate("calibrationDialog", "fovx", nullptr));
#if QT_CONFIG(tooltip)
        label_baseline_name->setToolTip(QCoreApplication::translate("calibrationDialog", "Stereo", nullptr));
#endif // QT_CONFIG(tooltip)
        label_baseline_name->setText(QCoreApplication::translate("calibrationDialog", "Baseline/Err", nullptr));
        label_fx->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_10->setText(QCoreApplication::translate("calibrationDialog", "cx", nullptr));
        label_9->setText(QCoreApplication::translate("calibrationDialog", "fy", nullptr));
        label_cy_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_7->setToolTip(QCoreApplication::translate("calibrationDialog", "Distorsion coefficients", nullptr));
#endif // QT_CONFIG(tooltip)
        label_7->setText(QCoreApplication::translate("calibrationDialog", "D", nullptr));
        label_cx_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_fy_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_cx->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_fx_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_fovy->setToolTip(QCoreApplication::translate("calibrationDialog", "Deg", nullptr));
#endif // QT_CONFIG(tooltip)
        label_fovy->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_fy->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_23->setToolTip(QCoreApplication::translate("calibrationDialog", "Avg. reproduction error", nullptr));
#endif // QT_CONFIG(tooltip)
        label_23->setText(QCoreApplication::translate("calibrationDialog", "fovy", nullptr));
#if QT_CONFIG(tooltip)
        label_fovx_2->setToolTip(QCoreApplication::translate("calibrationDialog", "Deg", nullptr));
#endif // QT_CONFIG(tooltip)
        label_fovx_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
#if QT_CONFIG(tooltip)
        label_14->setToolTip(QCoreApplication::translate("calibrationDialog", "Avg. reproduction error", nullptr));
#endif // QT_CONFIG(tooltip)
        label_14->setText(QCoreApplication::translate("calibrationDialog", "Error", nullptr));
        label_error->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_error_2->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_baseline->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
        label_stereoError->setText(QCoreApplication::translate("calibrationDialog", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calibrationDialog: public Ui_calibrationDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALIBRATIONDIALOG_H
