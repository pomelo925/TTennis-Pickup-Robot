/********************************************************************************
** Form generated from reading UI file 'DatabaseViewer.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DATABASEVIEWER_H
#define UI_DATABASEVIEWER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../include/rtabmap/gui/GraphViewer.h"
#include "../include/rtabmap/gui/ImageView.h"
#include "../include/rtabmap/gui/ParametersToolBox.h"
#include "../include/rtabmap/gui/StatsToolBox.h"

QT_BEGIN_NAMESPACE

class Ui_DatabaseViewer
{
public:
    QAction *actionOpen_database;
    QAction *actionQuit;
    QAction *actionGenerate_graph_dot;
    QAction *actionGenerate_local_graph_dot;
    QAction *actionGenerate_3D_map_pcd;
    QAction *actionExport;
    QAction *actionExtract_images;
    QAction *actionView_3D_map;
    QAction *actionRefine_links;
    QAction *actionDetect_more_loop_closures;
    QAction *actionSave_config;
    QAction *actionReset_all_changes;
    QAction *actionRegenerate_local_grid_maps;
    QAction *actionRegenerate_local_grid_maps_selected;
    QAction *actionEdit_depth_image;
    QAction *actionVertical_Layout;
    QAction *actionRestore_default_GUI_settings;
    QAction *actionRaw_format_txt;
    QAction *actionRGBD_SLAM_format_txt;
    QAction *actionKITTI_format_txt;
    QAction *actionTORO_graph;
    QAction *actionG2o_g2o;
    QAction *actionGPS_KML;
    QAction *actionGPS_TXT;
    QAction *actionPoses_KML;
    QAction *actionDatabase_recovery;
    QAction *actionClose_database;
    QAction *actionExport_saved_2D_map;
    QAction *actionImport_2D_map;
    QAction *actionView_optimized_mesh;
    QAction *actionExport_optimized_mesh;
    QAction *actionUpdate_optimized_mesh;
    QAction *actionUpdate_all_neighbor_covariances;
    QAction *actionUpdate_all_loop_closure_covariances;
    QAction *actionRGBD_SLAM_motion_capture_format_txt;
    QAction *actionEdit_optimized_2D_map;
    QAction *actionRegenerate_optimized_2D_map;
    QAction *actionRGBD_SLAM_ID_format_txt;
    QAction *actionUpdate_all_landmark_covariances;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_imageViews;
    rtabmap::ImageView *graphicsView_A;
    rtabmap::ImageView *graphicsView_B;
    QGridLayout *gridLayout_11;
    QScrollArea *scrollArea_2;
    QWidget *scrollAreaWidgetContents_2;
    QGridLayout *gridLayout;
    QLabel *label_childrenA_8;
    QLabel *label_childrenA_24;
    QLabel *label_childrenA_2;
    QLabel *label_sensorsA;
    QLabel *label_childrenA_6;
    QLabel *label_childrenA_22;
    QLabel *label_childrenA_20;
    QLabel *label_scanA;
    QLabel *label_childrenA_12;
    QLabel *label_parentsA_2;
    QLabel *label_weightA;
    QLabel *label_gpsA;
    QLabel *label_childrenA_14;
    QLabel *label_childrenA_28;
    QLabel *label_childrenA_18;
    QLabel *label_mapA;
    QLabel *label_childrenA;
    QLabel *label_childrenA_10;
    QLabel *label_childrenA_16;
    QLabel *label_childrenA_27;
    QLabel *label_velA;
    QLabel *label_childrenA_4;
    QLabel *label_poseA;
    QLabel *label_calibA;
    QLabel *label_labelA;
    QLabel *label_gravityA;
    QLabel *label_stampA;
    QLabel *label_parentsA;
    QLabel *label_gtA;
    QLabel *label_childrenA_30;
    QLabel *label_optposeA;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_priorA;
    QToolButton *toolButton_edit_priorA;
    QToolButton *toolButton_remove_priorA;
    QSpacerItem *horizontalSpacer_7;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QGridLayout *gridLayout_2;
    QLabel *label_childrenA_11;
    QLabel *label_poseB;
    QLabel *label_childrenA_26;
    QLabel *label_childrenA_5;
    QLabel *label_childrenA_3;
    QLabel *label_childrenA_21;
    QLabel *label_childrenB;
    QLabel *label_childrenA_7;
    QLabel *label_mapB;
    QLabel *label_gravityB;
    QLabel *label_labelB;
    QLabel *label_velB;
    QLabel *label_gpsB;
    QLabel *label_childrenA_13;
    QLabel *label_childrenA_23;
    QLabel *label_scanB;
    QLabel *label_childrenA_15;
    QLabel *label_childrenA_25;
    QLabel *label_parentsB;
    QLabel *label_parentsA_4;
    QLabel *label_stampB;
    QLabel *label_childrenA_19;
    QLabel *label_sensorsB;
    QLabel *label_calibB;
    QLabel *label_childrenA_9;
    QLabel *label_gtB;
    QLabel *label_childrenA_17;
    QLabel *label_weightB;
    QLabel *label_childrenA_29;
    QLabel *label_childrenA_31;
    QLabel *label_optposeB;
    QHBoxLayout *horizontalLayout_19;
    QLabel *label_priorB;
    QToolButton *toolButton_edit_priorB;
    QToolButton *toolButton_remove_priorB;
    QSpacerItem *horizontalSpacer_8;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_2;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_indexA;
    QLabel *label_idA;
    QSlider *horizontalSlider_A;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_5;
    QLabel *label_4;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_indexB;
    QLabel *label_idB;
    QSlider *horizontalSlider_B;
    QDialogButtonBox *buttonBox;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuExport_poses;
    QMenu *menuExport_GPS;
    QMenu *menuEdit;
    QMenu *menuView;
    QDockWidget *dockWidget_constraints;
    QWidget *dockWidgetContents;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *layout_constraintsViewer;
    QHBoxLayout *horizontalLayout_10;
    QCheckBox *checkBox_show3DWords;
    QCheckBox *checkBox_show3Dclouds;
    QCheckBox *checkBox_show2DScans;
    QCheckBox *checkBox_odomFrame;
    QSpacerItem *horizontalSpacer_3;
    QGridLayout *gridLayout_6;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_variance;
    QLineEdit *lineEdit_covariance;
    QLabel *label;
    QSlider *horizontalSlider_neighbors;
    QLabel *label_6;
    QSlider *horizontalSlider_loops;
    QLabel *label_33;
    QCheckBox *checkBox_showOptimized;
    QLabel *label_constraint_opt;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_type;
    QLabel *label_type_name;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_constraint;
    QToolButton *toolButton_constraint;
    QSpacerItem *horizontalSpacer_6;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButton_refine;
    QPushButton *pushButton_reset;
    QPushButton *pushButton_add;
    QCheckBox *checkBox_enableForAll;
    QPushButton *pushButton_reject;
    QSpacerItem *horizontalSpacer;
    QDockWidget *dockWidget_graphView;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_9;
    rtabmap::GraphViewer *graphViewer;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_rotation;
    QSlider *horizontalSlider_rotation;
    QPushButton *pushButton_applyRotation;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_iterations;
    QSlider *horizontalSlider_iterations;
    QComboBox *comboBox_optimizationFlavor;
    QGridLayout *gridLayout_5;
    QLabel *label_alignPosesWithGroundTruth;
    QCheckBox *checkBox_ignoreIntermediateNodes;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_optimizeFrom;
    QCheckBox *checkBox_spanAllMaps;
    QCheckBox *checkBox_wmState;
    QLabel *label_45;
    QLabel *label_rmse_title;
    QCheckBox *checkBox_alignScansCloudsWithGroundTruth;
    QLabel *label_poses;
    QLabel *label_timeOptimization;
    QLabel *label_alignScansCloudsWithGroundTruth;
    QLabel *label_rmse;
    QLabel *label_timeGrid;
    QLabel *label_41;
    QLabel *label_10;
    QLabel *label_52;
    QLabel *label_pathLength;
    QSpinBox *spinBox_optimizationsFrom;
    QLabel *label_loopClosures;
    QLabel *label_ignoreINtermediateNdoes;
    QLabel *label_39;
    QCheckBox *checkBox_alignPosesWithGroundTruth;
    QLabel *label_alignPosesWithGPS;
    QCheckBox *checkBox_alignPosesWithGPS;
    QDockWidget *dockWidget_guiparameters;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_10;
    QGridLayout *gridLayout_4;
    QComboBox *comboBox_logger_level;
    QLabel *label_logger_level;
    QToolBox *toolBox;
    QWidget *page_3;
    QGridLayout *gridLayout_7;
    QCheckBox *checkBox_ignoreGlobalLoop;
    QLabel *label_49;
    QCheckBox *checkBox_ignoreLocalLoopSpace;
    QLabel *label_48;
    QLabel *label_35;
    QCheckBox *checkBox_ignorePoseCorrection;
    QCheckBox *checkBox_ignoreLocalLoopTime;
    QSpacerItem *verticalSpacer_3;
    QCheckBox *checkBox_ignoreUserLoop;
    QLabel *label_50;
    QLabel *label_47;
    QLabel *label_scale_title;
    QDoubleSpinBox *doubleSpinBox_optimizationScale;
    QLabel *label_58;
    QCheckBox *checkBox_ignoreLandmarks;
    QWidget *page_4;
    QVBoxLayout *verticalLayout_16;
    QGridLayout *gridLayout_9;
    QLabel *label_53;
    QLabel *label_57;
    QSpinBox *spinBox_cropRadius;
    QCheckBox *checkBox_grid_showProbMap;
    QSpinBox *spinBox_decimation;
    QSpinBox *spinBox_grid_depth;
    QHBoxLayout *horizontalLayout_9;
    QToolButton *toolButton_groundColor;
    QLineEdit *lineEdit_groundColor;
    QLabel *label_octomap_cubes;
    QCheckBox *checkBox_grid_frontiers;
    QLabel *label_54;
    QLabel *label_octomap_depth;
    QCheckBox *checkBox_grid_regenerateFromSavedGrid;
    QCheckBox *checkBox_octomap;
    QLabel *label_octomap_empty_2;
    QLabel *label_51;
    QCheckBox *checkBox_showDisparityInsteadOfRight;
    QLabel *label_59;
    QLabel *label_logger_level_2;
    QLabel *label_octomap_empty_3;
    QDoubleSpinBox *doubleSpinBox_gainCompensationRadius;
    QLabel *label_octomap_empty_4;
    QHBoxLayout *horizontalLayout_12;
    QToolButton *toolButton_emptyColor;
    QLineEdit *lineEdit_emptyColor;
    QHBoxLayout *horizontalLayout_11;
    QToolButton *toolButton_obstacleColor;
    QLineEdit *lineEdit_obstacleColor;
    QCheckBox *checkBox_cameraProjection;
    QCheckBox *checkBox_grid_empty;
    QLabel *label_55;
    QLabel *label_octomap_frontiers;
    QLabel *label_60;
    QLabel *label_octomap_empty;
    QComboBox *comboBox_octomap_rendering_type;
    QLabel *label_56;
    QDoubleSpinBox *doubleSpinBox_voxelSize;
    QLabel *label_octomap_frontiers_3;
    QHBoxLayout *horizontalLayout_17;
    QToolButton *toolButton_frontierColor;
    QLineEdit *lineEdit_frontierColor;
    QGroupBox *groupBox_posefiltering;
    QGridLayout *gridLayout_12;
    QDoubleSpinBox *doubleSpinBox_posefilteringAngle;
    QDoubleSpinBox *doubleSpinBox_posefilteringRadius;
    QLabel *label_42;
    QLabel *label_43;
    QSpacerItem *verticalSpacer_4;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_13;
    QLabel *label_14;
    QLabel *label_12;
    QSpinBox *spinBox_mesh_angleTolerance;
    QSpinBox *spinBox_mesh_triangleSize;
    QLabel *label_13;
    QLabel *label_17;
    QSpinBox *spinBox_mesh_depthError;
    QCheckBox *checkBox_mesh_quad;
    QLabel *label_15;
    QSpinBox *spinBox_mesh_fillDepthHoles;
    QLabel *label_20;
    QSpinBox *spinBox_mesh_minClusterSize;
    QSpacerItem *verticalSpacer_6;
    QSpacerItem *verticalSpacer_2;
    QWidget *page_5;
    QGridLayout *gridLayout_10;
    QLabel *label_32;
    QDoubleSpinBox *doubleSpinBox_detectMore_radius;
    QLabel *label_29;
    QDoubleSpinBox *doubleSpinBox_detectMore_angle;
    QLabel *label_30;
    QSpinBox *spinBox_detectMore_iterations;
    QLabel *label_31;
    QSpacerItem *verticalSpacer_5;
    QLabel *label_34;
    QCheckBox *checkBox_detectMore_intraSession;
    QCheckBox *checkBox_detectMore_interSession;
    QLabel *label_36;
    QDoubleSpinBox *doubleSpinBox_detectMore_radiusMin;
    QWidget *page_2;
    QGridLayout *gridLayout_3;
    QSpinBox *spinBox_icp_decimation;
    QLabel *label_9;
    QDoubleSpinBox *doubleSpinBox_icp_maxDepth;
    QLabel *label_11;
    QCheckBox *checkBox_icp_from_depth;
    QLabel *label_7;
    QSpacerItem *verticalSpacer;
    QLabel *label_19;
    QDoubleSpinBox *doubleSpinBox_icp_minDepth;
    QDockWidget *dockWidget_stereoView;
    QWidget *dockWidgetContents_stereo;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_stereo;
    rtabmap::ImageView *graphicsView_stereo;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_stereo_inliers_name;
    QLabel *label_stereo_inliers;
    QLabel *label_stereo_slopeOutliers_name;
    QLabel *label_stereo_slopeOutliers;
    QLabel *label_stereo_disparityOutliers_name;
    QLabel *label_stereo_disparityOutliers;
    QLabel *label_stereo_flowOutliers_name;
    QLabel *label_stereo_flowOutliers;
    QSpacerItem *horizontalSpacer_2;
    QDockWidget *dockWidget_view3d;
    QWidget *dockWidgetContents_3dviews;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_3dviews;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_showWords;
    QCheckBox *checkBox_showCloud;
    QCheckBox *checkBox_showMesh;
    QCheckBox *checkBox_showScan;
    QCheckBox *checkBox_showMap;
    QCheckBox *checkBox_showGrid;
    QCheckBox *checkBox_showElevation;
    QCheckBox *checkBox_odomFrame_3dview;
    QCheckBox *checkBox_gravity_3dview;
    QSpacerItem *horizontalSpacer_4;
    QDockWidget *dockWidget_info;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_12;
    QTextEdit *textEdit_info;
    QDockWidget *dockWidget_coreparameters;
    QWidget *dockWidgetContents_7;
    QVBoxLayout *verticalLayout_13;
    rtabmap::ParametersToolBox *parameters_toolbox;
    QDockWidget *dockWidget_statistics;
    QWidget *dockWidgetContents_5;
    QVBoxLayout *verticalLayout_7;
    QGridLayout *gridLayout_8;
    QCheckBox *checkBox_timeStats;
    QLabel *label_logger_level_3;
    rtabmap::StatsToolBox *toolBox_statistics;
    QDockWidget *dockWidget_occupancyGridView;
    QWidget *dockWidgetContents_occupancyGrid;
    QVBoxLayout *verticalLayout_14;
    QVBoxLayout *layout_occupancyGridView;
    QHBoxLayout *horizontalLayout_8;
    QCheckBox *checkBox_grid_grid;
    QCheckBox *checkBox_grid_2d;
    QCheckBox *checkBox_grid_elevation;
    QSpacerItem *horizontalSpacer_5;

    void setupUi(QMainWindow *DatabaseViewer)
    {
        if (DatabaseViewer->objectName().isEmpty())
            DatabaseViewer->setObjectName(QString::fromUtf8("DatabaseViewer"));
        DatabaseViewer->resize(1547, 965);
        DatabaseViewer->setLayoutDirection(Qt::LeftToRight);
        actionOpen_database = new QAction(DatabaseViewer);
        actionOpen_database->setObjectName(QString::fromUtf8("actionOpen_database"));
        actionQuit = new QAction(DatabaseViewer);
        actionQuit->setObjectName(QString::fromUtf8("actionQuit"));
        actionGenerate_graph_dot = new QAction(DatabaseViewer);
        actionGenerate_graph_dot->setObjectName(QString::fromUtf8("actionGenerate_graph_dot"));
        actionGenerate_local_graph_dot = new QAction(DatabaseViewer);
        actionGenerate_local_graph_dot->setObjectName(QString::fromUtf8("actionGenerate_local_graph_dot"));
        actionGenerate_3D_map_pcd = new QAction(DatabaseViewer);
        actionGenerate_3D_map_pcd->setObjectName(QString::fromUtf8("actionGenerate_3D_map_pcd"));
        actionExport = new QAction(DatabaseViewer);
        actionExport->setObjectName(QString::fromUtf8("actionExport"));
        actionExtract_images = new QAction(DatabaseViewer);
        actionExtract_images->setObjectName(QString::fromUtf8("actionExtract_images"));
        actionView_3D_map = new QAction(DatabaseViewer);
        actionView_3D_map->setObjectName(QString::fromUtf8("actionView_3D_map"));
        actionRefine_links = new QAction(DatabaseViewer);
        actionRefine_links->setObjectName(QString::fromUtf8("actionRefine_links"));
        actionDetect_more_loop_closures = new QAction(DatabaseViewer);
        actionDetect_more_loop_closures->setObjectName(QString::fromUtf8("actionDetect_more_loop_closures"));
        actionSave_config = new QAction(DatabaseViewer);
        actionSave_config->setObjectName(QString::fromUtf8("actionSave_config"));
        actionReset_all_changes = new QAction(DatabaseViewer);
        actionReset_all_changes->setObjectName(QString::fromUtf8("actionReset_all_changes"));
        actionRegenerate_local_grid_maps = new QAction(DatabaseViewer);
        actionRegenerate_local_grid_maps->setObjectName(QString::fromUtf8("actionRegenerate_local_grid_maps"));
        actionRegenerate_local_grid_maps_selected = new QAction(DatabaseViewer);
        actionRegenerate_local_grid_maps_selected->setObjectName(QString::fromUtf8("actionRegenerate_local_grid_maps_selected"));
        actionEdit_depth_image = new QAction(DatabaseViewer);
        actionEdit_depth_image->setObjectName(QString::fromUtf8("actionEdit_depth_image"));
        actionVertical_Layout = new QAction(DatabaseViewer);
        actionVertical_Layout->setObjectName(QString::fromUtf8("actionVertical_Layout"));
        actionVertical_Layout->setCheckable(true);
        actionVertical_Layout->setChecked(false);
        actionRestore_default_GUI_settings = new QAction(DatabaseViewer);
        actionRestore_default_GUI_settings->setObjectName(QString::fromUtf8("actionRestore_default_GUI_settings"));
        actionRaw_format_txt = new QAction(DatabaseViewer);
        actionRaw_format_txt->setObjectName(QString::fromUtf8("actionRaw_format_txt"));
        actionRGBD_SLAM_format_txt = new QAction(DatabaseViewer);
        actionRGBD_SLAM_format_txt->setObjectName(QString::fromUtf8("actionRGBD_SLAM_format_txt"));
        actionKITTI_format_txt = new QAction(DatabaseViewer);
        actionKITTI_format_txt->setObjectName(QString::fromUtf8("actionKITTI_format_txt"));
        actionTORO_graph = new QAction(DatabaseViewer);
        actionTORO_graph->setObjectName(QString::fromUtf8("actionTORO_graph"));
        actionG2o_g2o = new QAction(DatabaseViewer);
        actionG2o_g2o->setObjectName(QString::fromUtf8("actionG2o_g2o"));
        actionGPS_KML = new QAction(DatabaseViewer);
        actionGPS_KML->setObjectName(QString::fromUtf8("actionGPS_KML"));
        actionGPS_TXT = new QAction(DatabaseViewer);
        actionGPS_TXT->setObjectName(QString::fromUtf8("actionGPS_TXT"));
        actionPoses_KML = new QAction(DatabaseViewer);
        actionPoses_KML->setObjectName(QString::fromUtf8("actionPoses_KML"));
        actionDatabase_recovery = new QAction(DatabaseViewer);
        actionDatabase_recovery->setObjectName(QString::fromUtf8("actionDatabase_recovery"));
        actionClose_database = new QAction(DatabaseViewer);
        actionClose_database->setObjectName(QString::fromUtf8("actionClose_database"));
        actionExport_saved_2D_map = new QAction(DatabaseViewer);
        actionExport_saved_2D_map->setObjectName(QString::fromUtf8("actionExport_saved_2D_map"));
        actionImport_2D_map = new QAction(DatabaseViewer);
        actionImport_2D_map->setObjectName(QString::fromUtf8("actionImport_2D_map"));
        actionView_optimized_mesh = new QAction(DatabaseViewer);
        actionView_optimized_mesh->setObjectName(QString::fromUtf8("actionView_optimized_mesh"));
        actionExport_optimized_mesh = new QAction(DatabaseViewer);
        actionExport_optimized_mesh->setObjectName(QString::fromUtf8("actionExport_optimized_mesh"));
        actionUpdate_optimized_mesh = new QAction(DatabaseViewer);
        actionUpdate_optimized_mesh->setObjectName(QString::fromUtf8("actionUpdate_optimized_mesh"));
        actionUpdate_all_neighbor_covariances = new QAction(DatabaseViewer);
        actionUpdate_all_neighbor_covariances->setObjectName(QString::fromUtf8("actionUpdate_all_neighbor_covariances"));
        actionUpdate_all_loop_closure_covariances = new QAction(DatabaseViewer);
        actionUpdate_all_loop_closure_covariances->setObjectName(QString::fromUtf8("actionUpdate_all_loop_closure_covariances"));
        actionRGBD_SLAM_motion_capture_format_txt = new QAction(DatabaseViewer);
        actionRGBD_SLAM_motion_capture_format_txt->setObjectName(QString::fromUtf8("actionRGBD_SLAM_motion_capture_format_txt"));
        actionEdit_optimized_2D_map = new QAction(DatabaseViewer);
        actionEdit_optimized_2D_map->setObjectName(QString::fromUtf8("actionEdit_optimized_2D_map"));
        actionRegenerate_optimized_2D_map = new QAction(DatabaseViewer);
        actionRegenerate_optimized_2D_map->setObjectName(QString::fromUtf8("actionRegenerate_optimized_2D_map"));
        actionRGBD_SLAM_ID_format_txt = new QAction(DatabaseViewer);
        actionRGBD_SLAM_ID_format_txt->setObjectName(QString::fromUtf8("actionRGBD_SLAM_ID_format_txt"));
        actionUpdate_all_landmark_covariances = new QAction(DatabaseViewer);
        actionUpdate_all_landmark_covariances->setObjectName(QString::fromUtf8("actionUpdate_all_landmark_covariances"));
        centralwidget = new QWidget(DatabaseViewer);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_imageViews = new QHBoxLayout();
        horizontalLayout_imageViews->setObjectName(QString::fromUtf8("horizontalLayout_imageViews"));
        graphicsView_A = new rtabmap::ImageView(centralwidget);
        graphicsView_A->setObjectName(QString::fromUtf8("graphicsView_A"));

        horizontalLayout_imageViews->addWidget(graphicsView_A);

        graphicsView_B = new rtabmap::ImageView(centralwidget);
        graphicsView_B->setObjectName(QString::fromUtf8("graphicsView_B"));

        horizontalLayout_imageViews->addWidget(graphicsView_B);

        horizontalLayout_imageViews->setStretch(0, 1);
        horizontalLayout_imageViews->setStretch(1, 1);

        verticalLayout_6->addLayout(horizontalLayout_imageViews);

        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(0);
        gridLayout_11->setObjectName(QString::fromUtf8("gridLayout_11"));
        scrollArea_2 = new QScrollArea(centralwidget);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea_2->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 307, 389));
        gridLayout = new QGridLayout(scrollAreaWidgetContents_2);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_childrenA_8 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_8->setObjectName(QString::fromUtf8("label_childrenA_8"));

        gridLayout->addWidget(label_childrenA_8, 2, 0, 1, 1);

        label_childrenA_24 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_24->setObjectName(QString::fromUtf8("label_childrenA_24"));

        gridLayout->addWidget(label_childrenA_24, 11, 0, 1, 1);

        label_childrenA_2 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_2->setObjectName(QString::fromUtf8("label_childrenA_2"));

        gridLayout->addWidget(label_childrenA_2, 1, 0, 1, 1);

        label_sensorsA = new QLabel(scrollAreaWidgetContents_2);
        label_sensorsA->setObjectName(QString::fromUtf8("label_sensorsA"));
        label_sensorsA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_sensorsA, 15, 1, 1, 1);

        label_childrenA_6 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_6->setObjectName(QString::fromUtf8("label_childrenA_6"));

        gridLayout->addWidget(label_childrenA_6, 8, 0, 1, 1);

        label_childrenA_22 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_22->setObjectName(QString::fromUtf8("label_childrenA_22"));

        gridLayout->addWidget(label_childrenA_22, 10, 0, 1, 1);

        label_childrenA_20 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_20->setObjectName(QString::fromUtf8("label_childrenA_20"));

        gridLayout->addWidget(label_childrenA_20, 15, 0, 1, 1);

        label_scanA = new QLabel(scrollAreaWidgetContents_2);
        label_scanA->setObjectName(QString::fromUtf8("label_scanA"));
        label_scanA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_scanA, 10, 1, 1, 1);

        label_childrenA_12 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_12->setObjectName(QString::fromUtf8("label_childrenA_12"));

        gridLayout->addWidget(label_childrenA_12, 5, 0, 1, 1);

        label_parentsA_2 = new QLabel(scrollAreaWidgetContents_2);
        label_parentsA_2->setObjectName(QString::fromUtf8("label_parentsA_2"));

        gridLayout->addWidget(label_parentsA_2, 0, 0, 1, 1);

        label_weightA = new QLabel(scrollAreaWidgetContents_2);
        label_weightA->setObjectName(QString::fromUtf8("label_weightA"));
        label_weightA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_weightA, 2, 1, 1, 1);

        label_gpsA = new QLabel(scrollAreaWidgetContents_2);
        label_gpsA->setObjectName(QString::fromUtf8("label_gpsA"));
        label_gpsA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_gpsA, 13, 1, 1, 1);

        label_childrenA_14 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_14->setObjectName(QString::fromUtf8("label_childrenA_14"));

        gridLayout->addWidget(label_childrenA_14, 9, 0, 1, 1);

        label_childrenA_28 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_28->setObjectName(QString::fromUtf8("label_childrenA_28"));

        gridLayout->addWidget(label_childrenA_28, 12, 0, 1, 1);

        label_childrenA_18 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_18->setObjectName(QString::fromUtf8("label_childrenA_18"));

        gridLayout->addWidget(label_childrenA_18, 7, 0, 1, 1);

        label_mapA = new QLabel(scrollAreaWidgetContents_2);
        label_mapA->setObjectName(QString::fromUtf8("label_mapA"));
        label_mapA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_mapA, 4, 1, 1, 1);

        label_childrenA = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA->setObjectName(QString::fromUtf8("label_childrenA"));
        label_childrenA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_childrenA, 1, 1, 1, 1);

        label_childrenA_10 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_10->setObjectName(QString::fromUtf8("label_childrenA_10"));

        gridLayout->addWidget(label_childrenA_10, 4, 0, 1, 1);

        label_childrenA_16 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_16->setObjectName(QString::fromUtf8("label_childrenA_16"));

        gridLayout->addWidget(label_childrenA_16, 13, 0, 1, 1);

        label_childrenA_27 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_27->setObjectName(QString::fromUtf8("label_childrenA_27"));

        gridLayout->addWidget(label_childrenA_27, 14, 0, 1, 1);

        label_velA = new QLabel(scrollAreaWidgetContents_2);
        label_velA->setObjectName(QString::fromUtf8("label_velA"));
        label_velA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_velA, 7, 1, 1, 1);

        label_childrenA_4 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_4->setObjectName(QString::fromUtf8("label_childrenA_4"));

        gridLayout->addWidget(label_childrenA_4, 3, 0, 1, 1);

        label_poseA = new QLabel(scrollAreaWidgetContents_2);
        label_poseA->setObjectName(QString::fromUtf8("label_poseA"));
        label_poseA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_poseA, 5, 1, 1, 1);

        label_calibA = new QLabel(scrollAreaWidgetContents_2);
        label_calibA->setObjectName(QString::fromUtf8("label_calibA"));
        label_calibA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_calibA, 9, 1, 1, 1);

        label_labelA = new QLabel(scrollAreaWidgetContents_2);
        label_labelA->setObjectName(QString::fromUtf8("label_labelA"));
        label_labelA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_labelA, 3, 1, 1, 1);

        label_gravityA = new QLabel(scrollAreaWidgetContents_2);
        label_gravityA->setObjectName(QString::fromUtf8("label_gravityA"));
        label_gravityA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_gravityA, 11, 1, 1, 1);

        label_stampA = new QLabel(scrollAreaWidgetContents_2);
        label_stampA->setObjectName(QString::fromUtf8("label_stampA"));
        label_stampA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_stampA, 8, 1, 1, 1);

        label_parentsA = new QLabel(scrollAreaWidgetContents_2);
        label_parentsA->setObjectName(QString::fromUtf8("label_parentsA"));
        label_parentsA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_parentsA, 0, 1, 1, 1);

        label_gtA = new QLabel(scrollAreaWidgetContents_2);
        label_gtA->setObjectName(QString::fromUtf8("label_gtA"));
        label_gtA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_gtA, 14, 1, 1, 1);

        label_childrenA_30 = new QLabel(scrollAreaWidgetContents_2);
        label_childrenA_30->setObjectName(QString::fromUtf8("label_childrenA_30"));

        gridLayout->addWidget(label_childrenA_30, 6, 0, 1, 1);

        label_optposeA = new QLabel(scrollAreaWidgetContents_2);
        label_optposeA->setObjectName(QString::fromUtf8("label_optposeA"));
        label_optposeA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout->addWidget(label_optposeA, 6, 1, 1, 1);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_priorA = new QLabel(scrollAreaWidgetContents_2);
        label_priorA->setObjectName(QString::fromUtf8("label_priorA"));
        label_priorA->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_18->addWidget(label_priorA);

        toolButton_edit_priorA = new QToolButton(scrollAreaWidgetContents_2);
        toolButton_edit_priorA->setObjectName(QString::fromUtf8("toolButton_edit_priorA"));

        horizontalLayout_18->addWidget(toolButton_edit_priorA);

        toolButton_remove_priorA = new QToolButton(scrollAreaWidgetContents_2);
        toolButton_remove_priorA->setObjectName(QString::fromUtf8("toolButton_remove_priorA"));

        horizontalLayout_18->addWidget(toolButton_remove_priorA);

        horizontalSpacer_7 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_18->addItem(horizontalSpacer_7);


        gridLayout->addLayout(horizontalLayout_18, 12, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        scrollArea_2->setWidget(scrollAreaWidgetContents_2);

        gridLayout_11->addWidget(scrollArea_2, 0, 0, 1, 1);

        scrollArea = new QScrollArea(centralwidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 306, 389));
        gridLayout_2 = new QGridLayout(scrollAreaWidgetContents);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label_childrenA_11 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_11->setObjectName(QString::fromUtf8("label_childrenA_11"));

        gridLayout_2->addWidget(label_childrenA_11, 4, 0, 1, 1);

        label_poseB = new QLabel(scrollAreaWidgetContents);
        label_poseB->setObjectName(QString::fromUtf8("label_poseB"));
        label_poseB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_poseB, 5, 1, 1, 1);

        label_childrenA_26 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_26->setObjectName(QString::fromUtf8("label_childrenA_26"));

        gridLayout_2->addWidget(label_childrenA_26, 14, 0, 1, 1);

        label_childrenA_5 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_5->setObjectName(QString::fromUtf8("label_childrenA_5"));

        gridLayout_2->addWidget(label_childrenA_5, 3, 0, 1, 1);

        label_childrenA_3 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_3->setObjectName(QString::fromUtf8("label_childrenA_3"));

        gridLayout_2->addWidget(label_childrenA_3, 1, 0, 1, 1);

        label_childrenA_21 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_21->setObjectName(QString::fromUtf8("label_childrenA_21"));

        gridLayout_2->addWidget(label_childrenA_21, 15, 0, 1, 1);

        label_childrenB = new QLabel(scrollAreaWidgetContents);
        label_childrenB->setObjectName(QString::fromUtf8("label_childrenB"));
        label_childrenB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_childrenB, 1, 1, 1, 1);

        label_childrenA_7 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_7->setObjectName(QString::fromUtf8("label_childrenA_7"));

        gridLayout_2->addWidget(label_childrenA_7, 8, 0, 1, 1);

        label_mapB = new QLabel(scrollAreaWidgetContents);
        label_mapB->setObjectName(QString::fromUtf8("label_mapB"));
        label_mapB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_mapB, 4, 1, 1, 1);

        label_gravityB = new QLabel(scrollAreaWidgetContents);
        label_gravityB->setObjectName(QString::fromUtf8("label_gravityB"));
        label_gravityB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_gravityB, 11, 1, 1, 1);

        label_labelB = new QLabel(scrollAreaWidgetContents);
        label_labelB->setObjectName(QString::fromUtf8("label_labelB"));
        label_labelB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_labelB, 3, 1, 1, 1);

        label_velB = new QLabel(scrollAreaWidgetContents);
        label_velB->setObjectName(QString::fromUtf8("label_velB"));
        label_velB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_velB, 7, 1, 1, 1);

        label_gpsB = new QLabel(scrollAreaWidgetContents);
        label_gpsB->setObjectName(QString::fromUtf8("label_gpsB"));
        label_gpsB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_gpsB, 13, 1, 1, 1);

        label_childrenA_13 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_13->setObjectName(QString::fromUtf8("label_childrenA_13"));

        gridLayout_2->addWidget(label_childrenA_13, 5, 0, 1, 1);

        label_childrenA_23 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_23->setObjectName(QString::fromUtf8("label_childrenA_23"));

        gridLayout_2->addWidget(label_childrenA_23, 10, 0, 1, 1);

        label_scanB = new QLabel(scrollAreaWidgetContents);
        label_scanB->setObjectName(QString::fromUtf8("label_scanB"));
        label_scanB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_scanB, 10, 1, 1, 1);

        label_childrenA_15 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_15->setObjectName(QString::fromUtf8("label_childrenA_15"));

        gridLayout_2->addWidget(label_childrenA_15, 9, 0, 1, 1);

        label_childrenA_25 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_25->setObjectName(QString::fromUtf8("label_childrenA_25"));

        gridLayout_2->addWidget(label_childrenA_25, 11, 0, 1, 1);

        label_parentsB = new QLabel(scrollAreaWidgetContents);
        label_parentsB->setObjectName(QString::fromUtf8("label_parentsB"));
        label_parentsB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_parentsB, 0, 1, 1, 1);

        label_parentsA_4 = new QLabel(scrollAreaWidgetContents);
        label_parentsA_4->setObjectName(QString::fromUtf8("label_parentsA_4"));

        gridLayout_2->addWidget(label_parentsA_4, 0, 0, 1, 1);

        label_stampB = new QLabel(scrollAreaWidgetContents);
        label_stampB->setObjectName(QString::fromUtf8("label_stampB"));
        label_stampB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_stampB, 8, 1, 1, 1);

        label_childrenA_19 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_19->setObjectName(QString::fromUtf8("label_childrenA_19"));

        gridLayout_2->addWidget(label_childrenA_19, 7, 0, 1, 1);

        label_sensorsB = new QLabel(scrollAreaWidgetContents);
        label_sensorsB->setObjectName(QString::fromUtf8("label_sensorsB"));
        label_sensorsB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_sensorsB, 15, 1, 1, 1);

        label_calibB = new QLabel(scrollAreaWidgetContents);
        label_calibB->setObjectName(QString::fromUtf8("label_calibB"));
        label_calibB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_calibB, 9, 1, 1, 1);

        label_childrenA_9 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_9->setObjectName(QString::fromUtf8("label_childrenA_9"));

        gridLayout_2->addWidget(label_childrenA_9, 2, 0, 1, 1);

        label_gtB = new QLabel(scrollAreaWidgetContents);
        label_gtB->setObjectName(QString::fromUtf8("label_gtB"));
        label_gtB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_gtB, 14, 1, 1, 1);

        label_childrenA_17 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_17->setObjectName(QString::fromUtf8("label_childrenA_17"));

        gridLayout_2->addWidget(label_childrenA_17, 13, 0, 1, 1);

        label_weightB = new QLabel(scrollAreaWidgetContents);
        label_weightB->setObjectName(QString::fromUtf8("label_weightB"));
        label_weightB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_weightB, 2, 1, 1, 1);

        label_childrenA_29 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_29->setObjectName(QString::fromUtf8("label_childrenA_29"));

        gridLayout_2->addWidget(label_childrenA_29, 12, 0, 1, 1);

        label_childrenA_31 = new QLabel(scrollAreaWidgetContents);
        label_childrenA_31->setObjectName(QString::fromUtf8("label_childrenA_31"));

        gridLayout_2->addWidget(label_childrenA_31, 6, 0, 1, 1);

        label_optposeB = new QLabel(scrollAreaWidgetContents);
        label_optposeB->setObjectName(QString::fromUtf8("label_optposeB"));
        label_optposeB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_2->addWidget(label_optposeB, 6, 1, 1, 1);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        label_priorB = new QLabel(scrollAreaWidgetContents);
        label_priorB->setObjectName(QString::fromUtf8("label_priorB"));
        label_priorB->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_19->addWidget(label_priorB);

        toolButton_edit_priorB = new QToolButton(scrollAreaWidgetContents);
        toolButton_edit_priorB->setObjectName(QString::fromUtf8("toolButton_edit_priorB"));

        horizontalLayout_19->addWidget(toolButton_edit_priorB);

        toolButton_remove_priorB = new QToolButton(scrollAreaWidgetContents);
        toolButton_remove_priorB->setObjectName(QString::fromUtf8("toolButton_remove_priorB"));

        horizontalLayout_19->addWidget(toolButton_remove_priorB);

        horizontalSpacer_8 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_8);


        gridLayout_2->addLayout(horizontalLayout_19, 12, 1, 1, 1);

        gridLayout_2->setColumnStretch(1, 1);
        scrollArea->setWidget(scrollAreaWidgetContents);

        gridLayout_11->addWidget(scrollArea, 0, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(12, 12, 12, 12);
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_4->addWidget(label_2);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_4->addWidget(label_3);


        horizontalLayout->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_indexA = new QLabel(centralwidget);
        label_indexA->setObjectName(QString::fromUtf8("label_indexA"));

        verticalLayout_3->addWidget(label_indexA);

        label_idA = new QLabel(centralwidget);
        label_idA->setObjectName(QString::fromUtf8("label_idA"));

        verticalLayout_3->addWidget(label_idA);


        horizontalLayout->addLayout(verticalLayout_3);

        horizontalSlider_A = new QSlider(centralwidget);
        horizontalSlider_A->setObjectName(QString::fromUtf8("horizontalSlider_A"));
        horizontalSlider_A->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_A->setOrientation(Qt::Horizontal);
        horizontalSlider_A->setTickPosition(QSlider::TicksAbove);

        horizontalLayout->addWidget(horizontalSlider_A);


        gridLayout_11->addLayout(horizontalLayout, 1, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(12, 12, 12, 12);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout->addWidget(label_5);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout->addWidget(label_4);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_indexB = new QLabel(centralwidget);
        label_indexB->setObjectName(QString::fromUtf8("label_indexB"));

        verticalLayout_2->addWidget(label_indexB);

        label_idB = new QLabel(centralwidget);
        label_idB->setObjectName(QString::fromUtf8("label_idB"));

        verticalLayout_2->addWidget(label_idB);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalSlider_B = new QSlider(centralwidget);
        horizontalSlider_B->setObjectName(QString::fromUtf8("horizontalSlider_B"));
        horizontalSlider_B->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_B->setOrientation(Qt::Horizontal);
        horizontalSlider_B->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_2->addWidget(horizontalSlider_B);


        gridLayout_11->addLayout(horizontalLayout_2, 1, 1, 1, 1);

        gridLayout_11->setRowStretch(0, 1);

        verticalLayout_6->addLayout(gridLayout_11);

        buttonBox = new QDialogButtonBox(centralwidget);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        verticalLayout_6->addWidget(buttonBox);

        verticalLayout_6->setStretch(0, 1);
        DatabaseViewer->setCentralWidget(centralwidget);
        menubar = new QMenuBar(DatabaseViewer);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1547, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExport_poses = new QMenu(menuFile);
        menuExport_poses->setObjectName(QString::fromUtf8("menuExport_poses"));
        menuExport_GPS = new QMenu(menuFile);
        menuExport_GPS->setObjectName(QString::fromUtf8("menuExport_GPS"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuView = new QMenu(menubar);
        menuView->setObjectName(QString::fromUtf8("menuView"));
        DatabaseViewer->setMenuBar(menubar);
        dockWidget_constraints = new QDockWidget(DatabaseViewer);
        dockWidget_constraints->setObjectName(QString::fromUtf8("dockWidget_constraints"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        verticalLayout_8 = new QVBoxLayout(dockWidgetContents);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        layout_constraintsViewer = new QVBoxLayout();
        layout_constraintsViewer->setSpacing(0);
        layout_constraintsViewer->setObjectName(QString::fromUtf8("layout_constraintsViewer"));

        verticalLayout_8->addLayout(layout_constraintsViewer);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        checkBox_show3DWords = new QCheckBox(dockWidgetContents);
        checkBox_show3DWords->setObjectName(QString::fromUtf8("checkBox_show3DWords"));

        horizontalLayout_10->addWidget(checkBox_show3DWords);

        checkBox_show3Dclouds = new QCheckBox(dockWidgetContents);
        checkBox_show3Dclouds->setObjectName(QString::fromUtf8("checkBox_show3Dclouds"));
        checkBox_show3Dclouds->setChecked(true);

        horizontalLayout_10->addWidget(checkBox_show3Dclouds);

        checkBox_show2DScans = new QCheckBox(dockWidgetContents);
        checkBox_show2DScans->setObjectName(QString::fromUtf8("checkBox_show2DScans"));
        checkBox_show2DScans->setChecked(true);

        horizontalLayout_10->addWidget(checkBox_show2DScans);

        checkBox_odomFrame = new QCheckBox(dockWidgetContents);
        checkBox_odomFrame->setObjectName(QString::fromUtf8("checkBox_odomFrame"));
        checkBox_odomFrame->setChecked(true);

        horizontalLayout_10->addWidget(checkBox_odomFrame);

        horizontalSpacer_3 = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_10->addItem(horizontalSpacer_3);


        verticalLayout_8->addLayout(horizontalLayout_10);

        gridLayout_6 = new QGridLayout();
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_variance = new QLabel(dockWidgetContents);
        label_variance->setObjectName(QString::fromUtf8("label_variance"));
        label_variance->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_13->addWidget(label_variance);

        lineEdit_covariance = new QLineEdit(dockWidgetContents);
        lineEdit_covariance->setObjectName(QString::fromUtf8("lineEdit_covariance"));
        lineEdit_covariance->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEdit_covariance);


        gridLayout_6->addLayout(horizontalLayout_13, 5, 1, 1, 1);

        label = new QLabel(dockWidgetContents);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_6->addWidget(label, 0, 0, 1, 1);

        horizontalSlider_neighbors = new QSlider(dockWidgetContents);
        horizontalSlider_neighbors->setObjectName(QString::fromUtf8("horizontalSlider_neighbors"));
        horizontalSlider_neighbors->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_neighbors->setOrientation(Qt::Horizontal);
        horizontalSlider_neighbors->setTickPosition(QSlider::TicksAbove);

        gridLayout_6->addWidget(horizontalSlider_neighbors, 0, 1, 1, 1);

        label_6 = new QLabel(dockWidgetContents);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_6->addWidget(label_6, 1, 0, 1, 1);

        horizontalSlider_loops = new QSlider(dockWidgetContents);
        horizontalSlider_loops->setObjectName(QString::fromUtf8("horizontalSlider_loops"));
        horizontalSlider_loops->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_loops->setOrientation(Qt::Horizontal);
        horizontalSlider_loops->setTickPosition(QSlider::TicksAbove);

        gridLayout_6->addWidget(horizontalSlider_loops, 1, 1, 1, 1);

        label_33 = new QLabel(dockWidgetContents);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        gridLayout_6->addWidget(label_33, 2, 0, 1, 1);

        checkBox_showOptimized = new QCheckBox(dockWidgetContents);
        checkBox_showOptimized->setObjectName(QString::fromUtf8("checkBox_showOptimized"));

        gridLayout_6->addWidget(checkBox_showOptimized, 7, 0, 1, 1);

        label_constraint_opt = new QLabel(dockWidgetContents);
        label_constraint_opt->setObjectName(QString::fromUtf8("label_constraint_opt"));
        label_constraint_opt->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_6->addWidget(label_constraint_opt, 7, 1, 1, 1);

        label_18 = new QLabel(dockWidgetContents);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        gridLayout_6->addWidget(label_18, 5, 0, 1, 1);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_type = new QLabel(dockWidgetContents);
        label_type->setObjectName(QString::fromUtf8("label_type"));
        label_type->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_14->addWidget(label_type);

        label_type_name = new QLabel(dockWidgetContents);
        label_type_name->setObjectName(QString::fromUtf8("label_type_name"));
        label_type_name->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_14->addWidget(label_type_name);

        horizontalLayout_14->setStretch(1, 1);

        gridLayout_6->addLayout(horizontalLayout_14, 2, 1, 1, 1);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_constraint = new QLabel(dockWidgetContents);
        label_constraint->setObjectName(QString::fromUtf8("label_constraint"));
        label_constraint->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        horizontalLayout_16->addWidget(label_constraint);

        toolButton_constraint = new QToolButton(dockWidgetContents);
        toolButton_constraint->setObjectName(QString::fromUtf8("toolButton_constraint"));

        horizontalLayout_16->addWidget(toolButton_constraint);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_16->addItem(horizontalSpacer_6);


        gridLayout_6->addLayout(horizontalLayout_16, 3, 1, 1, 1);

        label_16 = new QLabel(dockWidgetContents);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_6->addWidget(label_16, 3, 0, 1, 1);


        verticalLayout_8->addLayout(gridLayout_6);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButton_refine = new QPushButton(dockWidgetContents);
        pushButton_refine->setObjectName(QString::fromUtf8("pushButton_refine"));

        horizontalLayout_5->addWidget(pushButton_refine);

        pushButton_reset = new QPushButton(dockWidgetContents);
        pushButton_reset->setObjectName(QString::fromUtf8("pushButton_reset"));

        horizontalLayout_5->addWidget(pushButton_reset);

        pushButton_add = new QPushButton(dockWidgetContents);
        pushButton_add->setObjectName(QString::fromUtf8("pushButton_add"));

        horizontalLayout_5->addWidget(pushButton_add);

        checkBox_enableForAll = new QCheckBox(dockWidgetContents);
        checkBox_enableForAll->setObjectName(QString::fromUtf8("checkBox_enableForAll"));

        horizontalLayout_5->addWidget(checkBox_enableForAll);

        pushButton_reject = new QPushButton(dockWidgetContents);
        pushButton_reject->setObjectName(QString::fromUtf8("pushButton_reject"));

        horizontalLayout_5->addWidget(pushButton_reject);

        horizontalSpacer = new QSpacerItem(0, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer);


        verticalLayout_8->addLayout(horizontalLayout_5);

        verticalLayout_8->setStretch(0, 1);
        dockWidget_constraints->setWidget(dockWidgetContents);
        DatabaseViewer->addDockWidget(Qt::RightDockWidgetArea, dockWidget_constraints);
        dockWidget_graphView = new QDockWidget(DatabaseViewer);
        dockWidget_graphView->setObjectName(QString::fromUtf8("dockWidget_graphView"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_9 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        graphViewer = new rtabmap::GraphViewer(dockWidgetContents_2);
        graphViewer->setObjectName(QString::fromUtf8("graphViewer"));

        verticalLayout_9->addWidget(graphViewer);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_rotation = new QLabel(dockWidgetContents_2);
        label_rotation->setObjectName(QString::fromUtf8("label_rotation"));

        horizontalLayout_15->addWidget(label_rotation);

        horizontalSlider_rotation = new QSlider(dockWidgetContents_2);
        horizontalSlider_rotation->setObjectName(QString::fromUtf8("horizontalSlider_rotation"));
        horizontalSlider_rotation->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_rotation->setMinimum(-1799);
        horizontalSlider_rotation->setMaximum(1800);
        horizontalSlider_rotation->setSliderPosition(0);
        horizontalSlider_rotation->setOrientation(Qt::Horizontal);
        horizontalSlider_rotation->setTickPosition(QSlider::TicksAbove);
        horizontalSlider_rotation->setTickInterval(100);

        horizontalLayout_15->addWidget(horizontalSlider_rotation);

        pushButton_applyRotation = new QPushButton(dockWidgetContents_2);
        pushButton_applyRotation->setObjectName(QString::fromUtf8("pushButton_applyRotation"));

        horizontalLayout_15->addWidget(pushButton_applyRotation);


        verticalLayout_9->addLayout(horizontalLayout_15);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_iterations = new QLabel(dockWidgetContents_2);
        label_iterations->setObjectName(QString::fromUtf8("label_iterations"));

        horizontalLayout_4->addWidget(label_iterations);

        horizontalSlider_iterations = new QSlider(dockWidgetContents_2);
        horizontalSlider_iterations->setObjectName(QString::fromUtf8("horizontalSlider_iterations"));
        horizontalSlider_iterations->setFocusPolicy(Qt::ClickFocus);
        horizontalSlider_iterations->setOrientation(Qt::Horizontal);
        horizontalSlider_iterations->setTickPosition(QSlider::TicksAbove);

        horizontalLayout_4->addWidget(horizontalSlider_iterations);

        comboBox_optimizationFlavor = new QComboBox(dockWidgetContents_2);
        comboBox_optimizationFlavor->addItem(QString());
        comboBox_optimizationFlavor->addItem(QString());
        comboBox_optimizationFlavor->addItem(QString());
        comboBox_optimizationFlavor->setObjectName(QString::fromUtf8("comboBox_optimizationFlavor"));
        comboBox_optimizationFlavor->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        horizontalLayout_4->addWidget(comboBox_optimizationFlavor);


        verticalLayout_9->addLayout(horizontalLayout_4);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_alignPosesWithGroundTruth = new QLabel(dockWidgetContents_2);
        label_alignPosesWithGroundTruth->setObjectName(QString::fromUtf8("label_alignPosesWithGroundTruth"));
        label_alignPosesWithGroundTruth->setWordWrap(true);

        gridLayout_5->addWidget(label_alignPosesWithGroundTruth, 2, 1, 1, 1);

        checkBox_ignoreIntermediateNodes = new QCheckBox(dockWidgetContents_2);
        checkBox_ignoreIntermediateNodes->setObjectName(QString::fromUtf8("checkBox_ignoreIntermediateNodes"));
        checkBox_ignoreIntermediateNodes->setChecked(false);

        gridLayout_5->addWidget(checkBox_ignoreIntermediateNodes, 4, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_optimizeFrom = new QLabel(dockWidgetContents_2);
        label_optimizeFrom->setObjectName(QString::fromUtf8("label_optimizeFrom"));

        horizontalLayout_7->addWidget(label_optimizeFrom);

        checkBox_spanAllMaps = new QCheckBox(dockWidgetContents_2);
        checkBox_spanAllMaps->setObjectName(QString::fromUtf8("checkBox_spanAllMaps"));
        checkBox_spanAllMaps->setChecked(true);

        horizontalLayout_7->addWidget(checkBox_spanAllMaps);

        checkBox_wmState = new QCheckBox(dockWidgetContents_2);
        checkBox_wmState->setObjectName(QString::fromUtf8("checkBox_wmState"));

        horizontalLayout_7->addWidget(checkBox_wmState);

        horizontalLayout_7->setStretch(2, 1);

        gridLayout_5->addLayout(horizontalLayout_7, 0, 1, 1, 1);

        label_45 = new QLabel(dockWidgetContents_2);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        gridLayout_5->addWidget(label_45, 7, 1, 1, 1);

        label_rmse_title = new QLabel(dockWidgetContents_2);
        label_rmse_title->setObjectName(QString::fromUtf8("label_rmse_title"));

        gridLayout_5->addWidget(label_rmse_title, 8, 1, 1, 1);

        checkBox_alignScansCloudsWithGroundTruth = new QCheckBox(dockWidgetContents_2);
        checkBox_alignScansCloudsWithGroundTruth->setObjectName(QString::fromUtf8("checkBox_alignScansCloudsWithGroundTruth"));
        checkBox_alignScansCloudsWithGroundTruth->setChecked(true);

        gridLayout_5->addWidget(checkBox_alignScansCloudsWithGroundTruth, 3, 0, 1, 1);

        label_poses = new QLabel(dockWidgetContents_2);
        label_poses->setObjectName(QString::fromUtf8("label_poses"));
        label_poses->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_poses, 9, 0, 1, 1);

        label_timeOptimization = new QLabel(dockWidgetContents_2);
        label_timeOptimization->setObjectName(QString::fromUtf8("label_timeOptimization"));
        label_timeOptimization->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_timeOptimization, 6, 0, 1, 1);

        label_alignScansCloudsWithGroundTruth = new QLabel(dockWidgetContents_2);
        label_alignScansCloudsWithGroundTruth->setObjectName(QString::fromUtf8("label_alignScansCloudsWithGroundTruth"));
        label_alignScansCloudsWithGroundTruth->setWordWrap(true);

        gridLayout_5->addWidget(label_alignScansCloudsWithGroundTruth, 3, 1, 1, 1);

        label_rmse = new QLabel(dockWidgetContents_2);
        label_rmse->setObjectName(QString::fromUtf8("label_rmse"));
        label_rmse->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_rmse, 8, 0, 1, 1);

        label_timeGrid = new QLabel(dockWidgetContents_2);
        label_timeGrid->setObjectName(QString::fromUtf8("label_timeGrid"));
        label_timeGrid->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_timeGrid, 7, 0, 1, 1);

        label_41 = new QLabel(dockWidgetContents_2);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        gridLayout_5->addWidget(label_41, 10, 1, 1, 1);

        label_10 = new QLabel(dockWidgetContents_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_5->addWidget(label_10, 5, 1, 1, 1);

        label_52 = new QLabel(dockWidgetContents_2);
        label_52->setObjectName(QString::fromUtf8("label_52"));

        gridLayout_5->addWidget(label_52, 9, 1, 1, 1);

        label_pathLength = new QLabel(dockWidgetContents_2);
        label_pathLength->setObjectName(QString::fromUtf8("label_pathLength"));
        label_pathLength->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_pathLength, 5, 0, 1, 1);

        spinBox_optimizationsFrom = new QSpinBox(dockWidgetContents_2);
        spinBox_optimizationsFrom->setObjectName(QString::fromUtf8("spinBox_optimizationsFrom"));

        gridLayout_5->addWidget(spinBox_optimizationsFrom, 0, 0, 1, 1);

        label_loopClosures = new QLabel(dockWidgetContents_2);
        label_loopClosures->setObjectName(QString::fromUtf8("label_loopClosures"));
        label_loopClosures->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        gridLayout_5->addWidget(label_loopClosures, 10, 0, 1, 1);

        label_ignoreINtermediateNdoes = new QLabel(dockWidgetContents_2);
        label_ignoreINtermediateNdoes->setObjectName(QString::fromUtf8("label_ignoreINtermediateNdoes"));
        label_ignoreINtermediateNdoes->setWordWrap(true);

        gridLayout_5->addWidget(label_ignoreINtermediateNdoes, 4, 1, 1, 1);

        label_39 = new QLabel(dockWidgetContents_2);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        gridLayout_5->addWidget(label_39, 6, 1, 1, 1);

        checkBox_alignPosesWithGroundTruth = new QCheckBox(dockWidgetContents_2);
        checkBox_alignPosesWithGroundTruth->setObjectName(QString::fromUtf8("checkBox_alignPosesWithGroundTruth"));
        checkBox_alignPosesWithGroundTruth->setChecked(true);

        gridLayout_5->addWidget(checkBox_alignPosesWithGroundTruth, 2, 0, 1, 1);

        label_alignPosesWithGPS = new QLabel(dockWidgetContents_2);
        label_alignPosesWithGPS->setObjectName(QString::fromUtf8("label_alignPosesWithGPS"));
        label_alignPosesWithGPS->setWordWrap(true);

        gridLayout_5->addWidget(label_alignPosesWithGPS, 1, 1, 1, 1);

        checkBox_alignPosesWithGPS = new QCheckBox(dockWidgetContents_2);
        checkBox_alignPosesWithGPS->setObjectName(QString::fromUtf8("checkBox_alignPosesWithGPS"));
        checkBox_alignPosesWithGPS->setChecked(true);

        gridLayout_5->addWidget(checkBox_alignPosesWithGPS, 1, 0, 1, 1);

        gridLayout_5->setColumnStretch(1, 1);

        verticalLayout_9->addLayout(gridLayout_5);

        dockWidget_graphView->setWidget(dockWidgetContents_2);
        DatabaseViewer->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_graphView);
        dockWidget_guiparameters = new QDockWidget(DatabaseViewer);
        dockWidget_guiparameters->setObjectName(QString::fromUtf8("dockWidget_guiparameters"));
        dockWidget_guiparameters->setFloating(false);
        dockWidget_guiparameters->setAllowedAreas(Qt::AllDockWidgetAreas);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout_10 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        comboBox_logger_level = new QComboBox(dockWidgetContents_3);
        comboBox_logger_level->addItem(QString());
        comboBox_logger_level->addItem(QString());
        comboBox_logger_level->addItem(QString());
        comboBox_logger_level->addItem(QString());
        comboBox_logger_level->setObjectName(QString::fromUtf8("comboBox_logger_level"));

        gridLayout_4->addWidget(comboBox_logger_level, 0, 0, 1, 1);

        label_logger_level = new QLabel(dockWidgetContents_3);
        label_logger_level->setObjectName(QString::fromUtf8("label_logger_level"));
        label_logger_level->setWordWrap(true);

        gridLayout_4->addWidget(label_logger_level, 0, 1, 1, 1);

        gridLayout_4->setColumnStretch(1, 1);

        verticalLayout_10->addLayout(gridLayout_4);

        toolBox = new QToolBox(dockWidgetContents_3);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 318, 188));
        gridLayout_7 = new QGridLayout(page_3);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        checkBox_ignoreGlobalLoop = new QCheckBox(page_3);
        checkBox_ignoreGlobalLoop->setObjectName(QString::fromUtf8("checkBox_ignoreGlobalLoop"));
        checkBox_ignoreGlobalLoop->setChecked(false);

        gridLayout_7->addWidget(checkBox_ignoreGlobalLoop, 2, 0, 1, 1);

        label_49 = new QLabel(page_3);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        gridLayout_7->addWidget(label_49, 4, 2, 1, 1);

        checkBox_ignoreLocalLoopSpace = new QCheckBox(page_3);
        checkBox_ignoreLocalLoopSpace->setObjectName(QString::fromUtf8("checkBox_ignoreLocalLoopSpace"));
        checkBox_ignoreLocalLoopSpace->setChecked(false);

        gridLayout_7->addWidget(checkBox_ignoreLocalLoopSpace, 3, 0, 1, 1);

        label_48 = new QLabel(page_3);
        label_48->setObjectName(QString::fromUtf8("label_48"));

        gridLayout_7->addWidget(label_48, 2, 2, 1, 1);

        label_35 = new QLabel(page_3);
        label_35->setObjectName(QString::fromUtf8("label_35"));

        gridLayout_7->addWidget(label_35, 1, 2, 1, 1);

        checkBox_ignorePoseCorrection = new QCheckBox(page_3);
        checkBox_ignorePoseCorrection->setObjectName(QString::fromUtf8("checkBox_ignorePoseCorrection"));
        checkBox_ignorePoseCorrection->setChecked(false);

        gridLayout_7->addWidget(checkBox_ignorePoseCorrection, 1, 0, 1, 1);

        checkBox_ignoreLocalLoopTime = new QCheckBox(page_3);
        checkBox_ignoreLocalLoopTime->setObjectName(QString::fromUtf8("checkBox_ignoreLocalLoopTime"));
        checkBox_ignoreLocalLoopTime->setChecked(false);

        gridLayout_7->addWidget(checkBox_ignoreLocalLoopTime, 4, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(0, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_7->addItem(verticalSpacer_3, 7, 0, 1, 1);

        checkBox_ignoreUserLoop = new QCheckBox(page_3);
        checkBox_ignoreUserLoop->setObjectName(QString::fromUtf8("checkBox_ignoreUserLoop"));
        checkBox_ignoreUserLoop->setChecked(false);

        gridLayout_7->addWidget(checkBox_ignoreUserLoop, 5, 0, 1, 1);

        label_50 = new QLabel(page_3);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        gridLayout_7->addWidget(label_50, 5, 2, 1, 1);

        label_47 = new QLabel(page_3);
        label_47->setObjectName(QString::fromUtf8("label_47"));

        gridLayout_7->addWidget(label_47, 3, 2, 1, 1);

        label_scale_title = new QLabel(page_3);
        label_scale_title->setObjectName(QString::fromUtf8("label_scale_title"));

        gridLayout_7->addWidget(label_scale_title, 0, 2, 1, 1);

        doubleSpinBox_optimizationScale = new QDoubleSpinBox(page_3);
        doubleSpinBox_optimizationScale->setObjectName(QString::fromUtf8("doubleSpinBox_optimizationScale"));
        doubleSpinBox_optimizationScale->setDecimals(3);
        doubleSpinBox_optimizationScale->setMinimum(0.100000000000000);
        doubleSpinBox_optimizationScale->setMaximum(9.900000000000000);
        doubleSpinBox_optimizationScale->setSingleStep(0.001000000000000);
        doubleSpinBox_optimizationScale->setValue(1.000000000000000);

        gridLayout_7->addWidget(doubleSpinBox_optimizationScale, 0, 0, 1, 1);

        label_58 = new QLabel(page_3);
        label_58->setObjectName(QString::fromUtf8("label_58"));

        gridLayout_7->addWidget(label_58, 6, 2, 1, 1);

        checkBox_ignoreLandmarks = new QCheckBox(page_3);
        checkBox_ignoreLandmarks->setObjectName(QString::fromUtf8("checkBox_ignoreLandmarks"));
        checkBox_ignoreLandmarks->setChecked(false);

        gridLayout_7->addWidget(checkBox_ignoreLandmarks, 6, 0, 1, 1);

        toolBox->addItem(page_3, QString::fromUtf8("Graph optimization"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 518, 1007));
        verticalLayout_16 = new QVBoxLayout(page_4);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        gridLayout_9 = new QGridLayout();
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_53 = new QLabel(page_4);
        label_53->setObjectName(QString::fromUtf8("label_53"));

        gridLayout_9->addWidget(label_53, 6, 1, 1, 1);

        label_57 = new QLabel(page_4);
        label_57->setObjectName(QString::fromUtf8("label_57"));
        label_57->setWordWrap(true);

        gridLayout_9->addWidget(label_57, 15, 1, 1, 1);

        spinBox_cropRadius = new QSpinBox(page_4);
        spinBox_cropRadius->setObjectName(QString::fromUtf8("spinBox_cropRadius"));
        spinBox_cropRadius->setValue(1);

        gridLayout_9->addWidget(spinBox_cropRadius, 15, 0, 1, 1);

        checkBox_grid_showProbMap = new QCheckBox(page_4);
        checkBox_grid_showProbMap->setObjectName(QString::fromUtf8("checkBox_grid_showProbMap"));
        checkBox_grid_showProbMap->setChecked(false);

        gridLayout_9->addWidget(checkBox_grid_showProbMap, 16, 0, 1, 1);

        spinBox_decimation = new QSpinBox(page_4);
        spinBox_decimation->setObjectName(QString::fromUtf8("spinBox_decimation"));
        spinBox_decimation->setMinimum(1);
        spinBox_decimation->setMaximum(16);
        spinBox_decimation->setValue(16);

        gridLayout_9->addWidget(spinBox_decimation, 13, 0, 1, 1);

        spinBox_grid_depth = new QSpinBox(page_4);
        spinBox_grid_depth->setObjectName(QString::fromUtf8("spinBox_grid_depth"));
        spinBox_grid_depth->setMinimum(0);
        spinBox_grid_depth->setMaximum(16);
        spinBox_grid_depth->setValue(16);

        gridLayout_9->addWidget(spinBox_grid_depth, 10, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        toolButton_groundColor = new QToolButton(page_4);
        toolButton_groundColor->setObjectName(QString::fromUtf8("toolButton_groundColor"));

        horizontalLayout_9->addWidget(toolButton_groundColor);

        lineEdit_groundColor = new QLineEdit(page_4);
        lineEdit_groundColor->setObjectName(QString::fromUtf8("lineEdit_groundColor"));
        lineEdit_groundColor->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEdit_groundColor);


        gridLayout_9->addLayout(horizontalLayout_9, 3, 0, 1, 1);

        label_octomap_cubes = new QLabel(page_4);
        label_octomap_cubes->setObjectName(QString::fromUtf8("label_octomap_cubes"));
        label_octomap_cubes->setWordWrap(true);

        gridLayout_9->addWidget(label_octomap_cubes, 9, 1, 1, 1);

        checkBox_grid_frontiers = new QCheckBox(page_4);
        checkBox_grid_frontiers->setObjectName(QString::fromUtf8("checkBox_grid_frontiers"));
        checkBox_grid_frontiers->setChecked(false);

        gridLayout_9->addWidget(checkBox_grid_frontiers, 1, 0, 1, 1);

        label_54 = new QLabel(page_4);
        label_54->setObjectName(QString::fromUtf8("label_54"));
        label_54->setWordWrap(true);

        gridLayout_9->addWidget(label_54, 14, 1, 1, 1);

        label_octomap_depth = new QLabel(page_4);
        label_octomap_depth->setObjectName(QString::fromUtf8("label_octomap_depth"));
        label_octomap_depth->setWordWrap(true);

        gridLayout_9->addWidget(label_octomap_depth, 10, 1, 1, 1);

        checkBox_grid_regenerateFromSavedGrid = new QCheckBox(page_4);
        checkBox_grid_regenerateFromSavedGrid->setObjectName(QString::fromUtf8("checkBox_grid_regenerateFromSavedGrid"));
        checkBox_grid_regenerateFromSavedGrid->setChecked(false);

        gridLayout_9->addWidget(checkBox_grid_regenerateFromSavedGrid, 11, 0, 1, 1);

        checkBox_octomap = new QCheckBox(page_4);
        checkBox_octomap->setObjectName(QString::fromUtf8("checkBox_octomap"));

        gridLayout_9->addWidget(checkBox_octomap, 6, 0, 1, 1);

        label_octomap_empty_2 = new QLabel(page_4);
        label_octomap_empty_2->setObjectName(QString::fromUtf8("label_octomap_empty_2"));
        label_octomap_empty_2->setWordWrap(true);

        gridLayout_9->addWidget(label_octomap_empty_2, 2, 1, 1, 1);

        label_51 = new QLabel(page_4);
        label_51->setObjectName(QString::fromUtf8("label_51"));
        label_51->setWordWrap(true);

        gridLayout_9->addWidget(label_51, 12, 1, 1, 1);

        checkBox_showDisparityInsteadOfRight = new QCheckBox(page_4);
        checkBox_showDisparityInsteadOfRight->setObjectName(QString::fromUtf8("checkBox_showDisparityInsteadOfRight"));
        checkBox_showDisparityInsteadOfRight->setChecked(false);

        gridLayout_9->addWidget(checkBox_showDisparityInsteadOfRight, 18, 0, 1, 1);

        label_59 = new QLabel(page_4);
        label_59->setObjectName(QString::fromUtf8("label_59"));
        label_59->setWordWrap(true);

        gridLayout_9->addWidget(label_59, 16, 1, 1, 1);

        label_logger_level_2 = new QLabel(page_4);
        label_logger_level_2->setObjectName(QString::fromUtf8("label_logger_level_2"));
        label_logger_level_2->setWordWrap(true);

        gridLayout_9->addWidget(label_logger_level_2, 18, 1, 1, 1);

        label_octomap_empty_3 = new QLabel(page_4);
        label_octomap_empty_3->setObjectName(QString::fromUtf8("label_octomap_empty_3"));
        label_octomap_empty_3->setWordWrap(true);

        gridLayout_9->addWidget(label_octomap_empty_3, 3, 1, 1, 1);

        doubleSpinBox_gainCompensationRadius = new QDoubleSpinBox(page_4);
        doubleSpinBox_gainCompensationRadius->setObjectName(QString::fromUtf8("doubleSpinBox_gainCompensationRadius"));
        doubleSpinBox_gainCompensationRadius->setDecimals(2);
        doubleSpinBox_gainCompensationRadius->setMinimum(0.000000000000000);
        doubleSpinBox_gainCompensationRadius->setMaximum(10.000000000000000);
        doubleSpinBox_gainCompensationRadius->setSingleStep(0.010000000000000);
        doubleSpinBox_gainCompensationRadius->setValue(0.000000000000000);

        gridLayout_9->addWidget(doubleSpinBox_gainCompensationRadius, 12, 0, 1, 1);

        label_octomap_empty_4 = new QLabel(page_4);
        label_octomap_empty_4->setObjectName(QString::fromUtf8("label_octomap_empty_4"));
        label_octomap_empty_4->setWordWrap(true);

        gridLayout_9->addWidget(label_octomap_empty_4, 4, 1, 1, 1);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        toolButton_emptyColor = new QToolButton(page_4);
        toolButton_emptyColor->setObjectName(QString::fromUtf8("toolButton_emptyColor"));

        horizontalLayout_12->addWidget(toolButton_emptyColor);

        lineEdit_emptyColor = new QLineEdit(page_4);
        lineEdit_emptyColor->setObjectName(QString::fromUtf8("lineEdit_emptyColor"));
        lineEdit_emptyColor->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEdit_emptyColor);


        gridLayout_9->addLayout(horizontalLayout_12, 4, 0, 1, 1);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        toolButton_obstacleColor = new QToolButton(page_4);
        toolButton_obstacleColor->setObjectName(QString::fromUtf8("toolButton_obstacleColor"));

        horizontalLayout_11->addWidget(toolButton_obstacleColor);

        lineEdit_obstacleColor = new QLineEdit(page_4);
        lineEdit_obstacleColor->setObjectName(QString::fromUtf8("lineEdit_obstacleColor"));
        lineEdit_obstacleColor->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEdit_obstacleColor);


        gridLayout_9->addLayout(horizontalLayout_11, 2, 0, 1, 1);

        checkBox_cameraProjection = new QCheckBox(page_4);
        checkBox_cameraProjection->setObjectName(QString::fromUtf8("checkBox_cameraProjection"));
        checkBox_cameraProjection->setChecked(false);

        gridLayout_9->addWidget(checkBox_cameraProjection, 17, 0, 1, 1);

        checkBox_grid_empty = new QCheckBox(page_4);
        checkBox_grid_empty->setObjectName(QString::fromUtf8("checkBox_grid_empty"));
        checkBox_grid_empty->setChecked(true);

        gridLayout_9->addWidget(checkBox_grid_empty, 0, 0, 1, 1);

        label_55 = new QLabel(page_4);
        label_55->setObjectName(QString::fromUtf8("label_55"));
        label_55->setWordWrap(true);

        gridLayout_9->addWidget(label_55, 11, 1, 1, 1);

        label_octomap_frontiers = new QLabel(page_4);
        label_octomap_frontiers->setObjectName(QString::fromUtf8("label_octomap_frontiers"));
        label_octomap_frontiers->setWordWrap(true);

        gridLayout_9->addWidget(label_octomap_frontiers, 1, 1, 1, 1);

        label_60 = new QLabel(page_4);
        label_60->setObjectName(QString::fromUtf8("label_60"));
        label_60->setWordWrap(true);

        gridLayout_9->addWidget(label_60, 17, 1, 1, 1);

        label_octomap_empty = new QLabel(page_4);
        label_octomap_empty->setObjectName(QString::fromUtf8("label_octomap_empty"));
        label_octomap_empty->setWordWrap(true);

        gridLayout_9->addWidget(label_octomap_empty, 0, 1, 1, 1);

        comboBox_octomap_rendering_type = new QComboBox(page_4);
        comboBox_octomap_rendering_type->addItem(QString());
        comboBox_octomap_rendering_type->addItem(QString());
        comboBox_octomap_rendering_type->addItem(QString());
        comboBox_octomap_rendering_type->setObjectName(QString::fromUtf8("comboBox_octomap_rendering_type"));

        gridLayout_9->addWidget(comboBox_octomap_rendering_type, 9, 0, 1, 1);

        label_56 = new QLabel(page_4);
        label_56->setObjectName(QString::fromUtf8("label_56"));
        label_56->setWordWrap(true);

        gridLayout_9->addWidget(label_56, 13, 1, 1, 1);

        doubleSpinBox_voxelSize = new QDoubleSpinBox(page_4);
        doubleSpinBox_voxelSize->setObjectName(QString::fromUtf8("doubleSpinBox_voxelSize"));
        doubleSpinBox_voxelSize->setDecimals(3);
        doubleSpinBox_voxelSize->setMinimum(0.000000000000000);
        doubleSpinBox_voxelSize->setMaximum(99.000000000000000);
        doubleSpinBox_voxelSize->setSingleStep(0.010000000000000);
        doubleSpinBox_voxelSize->setValue(0.000000000000000);

        gridLayout_9->addWidget(doubleSpinBox_voxelSize, 14, 0, 1, 1);

        label_octomap_frontiers_3 = new QLabel(page_4);
        label_octomap_frontiers_3->setObjectName(QString::fromUtf8("label_octomap_frontiers_3"));
        label_octomap_frontiers_3->setWordWrap(true);

        gridLayout_9->addWidget(label_octomap_frontiers_3, 5, 1, 1, 1);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        toolButton_frontierColor = new QToolButton(page_4);
        toolButton_frontierColor->setObjectName(QString::fromUtf8("toolButton_frontierColor"));

        horizontalLayout_17->addWidget(toolButton_frontierColor);

        lineEdit_frontierColor = new QLineEdit(page_4);
        lineEdit_frontierColor->setObjectName(QString::fromUtf8("lineEdit_frontierColor"));
        lineEdit_frontierColor->setReadOnly(true);

        horizontalLayout_17->addWidget(lineEdit_frontierColor);


        gridLayout_9->addLayout(horizontalLayout_17, 5, 0, 1, 1);


        verticalLayout_16->addLayout(gridLayout_9);

        groupBox_posefiltering = new QGroupBox(page_4);
        groupBox_posefiltering->setObjectName(QString::fromUtf8("groupBox_posefiltering"));
        groupBox_posefiltering->setCheckable(true);
        groupBox_posefiltering->setChecked(false);
        gridLayout_12 = new QGridLayout(groupBox_posefiltering);
        gridLayout_12->setObjectName(QString::fromUtf8("gridLayout_12"));
        doubleSpinBox_posefilteringAngle = new QDoubleSpinBox(groupBox_posefiltering);
        doubleSpinBox_posefilteringAngle->setObjectName(QString::fromUtf8("doubleSpinBox_posefilteringAngle"));
        doubleSpinBox_posefilteringAngle->setDecimals(0);
        doubleSpinBox_posefilteringAngle->setMaximum(180.000000000000000);
        doubleSpinBox_posefilteringAngle->setValue(30.000000000000000);

        gridLayout_12->addWidget(doubleSpinBox_posefilteringAngle, 4, 0, 1, 1);

        doubleSpinBox_posefilteringRadius = new QDoubleSpinBox(groupBox_posefiltering);
        doubleSpinBox_posefilteringRadius->setObjectName(QString::fromUtf8("doubleSpinBox_posefilteringRadius"));
        doubleSpinBox_posefilteringRadius->setMinimum(0.010000000000000);
        doubleSpinBox_posefilteringRadius->setValue(0.100000000000000);

        gridLayout_12->addWidget(doubleSpinBox_posefilteringRadius, 3, 0, 1, 1);

        label_42 = new QLabel(groupBox_posefiltering);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        gridLayout_12->addWidget(label_42, 3, 1, 1, 1);

        label_43 = new QLabel(groupBox_posefiltering);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        gridLayout_12->addWidget(label_43, 4, 1, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_12->addItem(verticalSpacer_4, 5, 0, 1, 1);

        gridLayout_12->setColumnStretch(1, 1);

        verticalLayout_16->addWidget(groupBox_posefiltering);

        groupBox = new QGroupBox(page_4);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_13 = new QGridLayout(groupBox);
        gridLayout_13->setObjectName(QString::fromUtf8("gridLayout_13"));
        label_14 = new QLabel(groupBox);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_13->addWidget(label_14, 3, 1, 1, 1);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_13->addWidget(label_12, 0, 1, 1, 1);

        spinBox_mesh_angleTolerance = new QSpinBox(groupBox);
        spinBox_mesh_angleTolerance->setObjectName(QString::fromUtf8("spinBox_mesh_angleTolerance"));
        spinBox_mesh_angleTolerance->setMinimum(1);
        spinBox_mesh_angleTolerance->setMaximum(180);
        spinBox_mesh_angleTolerance->setValue(15);

        gridLayout_13->addWidget(spinBox_mesh_angleTolerance, 0, 0, 1, 1);

        spinBox_mesh_triangleSize = new QSpinBox(groupBox);
        spinBox_mesh_triangleSize->setObjectName(QString::fromUtf8("spinBox_mesh_triangleSize"));
        spinBox_mesh_triangleSize->setMinimum(2);
        spinBox_mesh_triangleSize->setMaximum(99);

        gridLayout_13->addWidget(spinBox_mesh_triangleSize, 3, 0, 1, 1);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_13->addWidget(label_13, 2, 1, 1, 1);

        label_17 = new QLabel(groupBox);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_13->addWidget(label_17, 5, 1, 1, 1);

        spinBox_mesh_depthError = new QSpinBox(groupBox);
        spinBox_mesh_depthError->setObjectName(QString::fromUtf8("spinBox_mesh_depthError"));
        spinBox_mesh_depthError->setMinimum(1);
        spinBox_mesh_depthError->setValue(10);

        gridLayout_13->addWidget(spinBox_mesh_depthError, 5, 0, 1, 1);

        checkBox_mesh_quad = new QCheckBox(groupBox);
        checkBox_mesh_quad->setObjectName(QString::fromUtf8("checkBox_mesh_quad"));
        checkBox_mesh_quad->setChecked(true);

        gridLayout_13->addWidget(checkBox_mesh_quad, 2, 0, 1, 1);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_13->addWidget(label_15, 4, 1, 1, 1);

        spinBox_mesh_fillDepthHoles = new QSpinBox(groupBox);
        spinBox_mesh_fillDepthHoles->setObjectName(QString::fromUtf8("spinBox_mesh_fillDepthHoles"));
        spinBox_mesh_fillDepthHoles->setMinimum(0);
        spinBox_mesh_fillDepthHoles->setMaximum(99);
        spinBox_mesh_fillDepthHoles->setValue(0);

        gridLayout_13->addWidget(spinBox_mesh_fillDepthHoles, 4, 0, 1, 1);

        label_20 = new QLabel(groupBox);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout_13->addWidget(label_20, 1, 1, 1, 1);

        spinBox_mesh_minClusterSize = new QSpinBox(groupBox);
        spinBox_mesh_minClusterSize->setObjectName(QString::fromUtf8("spinBox_mesh_minClusterSize"));
        spinBox_mesh_minClusterSize->setMinimum(0);
        spinBox_mesh_minClusterSize->setMaximum(999);
        spinBox_mesh_minClusterSize->setValue(0);

        gridLayout_13->addWidget(spinBox_mesh_minClusterSize, 1, 0, 1, 1);


        verticalLayout_16->addWidget(groupBox);

        verticalSpacer_6 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_6);

        verticalSpacer_2 = new QSpacerItem(0, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_16->addItem(verticalSpacer_2);

        toolBox->addItem(page_4, QString::fromUtf8("Grid/cloud generation"));
        page_5 = new QWidget();
        page_5->setObjectName(QString::fromUtf8("page_5"));
        page_5->setGeometry(QRect(0, 0, 226, 192));
        gridLayout_10 = new QGridLayout(page_5);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_32 = new QLabel(page_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        gridLayout_10->addWidget(label_32, 4, 1, 1, 1);

        doubleSpinBox_detectMore_radius = new QDoubleSpinBox(page_5);
        doubleSpinBox_detectMore_radius->setObjectName(QString::fromUtf8("doubleSpinBox_detectMore_radius"));
        doubleSpinBox_detectMore_radius->setDecimals(2);
        doubleSpinBox_detectMore_radius->setMaximum(10.000000000000000);
        doubleSpinBox_detectMore_radius->setSingleStep(0.100000000000000);
        doubleSpinBox_detectMore_radius->setValue(1.000000000000000);

        gridLayout_10->addWidget(doubleSpinBox_detectMore_radius, 0, 0, 1, 1);

        label_29 = new QLabel(page_5);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        gridLayout_10->addWidget(label_29, 0, 1, 1, 1);

        doubleSpinBox_detectMore_angle = new QDoubleSpinBox(page_5);
        doubleSpinBox_detectMore_angle->setObjectName(QString::fromUtf8("doubleSpinBox_detectMore_angle"));
        doubleSpinBox_detectMore_angle->setDecimals(0);
        doubleSpinBox_detectMore_angle->setMaximum(180.000000000000000);
        doubleSpinBox_detectMore_angle->setSingleStep(1.000000000000000);
        doubleSpinBox_detectMore_angle->setValue(30.000000000000000);

        gridLayout_10->addWidget(doubleSpinBox_detectMore_angle, 2, 0, 1, 1);

        label_30 = new QLabel(page_5);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_10->addWidget(label_30, 2, 1, 1, 1);

        spinBox_detectMore_iterations = new QSpinBox(page_5);
        spinBox_detectMore_iterations->setObjectName(QString::fromUtf8("spinBox_detectMore_iterations"));
        spinBox_detectMore_iterations->setMinimum(1);
        spinBox_detectMore_iterations->setMaximum(100);
        spinBox_detectMore_iterations->setValue(5);

        gridLayout_10->addWidget(spinBox_detectMore_iterations, 3, 0, 1, 1);

        label_31 = new QLabel(page_5);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        gridLayout_10->addWidget(label_31, 3, 1, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_10->addItem(verticalSpacer_5, 6, 0, 1, 1);

        label_34 = new QLabel(page_5);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        gridLayout_10->addWidget(label_34, 5, 1, 1, 1);

        checkBox_detectMore_intraSession = new QCheckBox(page_5);
        checkBox_detectMore_intraSession->setObjectName(QString::fromUtf8("checkBox_detectMore_intraSession"));

        gridLayout_10->addWidget(checkBox_detectMore_intraSession, 4, 0, 1, 1);

        checkBox_detectMore_interSession = new QCheckBox(page_5);
        checkBox_detectMore_interSession->setObjectName(QString::fromUtf8("checkBox_detectMore_interSession"));

        gridLayout_10->addWidget(checkBox_detectMore_interSession, 5, 0, 1, 1);

        label_36 = new QLabel(page_5);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        gridLayout_10->addWidget(label_36, 1, 1, 1, 1);

        doubleSpinBox_detectMore_radiusMin = new QDoubleSpinBox(page_5);
        doubleSpinBox_detectMore_radiusMin->setObjectName(QString::fromUtf8("doubleSpinBox_detectMore_radiusMin"));
        doubleSpinBox_detectMore_radiusMin->setDecimals(2);
        doubleSpinBox_detectMore_radiusMin->setMaximum(10.000000000000000);
        doubleSpinBox_detectMore_radiusMin->setSingleStep(0.100000000000000);
        doubleSpinBox_detectMore_radiusMin->setValue(0.000000000000000);

        gridLayout_10->addWidget(doubleSpinBox_detectMore_radiusMin, 1, 0, 1, 1);

        gridLayout_10->setColumnStretch(1, 1);
        toolBox->addItem(page_5, QString::fromUtf8("Detect more loop closures"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 185, 485));
        gridLayout_3 = new QGridLayout(page_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        spinBox_icp_decimation = new QSpinBox(page_2);
        spinBox_icp_decimation->setObjectName(QString::fromUtf8("spinBox_icp_decimation"));
        spinBox_icp_decimation->setMinimum(-32);
        spinBox_icp_decimation->setMaximum(32);

        gridLayout_3->addWidget(spinBox_icp_decimation, 1, 0, 1, 1);

        label_9 = new QLabel(page_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setWordWrap(true);

        gridLayout_3->addWidget(label_9, 1, 2, 1, 1);

        doubleSpinBox_icp_maxDepth = new QDoubleSpinBox(page_2);
        doubleSpinBox_icp_maxDepth->setObjectName(QString::fromUtf8("doubleSpinBox_icp_maxDepth"));

        gridLayout_3->addWidget(doubleSpinBox_icp_maxDepth, 2, 0, 1, 2);

        label_11 = new QLabel(page_2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setWordWrap(true);

        gridLayout_3->addWidget(label_11, 2, 2, 1, 1);

        checkBox_icp_from_depth = new QCheckBox(page_2);
        checkBox_icp_from_depth->setObjectName(QString::fromUtf8("checkBox_icp_from_depth"));

        gridLayout_3->addWidget(checkBox_icp_from_depth, 0, 0, 1, 1);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setWordWrap(true);

        gridLayout_3->addWidget(label_7, 0, 2, 1, 1);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer, 4, 0, 1, 1);

        label_19 = new QLabel(page_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setWordWrap(true);

        gridLayout_3->addWidget(label_19, 3, 2, 1, 1);

        doubleSpinBox_icp_minDepth = new QDoubleSpinBox(page_2);
        doubleSpinBox_icp_minDepth->setObjectName(QString::fromUtf8("doubleSpinBox_icp_minDepth"));

        gridLayout_3->addWidget(doubleSpinBox_icp_minDepth, 3, 0, 1, 1);

        gridLayout_3->setColumnStretch(2, 1);
        toolBox->addItem(page_2, QString::fromUtf8("Refine"));

        verticalLayout_10->addWidget(toolBox);

        dockWidget_guiparameters->setWidget(dockWidgetContents_3);
        DatabaseViewer->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_guiparameters);
        dockWidget_stereoView = new QDockWidget(DatabaseViewer);
        dockWidget_stereoView->setObjectName(QString::fromUtf8("dockWidget_stereoView"));
        dockWidgetContents_stereo = new QWidget();
        dockWidgetContents_stereo->setObjectName(QString::fromUtf8("dockWidgetContents_stereo"));
        verticalLayout_11 = new QVBoxLayout(dockWidgetContents_stereo);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_stereo = new QHBoxLayout();
        horizontalLayout_stereo->setObjectName(QString::fromUtf8("horizontalLayout_stereo"));
        graphicsView_stereo = new rtabmap::ImageView(dockWidgetContents_stereo);
        graphicsView_stereo->setObjectName(QString::fromUtf8("graphicsView_stereo"));

        horizontalLayout_stereo->addWidget(graphicsView_stereo);

        horizontalLayout_stereo->setStretch(0, 1);

        verticalLayout_11->addLayout(horizontalLayout_stereo);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_stereo_inliers_name = new QLabel(dockWidgetContents_stereo);
        label_stereo_inliers_name->setObjectName(QString::fromUtf8("label_stereo_inliers_name"));
        label_stereo_inliers_name->setTextFormat(Qt::RichText);

        horizontalLayout_6->addWidget(label_stereo_inliers_name);

        label_stereo_inliers = new QLabel(dockWidgetContents_stereo);
        label_stereo_inliers->setObjectName(QString::fromUtf8("label_stereo_inliers"));

        horizontalLayout_6->addWidget(label_stereo_inliers);

        label_stereo_slopeOutliers_name = new QLabel(dockWidgetContents_stereo);
        label_stereo_slopeOutliers_name->setObjectName(QString::fromUtf8("label_stereo_slopeOutliers_name"));
        label_stereo_slopeOutliers_name->setTextFormat(Qt::RichText);

        horizontalLayout_6->addWidget(label_stereo_slopeOutliers_name);

        label_stereo_slopeOutliers = new QLabel(dockWidgetContents_stereo);
        label_stereo_slopeOutliers->setObjectName(QString::fromUtf8("label_stereo_slopeOutliers"));

        horizontalLayout_6->addWidget(label_stereo_slopeOutliers);

        label_stereo_disparityOutliers_name = new QLabel(dockWidgetContents_stereo);
        label_stereo_disparityOutliers_name->setObjectName(QString::fromUtf8("label_stereo_disparityOutliers_name"));
        label_stereo_disparityOutliers_name->setTextFormat(Qt::RichText);

        horizontalLayout_6->addWidget(label_stereo_disparityOutliers_name);

        label_stereo_disparityOutliers = new QLabel(dockWidgetContents_stereo);
        label_stereo_disparityOutliers->setObjectName(QString::fromUtf8("label_stereo_disparityOutliers"));

        horizontalLayout_6->addWidget(label_stereo_disparityOutliers);

        label_stereo_flowOutliers_name = new QLabel(dockWidgetContents_stereo);
        label_stereo_flowOutliers_name->setObjectName(QString::fromUtf8("label_stereo_flowOutliers_name"));
        label_stereo_flowOutliers_name->setTextFormat(Qt::RichText);

        horizontalLayout_6->addWidget(label_stereo_flowOutliers_name);

        label_stereo_flowOutliers = new QLabel(dockWidgetContents_stereo);
        label_stereo_flowOutliers->setObjectName(QString::fromUtf8("label_stereo_flowOutliers"));

        horizontalLayout_6->addWidget(label_stereo_flowOutliers);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);


        verticalLayout_11->addLayout(horizontalLayout_6);

        verticalLayout_11->setStretch(0, 1);
        dockWidget_stereoView->setWidget(dockWidgetContents_stereo);
        DatabaseViewer->addDockWidget(Qt::TopDockWidgetArea, dockWidget_stereoView);
        dockWidget_view3d = new QDockWidget(DatabaseViewer);
        dockWidget_view3d->setObjectName(QString::fromUtf8("dockWidget_view3d"));
        dockWidgetContents_3dviews = new QWidget();
        dockWidgetContents_3dviews->setObjectName(QString::fromUtf8("dockWidgetContents_3dviews"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_3dviews);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3dviews = new QHBoxLayout();
        horizontalLayout_3dviews->setSpacing(1);
        horizontalLayout_3dviews->setObjectName(QString::fromUtf8("horizontalLayout_3dviews"));

        verticalLayout_5->addLayout(horizontalLayout_3dviews);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        checkBox_showWords = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_showWords->setObjectName(QString::fromUtf8("checkBox_showWords"));
        checkBox_showWords->setChecked(false);

        horizontalLayout_3->addWidget(checkBox_showWords);

        checkBox_showCloud = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_showCloud->setObjectName(QString::fromUtf8("checkBox_showCloud"));
        checkBox_showCloud->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_showCloud);

        checkBox_showMesh = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_showMesh->setObjectName(QString::fromUtf8("checkBox_showMesh"));
        checkBox_showMesh->setChecked(false);

        horizontalLayout_3->addWidget(checkBox_showMesh);

        checkBox_showScan = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_showScan->setObjectName(QString::fromUtf8("checkBox_showScan"));
        checkBox_showScan->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_showScan);

        checkBox_showMap = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_showMap->setObjectName(QString::fromUtf8("checkBox_showMap"));
        checkBox_showMap->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_showMap);

        checkBox_showGrid = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_showGrid->setObjectName(QString::fromUtf8("checkBox_showGrid"));
        checkBox_showGrid->setChecked(false);

        horizontalLayout_3->addWidget(checkBox_showGrid);

        checkBox_showElevation = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_showElevation->setObjectName(QString::fromUtf8("checkBox_showElevation"));
        checkBox_showElevation->setChecked(false);
        checkBox_showElevation->setTristate(true);

        horizontalLayout_3->addWidget(checkBox_showElevation);

        checkBox_odomFrame_3dview = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_odomFrame_3dview->setObjectName(QString::fromUtf8("checkBox_odomFrame_3dview"));
        checkBox_odomFrame_3dview->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_odomFrame_3dview);

        checkBox_gravity_3dview = new QCheckBox(dockWidgetContents_3dviews);
        checkBox_gravity_3dview->setObjectName(QString::fromUtf8("checkBox_gravity_3dview"));
        checkBox_gravity_3dview->setChecked(true);

        horizontalLayout_3->addWidget(checkBox_gravity_3dview);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_5->addLayout(horizontalLayout_3);

        verticalLayout_5->setStretch(0, 1);
        dockWidget_view3d->setWidget(dockWidgetContents_3dviews);
        DatabaseViewer->addDockWidget(Qt::TopDockWidgetArea, dockWidget_view3d);
        dockWidget_info = new QDockWidget(DatabaseViewer);
        dockWidget_info->setObjectName(QString::fromUtf8("dockWidget_info"));
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        verticalLayout_12 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        textEdit_info = new QTextEdit(dockWidgetContents_4);
        textEdit_info->setObjectName(QString::fromUtf8("textEdit_info"));
        textEdit_info->setLineWrapMode(QTextEdit::NoWrap);
        textEdit_info->setReadOnly(true);

        verticalLayout_12->addWidget(textEdit_info);

        dockWidget_info->setWidget(dockWidgetContents_4);
        DatabaseViewer->addDockWidget(Qt::RightDockWidgetArea, dockWidget_info);
        dockWidget_coreparameters = new QDockWidget(DatabaseViewer);
        dockWidget_coreparameters->setObjectName(QString::fromUtf8("dockWidget_coreparameters"));
        dockWidgetContents_7 = new QWidget();
        dockWidgetContents_7->setObjectName(QString::fromUtf8("dockWidgetContents_7"));
        verticalLayout_13 = new QVBoxLayout(dockWidgetContents_7);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        parameters_toolbox = new rtabmap::ParametersToolBox(dockWidgetContents_7);
        parameters_toolbox->setObjectName(QString::fromUtf8("parameters_toolbox"));

        verticalLayout_13->addWidget(parameters_toolbox);

        dockWidget_coreparameters->setWidget(dockWidgetContents_7);
        DatabaseViewer->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_coreparameters);
        dockWidget_statistics = new QDockWidget(DatabaseViewer);
        dockWidget_statistics->setObjectName(QString::fromUtf8("dockWidget_statistics"));
        dockWidgetContents_5 = new QWidget();
        dockWidgetContents_5->setObjectName(QString::fromUtf8("dockWidgetContents_5"));
        verticalLayout_7 = new QVBoxLayout(dockWidgetContents_5);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        gridLayout_8 = new QGridLayout();
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        checkBox_timeStats = new QCheckBox(dockWidgetContents_5);
        checkBox_timeStats->setObjectName(QString::fromUtf8("checkBox_timeStats"));
        checkBox_timeStats->setChecked(true);

        gridLayout_8->addWidget(checkBox_timeStats, 0, 0, 1, 1);

        label_logger_level_3 = new QLabel(dockWidgetContents_5);
        label_logger_level_3->setObjectName(QString::fromUtf8("label_logger_level_3"));
        label_logger_level_3->setWordWrap(true);

        gridLayout_8->addWidget(label_logger_level_3, 0, 1, 1, 1);

        gridLayout_8->setColumnStretch(1, 1);

        verticalLayout_7->addLayout(gridLayout_8);

        toolBox_statistics = new rtabmap::StatsToolBox(dockWidgetContents_5);
        toolBox_statistics->setObjectName(QString::fromUtf8("toolBox_statistics"));

        verticalLayout_7->addWidget(toolBox_statistics);

        dockWidget_statistics->setWidget(dockWidgetContents_5);
        DatabaseViewer->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_statistics);
        dockWidget_occupancyGridView = new QDockWidget(DatabaseViewer);
        dockWidget_occupancyGridView->setObjectName(QString::fromUtf8("dockWidget_occupancyGridView"));
        dockWidgetContents_occupancyGrid = new QWidget();
        dockWidgetContents_occupancyGrid->setObjectName(QString::fromUtf8("dockWidgetContents_occupancyGrid"));
        verticalLayout_14 = new QVBoxLayout(dockWidgetContents_occupancyGrid);
        verticalLayout_14->setSpacing(0);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        layout_occupancyGridView = new QVBoxLayout();
        layout_occupancyGridView->setSpacing(0);
        layout_occupancyGridView->setObjectName(QString::fromUtf8("layout_occupancyGridView"));

        verticalLayout_14->addLayout(layout_occupancyGridView);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        checkBox_grid_grid = new QCheckBox(dockWidgetContents_occupancyGrid);
        checkBox_grid_grid->setObjectName(QString::fromUtf8("checkBox_grid_grid"));
        checkBox_grid_grid->setChecked(true);

        horizontalLayout_8->addWidget(checkBox_grid_grid);

        checkBox_grid_2d = new QCheckBox(dockWidgetContents_occupancyGrid);
        checkBox_grid_2d->setObjectName(QString::fromUtf8("checkBox_grid_2d"));
        checkBox_grid_2d->setChecked(false);

        horizontalLayout_8->addWidget(checkBox_grid_2d);

        checkBox_grid_elevation = new QCheckBox(dockWidgetContents_occupancyGrid);
        checkBox_grid_elevation->setObjectName(QString::fromUtf8("checkBox_grid_elevation"));
        checkBox_grid_elevation->setChecked(false);
        checkBox_grid_elevation->setTristate(true);

        horizontalLayout_8->addWidget(checkBox_grid_elevation);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_5);


        verticalLayout_14->addLayout(horizontalLayout_8);

        verticalLayout_14->setStretch(0, 1);
        dockWidget_occupancyGridView->setWidget(dockWidgetContents_occupancyGrid);
        DatabaseViewer->addDockWidget(Qt::TopDockWidgetArea, dockWidget_occupancyGridView);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuView->menuAction());
        menuFile->addAction(actionOpen_database);
        menuFile->addAction(actionClose_database);
        menuFile->addSeparator();
        menuFile->addAction(actionDatabase_recovery);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_config);
        menuFile->addAction(actionRestore_default_GUI_settings);
        menuFile->addSeparator();
        menuFile->addAction(actionGenerate_3D_map_pcd);
        menuFile->addAction(actionExport);
        menuFile->addAction(actionExtract_images);
        menuFile->addAction(menuExport_poses->menuAction());
        menuFile->addAction(menuExport_GPS->menuAction());
        menuFile->addSeparator();
        menuFile->addAction(actionEdit_optimized_2D_map);
        menuFile->addAction(actionExport_saved_2D_map);
        menuFile->addAction(actionImport_2D_map);
        menuFile->addAction(actionRegenerate_optimized_2D_map);
        menuFile->addSeparator();
        menuFile->addAction(actionView_optimized_mesh);
        menuFile->addAction(actionUpdate_optimized_mesh);
        menuFile->addAction(actionExport_optimized_mesh);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        menuExport_poses->addAction(actionRaw_format_txt);
        menuExport_poses->addAction(actionRGBD_SLAM_format_txt);
        menuExport_poses->addAction(actionRGBD_SLAM_ID_format_txt);
        menuExport_poses->addAction(actionRGBD_SLAM_motion_capture_format_txt);
        menuExport_poses->addAction(actionKITTI_format_txt);
        menuExport_poses->addAction(actionTORO_graph);
        menuExport_poses->addAction(actionG2o_g2o);
        menuExport_poses->addAction(actionPoses_KML);
        menuExport_GPS->addAction(actionGPS_TXT);
        menuExport_GPS->addAction(actionGPS_KML);
        menuEdit->addAction(actionGenerate_graph_dot);
        menuEdit->addAction(actionGenerate_local_graph_dot);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDetect_more_loop_closures);
        menuEdit->addAction(actionRefine_links);
        menuEdit->addAction(actionUpdate_all_neighbor_covariances);
        menuEdit->addAction(actionUpdate_all_loop_closure_covariances);
        menuEdit->addAction(actionUpdate_all_landmark_covariances);
        menuEdit->addSeparator();
        menuEdit->addAction(actionRegenerate_local_grid_maps);
        menuEdit->addAction(actionRegenerate_local_grid_maps_selected);
        menuEdit->addSeparator();
        menuEdit->addAction(actionEdit_depth_image);
        menuEdit->addSeparator();
        menuEdit->addAction(actionReset_all_changes);
        menuEdit->addSeparator();
        menuEdit->addAction(actionView_3D_map);
        menuView->addAction(actionVertical_Layout);

        retranslateUi(DatabaseViewer);

        comboBox_logger_level->setCurrentIndex(1);
        toolBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(DatabaseViewer);
    } // setupUi

    void retranslateUi(QMainWindow *DatabaseViewer)
    {
        DatabaseViewer->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "Database viewer", nullptr));
        actionOpen_database->setText(QCoreApplication::translate("DatabaseViewer", "Open database", nullptr));
        actionQuit->setText(QCoreApplication::translate("DatabaseViewer", "Quit", nullptr));
        actionGenerate_graph_dot->setText(QCoreApplication::translate("DatabaseViewer", "Generate graph (*.dot) ...", nullptr));
        actionGenerate_local_graph_dot->setText(QCoreApplication::translate("DatabaseViewer", "Generate local graph (.dot) ...", nullptr));
        actionGenerate_3D_map_pcd->setText(QCoreApplication::translate("DatabaseViewer", "Export 3D map (*.ply *.pcd) ...", nullptr));
        actionExport->setText(QCoreApplication::translate("DatabaseViewer", "Export database...", nullptr));
        actionExtract_images->setText(QCoreApplication::translate("DatabaseViewer", "Extract images...", nullptr));
        actionView_3D_map->setText(QCoreApplication::translate("DatabaseViewer", "View 3D map...", nullptr));
        actionRefine_links->setText(QCoreApplication::translate("DatabaseViewer", "Refine links...", nullptr));
#if QT_CONFIG(tooltip)
        actionRefine_links->setToolTip(QCoreApplication::translate("DatabaseViewer", "Refine selected links with the registration strategy set in \"Core Parameters\"->\"Reg\", \"Vis\" and/or \"Icp\"", nullptr));
#endif // QT_CONFIG(tooltip)
        actionDetect_more_loop_closures->setText(QCoreApplication::translate("DatabaseViewer", "Detect more loop closures...", nullptr));
        actionSave_config->setText(QCoreApplication::translate("DatabaseViewer", "Save config", nullptr));
        actionReset_all_changes->setText(QCoreApplication::translate("DatabaseViewer", "Reset link and grid map changes", nullptr));
        actionRegenerate_local_grid_maps->setText(QCoreApplication::translate("DatabaseViewer", "Regenerate local grid maps...", nullptr));
        actionRegenerate_local_grid_maps_selected->setText(QCoreApplication::translate("DatabaseViewer", "Regenerate local grid maps (selected)...", nullptr));
        actionEdit_depth_image->setText(QCoreApplication::translate("DatabaseViewer", "Edit depth image...", nullptr));
        actionVertical_Layout->setText(QCoreApplication::translate("DatabaseViewer", "Vertical Layout", nullptr));
        actionRestore_default_GUI_settings->setText(QCoreApplication::translate("DatabaseViewer", "Restore default GUI settings", nullptr));
        actionRaw_format_txt->setText(QCoreApplication::translate("DatabaseViewer", "Raw format (*.txt)", nullptr));
#if QT_CONFIG(tooltip)
        actionRaw_format_txt->setToolTip(QCoreApplication::translate("DatabaseViewer", "Raw format (12 values transform)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRGBD_SLAM_format_txt->setText(QCoreApplication::translate("DatabaseViewer", "RGBD-SLAM format (*.txt)", nullptr));
#if QT_CONFIG(tooltip)
        actionRGBD_SLAM_format_txt->setToolTip(QCoreApplication::translate("DatabaseViewer", "RGBD-SLAM (stamp tx ty tz qx qy qz qw)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionKITTI_format_txt->setText(QCoreApplication::translate("DatabaseViewer", "KITTI format (*.txt)", nullptr));
#if QT_CONFIG(tooltip)
        actionKITTI_format_txt->setToolTip(QCoreApplication::translate("DatabaseViewer", "KITTI (stamp + 12 values transform)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTORO_graph->setText(QCoreApplication::translate("DatabaseViewer", "TORO (*.graph)", nullptr));
        actionG2o_g2o->setText(QCoreApplication::translate("DatabaseViewer", "g2o (*.g2o)", nullptr));
        actionGPS_KML->setText(QCoreApplication::translate("DatabaseViewer", "Google Earth (*.kml)", nullptr));
        actionGPS_TXT->setText(QCoreApplication::translate("DatabaseViewer", "Raw format (*.txt)", nullptr));
        actionPoses_KML->setText(QCoreApplication::translate("DatabaseViewer", "Google Earth (*.kml)", nullptr));
        actionDatabase_recovery->setText(QCoreApplication::translate("DatabaseViewer", "Database recovery", nullptr));
        actionClose_database->setText(QCoreApplication::translate("DatabaseViewer", "Close database", nullptr));
        actionExport_saved_2D_map->setText(QCoreApplication::translate("DatabaseViewer", "Export optimized 2D map...", nullptr));
        actionImport_2D_map->setText(QCoreApplication::translate("DatabaseViewer", "Import optimized 2D map...", nullptr));
        actionView_optimized_mesh->setText(QCoreApplication::translate("DatabaseViewer", "View optimized mesh", nullptr));
        actionExport_optimized_mesh->setText(QCoreApplication::translate("DatabaseViewer", "Export optimized mesh...", nullptr));
        actionUpdate_optimized_mesh->setText(QCoreApplication::translate("DatabaseViewer", "Update optimized mesh...", nullptr));
        actionUpdate_all_neighbor_covariances->setText(QCoreApplication::translate("DatabaseViewer", "Update all neighbor covariances...", nullptr));
        actionUpdate_all_loop_closure_covariances->setText(QCoreApplication::translate("DatabaseViewer", "Update all loop closure covariances...", nullptr));
        actionRGBD_SLAM_motion_capture_format_txt->setText(QCoreApplication::translate("DatabaseViewer", "RGBD-SLAM motion capture format (*.txt)", nullptr));
#if QT_CONFIG(tooltip)
        actionRGBD_SLAM_motion_capture_format_txt->setToolTip(QCoreApplication::translate("DatabaseViewer", "RGBD-SLAM (stamp tx ty tz qx qy qz qw)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionEdit_optimized_2D_map->setText(QCoreApplication::translate("DatabaseViewer", "Edit optimized 2D map...", nullptr));
        actionRegenerate_optimized_2D_map->setText(QCoreApplication::translate("DatabaseViewer", "Regenerate optimized 2D map...", nullptr));
        actionRGBD_SLAM_ID_format_txt->setText(QCoreApplication::translate("DatabaseViewer", "RGBD-SLAM ID format (*.txt)", nullptr));
        actionUpdate_all_landmark_covariances->setText(QCoreApplication::translate("DatabaseViewer", "Update all landmark covariances...", nullptr));
        label_childrenA_8->setText(QCoreApplication::translate("DatabaseViewer", "Weight", nullptr));
        label_childrenA_24->setText(QCoreApplication::translate("DatabaseViewer", "Gravity", nullptr));
        label_childrenA_2->setText(QCoreApplication::translate("DatabaseViewer", "Children", nullptr));
        label_sensorsA->setText(QString());
        label_childrenA_6->setText(QCoreApplication::translate("DatabaseViewer", "Stamp", nullptr));
        label_childrenA_22->setText(QCoreApplication::translate("DatabaseViewer", "Scan", nullptr));
        label_childrenA_20->setText(QCoreApplication::translate("DatabaseViewer", "Sensors", nullptr));
        label_scanA->setText(QString());
        label_childrenA_12->setText(QCoreApplication::translate("DatabaseViewer", "Odometry Pose", nullptr));
        label_parentsA_2->setText(QCoreApplication::translate("DatabaseViewer", "Parents", nullptr));
        label_weightA->setText(QString());
        label_gpsA->setText(QString());
        label_childrenA_14->setText(QCoreApplication::translate("DatabaseViewer", "Calib", nullptr));
        label_childrenA_28->setText(QCoreApplication::translate("DatabaseViewer", "Prior", nullptr));
        label_childrenA_18->setText(QCoreApplication::translate("DatabaseViewer", "Velocity", nullptr));
        label_mapA->setText(QString());
        label_childrenA->setText(QString());
        label_childrenA_10->setText(QCoreApplication::translate("DatabaseViewer", "Map ID", nullptr));
        label_childrenA_16->setText(QCoreApplication::translate("DatabaseViewer", "GPS", nullptr));
        label_childrenA_27->setText(QCoreApplication::translate("DatabaseViewer", "Ground Truth", nullptr));
        label_velA->setText(QString());
        label_childrenA_4->setText(QCoreApplication::translate("DatabaseViewer", "Label", nullptr));
        label_poseA->setText(QString());
        label_calibA->setText(QString());
        label_labelA->setText(QString());
        label_gravityA->setText(QString());
        label_stampA->setText(QString());
        label_parentsA->setText(QString());
        label_gtA->setText(QString());
        label_childrenA_30->setText(QCoreApplication::translate("DatabaseViewer", "Optimized Pose", nullptr));
        label_optposeA->setText(QString());
        label_priorA->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_edit_priorA->setToolTip(QCoreApplication::translate("DatabaseViewer", "Edit Constraint", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_edit_priorA->setText(QCoreApplication::translate("DatabaseViewer", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_remove_priorA->setToolTip(QCoreApplication::translate("DatabaseViewer", "Remove Prior", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_remove_priorA->setText(QCoreApplication::translate("DatabaseViewer", "X", nullptr));
        label_childrenA_11->setText(QCoreApplication::translate("DatabaseViewer", "Map ID", nullptr));
        label_poseB->setText(QString());
        label_childrenA_26->setText(QCoreApplication::translate("DatabaseViewer", "Ground Truth", nullptr));
        label_childrenA_5->setText(QCoreApplication::translate("DatabaseViewer", "Label", nullptr));
        label_childrenA_3->setText(QCoreApplication::translate("DatabaseViewer", "Children", nullptr));
        label_childrenA_21->setText(QCoreApplication::translate("DatabaseViewer", "Sensors", nullptr));
        label_childrenB->setText(QString());
        label_childrenA_7->setText(QCoreApplication::translate("DatabaseViewer", "Stamp", nullptr));
        label_mapB->setText(QString());
        label_gravityB->setText(QString());
        label_labelB->setText(QString());
        label_velB->setText(QString());
        label_gpsB->setText(QString());
        label_childrenA_13->setText(QCoreApplication::translate("DatabaseViewer", "Odometry Pose", nullptr));
        label_childrenA_23->setText(QCoreApplication::translate("DatabaseViewer", "Scan", nullptr));
        label_scanB->setText(QString());
        label_childrenA_15->setText(QCoreApplication::translate("DatabaseViewer", "Calib", nullptr));
        label_childrenA_25->setText(QCoreApplication::translate("DatabaseViewer", "Gravity", nullptr));
        label_parentsB->setText(QString());
        label_parentsA_4->setText(QCoreApplication::translate("DatabaseViewer", "Parents", nullptr));
        label_stampB->setText(QString());
        label_childrenA_19->setText(QCoreApplication::translate("DatabaseViewer", "Velocity", nullptr));
        label_sensorsB->setText(QString());
        label_calibB->setText(QString());
        label_childrenA_9->setText(QCoreApplication::translate("DatabaseViewer", "Weight", nullptr));
        label_gtB->setText(QString());
        label_childrenA_17->setText(QCoreApplication::translate("DatabaseViewer", "GPS", nullptr));
        label_weightB->setText(QString());
        label_childrenA_29->setText(QCoreApplication::translate("DatabaseViewer", "Prior", nullptr));
        label_childrenA_31->setText(QCoreApplication::translate("DatabaseViewer", "Optimized Pose", nullptr));
        label_optposeB->setText(QString());
        label_priorB->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_edit_priorB->setToolTip(QCoreApplication::translate("DatabaseViewer", "Edit Constraint", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_edit_priorB->setText(QCoreApplication::translate("DatabaseViewer", "...", nullptr));
#if QT_CONFIG(tooltip)
        toolButton_remove_priorB->setToolTip(QCoreApplication::translate("DatabaseViewer", "Remove Prior", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_remove_priorB->setText(QCoreApplication::translate("DatabaseViewer", "X", nullptr));
        label_2->setText(QCoreApplication::translate("DatabaseViewer", "Index :", nullptr));
        label_3->setText(QCoreApplication::translate("DatabaseViewer", "Id :", nullptr));
        label_indexA->setText(QCoreApplication::translate("DatabaseViewer", "indexA", nullptr));
        label_idA->setText(QCoreApplication::translate("DatabaseViewer", "idA", nullptr));
        label_5->setText(QCoreApplication::translate("DatabaseViewer", "Index :", nullptr));
        label_4->setText(QCoreApplication::translate("DatabaseViewer", "Id :", nullptr));
        label_indexB->setText(QCoreApplication::translate("DatabaseViewer", "indexB", nullptr));
        label_idB->setText(QCoreApplication::translate("DatabaseViewer", "idB", nullptr));
        menuFile->setTitle(QCoreApplication::translate("DatabaseViewer", "File", nullptr));
        menuExport_poses->setTitle(QCoreApplication::translate("DatabaseViewer", "Export poses...", nullptr));
        menuExport_GPS->setTitle(QCoreApplication::translate("DatabaseViewer", "Export GPS...", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("DatabaseViewer", "Edit", nullptr));
        menuView->setTitle(QCoreApplication::translate("DatabaseViewer", "View", nullptr));
        dockWidget_constraints->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "Constraints view", nullptr));
        checkBox_show3DWords->setText(QCoreApplication::translate("DatabaseViewer", "Words", nullptr));
        checkBox_show3Dclouds->setText(QCoreApplication::translate("DatabaseViewer", "Clouds", nullptr));
        checkBox_show2DScans->setText(QCoreApplication::translate("DatabaseViewer", "Scans", nullptr));
        checkBox_odomFrame->setText(QCoreApplication::translate("DatabaseViewer", "Odom Frame", nullptr));
        label_variance->setText(QString());
        label->setText(QCoreApplication::translate("DatabaseViewer", "Neighbor links", nullptr));
        label_6->setText(QCoreApplication::translate("DatabaseViewer", "Loop closure links", nullptr));
        label_33->setText(QCoreApplication::translate("DatabaseViewer", "Type", nullptr));
        checkBox_showOptimized->setText(QCoreApplication::translate("DatabaseViewer", "Optimized", nullptr));
        label_constraint_opt->setText(QString());
        label_18->setText(QCoreApplication::translate("DatabaseViewer", "\317\203 (lin, ang), cov", nullptr));
        label_type->setText(QString());
        label_type_name->setText(QString());
        label_constraint->setText(QString());
#if QT_CONFIG(tooltip)
        toolButton_constraint->setToolTip(QCoreApplication::translate("DatabaseViewer", "Edit Constraint", nullptr));
#endif // QT_CONFIG(tooltip)
        toolButton_constraint->setText(QCoreApplication::translate("DatabaseViewer", "...", nullptr));
        label_16->setText(QCoreApplication::translate("DatabaseViewer", "Transform", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_refine->setToolTip(QCoreApplication::translate("DatabaseViewer", "Refine with the registration strategy set in \"Core Parameters\"->\"Reg\"", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_refine->setText(QCoreApplication::translate("DatabaseViewer", "Refine", nullptr));
        pushButton_reset->setText(QCoreApplication::translate("DatabaseViewer", "Reset", nullptr));
        pushButton_add->setText(QCoreApplication::translate("DatabaseViewer", "Add", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_enableForAll->setToolTip(QCoreApplication::translate("DatabaseViewer", "Enable \"Add\" for all nodes (even not in graph)", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_enableForAll->setText(QString());
        pushButton_reject->setText(QCoreApplication::translate("DatabaseViewer", "Reject", nullptr));
        dockWidget_graphView->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "Graph view", nullptr));
        label_rotation->setText(QCoreApplication::translate("DatabaseViewer", "0.0 deg", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_applyRotation->setToolTip(QCoreApplication::translate("DatabaseViewer", "<html><head/><body><p>The rotation will be applied temporary to optimized global graph. To save it to database, do File-&gt;&quot;Regenerate optimized 2D map...&quot;.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_applyRotation->setText(QCoreApplication::translate("DatabaseViewer", "Apply Rotation", nullptr));
        label_iterations->setText(QCoreApplication::translate("DatabaseViewer", "#", nullptr));
        comboBox_optimizationFlavor->setItemText(0, QCoreApplication::translate("DatabaseViewer", "Global Iterative", nullptr));
        comboBox_optimizationFlavor->setItemText(1, QCoreApplication::translate("DatabaseViewer", "Global Full", nullptr));
        comboBox_optimizationFlavor->setItemText(2, QCoreApplication::translate("DatabaseViewer", "Local Optimized", nullptr));

        label_alignPosesWithGroundTruth->setText(QCoreApplication::translate("DatabaseViewer", "Align poses with ground truth", nullptr));
        checkBox_ignoreIntermediateNodes->setText(QString());
        label_optimizeFrom->setText(QCoreApplication::translate("DatabaseViewer", "Root", nullptr));
        checkBox_spanAllMaps->setText(QCoreApplication::translate("DatabaseViewer", "Span to all maps", nullptr));
        checkBox_wmState->setText(QCoreApplication::translate("DatabaseViewer", "WM", nullptr));
        label_45->setText(QCoreApplication::translate("DatabaseViewer", "Time grid (s)", nullptr));
        label_rmse_title->setText(QCoreApplication::translate("DatabaseViewer", "RMSE (m)", nullptr));
        checkBox_alignScansCloudsWithGroundTruth->setText(QString());
        label_poses->setText(QString());
        label_timeOptimization->setText(QString());
        label_alignScansCloudsWithGroundTruth->setText(QCoreApplication::translate("DatabaseViewer", "Align scans/clouds with ground truth", nullptr));
        label_rmse->setText(QString());
        label_timeGrid->setText(QString());
#if QT_CONFIG(tooltip)
        label_41->setToolTip(QCoreApplication::translate("DatabaseViewer", "<html><head/><body><p>N: Neighbor</p><p>NM: Neighbor Merged</p><p>G: Global</p><p>LS: Local by Space (Proximity)</p><p>LT: Local by Time (Proximity)</p><p>U: User</p><p>P: Prior</p><p>LM: Landmark</p><p>GR: Gravity</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        label_41->setText(QCoreApplication::translate("DatabaseViewer", "Links (N, NM, G, LS, LT, U, P, LM, GR)", nullptr));
        label_10->setText(QCoreApplication::translate("DatabaseViewer", "Path length (m)", nullptr));
        label_52->setText(QCoreApplication::translate("DatabaseViewer", "Poses", nullptr));
        label_pathLength->setText(QString());
        label_loopClosures->setText(QString());
        label_ignoreINtermediateNdoes->setText(QCoreApplication::translate("DatabaseViewer", "Ignore intermediate nodes", nullptr));
        label_39->setText(QCoreApplication::translate("DatabaseViewer", "Time optimization (s)", nullptr));
        checkBox_alignPosesWithGroundTruth->setText(QString());
        label_alignPosesWithGPS->setText(QCoreApplication::translate("DatabaseViewer", "Align poses with GPS", nullptr));
        checkBox_alignPosesWithGPS->setText(QString());
        dockWidget_guiparameters->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "GUI Parameters", nullptr));
        comboBox_logger_level->setItemText(0, QCoreApplication::translate("DatabaseViewer", "Debug", nullptr));
        comboBox_logger_level->setItemText(1, QCoreApplication::translate("DatabaseViewer", "Info", nullptr));
        comboBox_logger_level->setItemText(2, QCoreApplication::translate("DatabaseViewer", "Warning", nullptr));
        comboBox_logger_level->setItemText(3, QCoreApplication::translate("DatabaseViewer", "Error", nullptr));

        label_logger_level->setText(QCoreApplication::translate("DatabaseViewer", "Logger level", nullptr));
        checkBox_ignoreGlobalLoop->setText(QString());
        label_49->setText(QCoreApplication::translate("DatabaseViewer", "Ignore local loop closures (time)", nullptr));
        checkBox_ignoreLocalLoopSpace->setText(QString());
        label_48->setText(QCoreApplication::translate("DatabaseViewer", "Ignore global loop closures", nullptr));
        label_35->setText(QCoreApplication::translate("DatabaseViewer", "Ignore pose correction", nullptr));
        checkBox_ignorePoseCorrection->setText(QString());
        checkBox_ignoreLocalLoopTime->setText(QString());
        checkBox_ignoreUserLoop->setText(QString());
        label_50->setText(QCoreApplication::translate("DatabaseViewer", "Ignore user loop closures", nullptr));
        label_47->setText(QCoreApplication::translate("DatabaseViewer", "Ignore local loop closures (space)", nullptr));
        label_scale_title->setText(QCoreApplication::translate("DatabaseViewer", "Scale", nullptr));
        label_58->setText(QCoreApplication::translate("DatabaseViewer", "Ignore landmarks", nullptr));
        checkBox_ignoreLandmarks->setText(QString());
        toolBox->setItemText(toolBox->indexOf(page_3), QCoreApplication::translate("DatabaseViewer", "Graph optimization", nullptr));
        label_53->setText(QCoreApplication::translate("DatabaseViewer", "OctoMap", nullptr));
        label_57->setText(QCoreApplication::translate("DatabaseViewer", "Crop radius when filtering empty space from 2d occupancy grid.", nullptr));
        spinBox_cropRadius->setSuffix(QCoreApplication::translate("DatabaseViewer", " pixels", nullptr));
        checkBox_grid_showProbMap->setText(QString());
        spinBox_decimation->setPrefix(QString());
        spinBox_grid_depth->setPrefix(QString());
        toolButton_groundColor->setText(QCoreApplication::translate("DatabaseViewer", "...", nullptr));
        label_octomap_cubes->setText(QCoreApplication::translate("DatabaseViewer", "OctoMap: Rendering type", nullptr));
        checkBox_grid_frontiers->setText(QString());
        label_54->setText(QCoreApplication::translate("DatabaseViewer", "Voxel size (for clouds and scans)", nullptr));
        label_octomap_depth->setText(QCoreApplication::translate("DatabaseViewer", "OctoMap: Tree depth", nullptr));
        checkBox_grid_regenerateFromSavedGrid->setText(QString());
        checkBox_octomap->setText(QString());
        label_octomap_empty_2->setText(QCoreApplication::translate("DatabaseViewer", "Obstacle cell color", nullptr));
        label_51->setText(QCoreApplication::translate("DatabaseViewer", "Gain compensation radius (Constraints view)", nullptr));
        checkBox_showDisparityInsteadOfRight->setText(QString());
        label_59->setText(QCoreApplication::translate("DatabaseViewer", "Show probabilistic occupancy grid in Graph View.", nullptr));
        label_logger_level_2->setText(QCoreApplication::translate("DatabaseViewer", "For stereo data, show disparity instead of right image in main views.", nullptr));
        label_octomap_empty_3->setText(QCoreApplication::translate("DatabaseViewer", "Ground cell color", nullptr));
        doubleSpinBox_gainCompensationRadius->setSuffix(QCoreApplication::translate("DatabaseViewer", " m", nullptr));
        label_octomap_empty_4->setText(QCoreApplication::translate("DatabaseViewer", "Empty cell color", nullptr));
        toolButton_emptyColor->setText(QCoreApplication::translate("DatabaseViewer", "...", nullptr));
        toolButton_obstacleColor->setText(QCoreApplication::translate("DatabaseViewer", "...", nullptr));
        checkBox_cameraProjection->setText(QString());
        checkBox_grid_empty->setText(QString());
        label_55->setText(QCoreApplication::translate("DatabaseViewer", "Local grid: regenerate from saved grid instead of sensors", nullptr));
        label_octomap_frontiers->setText(QCoreApplication::translate("DatabaseViewer", "Show frontiers", nullptr));
        label_60->setText(QCoreApplication::translate("DatabaseViewer", "Create RGB-D cloud from RGB projection on scan.", nullptr));
        label_octomap_empty->setText(QCoreApplication::translate("DatabaseViewer", "Show empty space", nullptr));
        comboBox_octomap_rendering_type->setItemText(0, QCoreApplication::translate("DatabaseViewer", "Point Cloud", nullptr));
        comboBox_octomap_rendering_type->setItemText(1, QCoreApplication::translate("DatabaseViewer", "Cube", nullptr));
        comboBox_octomap_rendering_type->setItemText(2, QCoreApplication::translate("DatabaseViewer", "Volume", nullptr));

        label_56->setText(QCoreApplication::translate("DatabaseViewer", "Decimation (for images)", nullptr));
        doubleSpinBox_voxelSize->setSuffix(QCoreApplication::translate("DatabaseViewer", " m", nullptr));
        label_octomap_frontiers_3->setText(QCoreApplication::translate("DatabaseViewer", "Frontier cell color", nullptr));
        toolButton_frontierColor->setText(QCoreApplication::translate("DatabaseViewer", "...", nullptr));
        groupBox_posefiltering->setTitle(QCoreApplication::translate("DatabaseViewer", "Pose filtering", nullptr));
        doubleSpinBox_posefilteringAngle->setSuffix(QCoreApplication::translate("DatabaseViewer", " degrees", nullptr));
        doubleSpinBox_posefilteringRadius->setSuffix(QCoreApplication::translate("DatabaseViewer", " m", nullptr));
        label_42->setText(QCoreApplication::translate("DatabaseViewer", "Radius", nullptr));
        label_43->setText(QCoreApplication::translate("DatabaseViewer", "Angle", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DatabaseViewer", "Organized Fast Mesh", nullptr));
        label_14->setText(QCoreApplication::translate("DatabaseViewer", "Triangle size", nullptr));
        label_12->setText(QCoreApplication::translate("DatabaseViewer", "Angle tolerance", nullptr));
        spinBox_mesh_angleTolerance->setSuffix(QCoreApplication::translate("DatabaseViewer", " deg", nullptr));
        spinBox_mesh_triangleSize->setSuffix(QCoreApplication::translate("DatabaseViewer", " pix", nullptr));
        label_13->setText(QCoreApplication::translate("DatabaseViewer", "Quad", nullptr));
        label_17->setText(QCoreApplication::translate("DatabaseViewer", "Fill depth holes: error", nullptr));
        spinBox_mesh_depthError->setSuffix(QCoreApplication::translate("DatabaseViewer", " %", nullptr));
        checkBox_mesh_quad->setText(QString());
        label_15->setText(QCoreApplication::translate("DatabaseViewer", "Fill depth holes: size", nullptr));
        spinBox_mesh_fillDepthHoles->setSuffix(QCoreApplication::translate("DatabaseViewer", " pix", nullptr));
        label_20->setText(QCoreApplication::translate("DatabaseViewer", "Min cluster size", nullptr));
        spinBox_mesh_minClusterSize->setSuffix(QString());
        toolBox->setItemText(toolBox->indexOf(page_4), QCoreApplication::translate("DatabaseViewer", "Grid/cloud generation", nullptr));
        label_32->setText(QCoreApplication::translate("DatabaseViewer", "Intra-session", nullptr));
        doubleSpinBox_detectMore_radius->setSuffix(QCoreApplication::translate("DatabaseViewer", " m", nullptr));
        label_29->setText(QCoreApplication::translate("DatabaseViewer", "Radius Max", nullptr));
        doubleSpinBox_detectMore_angle->setSuffix(QCoreApplication::translate("DatabaseViewer", " degrees", nullptr));
        label_30->setText(QCoreApplication::translate("DatabaseViewer", "Angle", nullptr));
        label_31->setText(QCoreApplication::translate("DatabaseViewer", "Iterations", nullptr));
        label_34->setText(QCoreApplication::translate("DatabaseViewer", "Inter-session", nullptr));
        checkBox_detectMore_intraSession->setText(QString());
        checkBox_detectMore_interSession->setText(QString());
        label_36->setText(QCoreApplication::translate("DatabaseViewer", "Radius Min", nullptr));
        doubleSpinBox_detectMore_radiusMin->setSuffix(QCoreApplication::translate("DatabaseViewer", " m", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_5), QCoreApplication::translate("DatabaseViewer", "Detect more loop closures", nullptr));
        label_9->setText(QCoreApplication::translate("DatabaseViewer", "Decimation. Negative decimation is done from RGB size instead of depth size (if depth is smaller than RGB, it may be interpolated depending of the decimation value).", nullptr));
        label_11->setText(QCoreApplication::translate("DatabaseViewer", "Max depth", nullptr));
        checkBox_icp_from_depth->setText(QString());
        label_7->setText(QCoreApplication::translate("DatabaseViewer", "Generate laser scans from RGB-D images using the following parameters.", nullptr));
        label_19->setText(QCoreApplication::translate("DatabaseViewer", "Min depth", nullptr));
        toolBox->setItemText(toolBox->indexOf(page_2), QCoreApplication::translate("DatabaseViewer", "Refine", nullptr));
        dockWidget_stereoView->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "Stereo view", nullptr));
        label_stereo_inliers_name->setText(QCoreApplication::translate("DatabaseViewer", "Inliers:", nullptr));
        label_stereo_inliers->setText(QCoreApplication::translate("DatabaseViewer", "0", nullptr));
        label_stereo_slopeOutliers_name->setText(QCoreApplication::translate("DatabaseViewer", "Slope outliers:", nullptr));
        label_stereo_slopeOutliers->setText(QCoreApplication::translate("DatabaseViewer", "0", nullptr));
        label_stereo_disparityOutliers_name->setText(QCoreApplication::translate("DatabaseViewer", "Negative disparity outliers:", nullptr));
        label_stereo_disparityOutliers->setText(QCoreApplication::translate("DatabaseViewer", "0", nullptr));
        label_stereo_flowOutliers_name->setText(QCoreApplication::translate("DatabaseViewer", "Flow outliers:", nullptr));
        label_stereo_flowOutliers->setText(QCoreApplication::translate("DatabaseViewer", "0", nullptr));
        dockWidget_view3d->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "3D view", nullptr));
        checkBox_showWords->setText(QCoreApplication::translate("DatabaseViewer", "Words", nullptr));
        checkBox_showCloud->setText(QCoreApplication::translate("DatabaseViewer", "Cloud", nullptr));
        checkBox_showMesh->setText(QCoreApplication::translate("DatabaseViewer", "Mesh", nullptr));
        checkBox_showScan->setText(QCoreApplication::translate("DatabaseViewer", "Scan", nullptr));
        checkBox_showMap->setText(QCoreApplication::translate("DatabaseViewer", "Map", nullptr));
        checkBox_showGrid->setText(QCoreApplication::translate("DatabaseViewer", "Grid", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_showElevation->setToolTip(QCoreApplication::translate("DatabaseViewer", "Available if RTAB-Map is built with GridMap", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_showElevation->setText(QCoreApplication::translate("DatabaseViewer", "Elevation", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_odomFrame_3dview->setToolTip(QCoreApplication::translate("DatabaseViewer", "Adjust roll, pitch and height based on odometry pose", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_odomFrame_3dview->setText(QCoreApplication::translate("DatabaseViewer", "Odom", nullptr));
        checkBox_gravity_3dview->setText(QCoreApplication::translate("DatabaseViewer", "Gravity", nullptr));
        dockWidget_info->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "Info", nullptr));
        dockWidget_coreparameters->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "Core Parameters", nullptr));
        dockWidget_statistics->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "Statistics", nullptr));
        checkBox_timeStats->setText(QString());
        label_logger_level_3->setText(QCoreApplication::translate("DatabaseViewer", "Time (s) used in figures for x-axis instead of node IDs.", nullptr));
        dockWidget_occupancyGridView->setWindowTitle(QCoreApplication::translate("DatabaseViewer", "Occupancy Grid", nullptr));
        checkBox_grid_grid->setText(QCoreApplication::translate("DatabaseViewer", "Grid", nullptr));
        checkBox_grid_2d->setText(QCoreApplication::translate("DatabaseViewer", "2d Map", nullptr));
#if QT_CONFIG(tooltip)
        checkBox_grid_elevation->setToolTip(QCoreApplication::translate("DatabaseViewer", "Available if RTAB-Map is built with GridMap", nullptr));
#endif // QT_CONFIG(tooltip)
        checkBox_grid_elevation->setText(QCoreApplication::translate("DatabaseViewer", "Elevation", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DatabaseViewer: public Ui_DatabaseViewer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DATABASEVIEWER_H
