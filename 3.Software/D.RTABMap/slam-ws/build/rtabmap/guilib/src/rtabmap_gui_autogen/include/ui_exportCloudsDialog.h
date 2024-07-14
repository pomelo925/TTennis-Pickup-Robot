/********************************************************************************
** Form generated from reading UI file 'exportCloudsDialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EXPORTCLOUDSDIALOG_H
#define UI_EXPORTCLOUDSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ExportCloudsDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_13;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBox_cameraProjection;
    QLabel *label_12;
    QCheckBox *checkBox_filtering;
    QCheckBox *checkBox_regenerate;
    QLabel *label_binaryFile_12;
    QLabel *label_binaryFile_9;
    QLabel *label_normal_2;
    QCheckBox *checkBox_meshing;
    QLabel *label_gainCompensation;
    QLabel *label_frame;
    QCheckBox *checkBox_assemble;
    QCheckBox *checkBox_binary;
    QSpinBox *spinBox_randomSamples_assembled;
    QLabel *label_normal;
    QLabel *label_binaryFile_11;
    QDoubleSpinBox *doubleSpinBox_voxelSize_assembled;
    QCheckBox *checkBox_fromDepth;
    QSpinBox *spinBox_normalKSearch;
    QCheckBox *checkBox_smoothing;
    QComboBox *comboBox_pipeline;
    QLabel *label_smoothing;
    QLabel *label_intensityColormap;
    QLabel *label_voxel;
    QComboBox *comboBox_intensityColormap;
    QLabel *label_cameraProjection;
    QLabel *label_binaryFile_10;
    QComboBox *comboBox_frame;
    QDoubleSpinBox *doubleSpinBox_normalRadiusSearch;
    QCheckBox *checkBox_gainCompensation;
    QLabel *label_voxel_2;
    QLabel *label_binaryFile;
    QLabel *label_regenerate;
    QCheckBox *checkBox_nodes_filtering;
    QLabel *label_binaryFile_2;
    QLabel *label_normal_3;
    QDoubleSpinBox *doubleSpinBox_groundNormalsUp;
    QGroupBox *groupBox_nodes_filtering;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_114;
    QGridLayout *gridLayout_21;
    QLabel *label_113;
    QLabel *label_142;
    QDoubleSpinBox *doubleSpinBox_nodes_filtering_ymin;
    QLabel *label_115;
    QLabel *label_116;
    QLabel *label_119;
    QLabel *label_111;
    QSpacerItem *horizontalSpacer;
    QDoubleSpinBox *doubleSpinBox_nodes_filtering_xmin;
    QDoubleSpinBox *doubleSpinBox_nodes_filtering_xmax;
    QDoubleSpinBox *doubleSpinBox_nodes_filtering_zmin;
    QDoubleSpinBox *doubleSpinBox_nodes_filtering_ymax;
    QDoubleSpinBox *doubleSpinBox_nodes_filtering_zmax;
    QGroupBox *groupBox_regenerateScans;
    QGridLayout *gridLayout_18;
    QSpinBox *spinBox_decimation_scan;
    QLabel *label_109;
    QLabel *label_138;
    QDoubleSpinBox *doubleSpinBox_rangeMin;
    QDoubleSpinBox *doubleSpinBox_rangeMax;
    QLabel *label_139;
    QGroupBox *groupBox_regenerate;
    QVBoxLayout *verticalLayout_14;
    QGridLayout *gridLayout;
    QLabel *label_134;
    QLabel *label_135;
    QDoubleSpinBox *doubleSpinBox_maxDepth;
    QLabel *label_198;
    QLineEdit *lineEdit_roiRatios;
    QDoubleSpinBox *doubleSpinBox_minDepth;
    QLabel *label_108;
    QCheckBox *checkBox_subtraction;
    QLineEdit *lineEdit_distortionModel;
    QLabel *label_137;
    QLabel *label_197;
    QLabel *label_132;
    QSpinBox *spinBox_decimation;
    QSpinBox *spinBox_fillDepthHolesError;
    QToolButton *toolButton_distortionModel;
    QCheckBox *checkBox_bilateral;
    QLabel *label_133;
    QLabel *label_136;
    QSpinBox *spinBox_fillDepthHoles;
    QGroupBox *groupBox_bilateral;
    QGridLayout *gridLayout_13;
    QDoubleSpinBox *doubleSpinBox_bilateral_sigmaR;
    QLabel *label_194;
    QDoubleSpinBox *doubleSpinBox_bilateral_sigmaS;
    QLabel *label_195;
    QGroupBox *groupBox_subtraction;
    QGridLayout *gridLayout_11;
    QLabel *label_174;
    QLabel *label_193;
    QDoubleSpinBox *doubleSpinBox_subtractPointFilteringRadius;
    QLabel *label_192;
    QSpinBox *spinBox_subtractFilteringMinPts;
    QDoubleSpinBox *doubleSpinBox_subtractPointFilteringAngle;
    QGroupBox *groupBox_filtering;
    QVBoxLayout *verticalLayout_20;
    QGridLayout *gridLayout_9;
    QDoubleSpinBox *doubleSpinBox_floorHeight;
    QDoubleSpinBox *doubleSpinBox_filteringRadius;
    QSpinBox *spinBox_filteringMinNeighbors;
    QLabel *label_144;
    QDoubleSpinBox *doubleSpinBox_footprintWidth;
    QDoubleSpinBox *doubleSpinBox_footprintLength;
    QLabel *label_145;
    QDoubleSpinBox *doubleSpinBox_ceilingHeight;
    QLabel *label_141;
    QLabel *label_110;
    QLabel *label_143;
    QDoubleSpinBox *doubleSpinBox_footprintHeight;
    QLabel *label_112;
    QLabel *label_140;
    QGroupBox *groupBox_offAxisFiltering;
    QVBoxLayout *verticalLayout_21;
    QLabel *label_148;
    QGridLayout *gridLayout_24;
    QCheckBox *checkBox_offAxisFilteringPosX;
    QCheckBox *checkBox_offAxisFilteringNegY;
    QCheckBox *checkBox_offAxisFilteringNegX;
    QCheckBox *checkBox_offAxisFilteringPosY;
    QCheckBox *checkBox_offAxisFilteringPosZ;
    QCheckBox *checkBox_offAxisFilteringNegZ;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_23;
    QDoubleSpinBox *doubleSpinBox_offAxisFilteringAngle;
    QLabel *label_146;
    QGroupBox *groupBox_mls;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout_3;
    QDoubleSpinBox *doubleSpinBox_mlsRadius;
    QComboBox *comboBox_upsamplingMethod;
    QLabel *label_87;
    QLabel *label_88;
    QLabel *label_89;
    QSpinBox *spinBox_polygonialOrder;
    QLabel *label_90;
    QDoubleSpinBox *doubleSpinBox_mls_outputVoxelSize;
    QStackedWidget *stackedWidget_upsampling;
    QWidget *page;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_4;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_3;
    QSpacerItem *verticalSpacer_3;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_7;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_10;
    QLabel *label_4;
    QGridLayout *gridLayout_5;
    QLabel *label_8;
    QDoubleSpinBox *doubleSpinBox_sampleRadius;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_sampleStep;
    QSpacerItem *verticalSpacer_4;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_11;
    QLabel *label_5;
    QGridLayout *gridLayout_6;
    QSpinBox *spinBox_randomPoints;
    QLabel *label_9;
    QSpacerItem *verticalSpacer_5;
    QWidget *page_5;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_6;
    QGridLayout *gridLayout_7;
    QLabel *label_10;
    QDoubleSpinBox *doubleSpinBox_dilationVoxelSize;
    QLabel *label_11;
    QSpinBox *spinBox_dilationSteps;
    QSpacerItem *verticalSpacer_6;
    QGroupBox *groupBox_gain;
    QGridLayout *gridLayout_12;
    QDoubleSpinBox *doubleSpinBox_gainBeta;
    QLabel *label_binaryFile_7;
    QDoubleSpinBox *doubleSpinBox_gainOverlap;
    QCheckBox *checkBox_gainFull;
    QLabel *label_binaryFile_3;
    QLabel *label_binaryFile_5;
    QDoubleSpinBox *doubleSpinBox_gainRadius;
    QLabel *label_binaryFile_6;
    QLabel *label_binaryFile_8;
    QCheckBox *checkBox_gainRGB;
    QGroupBox *groupBox_cameraProjection;
    QGridLayout *gridLayout_20;
    QCheckBox *checkBox_camProjDistanceToCamPolicy;
    QLabel *label_meshingTextureSize_16;
    QLabel *label_camProjExportCamera;
    QLabel *label_meshingTextureSize_13;
    QSpinBox *spinBox_camProjDecimation;
    QLabel *label_meshingTextureSize_17;
    QLabel *label_meshingTextureSize_12;
    QCheckBox *checkBox_camProjRecolorPoints;
    QLineEdit *lineEdit_camProjMaskFilePath;
    QCheckBox *checkBox_camProjKeepPointsNotSeenByCameras;
    QComboBox *comboBox_camProjExportCamera;
    QLabel *label_meshingTextureSize_14;
    QLineEdit *lineEdit_camProjRoiRatios;
    QDoubleSpinBox *doubleSpinBox_camProjMaxAngle;
    QDoubleSpinBox *doubleSpinBox_camProjMaxDistance;
    QLabel *label_meshingTextureSize_15;
    QLabel *label_meshingTextureSize_18;
    QLabel *label_meshingTextureSize_19;
    QToolButton *toolButton_camProjMaskFilePath;
    QGroupBox *groupBox_meshing;
    QVBoxLayout *verticalLayout_15;
    QGridLayout *gridLayout_10;
    QLabel *label_meshClean;
    QLabel *label_denseReconstruction;
    QDoubleSpinBox *doubleSpinBox_meshDecimationFactor;
    QLabel *label_meshDecimation_2;
    QLabel *label_meshDecimation;
    QLabel *label_textureMapping;
    QComboBox *comboBox_meshingApproach;
    QCheckBox *checkBox_textureMapping;
    QDoubleSpinBox *doubleSpinBox_transferColorRadius;
    QSpinBox *spinBox_mesh_minClusterSize;
    QCheckBox *checkBox_cleanMesh;
    QLabel *label_16;
    QLabel *label_meshMaxPolygons;
    QSpinBox *spinBox_meshMaxPolygons;
    QGroupBox *groupBox_textureMapping;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout_15;
    QSpinBox *spinBox_textureBrightnessContrastRatioHigh;
    QLabel *label_meshingTextureSize_6;
    QComboBox *comboBox_blendingDecimation;
    QCheckBox *checkBox_blending;
    QLabel *label_exposureFusion_3;
    QLabel *label_meshingTextureSize_7;
    QLabel *label_meshingTextureSize_8;
    QLabel *label_exposureFusion_2;
    QLabel *label_meshingTextureSize_2;
    QDoubleSpinBox *doubleSpinBox_meshingTextureMaxDistance;
    QLabel *label_meshingTextureSize_5;
    QLabel *label_meshingTextureFormat;
    QComboBox *comboBox_meshingTextureFormat;
    QComboBox *comboBox_meshingTextureSize;
    QCheckBox *checkBox_exposureFusion;
    QLabel *label_meshingTextureSize_4;
    QLineEdit *lineEdit_meshingTextureRoiRatios;
    QLabel *label_meshingTextureSize;
    QCheckBox *checkBox_cameraFilter;
    QSpinBox *spinBox_textureBrightnessContrastRatioLow;
    QSpinBox *spinBox_mesh_minTextureClusterSize;
    QLabel *label_meshingTextureSize_3;
    QLabel *label_exposureFusion;
    QSpinBox *spinBox_mesh_maxTextures;
    QLabel *label_meshingTextureSize_9;
    QDoubleSpinBox *doubleSpinBox_meshingTextureMaxDepthError;
    QLabel *label_meshingTextureSize_10;
    QDoubleSpinBox *doubleSpinBox_meshingTextureMaxAngle;
    QLabel *label_multiband;
    QCheckBox *checkBox_multiband;
    QLabel *label_meshingTextureSize_11;
    QCheckBox *checkBox_distanceToCamPolicy;
    QGroupBox *groupBox_cameraFilter;
    QGridLayout *gridLayout_16;
    QDoubleSpinBox *doubleSpinBox_cameraFilterRadius;
    QLabel *label_37;
    QDoubleSpinBox *doubleSpinBox_laplacianVariance;
    QDoubleSpinBox *doubleSpinBox_cameraFilterAngle;
    QLabel *label_38;
    QDoubleSpinBox *doubleSpinBox_cameraFilterVelRad;
    QDoubleSpinBox *doubleSpinBox_cameraFilterVel;
    QLabel *label_39;
    QGroupBox *groupBox_multiband;
    QGridLayout *gridLayout_22;
    QLabel *label_49;
    QLabel *label_52;
    QLabel *label_50;
    QLabel *label_55;
    QSpinBox *spinBox_multiband_downscale;
    QComboBox *comboBox_multiband_unwrap;
    QLabel *label_54;
    QLabel *label_53;
    QCheckBox *checkBox_multiband_forcevisible;
    QDoubleSpinBox *doubleSpinBox_multiband_bestscore;
    QCheckBox *checkBox_multiband_fillholes;
    QDoubleSpinBox *doubleSpinBox_multiband_angle;
    QLabel *label_51;
    QSpinBox *spinBox_multiband_padding;
    QLabel *label_56;
    QLineEdit *lineEdit_multiband_nbcontrib;
    QGroupBox *groupBox_gp3;
    QGridLayout *gridLayout_4;
    QLabel *label_169;
    QDoubleSpinBox *doubleSpinBox_gp3Radius;
    QLabel *label_168;
    QDoubleSpinBox *doubleSpinBox_gp3Mu;
    QGroupBox *groupBox_poisson;
    QGridLayout *gridLayout_14;
    QLabel *label_172;
    QLabel *label_177;
    QSpinBox *spinBox_poisson_iso;
    QLabel *label_176;
    QDoubleSpinBox *doubleSpinBox_poisson_samples;
    QDoubleSpinBox *doubleSpinBox_poisson_scale;
    QLabel *label_181;
    QLabel *label_182;
    QLabel *label_178;
    QCheckBox *checkBox_poisson_manifold;
    QLabel *label_179;
    QLabel *label_180;
    QCheckBox *checkBox_poisson_outputPolygons;
    QSpinBox *spinBox_poisson_solver;
    QLabel *label_outputPolygons;
    QDoubleSpinBox *doubleSpinBox_poisson_pointWeight;
    QSpinBox *spinBox_poisson_minDepth;
    QSpinBox *spinBox_poisson_depth;
    QLabel *label_outputPolygons_2;
    QDoubleSpinBox *doubleSpinBox_poisson_targetPolygonSize;
    QGroupBox *groupBox_cputsdf;
    QVBoxLayout *verticalLayout_17;
    QLabel *label_25;
    QGridLayout *gridLayout_17;
    QDoubleSpinBox *doubleSpinBox_cputsdf_size;
    QLabel *label_19;
    QDoubleSpinBox *doubleSpinBox_cputsdf_resolution;
    QLabel *label_20;
    QDoubleSpinBox *doubleSpinBox_cputsdf_tuncPos;
    QLabel *label_21;
    QDoubleSpinBox *doubleSpinBox_cputsdf_tuncNeg;
    QLabel *label_22;
    QSpinBox *spinBox_cputsdf_randomSplit;
    QLabel *label_23;
    QDoubleSpinBox *doubleSpinBox_cputsdf_minWeight;
    QLabel *label_18;
    QDoubleSpinBox *doubleSpinBox_cputsdf_flattenRadius;
    QLabel *label_24;
    QGroupBox *groupBox_organized;
    QGridLayout *gridLayout_2;
    QLabel *label_15;
    QLabel *label_quad;
    QCheckBox *checkBox_mesh_quad;
    QDoubleSpinBox *doubleSpinBox_mesh_angleTolerance;
    QLabel *label_14;
    QSpinBox *spinBox_mesh_triangleSize;
    QGroupBox *groupBox_openchisel;
    QVBoxLayout *verticalLayout_18;
    QLabel *label_26;
    QGridLayout *gridLayout_19;
    QLabel *label_36;
    QLabel *label_35;
    QLabel *label_40;
    QLabel *label_43;
    QLabel *label_46;
    QLabel *label_34;
    QSpinBox *spinBox_openchisel_chunk_size_y;
    QDoubleSpinBox *doubleSpinBox_openchisel_truncation_constant;
    QSpinBox *spinBox_openchisel_chunk_size_z;
    QSpinBox *spinBox_openchisel_chunk_size_x;
    QLabel *label_31;
    QLabel *label_42;
    QLabel *label_41;
    QLabel *label_44;
    QLabel *label_45;
    QLabel *label_47;
    QDoubleSpinBox *doubleSpinBox_openchisel_truncation_linear;
    QDoubleSpinBox *doubleSpinBox_openchisel_truncation_quadratic;
    QDoubleSpinBox *doubleSpinBox_openchisel_truncation_scale;
    QSpinBox *spinBox_openchisel_integration_weight;
    QCheckBox *checkBox_openchisel_use_voxel_carving;
    QDoubleSpinBox *doubleSpinBox_openchisel_carving_dist_m;
    QDoubleSpinBox *doubleSpinBox_openchisel_near_plane_dist;
    QDoubleSpinBox *doubleSpinBox_openchisel_far_plane_dist;
    QLabel *label_48;
    QCheckBox *checkBox_openchisel_mergeVertices;
    QSpacerItem *verticalSpacer_8;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_7;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ExportCloudsDialog)
    {
        if (ExportCloudsDialog->objectName().isEmpty())
            ExportCloudsDialog->setObjectName(QString::fromUtf8("ExportCloudsDialog"));
        ExportCloudsDialog->resize(919, 869);
        verticalLayout_2 = new QVBoxLayout(ExportCloudsDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        scrollArea = new QScrollArea(ExportCloudsDialog);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, -1328, 885, 6169));
        verticalLayout_13 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        checkBox_cameraProjection = new QCheckBox(scrollAreaWidgetContents);
        checkBox_cameraProjection->setObjectName(QString::fromUtf8("checkBox_cameraProjection"));

        gridLayout_8->addWidget(checkBox_cameraProjection, 17, 0, 1, 1);

        label_12 = new QLabel(scrollAreaWidgetContents);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_8->addWidget(label_12, 1, 1, 1, 1);

        checkBox_filtering = new QCheckBox(scrollAreaWidgetContents);
        checkBox_filtering->setObjectName(QString::fromUtf8("checkBox_filtering"));

        gridLayout_8->addWidget(checkBox_filtering, 14, 0, 1, 1);

        checkBox_regenerate = new QCheckBox(scrollAreaWidgetContents);
        checkBox_regenerate->setObjectName(QString::fromUtf8("checkBox_regenerate"));

        gridLayout_8->addWidget(checkBox_regenerate, 13, 0, 1, 1);

        label_binaryFile_12 = new QLabel(scrollAreaWidgetContents);
        label_binaryFile_12->setObjectName(QString::fromUtf8("label_binaryFile_12"));
        label_binaryFile_12->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile_12, 18, 1, 1, 1);

        label_binaryFile_9 = new QLabel(scrollAreaWidgetContents);
        label_binaryFile_9->setObjectName(QString::fromUtf8("label_binaryFile_9"));
        label_binaryFile_9->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile_9, 14, 1, 1, 1);

        label_normal_2 = new QLabel(scrollAreaWidgetContents);
        label_normal_2->setObjectName(QString::fromUtf8("label_normal_2"));
        label_normal_2->setWordWrap(true);

        gridLayout_8->addWidget(label_normal_2, 7, 1, 1, 1);

        checkBox_meshing = new QCheckBox(scrollAreaWidgetContents);
        checkBox_meshing->setObjectName(QString::fromUtf8("checkBox_meshing"));

        gridLayout_8->addWidget(checkBox_meshing, 18, 0, 1, 1);

        label_gainCompensation = new QLabel(scrollAreaWidgetContents);
        label_gainCompensation->setObjectName(QString::fromUtf8("label_gainCompensation"));
        label_gainCompensation->setWordWrap(true);

        gridLayout_8->addWidget(label_gainCompensation, 16, 1, 1, 1);

        label_frame = new QLabel(scrollAreaWidgetContents);
        label_frame->setObjectName(QString::fromUtf8("label_frame"));
        label_frame->setWordWrap(true);

        gridLayout_8->addWidget(label_frame, 5, 1, 1, 1);

        checkBox_assemble = new QCheckBox(scrollAreaWidgetContents);
        checkBox_assemble->setObjectName(QString::fromUtf8("checkBox_assemble"));

        gridLayout_8->addWidget(checkBox_assemble, 4, 0, 1, 1);

        checkBox_binary = new QCheckBox(scrollAreaWidgetContents);
        checkBox_binary->setObjectName(QString::fromUtf8("checkBox_binary"));
        checkBox_binary->setChecked(true);

        gridLayout_8->addWidget(checkBox_binary, 3, 0, 1, 1);

        spinBox_randomSamples_assembled = new QSpinBox(scrollAreaWidgetContents);
        spinBox_randomSamples_assembled->setObjectName(QString::fromUtf8("spinBox_randomSamples_assembled"));
        spinBox_randomSamples_assembled->setMinimum(0);
        spinBox_randomSamples_assembled->setMaximum(99999999);
        spinBox_randomSamples_assembled->setSingleStep(10000);
        spinBox_randomSamples_assembled->setValue(0);

        gridLayout_8->addWidget(spinBox_randomSamples_assembled, 10, 0, 1, 1);

        label_normal = new QLabel(scrollAreaWidgetContents);
        label_normal->setObjectName(QString::fromUtf8("label_normal"));
        label_normal->setWordWrap(true);

        gridLayout_8->addWidget(label_normal, 6, 1, 1, 1);

        label_binaryFile_11 = new QLabel(scrollAreaWidgetContents);
        label_binaryFile_11->setObjectName(QString::fromUtf8("label_binaryFile_11"));
        label_binaryFile_11->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile_11, 0, 1, 1, 1);

        doubleSpinBox_voxelSize_assembled = new QDoubleSpinBox(scrollAreaWidgetContents);
        doubleSpinBox_voxelSize_assembled->setObjectName(QString::fromUtf8("doubleSpinBox_voxelSize_assembled"));
        doubleSpinBox_voxelSize_assembled->setDecimals(3);
        doubleSpinBox_voxelSize_assembled->setMaximum(1.000000000000000);
        doubleSpinBox_voxelSize_assembled->setSingleStep(0.010000000000000);
        doubleSpinBox_voxelSize_assembled->setValue(0.005000000000000);

        gridLayout_8->addWidget(doubleSpinBox_voxelSize_assembled, 9, 0, 1, 1);

        checkBox_fromDepth = new QCheckBox(scrollAreaWidgetContents);
        checkBox_fromDepth->setObjectName(QString::fromUtf8("checkBox_fromDepth"));
        checkBox_fromDepth->setChecked(true);

        gridLayout_8->addWidget(checkBox_fromDepth, 0, 0, 1, 1);

        spinBox_normalKSearch = new QSpinBox(scrollAreaWidgetContents);
        spinBox_normalKSearch->setObjectName(QString::fromUtf8("spinBox_normalKSearch"));
        spinBox_normalKSearch->setMinimum(0);
        spinBox_normalKSearch->setValue(20);

        gridLayout_8->addWidget(spinBox_normalKSearch, 6, 0, 1, 1);

        checkBox_smoothing = new QCheckBox(scrollAreaWidgetContents);
        checkBox_smoothing->setObjectName(QString::fromUtf8("checkBox_smoothing"));

        gridLayout_8->addWidget(checkBox_smoothing, 15, 0, 1, 1);

        comboBox_pipeline = new QComboBox(scrollAreaWidgetContents);
        comboBox_pipeline->addItem(QString());
        comboBox_pipeline->addItem(QString());
        comboBox_pipeline->setObjectName(QString::fromUtf8("comboBox_pipeline"));

        gridLayout_8->addWidget(comboBox_pipeline, 1, 0, 1, 1);

        label_smoothing = new QLabel(scrollAreaWidgetContents);
        label_smoothing->setObjectName(QString::fromUtf8("label_smoothing"));
        label_smoothing->setWordWrap(true);

        gridLayout_8->addWidget(label_smoothing, 15, 1, 1, 1);

        label_intensityColormap = new QLabel(scrollAreaWidgetContents);
        label_intensityColormap->setObjectName(QString::fromUtf8("label_intensityColormap"));
        label_intensityColormap->setWordWrap(true);

        gridLayout_8->addWidget(label_intensityColormap, 11, 1, 1, 1);

        label_voxel = new QLabel(scrollAreaWidgetContents);
        label_voxel->setObjectName(QString::fromUtf8("label_voxel"));
        label_voxel->setWordWrap(true);

        gridLayout_8->addWidget(label_voxel, 9, 1, 1, 1);

        comboBox_intensityColormap = new QComboBox(scrollAreaWidgetContents);
        comboBox_intensityColormap->addItem(QString());
        comboBox_intensityColormap->addItem(QString());
        comboBox_intensityColormap->addItem(QString());
        comboBox_intensityColormap->setObjectName(QString::fromUtf8("comboBox_intensityColormap"));

        gridLayout_8->addWidget(comboBox_intensityColormap, 11, 0, 1, 1);

        label_cameraProjection = new QLabel(scrollAreaWidgetContents);
        label_cameraProjection->setObjectName(QString::fromUtf8("label_cameraProjection"));
        label_cameraProjection->setWordWrap(true);

        gridLayout_8->addWidget(label_cameraProjection, 17, 1, 1, 1);

        label_binaryFile_10 = new QLabel(scrollAreaWidgetContents);
        label_binaryFile_10->setObjectName(QString::fromUtf8("label_binaryFile_10"));
        label_binaryFile_10->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile_10, 12, 1, 1, 1);

        comboBox_frame = new QComboBox(scrollAreaWidgetContents);
        comboBox_frame->addItem(QString());
        comboBox_frame->addItem(QString());
        comboBox_frame->addItem(QString());
        comboBox_frame->addItem(QString());
        comboBox_frame->setObjectName(QString::fromUtf8("comboBox_frame"));

        gridLayout_8->addWidget(comboBox_frame, 5, 0, 1, 1);

        doubleSpinBox_normalRadiusSearch = new QDoubleSpinBox(scrollAreaWidgetContents);
        doubleSpinBox_normalRadiusSearch->setObjectName(QString::fromUtf8("doubleSpinBox_normalRadiusSearch"));
        doubleSpinBox_normalRadiusSearch->setSingleStep(0.010000000000000);

        gridLayout_8->addWidget(doubleSpinBox_normalRadiusSearch, 7, 0, 1, 1);

        checkBox_gainCompensation = new QCheckBox(scrollAreaWidgetContents);
        checkBox_gainCompensation->setObjectName(QString::fromUtf8("checkBox_gainCompensation"));

        gridLayout_8->addWidget(checkBox_gainCompensation, 16, 0, 1, 1);

        label_voxel_2 = new QLabel(scrollAreaWidgetContents);
        label_voxel_2->setObjectName(QString::fromUtf8("label_voxel_2"));
        label_voxel_2->setWordWrap(true);

        gridLayout_8->addWidget(label_voxel_2, 10, 1, 1, 1);

        label_binaryFile = new QLabel(scrollAreaWidgetContents);
        label_binaryFile->setObjectName(QString::fromUtf8("label_binaryFile"));
        label_binaryFile->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile, 3, 1, 1, 1);

        label_regenerate = new QLabel(scrollAreaWidgetContents);
        label_regenerate->setObjectName(QString::fromUtf8("label_regenerate"));
        label_regenerate->setWordWrap(true);

        gridLayout_8->addWidget(label_regenerate, 13, 1, 1, 1);

        checkBox_nodes_filtering = new QCheckBox(scrollAreaWidgetContents);
        checkBox_nodes_filtering->setObjectName(QString::fromUtf8("checkBox_nodes_filtering"));

        gridLayout_8->addWidget(checkBox_nodes_filtering, 12, 0, 1, 1);

        label_binaryFile_2 = new QLabel(scrollAreaWidgetContents);
        label_binaryFile_2->setObjectName(QString::fromUtf8("label_binaryFile_2"));
        label_binaryFile_2->setWordWrap(true);

        gridLayout_8->addWidget(label_binaryFile_2, 4, 1, 1, 1);

        label_normal_3 = new QLabel(scrollAreaWidgetContents);
        label_normal_3->setObjectName(QString::fromUtf8("label_normal_3"));
        label_normal_3->setWordWrap(true);

        gridLayout_8->addWidget(label_normal_3, 8, 1, 1, 1);

        doubleSpinBox_groundNormalsUp = new QDoubleSpinBox(scrollAreaWidgetContents);
        doubleSpinBox_groundNormalsUp->setObjectName(QString::fromUtf8("doubleSpinBox_groundNormalsUp"));
        doubleSpinBox_groundNormalsUp->setMaximum(1.000000000000000);
        doubleSpinBox_groundNormalsUp->setSingleStep(0.010000000000000);

        gridLayout_8->addWidget(doubleSpinBox_groundNormalsUp, 8, 0, 1, 1);

        gridLayout_8->setColumnStretch(1, 1);

        verticalLayout_13->addLayout(gridLayout_8);

        groupBox_nodes_filtering = new QGroupBox(scrollAreaWidgetContents);
        groupBox_nodes_filtering->setObjectName(QString::fromUtf8("groupBox_nodes_filtering"));
        verticalLayout_19 = new QVBoxLayout(groupBox_nodes_filtering);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        label_114 = new QLabel(groupBox_nodes_filtering);
        label_114->setObjectName(QString::fromUtf8("label_114"));
        label_114->setWordWrap(true);

        verticalLayout_19->addWidget(label_114);

        gridLayout_21 = new QGridLayout();
        gridLayout_21->setObjectName(QString::fromUtf8("gridLayout_21"));
        label_113 = new QLabel(groupBox_nodes_filtering);
        label_113->setObjectName(QString::fromUtf8("label_113"));
        label_113->setWordWrap(true);

        gridLayout_21->addWidget(label_113, 0, 2, 1, 1);

        label_142 = new QLabel(groupBox_nodes_filtering);
        label_142->setObjectName(QString::fromUtf8("label_142"));
        label_142->setWordWrap(true);

        gridLayout_21->addWidget(label_142, 1, 0, 1, 1);

        doubleSpinBox_nodes_filtering_ymin = new QDoubleSpinBox(groupBox_nodes_filtering);
        doubleSpinBox_nodes_filtering_ymin->setObjectName(QString::fromUtf8("doubleSpinBox_nodes_filtering_ymin"));
        doubleSpinBox_nodes_filtering_ymin->setDecimals(0);
        doubleSpinBox_nodes_filtering_ymin->setMinimum(-9999999.000000000000000);
        doubleSpinBox_nodes_filtering_ymin->setMaximum(9999999.000000000000000);

        gridLayout_21->addWidget(doubleSpinBox_nodes_filtering_ymin, 1, 1, 1, 1);

        label_115 = new QLabel(groupBox_nodes_filtering);
        label_115->setObjectName(QString::fromUtf8("label_115"));
        label_115->setWordWrap(true);

        gridLayout_21->addWidget(label_115, 1, 2, 1, 1);

        label_116 = new QLabel(groupBox_nodes_filtering);
        label_116->setObjectName(QString::fromUtf8("label_116"));
        label_116->setWordWrap(true);

        gridLayout_21->addWidget(label_116, 2, 0, 1, 1);

        label_119 = new QLabel(groupBox_nodes_filtering);
        label_119->setObjectName(QString::fromUtf8("label_119"));
        label_119->setWordWrap(true);

        gridLayout_21->addWidget(label_119, 2, 2, 1, 1);

        label_111 = new QLabel(groupBox_nodes_filtering);
        label_111->setObjectName(QString::fromUtf8("label_111"));
        label_111->setWordWrap(true);

        gridLayout_21->addWidget(label_111, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_21->addItem(horizontalSpacer, 1, 4, 1, 1);

        doubleSpinBox_nodes_filtering_xmin = new QDoubleSpinBox(groupBox_nodes_filtering);
        doubleSpinBox_nodes_filtering_xmin->setObjectName(QString::fromUtf8("doubleSpinBox_nodes_filtering_xmin"));
        doubleSpinBox_nodes_filtering_xmin->setDecimals(0);
        doubleSpinBox_nodes_filtering_xmin->setMinimum(-9999999.000000000000000);
        doubleSpinBox_nodes_filtering_xmin->setMaximum(9999999.000000000000000);

        gridLayout_21->addWidget(doubleSpinBox_nodes_filtering_xmin, 0, 1, 1, 1);

        doubleSpinBox_nodes_filtering_xmax = new QDoubleSpinBox(groupBox_nodes_filtering);
        doubleSpinBox_nodes_filtering_xmax->setObjectName(QString::fromUtf8("doubleSpinBox_nodes_filtering_xmax"));
        doubleSpinBox_nodes_filtering_xmax->setDecimals(0);
        doubleSpinBox_nodes_filtering_xmax->setMinimum(-9999999.000000000000000);
        doubleSpinBox_nodes_filtering_xmax->setMaximum(9999999.000000000000000);

        gridLayout_21->addWidget(doubleSpinBox_nodes_filtering_xmax, 0, 3, 1, 1);

        doubleSpinBox_nodes_filtering_zmin = new QDoubleSpinBox(groupBox_nodes_filtering);
        doubleSpinBox_nodes_filtering_zmin->setObjectName(QString::fromUtf8("doubleSpinBox_nodes_filtering_zmin"));
        doubleSpinBox_nodes_filtering_zmin->setDecimals(0);
        doubleSpinBox_nodes_filtering_zmin->setMinimum(-9999999.000000000000000);
        doubleSpinBox_nodes_filtering_zmin->setMaximum(9999999.000000000000000);

        gridLayout_21->addWidget(doubleSpinBox_nodes_filtering_zmin, 2, 1, 1, 1);

        doubleSpinBox_nodes_filtering_ymax = new QDoubleSpinBox(groupBox_nodes_filtering);
        doubleSpinBox_nodes_filtering_ymax->setObjectName(QString::fromUtf8("doubleSpinBox_nodes_filtering_ymax"));
        doubleSpinBox_nodes_filtering_ymax->setDecimals(0);
        doubleSpinBox_nodes_filtering_ymax->setMinimum(-9999999.000000000000000);
        doubleSpinBox_nodes_filtering_ymax->setMaximum(9999999.000000000000000);

        gridLayout_21->addWidget(doubleSpinBox_nodes_filtering_ymax, 1, 3, 1, 1);

        doubleSpinBox_nodes_filtering_zmax = new QDoubleSpinBox(groupBox_nodes_filtering);
        doubleSpinBox_nodes_filtering_zmax->setObjectName(QString::fromUtf8("doubleSpinBox_nodes_filtering_zmax"));
        doubleSpinBox_nodes_filtering_zmax->setDecimals(0);
        doubleSpinBox_nodes_filtering_zmax->setMinimum(-9999999.000000000000000);
        doubleSpinBox_nodes_filtering_zmax->setMaximum(9999999.000000000000000);

        gridLayout_21->addWidget(doubleSpinBox_nodes_filtering_zmax, 2, 3, 1, 1);


        verticalLayout_19->addLayout(gridLayout_21);


        verticalLayout_13->addWidget(groupBox_nodes_filtering);

        groupBox_regenerateScans = new QGroupBox(scrollAreaWidgetContents);
        groupBox_regenerateScans->setObjectName(QString::fromUtf8("groupBox_regenerateScans"));
        gridLayout_18 = new QGridLayout(groupBox_regenerateScans);
        gridLayout_18->setObjectName(QString::fromUtf8("gridLayout_18"));
        spinBox_decimation_scan = new QSpinBox(groupBox_regenerateScans);
        spinBox_decimation_scan->setObjectName(QString::fromUtf8("spinBox_decimation_scan"));
        spinBox_decimation_scan->setMinimum(-32);
        spinBox_decimation_scan->setMaximum(32);
        spinBox_decimation_scan->setValue(1);

        gridLayout_18->addWidget(spinBox_decimation_scan, 0, 0, 1, 1);

        label_109 = new QLabel(groupBox_regenerateScans);
        label_109->setObjectName(QString::fromUtf8("label_109"));
        label_109->setWordWrap(true);

        gridLayout_18->addWidget(label_109, 0, 1, 1, 1);

        label_138 = new QLabel(groupBox_regenerateScans);
        label_138->setObjectName(QString::fromUtf8("label_138"));
        label_138->setWordWrap(true);

        gridLayout_18->addWidget(label_138, 1, 1, 1, 1);

        doubleSpinBox_rangeMin = new QDoubleSpinBox(groupBox_regenerateScans);
        doubleSpinBox_rangeMin->setObjectName(QString::fromUtf8("doubleSpinBox_rangeMin"));
        doubleSpinBox_rangeMin->setDecimals(1);
        doubleSpinBox_rangeMin->setMaximum(100.000000000000000);
        doubleSpinBox_rangeMin->setSingleStep(0.100000000000000);
        doubleSpinBox_rangeMin->setValue(0.000000000000000);

        gridLayout_18->addWidget(doubleSpinBox_rangeMin, 1, 0, 1, 1);

        doubleSpinBox_rangeMax = new QDoubleSpinBox(groupBox_regenerateScans);
        doubleSpinBox_rangeMax->setObjectName(QString::fromUtf8("doubleSpinBox_rangeMax"));
        doubleSpinBox_rangeMax->setDecimals(1);
        doubleSpinBox_rangeMax->setMaximum(1000.000000000000000);
        doubleSpinBox_rangeMax->setSingleStep(0.100000000000000);
        doubleSpinBox_rangeMax->setValue(0.000000000000000);

        gridLayout_18->addWidget(doubleSpinBox_rangeMax, 2, 0, 1, 1);

        label_139 = new QLabel(groupBox_regenerateScans);
        label_139->setObjectName(QString::fromUtf8("label_139"));
        label_139->setWordWrap(true);

        gridLayout_18->addWidget(label_139, 2, 1, 1, 1);

        gridLayout_18->setColumnStretch(1, 1);

        verticalLayout_13->addWidget(groupBox_regenerateScans);

        groupBox_regenerate = new QGroupBox(scrollAreaWidgetContents);
        groupBox_regenerate->setObjectName(QString::fromUtf8("groupBox_regenerate"));
        groupBox_regenerate->setCheckable(false);
        verticalLayout_14 = new QVBoxLayout(groupBox_regenerate);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_134 = new QLabel(groupBox_regenerate);
        label_134->setObjectName(QString::fromUtf8("label_134"));
        label_134->setWordWrap(true);

        gridLayout->addWidget(label_134, 6, 2, 1, 1);

        label_135 = new QLabel(groupBox_regenerate);
        label_135->setObjectName(QString::fromUtf8("label_135"));
        label_135->setWordWrap(true);

        gridLayout->addWidget(label_135, 3, 2, 1, 1);

        doubleSpinBox_maxDepth = new QDoubleSpinBox(groupBox_regenerate);
        doubleSpinBox_maxDepth->setObjectName(QString::fromUtf8("doubleSpinBox_maxDepth"));
        doubleSpinBox_maxDepth->setDecimals(2);
        doubleSpinBox_maxDepth->setMaximum(100.000000000000000);
        doubleSpinBox_maxDepth->setSingleStep(0.100000000000000);
        doubleSpinBox_maxDepth->setValue(4.000000000000000);

        gridLayout->addWidget(doubleSpinBox_maxDepth, 1, 1, 1, 1);

        label_198 = new QLabel(groupBox_regenerate);
        label_198->setObjectName(QString::fromUtf8("label_198"));
        label_198->setWordWrap(true);
        label_198->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_198, 5, 2, 1, 1);

        lineEdit_roiRatios = new QLineEdit(groupBox_regenerate);
        lineEdit_roiRatios->setObjectName(QString::fromUtf8("lineEdit_roiRatios"));

        gridLayout->addWidget(lineEdit_roiRatios, 3, 1, 1, 1);

        doubleSpinBox_minDepth = new QDoubleSpinBox(groupBox_regenerate);
        doubleSpinBox_minDepth->setObjectName(QString::fromUtf8("doubleSpinBox_minDepth"));
        doubleSpinBox_minDepth->setDecimals(2);
        doubleSpinBox_minDepth->setMaximum(100.000000000000000);
        doubleSpinBox_minDepth->setSingleStep(0.100000000000000);
        doubleSpinBox_minDepth->setValue(0.000000000000000);

        gridLayout->addWidget(doubleSpinBox_minDepth, 2, 1, 1, 1);

        label_108 = new QLabel(groupBox_regenerate);
        label_108->setObjectName(QString::fromUtf8("label_108"));
        label_108->setWordWrap(true);

        gridLayout->addWidget(label_108, 0, 2, 1, 1);

        checkBox_subtraction = new QCheckBox(groupBox_regenerate);
        checkBox_subtraction->setObjectName(QString::fromUtf8("checkBox_subtraction"));

        gridLayout->addWidget(checkBox_subtraction, 8, 1, 1, 1);

        lineEdit_distortionModel = new QLineEdit(groupBox_regenerate);
        lineEdit_distortionModel->setObjectName(QString::fromUtf8("lineEdit_distortionModel"));

        gridLayout->addWidget(lineEdit_distortionModel, 6, 1, 1, 1);

        label_137 = new QLabel(groupBox_regenerate);
        label_137->setObjectName(QString::fromUtf8("label_137"));
        label_137->setWordWrap(true);

        gridLayout->addWidget(label_137, 8, 2, 1, 1);

        label_197 = new QLabel(groupBox_regenerate);
        label_197->setObjectName(QString::fromUtf8("label_197"));
        label_197->setWordWrap(true);
        label_197->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_197, 4, 2, 1, 1);

        label_132 = new QLabel(groupBox_regenerate);
        label_132->setObjectName(QString::fromUtf8("label_132"));
        label_132->setWordWrap(true);

        gridLayout->addWidget(label_132, 1, 2, 1, 1);

        spinBox_decimation = new QSpinBox(groupBox_regenerate);
        spinBox_decimation->setObjectName(QString::fromUtf8("spinBox_decimation"));
        spinBox_decimation->setMinimum(-32);
        spinBox_decimation->setMaximum(32);
        spinBox_decimation->setValue(1);

        gridLayout->addWidget(spinBox_decimation, 0, 1, 1, 1);

        spinBox_fillDepthHolesError = new QSpinBox(groupBox_regenerate);
        spinBox_fillDepthHolesError->setObjectName(QString::fromUtf8("spinBox_fillDepthHolesError"));

        gridLayout->addWidget(spinBox_fillDepthHolesError, 5, 1, 1, 1);

        toolButton_distortionModel = new QToolButton(groupBox_regenerate);
        toolButton_distortionModel->setObjectName(QString::fromUtf8("toolButton_distortionModel"));

        gridLayout->addWidget(toolButton_distortionModel, 6, 0, 1, 1);

        checkBox_bilateral = new QCheckBox(groupBox_regenerate);
        checkBox_bilateral->setObjectName(QString::fromUtf8("checkBox_bilateral"));

        gridLayout->addWidget(checkBox_bilateral, 7, 1, 1, 1);

        label_133 = new QLabel(groupBox_regenerate);
        label_133->setObjectName(QString::fromUtf8("label_133"));
        label_133->setWordWrap(true);

        gridLayout->addWidget(label_133, 2, 2, 1, 1);

        label_136 = new QLabel(groupBox_regenerate);
        label_136->setObjectName(QString::fromUtf8("label_136"));
        label_136->setWordWrap(true);

        gridLayout->addWidget(label_136, 7, 2, 1, 1);

        spinBox_fillDepthHoles = new QSpinBox(groupBox_regenerate);
        spinBox_fillDepthHoles->setObjectName(QString::fromUtf8("spinBox_fillDepthHoles"));

        gridLayout->addWidget(spinBox_fillDepthHoles, 4, 1, 1, 1);

        gridLayout->setColumnStretch(2, 1);

        verticalLayout_14->addLayout(gridLayout);

        groupBox_bilateral = new QGroupBox(groupBox_regenerate);
        groupBox_bilateral->setObjectName(QString::fromUtf8("groupBox_bilateral"));
        groupBox_bilateral->setCheckable(false);
        gridLayout_13 = new QGridLayout(groupBox_bilateral);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        doubleSpinBox_bilateral_sigmaR = new QDoubleSpinBox(groupBox_bilateral);
        doubleSpinBox_bilateral_sigmaR->setObjectName(QString::fromUtf8("doubleSpinBox_bilateral_sigmaR"));
        doubleSpinBox_bilateral_sigmaR->setDecimals(4);
        doubleSpinBox_bilateral_sigmaR->setMinimum(0.000100000000000);
        doubleSpinBox_bilateral_sigmaR->setMaximum(1.000000000000000);
        doubleSpinBox_bilateral_sigmaR->setSingleStep(0.001000000000000);
        doubleSpinBox_bilateral_sigmaR->setValue(0.005000000000000);

        gridLayout_13->addWidget(doubleSpinBox_bilateral_sigmaR, 1, 0, 1, 1);

        label_194 = new QLabel(groupBox_bilateral);
        label_194->setObjectName(QString::fromUtf8("label_194"));
        label_194->setWordWrap(true);
        label_194->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_13->addWidget(label_194, 1, 1, 1, 1);

        doubleSpinBox_bilateral_sigmaS = new QDoubleSpinBox(groupBox_bilateral);
        doubleSpinBox_bilateral_sigmaS->setObjectName(QString::fromUtf8("doubleSpinBox_bilateral_sigmaS"));
        doubleSpinBox_bilateral_sigmaS->setDecimals(1);
        doubleSpinBox_bilateral_sigmaS->setMinimum(0.100000000000000);
        doubleSpinBox_bilateral_sigmaS->setMaximum(100.000000000000000);
        doubleSpinBox_bilateral_sigmaS->setSingleStep(1.000000000000000);
        doubleSpinBox_bilateral_sigmaS->setValue(5.000000000000000);

        gridLayout_13->addWidget(doubleSpinBox_bilateral_sigmaS, 0, 0, 1, 1);

        label_195 = new QLabel(groupBox_bilateral);
        label_195->setObjectName(QString::fromUtf8("label_195"));
        label_195->setWordWrap(true);
        label_195->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_13->addWidget(label_195, 0, 1, 1, 1);

        gridLayout_13->setColumnStretch(1, 1);

        verticalLayout_14->addWidget(groupBox_bilateral);

        groupBox_subtraction = new QGroupBox(groupBox_regenerate);
        groupBox_subtraction->setObjectName(QString::fromUtf8("groupBox_subtraction"));
        groupBox_subtraction->setCheckable(false);
        gridLayout_11 = new QGridLayout(groupBox_subtraction);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        label_174 = new QLabel(groupBox_subtraction);
        label_174->setObjectName(QString::fromUtf8("label_174"));
        label_174->setWordWrap(true);
        label_174->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_174, 2, 1, 1, 1);

        label_193 = new QLabel(groupBox_subtraction);
        label_193->setObjectName(QString::fromUtf8("label_193"));
        label_193->setWordWrap(true);
        label_193->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_193, 1, 1, 1, 1);

        doubleSpinBox_subtractPointFilteringRadius = new QDoubleSpinBox(groupBox_subtraction);
        doubleSpinBox_subtractPointFilteringRadius->setObjectName(QString::fromUtf8("doubleSpinBox_subtractPointFilteringRadius"));
        doubleSpinBox_subtractPointFilteringRadius->setMinimum(0.010000000000000);
        doubleSpinBox_subtractPointFilteringRadius->setMaximum(1.000000000000000);
        doubleSpinBox_subtractPointFilteringRadius->setSingleStep(0.010000000000000);
        doubleSpinBox_subtractPointFilteringRadius->setValue(0.020000000000000);

        gridLayout_11->addWidget(doubleSpinBox_subtractPointFilteringRadius, 0, 0, 1, 1);

        label_192 = new QLabel(groupBox_subtraction);
        label_192->setObjectName(QString::fromUtf8("label_192"));
        label_192->setWordWrap(true);
        label_192->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_11->addWidget(label_192, 0, 1, 1, 1);

        spinBox_subtractFilteringMinPts = new QSpinBox(groupBox_subtraction);
        spinBox_subtractFilteringMinPts->setObjectName(QString::fromUtf8("spinBox_subtractFilteringMinPts"));
        spinBox_subtractFilteringMinPts->setMinimum(1);

        gridLayout_11->addWidget(spinBox_subtractFilteringMinPts, 2, 0, 1, 1);

        doubleSpinBox_subtractPointFilteringAngle = new QDoubleSpinBox(groupBox_subtraction);
        doubleSpinBox_subtractPointFilteringAngle->setObjectName(QString::fromUtf8("doubleSpinBox_subtractPointFilteringAngle"));
        doubleSpinBox_subtractPointFilteringAngle->setDecimals(0);
        doubleSpinBox_subtractPointFilteringAngle->setMaximum(180.000000000000000);
        doubleSpinBox_subtractPointFilteringAngle->setValue(30.000000000000000);

        gridLayout_11->addWidget(doubleSpinBox_subtractPointFilteringAngle, 1, 0, 1, 1);

        gridLayout_11->setColumnStretch(1, 1);

        verticalLayout_14->addWidget(groupBox_subtraction);


        verticalLayout_13->addWidget(groupBox_regenerate);

        groupBox_filtering = new QGroupBox(scrollAreaWidgetContents);
        groupBox_filtering->setObjectName(QString::fromUtf8("groupBox_filtering"));
        groupBox_filtering->setCheckable(false);
        verticalLayout_20 = new QVBoxLayout(groupBox_filtering);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        doubleSpinBox_floorHeight = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_floorHeight->setObjectName(QString::fromUtf8("doubleSpinBox_floorHeight"));
        doubleSpinBox_floorHeight->setDecimals(2);
        doubleSpinBox_floorHeight->setMinimum(-1000.000000000000000);
        doubleSpinBox_floorHeight->setMaximum(1000.000000000000000);
        doubleSpinBox_floorHeight->setSingleStep(0.100000000000000);
        doubleSpinBox_floorHeight->setValue(0.000000000000000);

        gridLayout_9->addWidget(doubleSpinBox_floorHeight, 3, 0, 1, 1);

        doubleSpinBox_filteringRadius = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_filteringRadius->setObjectName(QString::fromUtf8("doubleSpinBox_filteringRadius"));
        doubleSpinBox_filteringRadius->setDecimals(3);
        doubleSpinBox_filteringRadius->setMinimum(0.000000000000000);
        doubleSpinBox_filteringRadius->setMaximum(1.000000000000000);
        doubleSpinBox_filteringRadius->setSingleStep(0.010000000000000);
        doubleSpinBox_filteringRadius->setValue(0.020000000000000);

        gridLayout_9->addWidget(doubleSpinBox_filteringRadius, 0, 0, 1, 1);

        spinBox_filteringMinNeighbors = new QSpinBox(groupBox_filtering);
        spinBox_filteringMinNeighbors->setObjectName(QString::fromUtf8("spinBox_filteringMinNeighbors"));
        spinBox_filteringMinNeighbors->setMinimum(1);
        spinBox_filteringMinNeighbors->setMaximum(100);
        spinBox_filteringMinNeighbors->setValue(2);

        gridLayout_9->addWidget(spinBox_filteringMinNeighbors, 1, 0, 1, 1);

        label_144 = new QLabel(groupBox_filtering);
        label_144->setObjectName(QString::fromUtf8("label_144"));
        label_144->setWordWrap(true);

        gridLayout_9->addWidget(label_144, 5, 1, 1, 1);

        doubleSpinBox_footprintWidth = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_footprintWidth->setObjectName(QString::fromUtf8("doubleSpinBox_footprintWidth"));
        doubleSpinBox_footprintWidth->setDecimals(2);
        doubleSpinBox_footprintWidth->setMinimum(0.000000000000000);
        doubleSpinBox_footprintWidth->setMaximum(1000.000000000000000);
        doubleSpinBox_footprintWidth->setSingleStep(0.100000000000000);
        doubleSpinBox_footprintWidth->setValue(0.000000000000000);

        gridLayout_9->addWidget(doubleSpinBox_footprintWidth, 4, 0, 1, 1);

        doubleSpinBox_footprintLength = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_footprintLength->setObjectName(QString::fromUtf8("doubleSpinBox_footprintLength"));
        doubleSpinBox_footprintLength->setDecimals(2);
        doubleSpinBox_footprintLength->setMinimum(0.000000000000000);
        doubleSpinBox_footprintLength->setMaximum(1000.000000000000000);
        doubleSpinBox_footprintLength->setSingleStep(0.100000000000000);
        doubleSpinBox_footprintLength->setValue(0.000000000000000);

        gridLayout_9->addWidget(doubleSpinBox_footprintLength, 5, 0, 1, 1);

        label_145 = new QLabel(groupBox_filtering);
        label_145->setObjectName(QString::fromUtf8("label_145"));
        label_145->setWordWrap(true);

        gridLayout_9->addWidget(label_145, 6, 1, 1, 1);

        doubleSpinBox_ceilingHeight = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_ceilingHeight->setObjectName(QString::fromUtf8("doubleSpinBox_ceilingHeight"));
        doubleSpinBox_ceilingHeight->setDecimals(2);
        doubleSpinBox_ceilingHeight->setMinimum(-1000.000000000000000);
        doubleSpinBox_ceilingHeight->setMaximum(1000.000000000000000);
        doubleSpinBox_ceilingHeight->setSingleStep(0.100000000000000);
        doubleSpinBox_ceilingHeight->setValue(0.000000000000000);

        gridLayout_9->addWidget(doubleSpinBox_ceilingHeight, 2, 0, 1, 1);

        label_141 = new QLabel(groupBox_filtering);
        label_141->setObjectName(QString::fromUtf8("label_141"));
        label_141->setWordWrap(true);

        gridLayout_9->addWidget(label_141, 3, 1, 1, 1);

        label_110 = new QLabel(groupBox_filtering);
        label_110->setObjectName(QString::fromUtf8("label_110"));
        label_110->setWordWrap(true);

        gridLayout_9->addWidget(label_110, 0, 1, 1, 1);

        label_143 = new QLabel(groupBox_filtering);
        label_143->setObjectName(QString::fromUtf8("label_143"));
        label_143->setWordWrap(true);

        gridLayout_9->addWidget(label_143, 4, 1, 1, 1);

        doubleSpinBox_footprintHeight = new QDoubleSpinBox(groupBox_filtering);
        doubleSpinBox_footprintHeight->setObjectName(QString::fromUtf8("doubleSpinBox_footprintHeight"));
        doubleSpinBox_footprintHeight->setDecimals(2);
        doubleSpinBox_footprintHeight->setMinimum(-1000.000000000000000);
        doubleSpinBox_footprintHeight->setMaximum(1000.000000000000000);
        doubleSpinBox_footprintHeight->setSingleStep(0.100000000000000);
        doubleSpinBox_footprintHeight->setValue(0.000000000000000);

        gridLayout_9->addWidget(doubleSpinBox_footprintHeight, 6, 0, 1, 1);

        label_112 = new QLabel(groupBox_filtering);
        label_112->setObjectName(QString::fromUtf8("label_112"));
        label_112->setWordWrap(true);

        gridLayout_9->addWidget(label_112, 1, 1, 1, 1);

        label_140 = new QLabel(groupBox_filtering);
        label_140->setObjectName(QString::fromUtf8("label_140"));
        label_140->setWordWrap(true);

        gridLayout_9->addWidget(label_140, 2, 1, 1, 1);

        gridLayout_9->setColumnStretch(1, 1);

        verticalLayout_20->addLayout(gridLayout_9);

        groupBox_offAxisFiltering = new QGroupBox(groupBox_filtering);
        groupBox_offAxisFiltering->setObjectName(QString::fromUtf8("groupBox_offAxisFiltering"));
        groupBox_offAxisFiltering->setCheckable(true);
        groupBox_offAxisFiltering->setChecked(true);
        verticalLayout_21 = new QVBoxLayout(groupBox_offAxisFiltering);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        label_148 = new QLabel(groupBox_offAxisFiltering);
        label_148->setObjectName(QString::fromUtf8("label_148"));
        label_148->setWordWrap(true);

        verticalLayout_21->addWidget(label_148);

        gridLayout_24 = new QGridLayout();
        gridLayout_24->setObjectName(QString::fromUtf8("gridLayout_24"));
        checkBox_offAxisFilteringPosX = new QCheckBox(groupBox_offAxisFiltering);
        checkBox_offAxisFilteringPosX->setObjectName(QString::fromUtf8("checkBox_offAxisFilteringPosX"));
        checkBox_offAxisFilteringPosX->setChecked(true);

        gridLayout_24->addWidget(checkBox_offAxisFilteringPosX, 0, 0, 1, 1);

        checkBox_offAxisFilteringNegY = new QCheckBox(groupBox_offAxisFiltering);
        checkBox_offAxisFilteringNegY->setObjectName(QString::fromUtf8("checkBox_offAxisFilteringNegY"));
        checkBox_offAxisFilteringNegY->setChecked(true);

        gridLayout_24->addWidget(checkBox_offAxisFilteringNegY, 0, 3, 1, 1);

        checkBox_offAxisFilteringNegX = new QCheckBox(groupBox_offAxisFiltering);
        checkBox_offAxisFilteringNegX->setObjectName(QString::fromUtf8("checkBox_offAxisFilteringNegX"));
        checkBox_offAxisFilteringNegX->setChecked(true);

        gridLayout_24->addWidget(checkBox_offAxisFilteringNegX, 0, 1, 1, 1);

        checkBox_offAxisFilteringPosY = new QCheckBox(groupBox_offAxisFiltering);
        checkBox_offAxisFilteringPosY->setObjectName(QString::fromUtf8("checkBox_offAxisFilteringPosY"));
        checkBox_offAxisFilteringPosY->setChecked(true);

        gridLayout_24->addWidget(checkBox_offAxisFilteringPosY, 0, 2, 1, 1);

        checkBox_offAxisFilteringPosZ = new QCheckBox(groupBox_offAxisFiltering);
        checkBox_offAxisFilteringPosZ->setObjectName(QString::fromUtf8("checkBox_offAxisFilteringPosZ"));
        checkBox_offAxisFilteringPosZ->setChecked(true);

        gridLayout_24->addWidget(checkBox_offAxisFilteringPosZ, 0, 4, 1, 1);

        checkBox_offAxisFilteringNegZ = new QCheckBox(groupBox_offAxisFiltering);
        checkBox_offAxisFilteringNegZ->setObjectName(QString::fromUtf8("checkBox_offAxisFilteringNegZ"));
        checkBox_offAxisFilteringNegZ->setChecked(true);

        gridLayout_24->addWidget(checkBox_offAxisFilteringNegZ, 0, 5, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_24->addItem(horizontalSpacer_2, 0, 6, 1, 1);


        verticalLayout_21->addLayout(gridLayout_24);

        gridLayout_23 = new QGridLayout();
        gridLayout_23->setObjectName(QString::fromUtf8("gridLayout_23"));
        doubleSpinBox_offAxisFilteringAngle = new QDoubleSpinBox(groupBox_offAxisFiltering);
        doubleSpinBox_offAxisFilteringAngle->setObjectName(QString::fromUtf8("doubleSpinBox_offAxisFilteringAngle"));
        doubleSpinBox_offAxisFilteringAngle->setDecimals(1);
        doubleSpinBox_offAxisFilteringAngle->setMinimum(0.000000000000000);
        doubleSpinBox_offAxisFilteringAngle->setMaximum(179.000000000000000);
        doubleSpinBox_offAxisFilteringAngle->setSingleStep(1.000000000000000);
        doubleSpinBox_offAxisFilteringAngle->setValue(10.000000000000000);

        gridLayout_23->addWidget(doubleSpinBox_offAxisFilteringAngle, 0, 0, 1, 1);

        label_146 = new QLabel(groupBox_offAxisFiltering);
        label_146->setObjectName(QString::fromUtf8("label_146"));
        label_146->setWordWrap(true);

        gridLayout_23->addWidget(label_146, 0, 1, 1, 1);

        gridLayout_23->setColumnStretch(1, 1);

        verticalLayout_21->addLayout(gridLayout_23);


        verticalLayout_20->addWidget(groupBox_offAxisFiltering);


        verticalLayout_13->addWidget(groupBox_filtering);

        groupBox_mls = new QGroupBox(scrollAreaWidgetContents);
        groupBox_mls->setObjectName(QString::fromUtf8("groupBox_mls"));
        groupBox_mls->setCheckable(false);
        groupBox_mls->setChecked(false);
        verticalLayout = new QVBoxLayout(groupBox_mls);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(groupBox_mls);
        label->setObjectName(QString::fromUtf8("label"));
        label->setWordWrap(true);

        verticalLayout->addWidget(label);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        doubleSpinBox_mlsRadius = new QDoubleSpinBox(groupBox_mls);
        doubleSpinBox_mlsRadius->setObjectName(QString::fromUtf8("doubleSpinBox_mlsRadius"));
        doubleSpinBox_mlsRadius->setDecimals(3);
        doubleSpinBox_mlsRadius->setMaximum(1.000000000000000);
        doubleSpinBox_mlsRadius->setSingleStep(0.010000000000000);
        doubleSpinBox_mlsRadius->setValue(0.040000000000000);

        gridLayout_3->addWidget(doubleSpinBox_mlsRadius, 0, 0, 1, 1);

        comboBox_upsamplingMethod = new QComboBox(groupBox_mls);
        comboBox_upsamplingMethod->addItem(QString());
        comboBox_upsamplingMethod->addItem(QString());
        comboBox_upsamplingMethod->addItem(QString());
        comboBox_upsamplingMethod->addItem(QString());
        comboBox_upsamplingMethod->addItem(QString());
        comboBox_upsamplingMethod->setObjectName(QString::fromUtf8("comboBox_upsamplingMethod"));

        gridLayout_3->addWidget(comboBox_upsamplingMethod, 2, 0, 1, 1);

        label_87 = new QLabel(groupBox_mls);
        label_87->setObjectName(QString::fromUtf8("label_87"));
        label_87->setWordWrap(true);

        gridLayout_3->addWidget(label_87, 0, 1, 1, 1);

        label_88 = new QLabel(groupBox_mls);
        label_88->setObjectName(QString::fromUtf8("label_88"));
        label_88->setWordWrap(true);

        gridLayout_3->addWidget(label_88, 2, 1, 1, 1);

        label_89 = new QLabel(groupBox_mls);
        label_89->setObjectName(QString::fromUtf8("label_89"));
        label_89->setWordWrap(true);

        gridLayout_3->addWidget(label_89, 1, 1, 1, 1);

        spinBox_polygonialOrder = new QSpinBox(groupBox_mls);
        spinBox_polygonialOrder->setObjectName(QString::fromUtf8("spinBox_polygonialOrder"));
        spinBox_polygonialOrder->setMinimum(0);
        spinBox_polygonialOrder->setMaximum(4);
        spinBox_polygonialOrder->setValue(2);

        gridLayout_3->addWidget(spinBox_polygonialOrder, 1, 0, 1, 1);

        label_90 = new QLabel(groupBox_mls);
        label_90->setObjectName(QString::fromUtf8("label_90"));
        label_90->setWordWrap(true);

        gridLayout_3->addWidget(label_90, 3, 1, 1, 1);

        doubleSpinBox_mls_outputVoxelSize = new QDoubleSpinBox(groupBox_mls);
        doubleSpinBox_mls_outputVoxelSize->setObjectName(QString::fromUtf8("doubleSpinBox_mls_outputVoxelSize"));
        doubleSpinBox_mls_outputVoxelSize->setDecimals(3);

        gridLayout_3->addWidget(doubleSpinBox_mls_outputVoxelSize, 3, 0, 1, 1);

        gridLayout_3->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout_3);

        stackedWidget_upsampling = new QStackedWidget(groupBox_mls);
        stackedWidget_upsampling->setObjectName(QString::fromUtf8("stackedWidget_upsampling"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_3 = new QVBoxLayout(page);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(page);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setWordWrap(true);

        verticalLayout_8->addWidget(label_2);

        verticalSpacer_2 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);


        verticalLayout_3->addWidget(groupBox);

        stackedWidget_upsampling->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_4 = new QVBoxLayout(page_2);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        groupBox_2 = new QGroupBox(page_2);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        verticalLayout_9 = new QVBoxLayout(groupBox_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setWordWrap(true);

        verticalLayout_9->addWidget(label_3);

        verticalSpacer_3 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_9->addItem(verticalSpacer_3);


        verticalLayout_4->addWidget(groupBox_2);

        stackedWidget_upsampling->addWidget(page_2);
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        verticalLayout_7 = new QVBoxLayout(page_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        groupBox_3 = new QGroupBox(page_3);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        verticalLayout_10 = new QVBoxLayout(groupBox_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        label_4 = new QLabel(groupBox_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setWordWrap(true);

        verticalLayout_10->addWidget(label_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setWordWrap(true);

        gridLayout_5->addWidget(label_8, 1, 1, 1, 1);

        doubleSpinBox_sampleRadius = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_sampleRadius->setObjectName(QString::fromUtf8("doubleSpinBox_sampleRadius"));
        doubleSpinBox_sampleRadius->setDecimals(3);

        gridLayout_5->addWidget(doubleSpinBox_sampleRadius, 0, 0, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout_5->addWidget(label_7, 0, 1, 1, 1);

        doubleSpinBox_sampleStep = new QDoubleSpinBox(groupBox_3);
        doubleSpinBox_sampleStep->setObjectName(QString::fromUtf8("doubleSpinBox_sampleStep"));
        doubleSpinBox_sampleStep->setDecimals(3);

        gridLayout_5->addWidget(doubleSpinBox_sampleStep, 1, 0, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_10->addLayout(gridLayout_5);

        verticalSpacer_4 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_10->addItem(verticalSpacer_4);


        verticalLayout_7->addWidget(groupBox_3);

        stackedWidget_upsampling->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout_6 = new QVBoxLayout(page_4);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBox_4 = new QGroupBox(page_4);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        verticalLayout_11 = new QVBoxLayout(groupBox_4);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        label_5 = new QLabel(groupBox_4);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setWordWrap(true);

        verticalLayout_11->addWidget(label_5);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        spinBox_randomPoints = new QSpinBox(groupBox_4);
        spinBox_randomPoints->setObjectName(QString::fromUtf8("spinBox_randomPoints"));

        gridLayout_6->addWidget(spinBox_randomPoints, 0, 0, 1, 1);

        label_9 = new QLabel(groupBox_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        gridLayout_6->addWidget(label_9, 0, 1, 1, 1);

        gridLayout_6->setColumnStretch(1, 1);

        verticalLayout_11->addLayout(gridLayout_6);

        verticalSpacer_5 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_11->addItem(verticalSpacer_5);


        verticalLayout_6->addWidget(groupBox_4);

        stackedWidget_upsampling->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        verticalLayout_5 = new QVBoxLayout(page_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox_5 = new QGroupBox(page_5);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_12 = new QVBoxLayout(groupBox_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        label_6 = new QLabel(groupBox_5);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setWordWrap(true);

        verticalLayout_12->addWidget(label_6);

        gridLayout_7 = new QGridLayout();
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_10 = new QLabel(groupBox_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setWordWrap(true);

        gridLayout_7->addWidget(label_10, 0, 1, 1, 1);

        doubleSpinBox_dilationVoxelSize = new QDoubleSpinBox(groupBox_5);
        doubleSpinBox_dilationVoxelSize->setObjectName(QString::fromUtf8("doubleSpinBox_dilationVoxelSize"));
        doubleSpinBox_dilationVoxelSize->setDecimals(3);

        gridLayout_7->addWidget(doubleSpinBox_dilationVoxelSize, 0, 0, 1, 1);

        label_11 = new QLabel(groupBox_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_7->addWidget(label_11, 1, 1, 1, 1);

        spinBox_dilationSteps = new QSpinBox(groupBox_5);
        spinBox_dilationSteps->setObjectName(QString::fromUtf8("spinBox_dilationSteps"));

        gridLayout_7->addWidget(spinBox_dilationSteps, 1, 0, 1, 1);

        gridLayout_7->setColumnStretch(1, 1);

        verticalLayout_12->addLayout(gridLayout_7);

        verticalSpacer_6 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_12->addItem(verticalSpacer_6);


        verticalLayout_5->addWidget(groupBox_5);

        stackedWidget_upsampling->addWidget(page_5);

        verticalLayout->addWidget(stackedWidget_upsampling);


        verticalLayout_13->addWidget(groupBox_mls);

        groupBox_gain = new QGroupBox(scrollAreaWidgetContents);
        groupBox_gain->setObjectName(QString::fromUtf8("groupBox_gain"));
        groupBox_gain->setCheckable(false);
        gridLayout_12 = new QGridLayout(groupBox_gain);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        doubleSpinBox_gainBeta = new QDoubleSpinBox(groupBox_gain);
        doubleSpinBox_gainBeta->setObjectName(QString::fromUtf8("doubleSpinBox_gainBeta"));
        doubleSpinBox_gainBeta->setDecimals(1);
        doubleSpinBox_gainBeta->setMinimum(0.100000000000000);
        doubleSpinBox_gainBeta->setMaximum(1000.000000000000000);
        doubleSpinBox_gainBeta->setSingleStep(1.000000000000000);
        doubleSpinBox_gainBeta->setValue(100.000000000000000);

        gridLayout_12->addWidget(doubleSpinBox_gainBeta, 2, 0, 1, 1);

        label_binaryFile_7 = new QLabel(groupBox_gain);
        label_binaryFile_7->setObjectName(QString::fromUtf8("label_binaryFile_7"));
        label_binaryFile_7->setWordWrap(true);

        gridLayout_12->addWidget(label_binaryFile_7, 4, 1, 1, 1);

        doubleSpinBox_gainOverlap = new QDoubleSpinBox(groupBox_gain);
        doubleSpinBox_gainOverlap->setObjectName(QString::fromUtf8("doubleSpinBox_gainOverlap"));
        doubleSpinBox_gainOverlap->setDecimals(2);
        doubleSpinBox_gainOverlap->setMinimum(0.000000000000000);
        doubleSpinBox_gainOverlap->setMaximum(1.000000000000000);
        doubleSpinBox_gainOverlap->setSingleStep(0.010000000000000);
        doubleSpinBox_gainOverlap->setValue(0.050000000000000);

        gridLayout_12->addWidget(doubleSpinBox_gainOverlap, 1, 0, 1, 1);

        checkBox_gainFull = new QCheckBox(groupBox_gain);
        checkBox_gainFull->setObjectName(QString::fromUtf8("checkBox_gainFull"));

        gridLayout_12->addWidget(checkBox_gainFull, 4, 0, 1, 1);

        label_binaryFile_3 = new QLabel(groupBox_gain);
        label_binaryFile_3->setObjectName(QString::fromUtf8("label_binaryFile_3"));
        label_binaryFile_3->setWordWrap(true);

        gridLayout_12->addWidget(label_binaryFile_3, 0, 1, 1, 1);

        label_binaryFile_5 = new QLabel(groupBox_gain);
        label_binaryFile_5->setObjectName(QString::fromUtf8("label_binaryFile_5"));
        label_binaryFile_5->setWordWrap(true);

        gridLayout_12->addWidget(label_binaryFile_5, 2, 1, 1, 1);

        doubleSpinBox_gainRadius = new QDoubleSpinBox(groupBox_gain);
        doubleSpinBox_gainRadius->setObjectName(QString::fromUtf8("doubleSpinBox_gainRadius"));
        doubleSpinBox_gainRadius->setDecimals(3);
        doubleSpinBox_gainRadius->setMinimum(0.001000000000000);
        doubleSpinBox_gainRadius->setMaximum(10.000000000000000);
        doubleSpinBox_gainRadius->setSingleStep(0.010000000000000);
        doubleSpinBox_gainRadius->setValue(0.020000000000000);

        gridLayout_12->addWidget(doubleSpinBox_gainRadius, 0, 0, 1, 1);

        label_binaryFile_6 = new QLabel(groupBox_gain);
        label_binaryFile_6->setObjectName(QString::fromUtf8("label_binaryFile_6"));
        label_binaryFile_6->setWordWrap(true);

        gridLayout_12->addWidget(label_binaryFile_6, 1, 1, 1, 1);

        label_binaryFile_8 = new QLabel(groupBox_gain);
        label_binaryFile_8->setObjectName(QString::fromUtf8("label_binaryFile_8"));
        label_binaryFile_8->setWordWrap(true);

        gridLayout_12->addWidget(label_binaryFile_8, 3, 1, 1, 1);

        checkBox_gainRGB = new QCheckBox(groupBox_gain);
        checkBox_gainRGB->setObjectName(QString::fromUtf8("checkBox_gainRGB"));

        gridLayout_12->addWidget(checkBox_gainRGB, 3, 0, 1, 1);

        gridLayout_12->setColumnStretch(1, 1);

        verticalLayout_13->addWidget(groupBox_gain);

        groupBox_cameraProjection = new QGroupBox(scrollAreaWidgetContents);
        groupBox_cameraProjection->setObjectName(QString::fromUtf8("groupBox_cameraProjection"));
        groupBox_cameraProjection->setCheckable(false);
        gridLayout_20 = new QGridLayout(groupBox_cameraProjection);
        gridLayout_20->setObjectName(QString::fromUtf8("gridLayout_20"));
        checkBox_camProjDistanceToCamPolicy = new QCheckBox(groupBox_cameraProjection);
        checkBox_camProjDistanceToCamPolicy->setObjectName(QString::fromUtf8("checkBox_camProjDistanceToCamPolicy"));

        gridLayout_20->addWidget(checkBox_camProjDistanceToCamPolicy, 6, 1, 1, 1);

        label_meshingTextureSize_16 = new QLabel(groupBox_cameraProjection);
        label_meshingTextureSize_16->setObjectName(QString::fromUtf8("label_meshingTextureSize_16"));
        label_meshingTextureSize_16->setWordWrap(true);

        gridLayout_20->addWidget(label_meshingTextureSize_16, 4, 2, 1, 2);

        label_camProjExportCamera = new QLabel(groupBox_cameraProjection);
        label_camProjExportCamera->setObjectName(QString::fromUtf8("label_camProjExportCamera"));
        label_camProjExportCamera->setWordWrap(true);

        gridLayout_20->addWidget(label_camProjExportCamera, 9, 2, 1, 2);

        label_meshingTextureSize_13 = new QLabel(groupBox_cameraProjection);
        label_meshingTextureSize_13->setObjectName(QString::fromUtf8("label_meshingTextureSize_13"));
        label_meshingTextureSize_13->setWordWrap(true);

        gridLayout_20->addWidget(label_meshingTextureSize_13, 2, 2, 1, 2);

        spinBox_camProjDecimation = new QSpinBox(groupBox_cameraProjection);
        spinBox_camProjDecimation->setObjectName(QString::fromUtf8("spinBox_camProjDecimation"));
        spinBox_camProjDecimation->setMinimum(1);
        spinBox_camProjDecimation->setMaximum(9999);
        spinBox_camProjDecimation->setSingleStep(1);
        spinBox_camProjDecimation->setValue(1);

        gridLayout_20->addWidget(spinBox_camProjDecimation, 4, 1, 1, 1);

        label_meshingTextureSize_17 = new QLabel(groupBox_cameraProjection);
        label_meshingTextureSize_17->setObjectName(QString::fromUtf8("label_meshingTextureSize_17"));
        label_meshingTextureSize_17->setWordWrap(true);

        gridLayout_20->addWidget(label_meshingTextureSize_17, 1, 2, 1, 2);

        label_meshingTextureSize_12 = new QLabel(groupBox_cameraProjection);
        label_meshingTextureSize_12->setObjectName(QString::fromUtf8("label_meshingTextureSize_12"));
        label_meshingTextureSize_12->setWordWrap(true);

        gridLayout_20->addWidget(label_meshingTextureSize_12, 3, 2, 1, 2);

        checkBox_camProjRecolorPoints = new QCheckBox(groupBox_cameraProjection);
        checkBox_camProjRecolorPoints->setObjectName(QString::fromUtf8("checkBox_camProjRecolorPoints"));

        gridLayout_20->addWidget(checkBox_camProjRecolorPoints, 8, 1, 1, 1);

        lineEdit_camProjMaskFilePath = new QLineEdit(groupBox_cameraProjection);
        lineEdit_camProjMaskFilePath->setObjectName(QString::fromUtf8("lineEdit_camProjMaskFilePath"));

        gridLayout_20->addWidget(lineEdit_camProjMaskFilePath, 5, 1, 1, 1);

        checkBox_camProjKeepPointsNotSeenByCameras = new QCheckBox(groupBox_cameraProjection);
        checkBox_camProjKeepPointsNotSeenByCameras->setObjectName(QString::fromUtf8("checkBox_camProjKeepPointsNotSeenByCameras"));

        gridLayout_20->addWidget(checkBox_camProjKeepPointsNotSeenByCameras, 7, 1, 1, 1);

        comboBox_camProjExportCamera = new QComboBox(groupBox_cameraProjection);
        comboBox_camProjExportCamera->addItem(QString());
        comboBox_camProjExportCamera->addItem(QString());
        comboBox_camProjExportCamera->addItem(QString());
        comboBox_camProjExportCamera->addItem(QString());
        comboBox_camProjExportCamera->setObjectName(QString::fromUtf8("comboBox_camProjExportCamera"));

        gridLayout_20->addWidget(comboBox_camProjExportCamera, 9, 1, 1, 1);

        label_meshingTextureSize_14 = new QLabel(groupBox_cameraProjection);
        label_meshingTextureSize_14->setObjectName(QString::fromUtf8("label_meshingTextureSize_14"));
        label_meshingTextureSize_14->setWordWrap(true);

        gridLayout_20->addWidget(label_meshingTextureSize_14, 6, 2, 1, 2);

        lineEdit_camProjRoiRatios = new QLineEdit(groupBox_cameraProjection);
        lineEdit_camProjRoiRatios->setObjectName(QString::fromUtf8("lineEdit_camProjRoiRatios"));

        gridLayout_20->addWidget(lineEdit_camProjRoiRatios, 1, 1, 1, 1);

        doubleSpinBox_camProjMaxAngle = new QDoubleSpinBox(groupBox_cameraProjection);
        doubleSpinBox_camProjMaxAngle->setObjectName(QString::fromUtf8("doubleSpinBox_camProjMaxAngle"));
        doubleSpinBox_camProjMaxAngle->setDecimals(0);
        doubleSpinBox_camProjMaxAngle->setMinimum(0.000000000000000);
        doubleSpinBox_camProjMaxAngle->setMaximum(180.000000000000000);
        doubleSpinBox_camProjMaxAngle->setSingleStep(1.000000000000000);
        doubleSpinBox_camProjMaxAngle->setValue(0.000000000000000);

        gridLayout_20->addWidget(doubleSpinBox_camProjMaxAngle, 3, 1, 1, 1);

        doubleSpinBox_camProjMaxDistance = new QDoubleSpinBox(groupBox_cameraProjection);
        doubleSpinBox_camProjMaxDistance->setObjectName(QString::fromUtf8("doubleSpinBox_camProjMaxDistance"));
        doubleSpinBox_camProjMaxDistance->setDecimals(1);
        doubleSpinBox_camProjMaxDistance->setMinimum(0.000000000000000);
        doubleSpinBox_camProjMaxDistance->setMaximum(99.000000000000000);
        doubleSpinBox_camProjMaxDistance->setSingleStep(1.000000000000000);
        doubleSpinBox_camProjMaxDistance->setValue(0.000000000000000);

        gridLayout_20->addWidget(doubleSpinBox_camProjMaxDistance, 2, 1, 1, 1);

        label_meshingTextureSize_15 = new QLabel(groupBox_cameraProjection);
        label_meshingTextureSize_15->setObjectName(QString::fromUtf8("label_meshingTextureSize_15"));
        label_meshingTextureSize_15->setWordWrap(true);

        gridLayout_20->addWidget(label_meshingTextureSize_15, 7, 2, 1, 2);

        label_meshingTextureSize_18 = new QLabel(groupBox_cameraProjection);
        label_meshingTextureSize_18->setObjectName(QString::fromUtf8("label_meshingTextureSize_18"));
        label_meshingTextureSize_18->setWordWrap(true);

        gridLayout_20->addWidget(label_meshingTextureSize_18, 8, 2, 1, 1);

        label_meshingTextureSize_19 = new QLabel(groupBox_cameraProjection);
        label_meshingTextureSize_19->setObjectName(QString::fromUtf8("label_meshingTextureSize_19"));
        label_meshingTextureSize_19->setWordWrap(true);

        gridLayout_20->addWidget(label_meshingTextureSize_19, 5, 2, 1, 2);

        toolButton_camProjMaskFilePath = new QToolButton(groupBox_cameraProjection);
        toolButton_camProjMaskFilePath->setObjectName(QString::fromUtf8("toolButton_camProjMaskFilePath"));

        gridLayout_20->addWidget(toolButton_camProjMaskFilePath, 5, 0, 1, 1);

        gridLayout_20->setColumnStretch(3, 1);

        verticalLayout_13->addWidget(groupBox_cameraProjection);

        groupBox_meshing = new QGroupBox(scrollAreaWidgetContents);
        groupBox_meshing->setObjectName(QString::fromUtf8("groupBox_meshing"));
        groupBox_meshing->setCheckable(false);
        verticalLayout_15 = new QVBoxLayout(groupBox_meshing);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        gridLayout_10 = new QGridLayout();
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_meshClean = new QLabel(groupBox_meshing);
        label_meshClean->setObjectName(QString::fromUtf8("label_meshClean"));
        label_meshClean->setWordWrap(true);

        gridLayout_10->addWidget(label_meshClean, 5, 1, 1, 1);

        label_denseReconstruction = new QLabel(groupBox_meshing);
        label_denseReconstruction->setObjectName(QString::fromUtf8("label_denseReconstruction"));
        label_denseReconstruction->setWordWrap(true);

        gridLayout_10->addWidget(label_denseReconstruction, 0, 1, 1, 1);

        doubleSpinBox_meshDecimationFactor = new QDoubleSpinBox(groupBox_meshing);
        doubleSpinBox_meshDecimationFactor->setObjectName(QString::fromUtf8("doubleSpinBox_meshDecimationFactor"));
        doubleSpinBox_meshDecimationFactor->setDecimals(2);
        doubleSpinBox_meshDecimationFactor->setMinimum(0.000000000000000);
        doubleSpinBox_meshDecimationFactor->setMaximum(0.990000000000000);
        doubleSpinBox_meshDecimationFactor->setSingleStep(0.100000000000000);
        doubleSpinBox_meshDecimationFactor->setValue(0.000000000000000);

        gridLayout_10->addWidget(doubleSpinBox_meshDecimationFactor, 1, 0, 1, 1);

        label_meshDecimation_2 = new QLabel(groupBox_meshing);
        label_meshDecimation_2->setObjectName(QString::fromUtf8("label_meshDecimation_2"));
        label_meshDecimation_2->setWordWrap(true);

        gridLayout_10->addWidget(label_meshDecimation_2, 3, 1, 1, 1);

        label_meshDecimation = new QLabel(groupBox_meshing);
        label_meshDecimation->setObjectName(QString::fromUtf8("label_meshDecimation"));
        label_meshDecimation->setWordWrap(true);

        gridLayout_10->addWidget(label_meshDecimation, 1, 1, 1, 1);

        label_textureMapping = new QLabel(groupBox_meshing);
        label_textureMapping->setObjectName(QString::fromUtf8("label_textureMapping"));
        label_textureMapping->setWordWrap(true);

        gridLayout_10->addWidget(label_textureMapping, 4, 1, 1, 1);

        comboBox_meshingApproach = new QComboBox(groupBox_meshing);
        comboBox_meshingApproach->addItem(QString());
        comboBox_meshingApproach->addItem(QString());
        comboBox_meshingApproach->addItem(QString());
        comboBox_meshingApproach->addItem(QString());
        comboBox_meshingApproach->addItem(QString());
        comboBox_meshingApproach->setObjectName(QString::fromUtf8("comboBox_meshingApproach"));

        gridLayout_10->addWidget(comboBox_meshingApproach, 0, 0, 1, 1);

        checkBox_textureMapping = new QCheckBox(groupBox_meshing);
        checkBox_textureMapping->setObjectName(QString::fromUtf8("checkBox_textureMapping"));

        gridLayout_10->addWidget(checkBox_textureMapping, 4, 0, 1, 1);

        doubleSpinBox_transferColorRadius = new QDoubleSpinBox(groupBox_meshing);
        doubleSpinBox_transferColorRadius->setObjectName(QString::fromUtf8("doubleSpinBox_transferColorRadius"));
        doubleSpinBox_transferColorRadius->setDecimals(2);
        doubleSpinBox_transferColorRadius->setMinimum(-1.000000000000000);
        doubleSpinBox_transferColorRadius->setMaximum(10.000000000000000);
        doubleSpinBox_transferColorRadius->setSingleStep(0.010000000000000);
        doubleSpinBox_transferColorRadius->setValue(0.050000000000000);

        gridLayout_10->addWidget(doubleSpinBox_transferColorRadius, 3, 0, 1, 1);

        spinBox_mesh_minClusterSize = new QSpinBox(groupBox_meshing);
        spinBox_mesh_minClusterSize->setObjectName(QString::fromUtf8("spinBox_mesh_minClusterSize"));
        spinBox_mesh_minClusterSize->setMinimum(-1);
        spinBox_mesh_minClusterSize->setMaximum(99999);

        gridLayout_10->addWidget(spinBox_mesh_minClusterSize, 6, 0, 1, 1);

        checkBox_cleanMesh = new QCheckBox(groupBox_meshing);
        checkBox_cleanMesh->setObjectName(QString::fromUtf8("checkBox_cleanMesh"));

        gridLayout_10->addWidget(checkBox_cleanMesh, 5, 0, 1, 1);

        label_16 = new QLabel(groupBox_meshing);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_10->addWidget(label_16, 6, 1, 1, 1);

        label_meshMaxPolygons = new QLabel(groupBox_meshing);
        label_meshMaxPolygons->setObjectName(QString::fromUtf8("label_meshMaxPolygons"));
        label_meshMaxPolygons->setWordWrap(true);

        gridLayout_10->addWidget(label_meshMaxPolygons, 2, 1, 1, 1);

        spinBox_meshMaxPolygons = new QSpinBox(groupBox_meshing);
        spinBox_meshMaxPolygons->setObjectName(QString::fromUtf8("spinBox_meshMaxPolygons"));
        spinBox_meshMaxPolygons->setMinimum(0);
        spinBox_meshMaxPolygons->setMaximum(10000000);
        spinBox_meshMaxPolygons->setSingleStep(50000);
        spinBox_meshMaxPolygons->setValue(9);

        gridLayout_10->addWidget(spinBox_meshMaxPolygons, 2, 0, 1, 1);

        gridLayout_10->setColumnStretch(1, 1);

        verticalLayout_15->addLayout(gridLayout_10);

        groupBox_textureMapping = new QGroupBox(groupBox_meshing);
        groupBox_textureMapping->setObjectName(QString::fromUtf8("groupBox_textureMapping"));
        groupBox_textureMapping->setCheckable(false);
        groupBox_textureMapping->setChecked(false);
        verticalLayout_16 = new QVBoxLayout(groupBox_textureMapping);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        gridLayout_15 = new QGridLayout();
        gridLayout_15->setObjectName(QString::fromUtf8("gridLayout_15"));
        spinBox_textureBrightnessContrastRatioHigh = new QSpinBox(groupBox_textureMapping);
        spinBox_textureBrightnessContrastRatioHigh->setObjectName(QString::fromUtf8("spinBox_textureBrightnessContrastRatioHigh"));
        spinBox_textureBrightnessContrastRatioHigh->setMinimum(0);
        spinBox_textureBrightnessContrastRatioHigh->setMaximum(49);

        gridLayout_15->addWidget(spinBox_textureBrightnessContrastRatioHigh, 13, 0, 1, 1);

        label_meshingTextureSize_6 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_6->setObjectName(QString::fromUtf8("label_meshingTextureSize_6"));
        label_meshingTextureSize_6->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_6, 13, 1, 1, 1);

        comboBox_blendingDecimation = new QComboBox(groupBox_textureMapping);
        comboBox_blendingDecimation->addItem(QString());
        comboBox_blendingDecimation->addItem(QString());
        comboBox_blendingDecimation->addItem(QString());
        comboBox_blendingDecimation->addItem(QString());
        comboBox_blendingDecimation->addItem(QString());
        comboBox_blendingDecimation->addItem(QString());
        comboBox_blendingDecimation->addItem(QString());
        comboBox_blendingDecimation->addItem(QString());
        comboBox_blendingDecimation->setObjectName(QString::fromUtf8("comboBox_blendingDecimation"));

        gridLayout_15->addWidget(comboBox_blendingDecimation, 11, 0, 1, 1);

        checkBox_blending = new QCheckBox(groupBox_textureMapping);
        checkBox_blending->setObjectName(QString::fromUtf8("checkBox_blending"));

        gridLayout_15->addWidget(checkBox_blending, 10, 0, 1, 1);

        label_exposureFusion_3 = new QLabel(groupBox_textureMapping);
        label_exposureFusion_3->setObjectName(QString::fromUtf8("label_exposureFusion_3"));
        label_exposureFusion_3->setWordWrap(true);

        gridLayout_15->addWidget(label_exposureFusion_3, 11, 1, 1, 1);

        label_meshingTextureSize_7 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_7->setObjectName(QString::fromUtf8("label_meshingTextureSize_7"));
        label_meshingTextureSize_7->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_7, 3, 1, 1, 1);

        label_meshingTextureSize_8 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_8->setObjectName(QString::fromUtf8("label_meshingTextureSize_8"));
        label_meshingTextureSize_8->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_8, 2, 1, 1, 1);

        label_exposureFusion_2 = new QLabel(groupBox_textureMapping);
        label_exposureFusion_2->setObjectName(QString::fromUtf8("label_exposureFusion_2"));
        label_exposureFusion_2->setWordWrap(true);

        gridLayout_15->addWidget(label_exposureFusion_2, 10, 1, 1, 1);

        label_meshingTextureSize_2 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_2->setObjectName(QString::fromUtf8("label_meshingTextureSize_2"));
        label_meshingTextureSize_2->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_2, 4, 1, 1, 1);

        doubleSpinBox_meshingTextureMaxDistance = new QDoubleSpinBox(groupBox_textureMapping);
        doubleSpinBox_meshingTextureMaxDistance->setObjectName(QString::fromUtf8("doubleSpinBox_meshingTextureMaxDistance"));
        doubleSpinBox_meshingTextureMaxDistance->setDecimals(1);
        doubleSpinBox_meshingTextureMaxDistance->setMinimum(0.000000000000000);
        doubleSpinBox_meshingTextureMaxDistance->setMaximum(99.000000000000000);
        doubleSpinBox_meshingTextureMaxDistance->setSingleStep(1.000000000000000);
        doubleSpinBox_meshingTextureMaxDistance->setValue(3.000000000000000);

        gridLayout_15->addWidget(doubleSpinBox_meshingTextureMaxDistance, 4, 0, 1, 1);

        label_meshingTextureSize_5 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_5->setObjectName(QString::fromUtf8("label_meshingTextureSize_5"));
        label_meshingTextureSize_5->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_5, 12, 1, 1, 1);

        label_meshingTextureFormat = new QLabel(groupBox_textureMapping);
        label_meshingTextureFormat->setObjectName(QString::fromUtf8("label_meshingTextureFormat"));
        label_meshingTextureFormat->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureFormat, 0, 1, 1, 1);

        comboBox_meshingTextureFormat = new QComboBox(groupBox_textureMapping);
        comboBox_meshingTextureFormat->addItem(QString());
        comboBox_meshingTextureFormat->addItem(QString());
        comboBox_meshingTextureFormat->setObjectName(QString::fromUtf8("comboBox_meshingTextureFormat"));

        gridLayout_15->addWidget(comboBox_meshingTextureFormat, 0, 0, 1, 1);

        comboBox_meshingTextureSize = new QComboBox(groupBox_textureMapping);
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->addItem(QString());
        comboBox_meshingTextureSize->setObjectName(QString::fromUtf8("comboBox_meshingTextureSize"));

        gridLayout_15->addWidget(comboBox_meshingTextureSize, 1, 0, 1, 1);

        checkBox_exposureFusion = new QCheckBox(groupBox_textureMapping);
        checkBox_exposureFusion->setObjectName(QString::fromUtf8("checkBox_exposureFusion"));

        gridLayout_15->addWidget(checkBox_exposureFusion, 15, 0, 1, 1);

        label_meshingTextureSize_4 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_4->setObjectName(QString::fromUtf8("label_meshingTextureSize_4"));
        label_meshingTextureSize_4->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_4, 7, 1, 1, 1);

        lineEdit_meshingTextureRoiRatios = new QLineEdit(groupBox_textureMapping);
        lineEdit_meshingTextureRoiRatios->setObjectName(QString::fromUtf8("lineEdit_meshingTextureRoiRatios"));

        gridLayout_15->addWidget(lineEdit_meshingTextureRoiRatios, 3, 0, 1, 1);

        label_meshingTextureSize = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize->setObjectName(QString::fromUtf8("label_meshingTextureSize"));
        label_meshingTextureSize->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize, 1, 1, 1, 1);

        checkBox_cameraFilter = new QCheckBox(groupBox_textureMapping);
        checkBox_cameraFilter->setObjectName(QString::fromUtf8("checkBox_cameraFilter"));

        gridLayout_15->addWidget(checkBox_cameraFilter, 9, 0, 1, 1);

        spinBox_textureBrightnessContrastRatioLow = new QSpinBox(groupBox_textureMapping);
        spinBox_textureBrightnessContrastRatioLow->setObjectName(QString::fromUtf8("spinBox_textureBrightnessContrastRatioLow"));
        spinBox_textureBrightnessContrastRatioLow->setMinimum(0);
        spinBox_textureBrightnessContrastRatioLow->setMaximum(49);

        gridLayout_15->addWidget(spinBox_textureBrightnessContrastRatioLow, 12, 0, 1, 1);

        spinBox_mesh_minTextureClusterSize = new QSpinBox(groupBox_textureMapping);
        spinBox_mesh_minTextureClusterSize->setObjectName(QString::fromUtf8("spinBox_mesh_minTextureClusterSize"));
        spinBox_mesh_minTextureClusterSize->setMinimum(0);
        spinBox_mesh_minTextureClusterSize->setMaximum(99999);

        gridLayout_15->addWidget(spinBox_mesh_minTextureClusterSize, 7, 0, 1, 1);

        label_meshingTextureSize_3 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_3->setObjectName(QString::fromUtf8("label_meshingTextureSize_3"));
        label_meshingTextureSize_3->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_3, 9, 1, 1, 1);

        label_exposureFusion = new QLabel(groupBox_textureMapping);
        label_exposureFusion->setObjectName(QString::fromUtf8("label_exposureFusion"));
        label_exposureFusion->setWordWrap(true);

        gridLayout_15->addWidget(label_exposureFusion, 15, 1, 1, 1);

        spinBox_mesh_maxTextures = new QSpinBox(groupBox_textureMapping);
        spinBox_mesh_maxTextures->setObjectName(QString::fromUtf8("spinBox_mesh_maxTextures"));
        spinBox_mesh_maxTextures->setMinimum(1);
        spinBox_mesh_maxTextures->setMaximum(20);

        gridLayout_15->addWidget(spinBox_mesh_maxTextures, 2, 0, 1, 1);

        label_meshingTextureSize_9 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_9->setObjectName(QString::fromUtf8("label_meshingTextureSize_9"));
        label_meshingTextureSize_9->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_9, 5, 1, 1, 1);

        doubleSpinBox_meshingTextureMaxDepthError = new QDoubleSpinBox(groupBox_textureMapping);
        doubleSpinBox_meshingTextureMaxDepthError->setObjectName(QString::fromUtf8("doubleSpinBox_meshingTextureMaxDepthError"));
        doubleSpinBox_meshingTextureMaxDepthError->setDecimals(2);
        doubleSpinBox_meshingTextureMaxDepthError->setMinimum(-1.000000000000000);
        doubleSpinBox_meshingTextureMaxDepthError->setMaximum(99.000000000000000);
        doubleSpinBox_meshingTextureMaxDepthError->setSingleStep(0.050000000000000);
        doubleSpinBox_meshingTextureMaxDepthError->setValue(0.000000000000000);

        gridLayout_15->addWidget(doubleSpinBox_meshingTextureMaxDepthError, 5, 0, 1, 1);

        label_meshingTextureSize_10 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_10->setObjectName(QString::fromUtf8("label_meshingTextureSize_10"));
        label_meshingTextureSize_10->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_10, 6, 1, 1, 1);

        doubleSpinBox_meshingTextureMaxAngle = new QDoubleSpinBox(groupBox_textureMapping);
        doubleSpinBox_meshingTextureMaxAngle->setObjectName(QString::fromUtf8("doubleSpinBox_meshingTextureMaxAngle"));
        doubleSpinBox_meshingTextureMaxAngle->setDecimals(0);
        doubleSpinBox_meshingTextureMaxAngle->setMinimum(0.000000000000000);
        doubleSpinBox_meshingTextureMaxAngle->setMaximum(180.000000000000000);
        doubleSpinBox_meshingTextureMaxAngle->setSingleStep(1.000000000000000);
        doubleSpinBox_meshingTextureMaxAngle->setValue(0.000000000000000);

        gridLayout_15->addWidget(doubleSpinBox_meshingTextureMaxAngle, 6, 0, 1, 1);

        label_multiband = new QLabel(groupBox_textureMapping);
        label_multiband->setObjectName(QString::fromUtf8("label_multiband"));
        label_multiband->setWordWrap(true);

        gridLayout_15->addWidget(label_multiband, 16, 1, 1, 1);

        checkBox_multiband = new QCheckBox(groupBox_textureMapping);
        checkBox_multiband->setObjectName(QString::fromUtf8("checkBox_multiband"));

        gridLayout_15->addWidget(checkBox_multiband, 16, 0, 1, 1);

        label_meshingTextureSize_11 = new QLabel(groupBox_textureMapping);
        label_meshingTextureSize_11->setObjectName(QString::fromUtf8("label_meshingTextureSize_11"));
        label_meshingTextureSize_11->setWordWrap(true);

        gridLayout_15->addWidget(label_meshingTextureSize_11, 8, 1, 1, 1);

        checkBox_distanceToCamPolicy = new QCheckBox(groupBox_textureMapping);
        checkBox_distanceToCamPolicy->setObjectName(QString::fromUtf8("checkBox_distanceToCamPolicy"));

        gridLayout_15->addWidget(checkBox_distanceToCamPolicy, 8, 0, 1, 1);

        gridLayout_15->setColumnStretch(1, 1);

        verticalLayout_16->addLayout(gridLayout_15);

        groupBox_cameraFilter = new QGroupBox(groupBox_textureMapping);
        groupBox_cameraFilter->setObjectName(QString::fromUtf8("groupBox_cameraFilter"));
        gridLayout_16 = new QGridLayout(groupBox_cameraFilter);
        gridLayout_16->setObjectName(QString::fromUtf8("gridLayout_16"));
        doubleSpinBox_cameraFilterRadius = new QDoubleSpinBox(groupBox_cameraFilter);
        doubleSpinBox_cameraFilterRadius->setObjectName(QString::fromUtf8("doubleSpinBox_cameraFilterRadius"));
        doubleSpinBox_cameraFilterRadius->setDecimals(3);
        doubleSpinBox_cameraFilterRadius->setMinimum(0.000000000000000);
        doubleSpinBox_cameraFilterRadius->setValue(0.100000000000000);

        gridLayout_16->addWidget(doubleSpinBox_cameraFilterRadius, 0, 0, 1, 1);

        label_37 = new QLabel(groupBox_cameraFilter);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setWordWrap(true);
        label_37->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_16->addWidget(label_37, 0, 2, 1, 1);

        doubleSpinBox_laplacianVariance = new QDoubleSpinBox(groupBox_cameraFilter);
        doubleSpinBox_laplacianVariance->setObjectName(QString::fromUtf8("doubleSpinBox_laplacianVariance"));
        doubleSpinBox_laplacianVariance->setDecimals(0);
        doubleSpinBox_laplacianVariance->setMinimum(0.000000000000000);
        doubleSpinBox_laplacianVariance->setMaximum(9999.000000000000000);
        doubleSpinBox_laplacianVariance->setValue(0.000000000000000);

        gridLayout_16->addWidget(doubleSpinBox_laplacianVariance, 1, 1, 1, 1);

        doubleSpinBox_cameraFilterAngle = new QDoubleSpinBox(groupBox_cameraFilter);
        doubleSpinBox_cameraFilterAngle->setObjectName(QString::fromUtf8("doubleSpinBox_cameraFilterAngle"));
        doubleSpinBox_cameraFilterAngle->setDecimals(1);
        doubleSpinBox_cameraFilterAngle->setMaximum(180.000000000000000);
        doubleSpinBox_cameraFilterAngle->setValue(30.000000000000000);

        gridLayout_16->addWidget(doubleSpinBox_cameraFilterAngle, 0, 1, 1, 1);

        label_38 = new QLabel(groupBox_cameraFilter);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setWordWrap(true);
        label_38->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_16->addWidget(label_38, 1, 2, 1, 1);

        doubleSpinBox_cameraFilterVelRad = new QDoubleSpinBox(groupBox_cameraFilter);
        doubleSpinBox_cameraFilterVelRad->setObjectName(QString::fromUtf8("doubleSpinBox_cameraFilterVelRad"));
        doubleSpinBox_cameraFilterVelRad->setDecimals(3);
        doubleSpinBox_cameraFilterVelRad->setMinimum(0.000000000000000);
        doubleSpinBox_cameraFilterVelRad->setValue(0.100000000000000);

        gridLayout_16->addWidget(doubleSpinBox_cameraFilterVelRad, 2, 1, 1, 1);

        doubleSpinBox_cameraFilterVel = new QDoubleSpinBox(groupBox_cameraFilter);
        doubleSpinBox_cameraFilterVel->setObjectName(QString::fromUtf8("doubleSpinBox_cameraFilterVel"));
        doubleSpinBox_cameraFilterVel->setDecimals(3);
        doubleSpinBox_cameraFilterVel->setMinimum(0.000000000000000);
        doubleSpinBox_cameraFilterVel->setValue(0.100000000000000);

        gridLayout_16->addWidget(doubleSpinBox_cameraFilterVel, 2, 0, 1, 1);

        label_39 = new QLabel(groupBox_cameraFilter);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setWordWrap(true);
        label_39->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_16->addWidget(label_39, 2, 2, 1, 1);

        gridLayout_16->setColumnStretch(2, 1);

        verticalLayout_16->addWidget(groupBox_cameraFilter);

        groupBox_multiband = new QGroupBox(groupBox_textureMapping);
        groupBox_multiband->setObjectName(QString::fromUtf8("groupBox_multiband"));
        gridLayout_22 = new QGridLayout(groupBox_multiband);
        gridLayout_22->setObjectName(QString::fromUtf8("gridLayout_22"));
        label_49 = new QLabel(groupBox_multiband);
        label_49->setObjectName(QString::fromUtf8("label_49"));
        label_49->setWordWrap(true);
        label_49->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_49, 0, 1, 1, 1);

        label_52 = new QLabel(groupBox_multiband);
        label_52->setObjectName(QString::fromUtf8("label_52"));
        label_52->setWordWrap(true);
        label_52->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_52, 4, 1, 1, 1);

        label_50 = new QLabel(groupBox_multiband);
        label_50->setObjectName(QString::fromUtf8("label_50"));
        label_50->setWordWrap(true);
        label_50->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_50, 2, 1, 1, 1);

        label_55 = new QLabel(groupBox_multiband);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setWordWrap(true);
        label_55->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_55, 7, 1, 1, 1);

        spinBox_multiband_downscale = new QSpinBox(groupBox_multiband);
        spinBox_multiband_downscale->setObjectName(QString::fromUtf8("spinBox_multiband_downscale"));
        spinBox_multiband_downscale->setMaximum(16);
        spinBox_multiband_downscale->setValue(2);

        gridLayout_22->addWidget(spinBox_multiband_downscale, 0, 0, 1, 1);

        comboBox_multiband_unwrap = new QComboBox(groupBox_multiband);
        comboBox_multiband_unwrap->addItem(QString());
        comboBox_multiband_unwrap->addItem(QString());
        comboBox_multiband_unwrap->addItem(QString());
        comboBox_multiband_unwrap->setObjectName(QString::fromUtf8("comboBox_multiband_unwrap"));

        gridLayout_22->addWidget(comboBox_multiband_unwrap, 2, 0, 1, 1);

        label_54 = new QLabel(groupBox_multiband);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setWordWrap(true);
        label_54->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_54, 6, 1, 1, 1);

        label_53 = new QLabel(groupBox_multiband);
        label_53->setObjectName(QString::fromUtf8("label_53"));
        label_53->setWordWrap(true);
        label_53->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_53, 5, 1, 1, 1);

        checkBox_multiband_forcevisible = new QCheckBox(groupBox_multiband);
        checkBox_multiband_forcevisible->setObjectName(QString::fromUtf8("checkBox_multiband_forcevisible"));

        gridLayout_22->addWidget(checkBox_multiband_forcevisible, 7, 0, 1, 1);

        doubleSpinBox_multiband_bestscore = new QDoubleSpinBox(groupBox_multiband);
        doubleSpinBox_multiband_bestscore->setObjectName(QString::fromUtf8("doubleSpinBox_multiband_bestscore"));
        doubleSpinBox_multiband_bestscore->setMaximum(1.000000000000000);
        doubleSpinBox_multiband_bestscore->setValue(0.100000000000000);

        gridLayout_22->addWidget(doubleSpinBox_multiband_bestscore, 5, 0, 1, 1);

        checkBox_multiband_fillholes = new QCheckBox(groupBox_multiband);
        checkBox_multiband_fillholes->setObjectName(QString::fromUtf8("checkBox_multiband_fillholes"));

        gridLayout_22->addWidget(checkBox_multiband_fillholes, 3, 0, 1, 1);

        doubleSpinBox_multiband_angle = new QDoubleSpinBox(groupBox_multiband);
        doubleSpinBox_multiband_angle->setObjectName(QString::fromUtf8("doubleSpinBox_multiband_angle"));
        doubleSpinBox_multiband_angle->setDecimals(1);
        doubleSpinBox_multiband_angle->setMaximum(180.000000000000000);
        doubleSpinBox_multiband_angle->setValue(90.000000000000000);

        gridLayout_22->addWidget(doubleSpinBox_multiband_angle, 6, 0, 1, 1);

        label_51 = new QLabel(groupBox_multiband);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setWordWrap(true);
        label_51->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_51, 3, 1, 1, 1);

        spinBox_multiband_padding = new QSpinBox(groupBox_multiband);
        spinBox_multiband_padding->setObjectName(QString::fromUtf8("spinBox_multiband_padding"));
        spinBox_multiband_padding->setMaximum(100);
        spinBox_multiband_padding->setValue(5);

        gridLayout_22->addWidget(spinBox_multiband_padding, 4, 0, 1, 1);

        label_56 = new QLabel(groupBox_multiband);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setWordWrap(true);
        label_56->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_22->addWidget(label_56, 1, 1, 1, 1);

        lineEdit_multiband_nbcontrib = new QLineEdit(groupBox_multiband);
        lineEdit_multiband_nbcontrib->setObjectName(QString::fromUtf8("lineEdit_multiband_nbcontrib"));

        gridLayout_22->addWidget(lineEdit_multiband_nbcontrib, 1, 0, 1, 1);

        gridLayout_22->setColumnStretch(1, 1);

        verticalLayout_16->addWidget(groupBox_multiband);


        verticalLayout_15->addWidget(groupBox_textureMapping);

        groupBox_gp3 = new QGroupBox(groupBox_meshing);
        groupBox_gp3->setObjectName(QString::fromUtf8("groupBox_gp3"));
        groupBox_gp3->setCheckable(false);
        groupBox_gp3->setChecked(false);
        gridLayout_4 = new QGridLayout(groupBox_gp3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        label_169 = new QLabel(groupBox_gp3);
        label_169->setObjectName(QString::fromUtf8("label_169"));
        label_169->setWordWrap(true);

        gridLayout_4->addWidget(label_169, 2, 1, 1, 1);

        doubleSpinBox_gp3Radius = new QDoubleSpinBox(groupBox_gp3);
        doubleSpinBox_gp3Radius->setObjectName(QString::fromUtf8("doubleSpinBox_gp3Radius"));
        doubleSpinBox_gp3Radius->setDecimals(3);
        doubleSpinBox_gp3Radius->setMaximum(1.000000000000000);
        doubleSpinBox_gp3Radius->setSingleStep(0.010000000000000);
        doubleSpinBox_gp3Radius->setValue(0.040000000000000);

        gridLayout_4->addWidget(doubleSpinBox_gp3Radius, 1, 0, 1, 1);

        label_168 = new QLabel(groupBox_gp3);
        label_168->setObjectName(QString::fromUtf8("label_168"));
        label_168->setWordWrap(true);

        gridLayout_4->addWidget(label_168, 1, 1, 1, 1);

        doubleSpinBox_gp3Mu = new QDoubleSpinBox(groupBox_gp3);
        doubleSpinBox_gp3Mu->setObjectName(QString::fromUtf8("doubleSpinBox_gp3Mu"));
        doubleSpinBox_gp3Mu->setDecimals(1);
        doubleSpinBox_gp3Mu->setMinimum(0.100000000000000);
        doubleSpinBox_gp3Mu->setMaximum(100.000000000000000);
        doubleSpinBox_gp3Mu->setSingleStep(1.000000000000000);
        doubleSpinBox_gp3Mu->setValue(2.500000000000000);

        gridLayout_4->addWidget(doubleSpinBox_gp3Mu, 2, 0, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(groupBox_gp3);

        groupBox_poisson = new QGroupBox(groupBox_meshing);
        groupBox_poisson->setObjectName(QString::fromUtf8("groupBox_poisson"));
        groupBox_poisson->setCheckable(false);
        groupBox_poisson->setChecked(false);
        gridLayout_14 = new QGridLayout(groupBox_poisson);
        gridLayout_14->setObjectName(QString::fromUtf8("gridLayout_14"));
        label_172 = new QLabel(groupBox_poisson);
        label_172->setObjectName(QString::fromUtf8("label_172"));
        label_172->setWordWrap(true);

        gridLayout_14->addWidget(label_172, 0, 1, 1, 1);

        label_177 = new QLabel(groupBox_poisson);
        label_177->setObjectName(QString::fromUtf8("label_177"));
        label_177->setWordWrap(true);

        gridLayout_14->addWidget(label_177, 8, 1, 1, 1);

        spinBox_poisson_iso = new QSpinBox(groupBox_poisson);
        spinBox_poisson_iso->setObjectName(QString::fromUtf8("spinBox_poisson_iso"));
        spinBox_poisson_iso->setMinimum(1);

        gridLayout_14->addWidget(spinBox_poisson_iso, 9, 0, 1, 1);

        label_176 = new QLabel(groupBox_poisson);
        label_176->setObjectName(QString::fromUtf8("label_176"));
        label_176->setWordWrap(true);

        gridLayout_14->addWidget(label_176, 3, 1, 1, 1);

        doubleSpinBox_poisson_samples = new QDoubleSpinBox(groupBox_poisson);
        doubleSpinBox_poisson_samples->setObjectName(QString::fromUtf8("doubleSpinBox_poisson_samples"));
        doubleSpinBox_poisson_samples->setDecimals(1);
        doubleSpinBox_poisson_samples->setMinimum(0.100000000000000);
        doubleSpinBox_poisson_samples->setMaximum(30.000000000000000);

        gridLayout_14->addWidget(doubleSpinBox_poisson_samples, 8, 0, 1, 1);

        doubleSpinBox_poisson_scale = new QDoubleSpinBox(groupBox_poisson);
        doubleSpinBox_poisson_scale->setObjectName(QString::fromUtf8("doubleSpinBox_poisson_scale"));
        doubleSpinBox_poisson_scale->setDecimals(1);
        doubleSpinBox_poisson_scale->setMinimum(1.000000000000000);
        doubleSpinBox_poisson_scale->setMaximum(2.000000000000000);

        gridLayout_14->addWidget(doubleSpinBox_poisson_scale, 6, 0, 1, 1);

        label_181 = new QLabel(groupBox_poisson);
        label_181->setObjectName(QString::fromUtf8("label_181"));
        label_181->setWordWrap(true);

        gridLayout_14->addWidget(label_181, 4, 1, 1, 1);

        label_182 = new QLabel(groupBox_poisson);
        label_182->setObjectName(QString::fromUtf8("label_182"));
        label_182->setWordWrap(true);

        gridLayout_14->addWidget(label_182, 5, 1, 1, 1);

        label_178 = new QLabel(groupBox_poisson);
        label_178->setObjectName(QString::fromUtf8("label_178"));
        label_178->setWordWrap(true);

        gridLayout_14->addWidget(label_178, 9, 1, 1, 1);

        checkBox_poisson_manifold = new QCheckBox(groupBox_poisson);
        checkBox_poisson_manifold->setObjectName(QString::fromUtf8("checkBox_poisson_manifold"));

        gridLayout_14->addWidget(checkBox_poisson_manifold, 3, 0, 1, 1);

        label_179 = new QLabel(groupBox_poisson);
        label_179->setObjectName(QString::fromUtf8("label_179"));
        label_179->setWordWrap(true);

        gridLayout_14->addWidget(label_179, 10, 1, 1, 1);

        label_180 = new QLabel(groupBox_poisson);
        label_180->setObjectName(QString::fromUtf8("label_180"));
        label_180->setWordWrap(true);

        gridLayout_14->addWidget(label_180, 6, 1, 1, 1);

        checkBox_poisson_outputPolygons = new QCheckBox(groupBox_poisson);
        checkBox_poisson_outputPolygons->setObjectName(QString::fromUtf8("checkBox_poisson_outputPolygons"));

        gridLayout_14->addWidget(checkBox_poisson_outputPolygons, 2, 0, 1, 1);

        spinBox_poisson_solver = new QSpinBox(groupBox_poisson);
        spinBox_poisson_solver->setObjectName(QString::fromUtf8("spinBox_poisson_solver"));
        spinBox_poisson_solver->setMinimum(1);

        gridLayout_14->addWidget(spinBox_poisson_solver, 10, 0, 1, 1);

        label_outputPolygons = new QLabel(groupBox_poisson);
        label_outputPolygons->setObjectName(QString::fromUtf8("label_outputPolygons"));
        label_outputPolygons->setWordWrap(true);

        gridLayout_14->addWidget(label_outputPolygons, 2, 1, 1, 1);

        doubleSpinBox_poisson_pointWeight = new QDoubleSpinBox(groupBox_poisson);
        doubleSpinBox_poisson_pointWeight->setObjectName(QString::fromUtf8("doubleSpinBox_poisson_pointWeight"));
        doubleSpinBox_poisson_pointWeight->setDecimals(1);
        doubleSpinBox_poisson_pointWeight->setMinimum(0.100000000000000);

        gridLayout_14->addWidget(doubleSpinBox_poisson_pointWeight, 4, 0, 1, 1);

        spinBox_poisson_minDepth = new QSpinBox(groupBox_poisson);
        spinBox_poisson_minDepth->setObjectName(QString::fromUtf8("spinBox_poisson_minDepth"));
        spinBox_poisson_minDepth->setMinimum(1);

        gridLayout_14->addWidget(spinBox_poisson_minDepth, 5, 0, 1, 1);

        spinBox_poisson_depth = new QSpinBox(groupBox_poisson);
        spinBox_poisson_depth->setObjectName(QString::fromUtf8("spinBox_poisson_depth"));
        spinBox_poisson_depth->setMinimum(0);

        gridLayout_14->addWidget(spinBox_poisson_depth, 0, 0, 1, 1);

        label_outputPolygons_2 = new QLabel(groupBox_poisson);
        label_outputPolygons_2->setObjectName(QString::fromUtf8("label_outputPolygons_2"));
        label_outputPolygons_2->setWordWrap(true);

        gridLayout_14->addWidget(label_outputPolygons_2, 1, 1, 1, 1);

        doubleSpinBox_poisson_targetPolygonSize = new QDoubleSpinBox(groupBox_poisson);
        doubleSpinBox_poisson_targetPolygonSize->setObjectName(QString::fromUtf8("doubleSpinBox_poisson_targetPolygonSize"));
        doubleSpinBox_poisson_targetPolygonSize->setDecimals(3);
        doubleSpinBox_poisson_targetPolygonSize->setMinimum(0.010000000000000);
        doubleSpinBox_poisson_targetPolygonSize->setSingleStep(0.100000000000000);
        doubleSpinBox_poisson_targetPolygonSize->setValue(0.030000000000000);

        gridLayout_14->addWidget(doubleSpinBox_poisson_targetPolygonSize, 1, 0, 1, 1);

        gridLayout_14->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(groupBox_poisson);

        groupBox_cputsdf = new QGroupBox(groupBox_meshing);
        groupBox_cputsdf->setObjectName(QString::fromUtf8("groupBox_cputsdf"));
        verticalLayout_17 = new QVBoxLayout(groupBox_cputsdf);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
        label_25 = new QLabel(groupBox_cputsdf);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setWordWrap(true);
        label_25->setOpenExternalLinks(true);

        verticalLayout_17->addWidget(label_25);

        gridLayout_17 = new QGridLayout();
        gridLayout_17->setObjectName(QString::fromUtf8("gridLayout_17"));
        doubleSpinBox_cputsdf_size = new QDoubleSpinBox(groupBox_cputsdf);
        doubleSpinBox_cputsdf_size->setObjectName(QString::fromUtf8("doubleSpinBox_cputsdf_size"));
        doubleSpinBox_cputsdf_size->setDecimals(1);
        doubleSpinBox_cputsdf_size->setMinimum(0.100000000000000);
        doubleSpinBox_cputsdf_size->setMaximum(9999.000000000000000);
        doubleSpinBox_cputsdf_size->setSingleStep(1.000000000000000);
        doubleSpinBox_cputsdf_size->setValue(12.000000000000000);

        gridLayout_17->addWidget(doubleSpinBox_cputsdf_size, 0, 0, 1, 1);

        label_19 = new QLabel(groupBox_cputsdf);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setWordWrap(true);

        gridLayout_17->addWidget(label_19, 0, 1, 1, 1);

        doubleSpinBox_cputsdf_resolution = new QDoubleSpinBox(groupBox_cputsdf);
        doubleSpinBox_cputsdf_resolution->setObjectName(QString::fromUtf8("doubleSpinBox_cputsdf_resolution"));
        doubleSpinBox_cputsdf_resolution->setDecimals(3);
        doubleSpinBox_cputsdf_resolution->setMinimum(0.001000000000000);
        doubleSpinBox_cputsdf_resolution->setMaximum(99.000000000000000);
        doubleSpinBox_cputsdf_resolution->setSingleStep(0.010000000000000);
        doubleSpinBox_cputsdf_resolution->setValue(0.010000000000000);

        gridLayout_17->addWidget(doubleSpinBox_cputsdf_resolution, 1, 0, 1, 1);

        label_20 = new QLabel(groupBox_cputsdf);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setWordWrap(true);

        gridLayout_17->addWidget(label_20, 1, 1, 1, 1);

        doubleSpinBox_cputsdf_tuncPos = new QDoubleSpinBox(groupBox_cputsdf);
        doubleSpinBox_cputsdf_tuncPos->setObjectName(QString::fromUtf8("doubleSpinBox_cputsdf_tuncPos"));
        doubleSpinBox_cputsdf_tuncPos->setDecimals(2);
        doubleSpinBox_cputsdf_tuncPos->setMinimum(0.000000000000000);
        doubleSpinBox_cputsdf_tuncPos->setMaximum(1.000000000000000);
        doubleSpinBox_cputsdf_tuncPos->setSingleStep(0.010000000000000);
        doubleSpinBox_cputsdf_tuncPos->setValue(0.030000000000000);

        gridLayout_17->addWidget(doubleSpinBox_cputsdf_tuncPos, 2, 0, 1, 1);

        label_21 = new QLabel(groupBox_cputsdf);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setWordWrap(true);

        gridLayout_17->addWidget(label_21, 2, 1, 1, 1);

        doubleSpinBox_cputsdf_tuncNeg = new QDoubleSpinBox(groupBox_cputsdf);
        doubleSpinBox_cputsdf_tuncNeg->setObjectName(QString::fromUtf8("doubleSpinBox_cputsdf_tuncNeg"));
        doubleSpinBox_cputsdf_tuncNeg->setDecimals(2);
        doubleSpinBox_cputsdf_tuncNeg->setMinimum(0.000000000000000);
        doubleSpinBox_cputsdf_tuncNeg->setMaximum(1.000000000000000);
        doubleSpinBox_cputsdf_tuncNeg->setSingleStep(0.010000000000000);
        doubleSpinBox_cputsdf_tuncNeg->setValue(0.030000000000000);

        gridLayout_17->addWidget(doubleSpinBox_cputsdf_tuncNeg, 3, 0, 1, 1);

        label_22 = new QLabel(groupBox_cputsdf);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setWordWrap(true);

        gridLayout_17->addWidget(label_22, 3, 1, 1, 1);

        spinBox_cputsdf_randomSplit = new QSpinBox(groupBox_cputsdf);
        spinBox_cputsdf_randomSplit->setObjectName(QString::fromUtf8("spinBox_cputsdf_randomSplit"));
        spinBox_cputsdf_randomSplit->setMinimum(1);
        spinBox_cputsdf_randomSplit->setMaximum(99);

        gridLayout_17->addWidget(spinBox_cputsdf_randomSplit, 4, 0, 1, 1);

        label_23 = new QLabel(groupBox_cputsdf);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setWordWrap(true);

        gridLayout_17->addWidget(label_23, 4, 1, 1, 1);

        doubleSpinBox_cputsdf_minWeight = new QDoubleSpinBox(groupBox_cputsdf);
        doubleSpinBox_cputsdf_minWeight->setObjectName(QString::fromUtf8("doubleSpinBox_cputsdf_minWeight"));
        doubleSpinBox_cputsdf_minWeight->setDecimals(1);
        doubleSpinBox_cputsdf_minWeight->setMinimum(0.000000000000000);
        doubleSpinBox_cputsdf_minWeight->setMaximum(99.000000000000000);
        doubleSpinBox_cputsdf_minWeight->setSingleStep(0.500000000000000);
        doubleSpinBox_cputsdf_minWeight->setValue(0.000000000000000);

        gridLayout_17->addWidget(doubleSpinBox_cputsdf_minWeight, 5, 0, 1, 1);

        label_18 = new QLabel(groupBox_cputsdf);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setWordWrap(true);

        gridLayout_17->addWidget(label_18, 5, 1, 1, 1);

        doubleSpinBox_cputsdf_flattenRadius = new QDoubleSpinBox(groupBox_cputsdf);
        doubleSpinBox_cputsdf_flattenRadius->setObjectName(QString::fromUtf8("doubleSpinBox_cputsdf_flattenRadius"));
        doubleSpinBox_cputsdf_flattenRadius->setDecimals(4);
        doubleSpinBox_cputsdf_flattenRadius->setMinimum(0.000000000000000);
        doubleSpinBox_cputsdf_flattenRadius->setMaximum(9.000000000000000);
        doubleSpinBox_cputsdf_flattenRadius->setSingleStep(0.005000000000000);
        doubleSpinBox_cputsdf_flattenRadius->setValue(0.005000000000000);

        gridLayout_17->addWidget(doubleSpinBox_cputsdf_flattenRadius, 6, 0, 1, 1);

        label_24 = new QLabel(groupBox_cputsdf);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setWordWrap(true);

        gridLayout_17->addWidget(label_24, 6, 1, 1, 1);

        gridLayout_17->setColumnStretch(1, 1);

        verticalLayout_17->addLayout(gridLayout_17);


        verticalLayout_15->addWidget(groupBox_cputsdf);

        groupBox_organized = new QGroupBox(groupBox_meshing);
        groupBox_organized->setObjectName(QString::fromUtf8("groupBox_organized"));
        gridLayout_2 = new QGridLayout(groupBox_organized);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_15 = new QLabel(groupBox_organized);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setWordWrap(true);

        gridLayout_2->addWidget(label_15, 2, 1, 1, 1);

        label_quad = new QLabel(groupBox_organized);
        label_quad->setObjectName(QString::fromUtf8("label_quad"));
        label_quad->setWordWrap(true);

        gridLayout_2->addWidget(label_quad, 1, 1, 1, 1);

        checkBox_mesh_quad = new QCheckBox(groupBox_organized);
        checkBox_mesh_quad->setObjectName(QString::fromUtf8("checkBox_mesh_quad"));
        checkBox_mesh_quad->setChecked(true);

        gridLayout_2->addWidget(checkBox_mesh_quad, 1, 0, 1, 1);

        doubleSpinBox_mesh_angleTolerance = new QDoubleSpinBox(groupBox_organized);
        doubleSpinBox_mesh_angleTolerance->setObjectName(QString::fromUtf8("doubleSpinBox_mesh_angleTolerance"));
        doubleSpinBox_mesh_angleTolerance->setDecimals(0);
        doubleSpinBox_mesh_angleTolerance->setMinimum(1.000000000000000);
        doubleSpinBox_mesh_angleTolerance->setMaximum(99.000000000000000);
        doubleSpinBox_mesh_angleTolerance->setValue(15.000000000000000);

        gridLayout_2->addWidget(doubleSpinBox_mesh_angleTolerance, 0, 0, 1, 1);

        label_14 = new QLabel(groupBox_organized);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setWordWrap(true);

        gridLayout_2->addWidget(label_14, 0, 1, 1, 1);

        spinBox_mesh_triangleSize = new QSpinBox(groupBox_organized);
        spinBox_mesh_triangleSize->setObjectName(QString::fromUtf8("spinBox_mesh_triangleSize"));
        spinBox_mesh_triangleSize->setMinimum(1);
        spinBox_mesh_triangleSize->setMaximum(99);

        gridLayout_2->addWidget(spinBox_mesh_triangleSize, 2, 0, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);

        verticalLayout_15->addWidget(groupBox_organized);

        groupBox_openchisel = new QGroupBox(groupBox_meshing);
        groupBox_openchisel->setObjectName(QString::fromUtf8("groupBox_openchisel"));
        verticalLayout_18 = new QVBoxLayout(groupBox_openchisel);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        label_26 = new QLabel(groupBox_openchisel);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setWordWrap(true);
        label_26->setOpenExternalLinks(true);

        verticalLayout_18->addWidget(label_26);

        gridLayout_19 = new QGridLayout();
        gridLayout_19->setObjectName(QString::fromUtf8("gridLayout_19"));
        label_36 = new QLabel(groupBox_openchisel);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        label_36->setWordWrap(true);

        gridLayout_19->addWidget(label_36, 4, 1, 1, 1);

        label_35 = new QLabel(groupBox_openchisel);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        label_35->setWordWrap(true);

        gridLayout_19->addWidget(label_35, 3, 1, 1, 1);

        label_40 = new QLabel(groupBox_openchisel);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setWordWrap(true);

        gridLayout_19->addWidget(label_40, 5, 1, 1, 1);

        label_43 = new QLabel(groupBox_openchisel);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setWordWrap(true);

        gridLayout_19->addWidget(label_43, 8, 1, 1, 1);

        label_46 = new QLabel(groupBox_openchisel);
        label_46->setObjectName(QString::fromUtf8("label_46"));
        label_46->setWordWrap(true);

        gridLayout_19->addWidget(label_46, 11, 1, 1, 1);

        label_34 = new QLabel(groupBox_openchisel);
        label_34->setObjectName(QString::fromUtf8("label_34"));
        label_34->setWordWrap(true);

        gridLayout_19->addWidget(label_34, 2, 1, 1, 1);

        spinBox_openchisel_chunk_size_y = new QSpinBox(groupBox_openchisel);
        spinBox_openchisel_chunk_size_y->setObjectName(QString::fromUtf8("spinBox_openchisel_chunk_size_y"));
        spinBox_openchisel_chunk_size_y->setMinimum(1);
        spinBox_openchisel_chunk_size_y->setMaximum(99);
        spinBox_openchisel_chunk_size_y->setValue(16);

        gridLayout_19->addWidget(spinBox_openchisel_chunk_size_y, 2, 0, 1, 1);

        doubleSpinBox_openchisel_truncation_constant = new QDoubleSpinBox(groupBox_openchisel);
        doubleSpinBox_openchisel_truncation_constant->setObjectName(QString::fromUtf8("doubleSpinBox_openchisel_truncation_constant"));
        doubleSpinBox_openchisel_truncation_constant->setDecimals(6);
        doubleSpinBox_openchisel_truncation_constant->setMinimum(0.000001000000000);
        doubleSpinBox_openchisel_truncation_constant->setMaximum(1.000000000000000);
        doubleSpinBox_openchisel_truncation_constant->setSingleStep(0.001000000000000);
        doubleSpinBox_openchisel_truncation_constant->setValue(0.001504000000000);

        gridLayout_19->addWidget(doubleSpinBox_openchisel_truncation_constant, 4, 0, 1, 1);

        spinBox_openchisel_chunk_size_z = new QSpinBox(groupBox_openchisel);
        spinBox_openchisel_chunk_size_z->setObjectName(QString::fromUtf8("spinBox_openchisel_chunk_size_z"));
        spinBox_openchisel_chunk_size_z->setMinimum(1);
        spinBox_openchisel_chunk_size_z->setMaximum(99);
        spinBox_openchisel_chunk_size_z->setValue(16);

        gridLayout_19->addWidget(spinBox_openchisel_chunk_size_z, 3, 0, 1, 1);

        spinBox_openchisel_chunk_size_x = new QSpinBox(groupBox_openchisel);
        spinBox_openchisel_chunk_size_x->setObjectName(QString::fromUtf8("spinBox_openchisel_chunk_size_x"));
        spinBox_openchisel_chunk_size_x->setMinimum(1);
        spinBox_openchisel_chunk_size_x->setMaximum(99);
        spinBox_openchisel_chunk_size_x->setValue(16);

        gridLayout_19->addWidget(spinBox_openchisel_chunk_size_x, 1, 0, 1, 1);

        label_31 = new QLabel(groupBox_openchisel);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        label_31->setWordWrap(true);

        gridLayout_19->addWidget(label_31, 1, 1, 1, 1);

        label_42 = new QLabel(groupBox_openchisel);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setWordWrap(true);

        gridLayout_19->addWidget(label_42, 7, 1, 1, 1);

        label_41 = new QLabel(groupBox_openchisel);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setWordWrap(true);

        gridLayout_19->addWidget(label_41, 6, 1, 1, 1);

        label_44 = new QLabel(groupBox_openchisel);
        label_44->setObjectName(QString::fromUtf8("label_44"));
        label_44->setWordWrap(true);

        gridLayout_19->addWidget(label_44, 9, 1, 1, 1);

        label_45 = new QLabel(groupBox_openchisel);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setWordWrap(true);

        gridLayout_19->addWidget(label_45, 10, 1, 1, 1);

        label_47 = new QLabel(groupBox_openchisel);
        label_47->setObjectName(QString::fromUtf8("label_47"));
        label_47->setWordWrap(true);

        gridLayout_19->addWidget(label_47, 12, 1, 1, 1);

        doubleSpinBox_openchisel_truncation_linear = new QDoubleSpinBox(groupBox_openchisel);
        doubleSpinBox_openchisel_truncation_linear->setObjectName(QString::fromUtf8("doubleSpinBox_openchisel_truncation_linear"));
        doubleSpinBox_openchisel_truncation_linear->setDecimals(6);
        doubleSpinBox_openchisel_truncation_linear->setMinimum(0.000001000000000);
        doubleSpinBox_openchisel_truncation_linear->setMaximum(1.000000000000000);
        doubleSpinBox_openchisel_truncation_linear->setSingleStep(0.001000000000000);
        doubleSpinBox_openchisel_truncation_linear->setValue(0.001504000000000);

        gridLayout_19->addWidget(doubleSpinBox_openchisel_truncation_linear, 5, 0, 1, 1);

        doubleSpinBox_openchisel_truncation_quadratic = new QDoubleSpinBox(groupBox_openchisel);
        doubleSpinBox_openchisel_truncation_quadratic->setObjectName(QString::fromUtf8("doubleSpinBox_openchisel_truncation_quadratic"));
        doubleSpinBox_openchisel_truncation_quadratic->setDecimals(6);
        doubleSpinBox_openchisel_truncation_quadratic->setMinimum(0.000001000000000);
        doubleSpinBox_openchisel_truncation_quadratic->setMaximum(1.000000000000000);
        doubleSpinBox_openchisel_truncation_quadratic->setSingleStep(0.001000000000000);
        doubleSpinBox_openchisel_truncation_quadratic->setValue(0.001504000000000);

        gridLayout_19->addWidget(doubleSpinBox_openchisel_truncation_quadratic, 6, 0, 1, 1);

        doubleSpinBox_openchisel_truncation_scale = new QDoubleSpinBox(groupBox_openchisel);
        doubleSpinBox_openchisel_truncation_scale->setObjectName(QString::fromUtf8("doubleSpinBox_openchisel_truncation_scale"));
        doubleSpinBox_openchisel_truncation_scale->setDecimals(1);
        doubleSpinBox_openchisel_truncation_scale->setMinimum(0.100000000000000);
        doubleSpinBox_openchisel_truncation_scale->setMaximum(100.000000000000000);
        doubleSpinBox_openchisel_truncation_scale->setSingleStep(0.001000000000000);
        doubleSpinBox_openchisel_truncation_scale->setValue(0.100000000000000);

        gridLayout_19->addWidget(doubleSpinBox_openchisel_truncation_scale, 7, 0, 1, 1);

        spinBox_openchisel_integration_weight = new QSpinBox(groupBox_openchisel);
        spinBox_openchisel_integration_weight->setObjectName(QString::fromUtf8("spinBox_openchisel_integration_weight"));
        spinBox_openchisel_integration_weight->setMinimum(1);
        spinBox_openchisel_integration_weight->setMaximum(99);
        spinBox_openchisel_integration_weight->setValue(16);

        gridLayout_19->addWidget(spinBox_openchisel_integration_weight, 8, 0, 1, 1);

        checkBox_openchisel_use_voxel_carving = new QCheckBox(groupBox_openchisel);
        checkBox_openchisel_use_voxel_carving->setObjectName(QString::fromUtf8("checkBox_openchisel_use_voxel_carving"));
        checkBox_openchisel_use_voxel_carving->setChecked(true);

        gridLayout_19->addWidget(checkBox_openchisel_use_voxel_carving, 9, 0, 1, 1);

        doubleSpinBox_openchisel_carving_dist_m = new QDoubleSpinBox(groupBox_openchisel);
        doubleSpinBox_openchisel_carving_dist_m->setObjectName(QString::fromUtf8("doubleSpinBox_openchisel_carving_dist_m"));
        doubleSpinBox_openchisel_carving_dist_m->setDecimals(2);
        doubleSpinBox_openchisel_carving_dist_m->setMinimum(0.010000000000000);
        doubleSpinBox_openchisel_carving_dist_m->setMaximum(1.000000000000000);
        doubleSpinBox_openchisel_carving_dist_m->setSingleStep(0.001000000000000);
        doubleSpinBox_openchisel_carving_dist_m->setValue(0.010000000000000);

        gridLayout_19->addWidget(doubleSpinBox_openchisel_carving_dist_m, 10, 0, 1, 1);

        doubleSpinBox_openchisel_near_plane_dist = new QDoubleSpinBox(groupBox_openchisel);
        doubleSpinBox_openchisel_near_plane_dist->setObjectName(QString::fromUtf8("doubleSpinBox_openchisel_near_plane_dist"));
        doubleSpinBox_openchisel_near_plane_dist->setDecimals(2);
        doubleSpinBox_openchisel_near_plane_dist->setMinimum(0.000000000000000);
        doubleSpinBox_openchisel_near_plane_dist->setMaximum(100.000000000000000);
        doubleSpinBox_openchisel_near_plane_dist->setSingleStep(0.001000000000000);
        doubleSpinBox_openchisel_near_plane_dist->setValue(0.010000000000000);

        gridLayout_19->addWidget(doubleSpinBox_openchisel_near_plane_dist, 11, 0, 1, 1);

        doubleSpinBox_openchisel_far_plane_dist = new QDoubleSpinBox(groupBox_openchisel);
        doubleSpinBox_openchisel_far_plane_dist->setObjectName(QString::fromUtf8("doubleSpinBox_openchisel_far_plane_dist"));
        doubleSpinBox_openchisel_far_plane_dist->setDecimals(2);
        doubleSpinBox_openchisel_far_plane_dist->setMinimum(0.000000000000000);
        doubleSpinBox_openchisel_far_plane_dist->setMaximum(100.000000000000000);
        doubleSpinBox_openchisel_far_plane_dist->setSingleStep(0.001000000000000);
        doubleSpinBox_openchisel_far_plane_dist->setValue(0.000000000000000);

        gridLayout_19->addWidget(doubleSpinBox_openchisel_far_plane_dist, 12, 0, 1, 1);

        label_48 = new QLabel(groupBox_openchisel);
        label_48->setObjectName(QString::fromUtf8("label_48"));
        label_48->setWordWrap(true);

        gridLayout_19->addWidget(label_48, 0, 1, 1, 1);

        checkBox_openchisel_mergeVertices = new QCheckBox(groupBox_openchisel);
        checkBox_openchisel_mergeVertices->setObjectName(QString::fromUtf8("checkBox_openchisel_mergeVertices"));
        checkBox_openchisel_mergeVertices->setChecked(true);

        gridLayout_19->addWidget(checkBox_openchisel_mergeVertices, 0, 0, 1, 1);

        gridLayout_19->setColumnStretch(1, 1);

        verticalLayout_18->addLayout(gridLayout_19);


        verticalLayout_15->addWidget(groupBox_openchisel);

        verticalSpacer_8 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_15->addItem(verticalSpacer_8);


        verticalLayout_13->addWidget(groupBox_meshing);

        verticalSpacer_9 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_9);

        verticalSpacer_7 = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_13->addItem(verticalSpacer_7);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout_2->addWidget(scrollArea);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(ExportCloudsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok|QDialogButtonBox::RestoreDefaults|QDialogButtonBox::Save);

        verticalLayout_2->addWidget(buttonBox);

        verticalLayout_2->setStretch(0, 1);

        retranslateUi(ExportCloudsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ExportCloudsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ExportCloudsDialog, SLOT(reject()));

        stackedWidget_upsampling->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(ExportCloudsDialog);
    } // setupUi

    void retranslateUi(QDialog *ExportCloudsDialog)
    {
        ExportCloudsDialog->setWindowTitle(QCoreApplication::translate("ExportCloudsDialog", "Export 3D Clouds", nullptr));
        checkBox_cameraProjection->setText(QString());
        label_12->setText(QCoreApplication::translate("ExportCloudsDialog", "Reconstruction flavor.", nullptr));
        checkBox_filtering->setText(QString());
        checkBox_regenerate->setText(QString());
        label_binaryFile_12->setText(QCoreApplication::translate("ExportCloudsDialog", "Meshing.", nullptr));
        label_binaryFile_9->setText(QCoreApplication::translate("ExportCloudsDialog", "Cloud filtering.", nullptr));
        label_normal_2->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the search radius for the normal estimation.", nullptr));
        checkBox_meshing->setText(QString());
        label_gainCompensation->setText(QCoreApplication::translate("ExportCloudsDialog", "Gain compensation. Normalize brightness of images.", nullptr));
        label_frame->setText(QCoreApplication::translate("ExportCloudsDialog", "Output frame.", nullptr));
        checkBox_assemble->setText(QString());
        checkBox_binary->setText(QString());
        label_normal->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the number of k nearest neighbors to use for the normal estimation. Set 0 to disable.", nullptr));
        label_binaryFile_11->setText(QCoreApplication::translate("ExportCloudsDialog", "From RGB-D images. If not checked, clouds will be generated from laser scans.", nullptr));
        doubleSpinBox_voxelSize_assembled->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        checkBox_fromDepth->setText(QString());
        checkBox_smoothing->setText(QString());
        comboBox_pipeline->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "Organized Point Cloud", nullptr));
        comboBox_pipeline->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "Dense Point Cloud", nullptr));

        label_smoothing->setText(QCoreApplication::translate("ExportCloudsDialog", "Cloud smoothing using Moving Least Squares algorithm (MLS).", nullptr));
        label_intensityColormap->setText(QCoreApplication::translate("ExportCloudsDialog", "Intensity colormap.", nullptr));
        label_voxel->setText(QCoreApplication::translate("ExportCloudsDialog", "Voxel size. Set 0 to disable. When organized meshes are assembled, this is the radius in which the vertices of the polygons are merged.", nullptr));
        comboBox_intensityColormap->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "GrayScale", nullptr));
        comboBox_intensityColormap->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "RedYellow", nullptr));
        comboBox_intensityColormap->setItemText(2, QCoreApplication::translate("ExportCloudsDialog", "Rainbow", nullptr));

        label_cameraProjection->setText(QCoreApplication::translate("ExportCloudsDialog", "Camera projection. This can be used to colorize point cloud created from scans and/or export camera IDs for each point of the cloud.", nullptr));
        label_binaryFile_10->setText(QCoreApplication::translate("ExportCloudsDialog", "Nodes filtering. Filter nodes to be exported in a specified region .", nullptr));
        comboBox_frame->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "Map", nullptr));
        comboBox_frame->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "Robot", nullptr));
        comboBox_frame->setItemText(2, QCoreApplication::translate("ExportCloudsDialog", "Camera", nullptr));
        comboBox_frame->setItemText(3, QCoreApplication::translate("ExportCloudsDialog", "Scan", nullptr));

        checkBox_gainCompensation->setText(QString());
        label_voxel_2->setText(QCoreApplication::translate("ExportCloudsDialog", "Number of samples to keep, done with a random sample filter. Only used when clouds are assembled. Set 0 to disable.", nullptr));
        label_binaryFile->setText(QCoreApplication::translate("ExportCloudsDialog", "Binary file (for ply and pcd outputs).", nullptr));
        label_regenerate->setText(QCoreApplication::translate("ExportCloudsDialog", "Regenerate clouds. This can be used to regenerate the point clouds at higher density than those used for online visualization.", nullptr));
        checkBox_nodes_filtering->setText(QString());
        label_binaryFile_2->setText(QCoreApplication::translate("ExportCloudsDialog", "Assemble clouds/meshes to a single output cloud/mesh.", nullptr));
        label_normal_3->setText(QCoreApplication::translate("ExportCloudsDialog", "Flip ground normals up if close to -z axis. Set to 0.9 to begin with, increase to limit normals very close to -z axis. Set 0 to disable.", nullptr));
        groupBox_nodes_filtering->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Nodes Filtering", nullptr));
        label_114->setText(QCoreApplication::translate("ExportCloudsDialog", "Set min and max range values on each axis. Nodes inside those ranges will be exported. If the min and max are equals, there is no filtering on that axis. For example for 2D map, set Z min and Z max to 0. To filter just in altitude, set only Z ranges.", nullptr));
        label_113->setText(QCoreApplication::translate("ExportCloudsDialog", "X max", nullptr));
#if QT_CONFIG(tooltip)
        label_142->setToolTip(QCoreApplication::translate("ExportCloudsDialog", "Length along X-Axis", nullptr));
#endif // QT_CONFIG(tooltip)
        label_142->setText(QCoreApplication::translate("ExportCloudsDialog", "Y min", nullptr));
        doubleSpinBox_nodes_filtering_ymin->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
#if QT_CONFIG(tooltip)
        label_115->setToolTip(QCoreApplication::translate("ExportCloudsDialog", "Width along Y-Axis", nullptr));
#endif // QT_CONFIG(tooltip)
        label_115->setText(QCoreApplication::translate("ExportCloudsDialog", "Y max", nullptr));
#if QT_CONFIG(tooltip)
        label_116->setToolTip(QCoreApplication::translate("ExportCloudsDialog", "Height along Z-Axis", nullptr));
#endif // QT_CONFIG(tooltip)
        label_116->setText(QCoreApplication::translate("ExportCloudsDialog", "Z min", nullptr));
#if QT_CONFIG(tooltip)
        label_119->setToolTip(QCoreApplication::translate("ExportCloudsDialog", "Width along Y-Axis", nullptr));
#endif // QT_CONFIG(tooltip)
        label_119->setText(QCoreApplication::translate("ExportCloudsDialog", "Z max", nullptr));
        label_111->setText(QCoreApplication::translate("ExportCloudsDialog", "X min", nullptr));
        doubleSpinBox_nodes_filtering_xmin->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_nodes_filtering_xmax->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_nodes_filtering_zmin->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_nodes_filtering_ymax->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_nodes_filtering_zmax->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        groupBox_regenerateScans->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Regenerate Scans", nullptr));
        label_109->setText(QCoreApplication::translate("ExportCloudsDialog", "Downsampling step.", nullptr));
        label_138->setText(QCoreApplication::translate("ExportCloudsDialog", "Minimum range.", nullptr));
        doubleSpinBox_rangeMin->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_rangeMax->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_139->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum range (0 means no limit).", nullptr));
        groupBox_regenerate->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Regenerate Clouds", nullptr));
        label_134->setText(QCoreApplication::translate("ExportCloudsDialog", "Path to a depth distortion model to apply (output from depth calibration).", nullptr));
        label_135->setText(QCoreApplication::translate("ExportCloudsDialog", "ROI ratios [left, right, top, bottom] between 0 and 1. Only generate 3D points for pixels inside the region of interest (RGB image).", nullptr));
        doubleSpinBox_maxDepth->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_198->setText(QCoreApplication::translate("ExportCloudsDialog", "Fill depth hole error.", nullptr));
        doubleSpinBox_minDepth->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_108->setText(QCoreApplication::translate("ExportCloudsDialog", "3D cloud decimation (1-2-4-8-...). Negative decimation is done from RGB size instead of depth size (if depth is smaller than RGB, it may be interpolated depending of the decimation value).", nullptr));
        checkBox_subtraction->setText(QString());
        label_137->setText(QCoreApplication::translate("ExportCloudsDialog", "Cloud subtraction. Superposed points from different nodes are filtered.", nullptr));
        label_197->setText(QCoreApplication::translate("ExportCloudsDialog", "Fill depth hole size (0 means no fill).", nullptr));
        label_132->setText(QCoreApplication::translate("ExportCloudsDialog", "3D cloud maximum depth (0 means no limit).", nullptr));
        spinBox_fillDepthHolesError->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " %", nullptr));
        toolButton_distortionModel->setText(QCoreApplication::translate("ExportCloudsDialog", "...", nullptr));
        checkBox_bilateral->setText(QString());
        label_133->setText(QCoreApplication::translate("ExportCloudsDialog", "3D cloud minimum depth.", nullptr));
        label_136->setText(QCoreApplication::translate("ExportCloudsDialog", "Bilateral filtering of the depth image. Reduce noise in depth images.", nullptr));
        spinBox_fillDepthHoles->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " pixels", nullptr));
        groupBox_bilateral->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Bilateral Filtering of the Depth Image", nullptr));
        doubleSpinBox_bilateral_sigmaR->setSuffix(QString());
        label_194->setText(QCoreApplication::translate("ExportCloudsDialog", "Standard deviation of the Gaussian for the intensity difference. Set the standard deviation of the Gaussian used to control how much an adjacent pixel is downweighted because of the intensity difference (depth in our case).", nullptr));
        doubleSpinBox_bilateral_sigmaS->setSuffix(QString());
        label_195->setText(QCoreApplication::translate("ExportCloudsDialog", "Size of the Gaussian bilateral filter window to use. Set the standard deviation of the Gaussian used by the bilateral filter for the spatial neighborhood/window.", nullptr));
        groupBox_subtraction->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Cloud Subtraction", nullptr));
        label_174->setText(QCoreApplication::translate("ExportCloudsDialog", "Minimum points of the previous cloud in the fixed point radius in order to substract the point in the new cloud. Increasing this value reduces the black contours between clouds.", nullptr));
        label_193->setText(QCoreApplication::translate("ExportCloudsDialog", "Point angle used to keep only points with similar normal between the current cloud and the previous one.", nullptr));
        doubleSpinBox_subtractPointFilteringRadius->setSuffix(QString());
        label_192->setText(QCoreApplication::translate("ExportCloudsDialog", "Point radius used to find close points between the current cloud and the previous one.", nullptr));
        doubleSpinBox_subtractPointFilteringAngle->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " degrees", nullptr));
        groupBox_filtering->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Cloud Filtering", nullptr));
        doubleSpinBox_floorHeight->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_filteringRadius->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_144->setText(QCoreApplication::translate("ExportCloudsDialog", "Footprint length.", nullptr));
        doubleSpinBox_footprintWidth->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_footprintLength->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_145->setText(QCoreApplication::translate("ExportCloudsDialog", "Footprint height. If negative, the footprint is filtered between [-height:height] around the base frame, otherwise it is [0:height]", nullptr));
        doubleSpinBox_ceilingHeight->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_141->setText(QCoreApplication::translate("ExportCloudsDialog", "Floor filtering height. This is done in map frame.", nullptr));
        label_110->setText(QCoreApplication::translate("ExportCloudsDialog", "Search radius.", nullptr));
        label_143->setText(QCoreApplication::translate("ExportCloudsDialog", "Footprint width.", nullptr));
        doubleSpinBox_footprintHeight->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_112->setText(QCoreApplication::translate("ExportCloudsDialog", "Minimum neighbors in the search radius.", nullptr));
        label_140->setText(QCoreApplication::translate("ExportCloudsDialog", "Ceiling filtering height. This is done in map frame.", nullptr));
        groupBox_offAxisFiltering->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Off-Axis Filtering", nullptr));
        label_148->setText(QCoreApplication::translate("ExportCloudsDialog", "Keep only points with normals aligned with one/any of the map X-Y-Z axes.", nullptr));
        checkBox_offAxisFilteringPosX->setText(QCoreApplication::translate("ExportCloudsDialog", "+X", nullptr));
        checkBox_offAxisFilteringNegY->setText(QCoreApplication::translate("ExportCloudsDialog", "-Y", nullptr));
        checkBox_offAxisFilteringNegX->setText(QCoreApplication::translate("ExportCloudsDialog", "-X", nullptr));
        checkBox_offAxisFilteringPosY->setText(QCoreApplication::translate("ExportCloudsDialog", "+Y", nullptr));
        checkBox_offAxisFilteringPosZ->setText(QCoreApplication::translate("ExportCloudsDialog", "+Z", nullptr));
        checkBox_offAxisFilteringNegZ->setText(QCoreApplication::translate("ExportCloudsDialog", "-Z", nullptr));
        doubleSpinBox_offAxisFilteringAngle->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " deg", nullptr));
        label_146->setText(QCoreApplication::translate("ExportCloudsDialog", "Max angle error to keep the points. ", nullptr));
        groupBox_mls->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Cloud Smoothing", nullptr));
        label->setText(QCoreApplication::translate("ExportCloudsDialog", "WARNING: This adds significative time to process, though the clouds will be more smooth.", nullptr));
        doubleSpinBox_mlsRadius->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        comboBox_upsamplingMethod->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "NONE", nullptr));
        comboBox_upsamplingMethod->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "DISTINCT_CLOUD", nullptr));
        comboBox_upsamplingMethod->setItemText(2, QCoreApplication::translate("ExportCloudsDialog", "SAMPLE_LOCAL_PLANE", nullptr));
        comboBox_upsamplingMethod->setItemText(3, QCoreApplication::translate("ExportCloudsDialog", "RANDOM_UNIFORM_DENSITY", nullptr));
        comboBox_upsamplingMethod->setItemText(4, QCoreApplication::translate("ExportCloudsDialog", "VOXEL_GRID_DILATION", nullptr));

        label_87->setText(QCoreApplication::translate("ExportCloudsDialog", "MLS search radius: Set the sphere radius that is to be used for determining the k-nearest neighbors used for fitting. \n"
"Guidelines: 4 times the voxel size, 0.025 for voxel=0.", nullptr));
        label_88->setText(QCoreApplication::translate("ExportCloudsDialog", "Upsampling method.", nullptr));
        label_89->setText(QCoreApplication::translate("ExportCloudsDialog", "Polygonial order. Sets whether the surface and normal are approximated using a polynomial, or only via tangent estimation (value=0).", nullptr));
        label_90->setText(QCoreApplication::translate("ExportCloudsDialog", "Output voxel size. Used to filter superposed points after upsampling.", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ExportCloudsDialog", "NONE", nullptr));
        label_2->setText(QCoreApplication::translate("ExportCloudsDialog", "No upsampling will be done, only the input points will be projected to their own MLS surfaces.", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ExportCloudsDialog", "DISTINCT_CLOUD", nullptr));
        label_3->setText(QCoreApplication::translate("ExportCloudsDialog", "Will project the points of the distinct cloud to the closest point on the MLS surface.", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("ExportCloudsDialog", "SAMPLE_LOCAL_PLANE", nullptr));
        label_4->setText(QCoreApplication::translate("ExportCloudsDialog", "The local plane of each input point will be sampled in a circular fashion.", nullptr));
        label_8->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the step size for the local plane sampling.", nullptr));
        label_7->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the radius of the circle in the local point plane that will be sampled.", nullptr));
        groupBox_4->setTitle(QCoreApplication::translate("ExportCloudsDialog", "RANDOM_UNIFORM_DENSITY", nullptr));
        label_5->setText(QCoreApplication::translate("ExportCloudsDialog", "The local plane of each input point will be sampled using an uniform random distribution such that the density of points is constant throughout the cloud.", nullptr));
        label_9->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the parameter that specifies the desired number of points within the search radius.", nullptr));
        groupBox_5->setTitle(QCoreApplication::translate("ExportCloudsDialog", "VOXEL_GRID_DILATION", nullptr));
        label_6->setText(QCoreApplication::translate("ExportCloudsDialog", "The input cloud will be inserted into a voxel grid. This voxel grid will be dilated and the resulting points will be projected to the MLS surface of the closest point in the input cloud. The result is a point cloud with filled holes and a constant point density.", nullptr));
        label_10->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the voxel size for the voxel grid.", nullptr));
        label_11->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the number of dilation steps of the voxel grid.", nullptr));
        groupBox_gain->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Gain Compensation", nullptr));
        doubleSpinBox_gainBeta->setSuffix(QString());
        label_binaryFile_7->setText(QCoreApplication::translate("ExportCloudsDialog", "Do full compensation between all locations (longer to do but quality is better). Otherwise, compensation is done only between linked locations.", nullptr));
        doubleSpinBox_gainOverlap->setSuffix(QString());
        checkBox_gainFull->setText(QString());
        label_binaryFile_3->setText(QCoreApplication::translate("ExportCloudsDialog", "Correspondence radius", nullptr));
        label_binaryFile_5->setText(QCoreApplication::translate("ExportCloudsDialog", "Beta. The lower, the higher the compensation is but images are darker. When texturing, brightness and contrast balance below can be activated to re-increase brightness (e.g., set high ratio to 20%).", nullptr));
        doubleSpinBox_gainRadius->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_binaryFile_6->setText(QCoreApplication::translate("ExportCloudsDialog", "Min overlap (%)", nullptr));
        label_binaryFile_8->setText(QCoreApplication::translate("ExportCloudsDialog", "Gain on each RGB channel separatly.", nullptr));
        checkBox_gainRGB->setText(QString());
        groupBox_cameraProjection->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Camera Projection", nullptr));
        checkBox_camProjDistanceToCamPolicy->setText(QString());
        label_meshingTextureSize_16->setText(QCoreApplication::translate("ExportCloudsDialog", "Decimation of camera resolution before projection. This can help to correctly estimate points hidden by other points, in case the point cloud is sparse.", nullptr));
        label_camProjExportCamera->setText(QCoreApplication::translate("ExportCloudsDialog", "ID format of the camera selected for each point.", nullptr));
        label_meshingTextureSize_13->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum distance from the camera for points to be colorized by this camera (0 means infinite).", nullptr));
        spinBox_camProjDecimation->setSuffix(QString());
        label_meshingTextureSize_17->setText(QCoreApplication::translate("ExportCloudsDialog", "ROI ratios [left right top bottom] between 0 and 1. This can be used to ignore black borders of RGB images caused by calibration. ", nullptr));
        label_meshingTextureSize_12->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum angle between camera and point's normal to apply color (0 means disabled).", nullptr));
        checkBox_camProjRecolorPoints->setText(QString());
        checkBox_camProjKeepPointsNotSeenByCameras->setText(QString());
        comboBox_camProjExportCamera->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "Disabled", nullptr));
        comboBox_camProjExportCamera->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "By Node ID", nullptr));
        comboBox_camProjExportCamera->setItemText(2, QCoreApplication::translate("ExportCloudsDialog", "By Camera Index", nullptr));
        comboBox_camProjExportCamera->setItemText(3, QCoreApplication::translate("ExportCloudsDialog", "By Node ID and Camera Index", nullptr));

#if QT_CONFIG(tooltip)
        comboBox_camProjExportCamera->setToolTip(QCoreApplication::translate("ExportCloudsDialog", "By Node ID: cameras of same node have same ID\n"
"By Camera Index: of a multi-cameras setup\n"
"By Node ID and Camera Index: NodeID*10+CameraIndex", nullptr));
#endif // QT_CONFIG(tooltip)
        label_meshingTextureSize_14->setText(QCoreApplication::translate("ExportCloudsDialog", "Distance to camera policy. The closest camera from a point is used to colorize the point. If disabled, the camera for which the point projection is the closest of the image center is used to colorize the point.", nullptr));
        doubleSpinBox_camProjMaxAngle->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " deg", nullptr));
        doubleSpinBox_camProjMaxDistance->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_meshingTextureSize_15->setText(QCoreApplication::translate("ExportCloudsDialog", "Keep points not seen by the cameras. These points will be set with a pure red color (255,0,0) if the cloud was created from laser scans.", nullptr));
        label_meshingTextureSize_18->setText(QCoreApplication::translate("ExportCloudsDialog", "Recolor points from camera projection. This would be used to color laser scans with the cameras.", nullptr));
        label_meshingTextureSize_19->setText(QCoreApplication::translate("ExportCloudsDialog", "File path for a mask. Format should be 8-bits grayscale. The mask should cover all cameras in case multi-camera is used and have the same resolution.", nullptr));
        toolButton_camProjMaskFilePath->setText(QCoreApplication::translate("ExportCloudsDialog", "...", nullptr));
        groupBox_meshing->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Meshing", nullptr));
        label_meshClean->setText(QCoreApplication::translate("ExportCloudsDialog", "Clean mesh from polygons without color or texture.", nullptr));
        label_denseReconstruction->setText(QCoreApplication::translate("ExportCloudsDialog", "Surface reconstruction approach. Poisson is available when clouds are assembled and dense reconstruction flavor is selected. CPU-TSDF is available when clouds are assembled, organized reconstruction flavor is selected and RTAB-Map is built with CPU-TSDF support. OpenChisel is available when clouds are assembled and RTAB-Map is built with OpenChisel support.", nullptr));
        label_meshDecimation_2->setText(QCoreApplication::translate("ExportCloudsDialog", "Transferring color radius. Radius used to transfer color from original cloud to resampled reconstructed surface (e.g., Poisson or mesh decimation). Negative means disabled, 0 means take the nearest point.", nullptr));
        label_meshDecimation->setText(QCoreApplication::translate("ExportCloudsDialog", "Mesh quadric decimation factor (0=no decimation). Used to reduce the number of polygons. Higher the factor, lower the output resolution (less polygons). Can be used when organized mesh approach is not selected. Can reduce a lot texturing time.", nullptr));
        label_textureMapping->setText(QCoreApplication::translate("ExportCloudsDialog", "Texture mapping. Images of the cameras will be projected on the mesh(es). Output is a *.obj format. Available on Export or when clouds are not assembled.", nullptr));
        comboBox_meshingApproach->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "Fast GP3", nullptr));
        comboBox_meshingApproach->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "Poisson", nullptr));
        comboBox_meshingApproach->setItemText(2, QCoreApplication::translate("ExportCloudsDialog", "CPU-TSDF", nullptr));
        comboBox_meshingApproach->setItemText(3, QCoreApplication::translate("ExportCloudsDialog", "Organized", nullptr));
        comboBox_meshingApproach->setItemText(4, QCoreApplication::translate("ExportCloudsDialog", "Open Chisel (TSDF)", nullptr));

        checkBox_textureMapping->setText(QString());
        doubleSpinBox_transferColorRadius->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        checkBox_cleanMesh->setText(QString());
        label_16->setText(QCoreApplication::translate("ExportCloudsDialog", "Minimum polygon cluster size (-1 means that only the biggest cluster is kept).", nullptr));
        label_meshMaxPolygons->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum polygons (0=no max). Another way to do mesh quadric decimation, the factor will be computed depending on the polygons generated.", nullptr));
        spinBox_meshMaxPolygons->setSuffix(QString());
        groupBox_textureMapping->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Texturing", nullptr));
        spinBox_textureBrightnessContrastRatioHigh->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " %", nullptr));
        label_meshingTextureSize_6->setText(QCoreApplication::translate("ExportCloudsDialog", "Brightness and contrast balance high ratio. Only used when textures are merged.", nullptr));
        comboBox_blendingDecimation->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "Auto", nullptr));
        comboBox_blendingDecimation->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "1", nullptr));
        comboBox_blendingDecimation->setItemText(2, QCoreApplication::translate("ExportCloudsDialog", "2", nullptr));
        comboBox_blendingDecimation->setItemText(3, QCoreApplication::translate("ExportCloudsDialog", "4", nullptr));
        comboBox_blendingDecimation->setItemText(4, QCoreApplication::translate("ExportCloudsDialog", "8", nullptr));
        comboBox_blendingDecimation->setItemText(5, QCoreApplication::translate("ExportCloudsDialog", "16", nullptr));
        comboBox_blendingDecimation->setItemText(6, QCoreApplication::translate("ExportCloudsDialog", "32", nullptr));
        comboBox_blendingDecimation->setItemText(7, QCoreApplication::translate("ExportCloudsDialog", "64", nullptr));

        checkBox_blending->setText(QString());
        label_exposureFusion_3->setText(QCoreApplication::translate("ExportCloudsDialog", "Blending decimation. ", nullptr));
        label_meshingTextureSize_7->setText(QCoreApplication::translate("ExportCloudsDialog", "ROI ratios [left right top bottom] between 0 and 1. This can be used to ignore black borders of RGB images caused by calibration. ", nullptr));
        label_meshingTextureSize_8->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum output textures.", nullptr));
        label_exposureFusion_2->setText(QCoreApplication::translate("ExportCloudsDialog", "Blending. Only used with dense reconstruction flavor and if clouds are assembled.", nullptr));
        label_meshingTextureSize_2->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum distance from the camera for polygons to be textured by this camera (0 means infinite). Only used with dense reconstruction flavor.", nullptr));
        doubleSpinBox_meshingTextureMaxDistance->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_meshingTextureSize_5->setText(QCoreApplication::translate("ExportCloudsDialog", "Brightness and contrast balance low ratio. Only used when textures are merged.", nullptr));
        label_meshingTextureFormat->setText(QCoreApplication::translate("ExportCloudsDialog", "Texture format.", nullptr));
        comboBox_meshingTextureFormat->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", ".jpg", nullptr));
        comboBox_meshingTextureFormat->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", ".png", nullptr));

        comboBox_meshingTextureSize->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "Disabled", nullptr));
        comboBox_meshingTextureSize->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "256x256", nullptr));
        comboBox_meshingTextureSize->setItemText(2, QCoreApplication::translate("ExportCloudsDialog", "512x512", nullptr));
        comboBox_meshingTextureSize->setItemText(3, QCoreApplication::translate("ExportCloudsDialog", "1024x1024", nullptr));
        comboBox_meshingTextureSize->setItemText(4, QCoreApplication::translate("ExportCloudsDialog", "2048x2048", nullptr));
        comboBox_meshingTextureSize->setItemText(5, QCoreApplication::translate("ExportCloudsDialog", "4096x4096", nullptr));
        comboBox_meshingTextureSize->setItemText(6, QCoreApplication::translate("ExportCloudsDialog", "8192x8192", nullptr));
        comboBox_meshingTextureSize->setItemText(7, QCoreApplication::translate("ExportCloudsDialog", "16384x16384", nullptr));
        comboBox_meshingTextureSize->setItemText(8, QCoreApplication::translate("ExportCloudsDialog", "32768x32768", nullptr));

        checkBox_exposureFusion->setText(QString());
        label_meshingTextureSize_4->setText(QCoreApplication::translate("ExportCloudsDialog", "Minimum polygon cluster size for texturing. This removes textures applied on sparse polygons. Only used with dense reconstruction flavor.", nullptr));
        label_meshingTextureSize->setText(QCoreApplication::translate("ExportCloudsDialog", "Output texture size. If not set or when clouds are not assembled, all textures are saved separately. Warning: values higher than 2048 may not be compatible with all GPUs.", nullptr));
        checkBox_cameraFilter->setText(QString());
        spinBox_textureBrightnessContrastRatioLow->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " %", nullptr));
        label_meshingTextureSize_3->setText(QCoreApplication::translate("ExportCloudsDialog", "Camera filtering. Some criteria to select which cameras are used for texturing.", nullptr));
        label_exposureFusion->setText(QCoreApplication::translate("ExportCloudsDialog", "Exposure fusion. Only used when textures are merged and brightness/contrast balance ratios are used (merging original texture + 1 for each ratios).", nullptr));
        label_meshingTextureSize_9->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum depth error between reconstructed mesh projection in camera and corresponding value in depth image to apply texturing (negative means disabled, 0 means that longest edge length of the face is used as maximum error).", nullptr));
        doubleSpinBox_meshingTextureMaxDepthError->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_meshingTextureSize_10->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum angle between camera and face to apply texture (0 means disabled).", nullptr));
        doubleSpinBox_meshingTextureMaxAngle->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " deg", nullptr));
        label_multiband->setText(QCoreApplication::translate("ExportCloudsDialog", "MultiBand texturing. Only available on export and RTAB-Map should be built with AliceVision support.", nullptr));
        checkBox_multiband->setText(QString());
        label_meshingTextureSize_11->setText(QCoreApplication::translate("ExportCloudsDialog", "Distance to camera policy. The closest camera from a polygon is used to texture the polygon. If disabled, the camera for which the polygon projection is the closest of the image center is used to texture the polygon.", nullptr));
        checkBox_distanceToCamPolicy->setText(QString());
        groupBox_cameraFilter->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Camera Filtering", nullptr));
        doubleSpinBox_cameraFilterRadius->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_37->setText(QCoreApplication::translate("ExportCloudsDialog", "Only one camera in a fixed radius and angle is used for texturing. Radius of 0 m means disabled.", nullptr));
        doubleSpinBox_laplacianVariance->setSuffix(QString());
        doubleSpinBox_cameraFilterAngle->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " deg", nullptr));
        label_38->setText(QCoreApplication::translate("ExportCloudsDialog", "Laplacian variance threshold. Below this threshold, the image is considered blurred. 0 means disabled. 50 can be good default.", nullptr));
        doubleSpinBox_cameraFilterVelRad->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " rad/s", nullptr));
        doubleSpinBox_cameraFilterVel->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m/s", nullptr));
        label_39->setText(QCoreApplication::translate("ExportCloudsDialog", "Maximum speed to keep a camera view for texturing. Images taken on fast motions would be more blurry. 0 means disabled. 0.1 m/s and 0.4 rad/s can be good defaults.", nullptr));
        groupBox_multiband->setTitle(QCoreApplication::translate("ExportCloudsDialog", "MultiBand Texturing", nullptr));
        label_49->setText(QCoreApplication::translate("ExportCloudsDialog", "Downscaling to 4 or 8 will reduce the texture quality but speed up the computation time. Set Texture Downscale to 1 instead of 2 to get the maximum possible resolution with the resolution of your images. The output texture size will be divided by this value, e.g., with texture size of 8192 and downscale value of 2, the output will be 4096.", nullptr));
        label_52->setText(QCoreApplication::translate("ExportCloudsDialog", "Texture edge padding size in pixel.", nullptr));
        label_50->setText(QCoreApplication::translate("ExportCloudsDialog", "Unwrap method: 0=basic (default, >600k faces, fast), 1=ABF (<=300k faces, generate 1 atlas), 2=LSCM (<=600k faces, optimize space).", nullptr));
        label_55->setText(QCoreApplication::translate("ExportCloudsDialog", "Force visible by all vertices. Triangle visibility is based on the union of vertices visibility.", nullptr));
        comboBox_multiband_unwrap->setItemText(0, QCoreApplication::translate("ExportCloudsDialog", "Basic", nullptr));
        comboBox_multiband_unwrap->setItemText(1, QCoreApplication::translate("ExportCloudsDialog", "ABF", nullptr));
        comboBox_multiband_unwrap->setItemText(2, QCoreApplication::translate("ExportCloudsDialog", "LSCM", nullptr));

        label_54->setText(QCoreApplication::translate("ExportCloudsDialog", "Angle hard threshold. 0 to disable angle hard threshold filtering.", nullptr));
        label_53->setText(QCoreApplication::translate("ExportCloudsDialog", "Best score threshold. 0 to disable filtering based on threshold to relative best score.", nullptr));
        checkBox_multiband_forcevisible->setText(QString());
        checkBox_multiband_fillholes->setText(QString());
        label_51->setText(QCoreApplication::translate("ExportCloudsDialog", "Fill Texture holes with plausible values.", nullptr));
        label_56->setText(QCoreApplication::translate("ExportCloudsDialog", "Number of contributions per frequency band for the multi-band blending. Should be 4 values.", nullptr));
        lineEdit_multiband_nbcontrib->setText(QCoreApplication::translate("ExportCloudsDialog", "1 5 10 0", nullptr));
        groupBox_gp3->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Greedy Projection Triangulation (GP3) Meshing", nullptr));
        label_169->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the multiplier of the nearest neighbor distance to obtain the final search radius for each point  (this will make the algorithm adapt to different point densities in the cloud).", nullptr));
        doubleSpinBox_gp3Radius->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_168->setText(QCoreApplication::translate("ExportCloudsDialog", "Sphere radius that is to be used for determining the k-nearest neighbors used for triangulating (GP3). \n"
"Guidelines: 4 times the voxel size, 0.025 for voxel=0.", nullptr));
        groupBox_poisson->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Poisson Surface Reconstruction", nullptr));
        label_172->setText(QCoreApplication::translate("ExportCloudsDialog", "Depth. Lowering this parameter decreases reconstruction time, but geometry precision is lower. Minimum polygon size: map length / 2^depth), you can start tuning from depth of 8 or 9. 0 means that depth is chosen so that polygon size is just under target polygon size below.", nullptr));
        label_177->setText(QCoreApplication::translate("ExportCloudsDialog", "Samples per node. Set the minimum number of sample points that should fall within an octree node as the octree construction is adapted to sampling density. Note for noise-free samples, small values in the range [1.0 - 5.0] can be used. For more noisy samples, larger values in the range [15.0 - 20.0] may be needed to provide a smoother, noise-reduced, reconstruction.", nullptr));
        label_176->setText(QCoreApplication::translate("ExportCloudsDialog", "Manifold flag. Enabling this flag tells the reconstructor to add the polygon barycenter when triangulating polygons with more than three vertices.", nullptr));
        label_181->setText(QCoreApplication::translate("ExportCloudsDialog", "Point weight.", nullptr));
        label_182->setText(QCoreApplication::translate("ExportCloudsDialog", "Min depth.", nullptr));
        label_178->setText(QCoreApplication::translate("ExportCloudsDialog", "Iso divide. Set the depth at which a block iso-surface extractor should be used to extract the iso-surface note Using this parameter helps reduce the memory overhead at the cost of a small increase in extraction time. (In practice, we have found that for reconstructions of depth 9 or higher a subdivide depth of 7 or 8 can greatly reduce the memory usage.)", nullptr));
        checkBox_poisson_manifold->setText(QString());
        label_179->setText(QCoreApplication::translate("ExportCloudsDialog", "Solver divide. Set the the depth at which a block Gauss-Seidel solver is used to solve the Laplacian equation. Note that using this parameter helps reduce the memory overhead at the cost of a small increase in reconstruction time. (In practice, we have found that for reconstructions of depth 9 or higher a subdivide depth of 7 or 8 can greatly reduce the memory usage.)", nullptr));
        label_180->setText(QCoreApplication::translate("ExportCloudsDialog", "Scale. Set the ratio between the diameter of the cube used for reconstruction and the diameter of the samples' bounding cube.", nullptr));
        checkBox_poisson_outputPolygons->setText(QString());
        label_outputPolygons->setText(QCoreApplication::translate("ExportCloudsDialog", "Output polygons flag. Enabling this flag tells the reconstructor to output a polygon mesh (rather than triangulating of the results of Marching Cubes). Disabled when exporting to file, if mesh decimation is set or when texturing.", nullptr));
        label_outputPolygons_2->setText(QCoreApplication::translate("ExportCloudsDialog", "Target polygon size used to compute Poisson's depth based on the map size.", nullptr));
        doubleSpinBox_poisson_targetPolygonSize->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        groupBox_cputsdf->setTitle(QCoreApplication::translate("ExportCloudsDialog", "CPU-TSDF Reconstruction", nullptr));
        label_25->setText(QCoreApplication::translate("ExportCloudsDialog", "<html><head/><body><p><a href=\"https://github.com/sdmiller/cpu_tsdf\"><span style=\" text-decoration: underline; color:#0000ff;\">https://github.com/sdmiller/cpu_tsdf</span></a></p></body></html>", nullptr));
        doubleSpinBox_cputsdf_size->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_19->setText(QCoreApplication::translate("ExportCloudsDialog", "Volume size.", nullptr));
        doubleSpinBox_cputsdf_resolution->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_20->setText(QCoreApplication::translate("ExportCloudsDialog", "Resolution.", nullptr));
        doubleSpinBox_cputsdf_tuncPos->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_21->setText(QCoreApplication::translate("ExportCloudsDialog", "Depth truncation positive limit. Maximum distance a voxel will be set to positive.", nullptr));
        doubleSpinBox_cputsdf_tuncNeg->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_22->setText(QCoreApplication::translate("ExportCloudsDialog", "Depth truncation negative limit. Maximum distance a voxel will be set to negative.", nullptr));
        spinBox_cputsdf_randomSplit->setSuffix(QString());
        label_23->setText(QCoreApplication::translate("ExportCloudsDialog", "Set the number of random samples per surface point the octree should split on. If you don't know what this does, it's almost certainly best to leave it at 1.", nullptr));
        doubleSpinBox_cputsdf_minWeight->setSuffix(QString());
        label_18->setText(QCoreApplication::translate("ExportCloudsDialog", "Minimum weight of a voxel to be added in the mesh.", nullptr));
        doubleSpinBox_cputsdf_flattenRadius->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_24->setText(QCoreApplication::translate("ExportCloudsDialog", "Flatten radius (0=disabled).", nullptr));
        groupBox_organized->setTitle(QCoreApplication::translate("ExportCloudsDialog", "Organized Meshing", nullptr));
        label_15->setText(QCoreApplication::translate("ExportCloudsDialog", "Triangle size", nullptr));
        label_quad->setText(QCoreApplication::translate("ExportCloudsDialog", "Quad", nullptr));
        checkBox_mesh_quad->setText(QString());
        doubleSpinBox_mesh_angleTolerance->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " deg", nullptr));
        label_14->setText(QCoreApplication::translate("ExportCloudsDialog", "Angle tolerance", nullptr));
        spinBox_mesh_triangleSize->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " pix", nullptr));
        groupBox_openchisel->setTitle(QCoreApplication::translate("ExportCloudsDialog", "OpenChisel Reconstruction", nullptr));
        label_26->setText(QCoreApplication::translate("ExportCloudsDialog", "<html><head/><body><p><a href=\"https://github.com/personalrobotics/OpenChisel\"><span style=\" text-decoration: underline; color:#0000ff;\">https://github.com/personalrobotics/OpenChisel</span></a></p><p>Parameters below match those in chisel_ros package. Voxel resolution is taken from the general voxel parameter above, it should not be null. <br/><span style=\" font-weight:600;\">Issue: </span>If voxel size or chunk size are changed after exporting/viewing one time, the app should be restarted to avoid black meshes.</p></body></html>", nullptr));
        label_36->setText(QCoreApplication::translate("ExportCloudsDialog", "truncation_constant", nullptr));
        label_35->setText(QCoreApplication::translate("ExportCloudsDialog", "chunk_size_z", nullptr));
        label_40->setText(QCoreApplication::translate("ExportCloudsDialog", "truncation_linear", nullptr));
        label_43->setText(QCoreApplication::translate("ExportCloudsDialog", "integration_weight", nullptr));
        label_46->setText(QCoreApplication::translate("ExportCloudsDialog", "near_plane_dist", nullptr));
        label_34->setText(QCoreApplication::translate("ExportCloudsDialog", "chunk_size_y", nullptr));
        spinBox_openchisel_chunk_size_y->setSuffix(QString());
        doubleSpinBox_openchisel_truncation_constant->setSuffix(QString());
        spinBox_openchisel_chunk_size_z->setSuffix(QString());
        spinBox_openchisel_chunk_size_x->setSuffix(QString());
        label_31->setText(QCoreApplication::translate("ExportCloudsDialog", "chunk_size_x", nullptr));
        label_42->setText(QCoreApplication::translate("ExportCloudsDialog", "truncation_scale", nullptr));
        label_41->setText(QCoreApplication::translate("ExportCloudsDialog", "truncation_quadratic", nullptr));
        label_44->setText(QCoreApplication::translate("ExportCloudsDialog", "use_voxel_carving", nullptr));
        label_45->setText(QCoreApplication::translate("ExportCloudsDialog", "carving_dist_m", nullptr));
        label_47->setText(QCoreApplication::translate("ExportCloudsDialog", "far_plane_dist", nullptr));
        doubleSpinBox_openchisel_truncation_linear->setSuffix(QString());
        doubleSpinBox_openchisel_truncation_quadratic->setSuffix(QString());
        doubleSpinBox_openchisel_truncation_scale->setSuffix(QString());
        spinBox_openchisel_integration_weight->setSuffix(QString());
        checkBox_openchisel_use_voxel_carving->setText(QString());
        doubleSpinBox_openchisel_carving_dist_m->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_openchisel_near_plane_dist->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        doubleSpinBox_openchisel_far_plane_dist->setSuffix(QCoreApplication::translate("ExportCloudsDialog", " m", nullptr));
        label_48->setText(QCoreApplication::translate("ExportCloudsDialog", "Simplify generated mesh by merging close vertices together. Required for some post mesh filtering approaches to work properly.", nullptr));
        checkBox_openchisel_mergeVertices->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ExportCloudsDialog: public Ui_ExportCloudsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EXPORTCLOUDSDIALOG_H
