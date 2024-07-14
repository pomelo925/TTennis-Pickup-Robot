/********************************************************************************
** Form generated from reading UI file 'mainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "../include/rtabmap/gui/ConsoleWidget.h"
#include "../include/rtabmap/gui/GraphViewer.h"
#include "../include/rtabmap/gui/ImageView.h"
#include "../include/rtabmap/gui/MapVisibilityWidget.h"
#include "../include/rtabmap/gui/StatsToolBox.h"
#include "../include/rtabmap/utilite/UPlot.h"

QT_BEGIN_NAMESPACE

class Ui_mainWindow
{
public:
    QAction *actionExit;
    QAction *actionHelp;
    QAction *actionAbout;
    QAction *actionPreferences;
    QAction *actionStart;
    QAction *actionPause;
    QAction *actionPause_on_match;
    QAction *actionStop;
    QAction *actionDump_the_memory;
    QAction *actionPause_when_a_loop_hypothesis_is_rejected;
    QAction *actionClear_cache;
    QAction *actionAuto_screen_capture;
    QAction *actionDump_the_prediction_matrix;
    QAction *actionGenerate_map;
    QAction *actionDelete_memory;
    QAction *actionOpen_working_directory;
    QAction *action16_9;
    QAction *action16_10;
    QAction *action4_3;
    QAction *action360p;
    QAction *action480p;
    QAction *action720p;
    QAction *action1080p;
    QAction *action240p;
    QAction *actionPrint_loop_closure_IDs_to_console;
    QAction *actionSave_point_cloud;
    QAction *actionDownload_all_clouds;
    QAction *actionPause_on_local_loop_detection;
    QAction *actionSLAM_mode;
    QAction *actionLocalization_mode;
    QAction *actionReset_Odometry;
    QAction *actionView_high_res_point_cloud;
    QAction *actionTrigger_a_new_map;
    QAction *actionDownload_graph;
    QAction *actionScreenshot;
    QAction *actionOpenNI_PCL;
    QAction *actionFreenect;
    QAction *actionOpenNI_CV;
    QAction *actionOpenNI_CV_ASUS;
    QAction *actionOpenNI2;
    QAction *actionOpenNI_PCL_ASUS;
    QAction *actionData_recorder;
    QAction *actionExport_2D_Grid_map_bmp_png;
    QAction *actionOpen_database;
    QAction *actionNew_database;
    QAction *actionClose_database;
    QAction *actionEdit_database;
    QAction *actionPost_processing;
    QAction *actionSave_GUI_config;
    QAction *actionFreenect2;
    QAction *actionStereoDC1394;
    QAction *actionOpenNI2_kinect;
    QAction *actionOpenNI2_sense;
    QAction *actionStereoFlyCapture2;
    QAction *actionSend_goal;
    QAction *actionCancel_goal;
    QAction *actionDefault_views;
    QAction *actionMore_options;
    QAction *actionLabel_current_location;
    QAction *actionKITTI_format_txt;
    QAction *actionRGBD_SLAM_format_txt;
    QAction *actionTORO_graph;
    QAction *actionExport_cameras_in_Bundle_format_out;
    QAction *actionRaw_format_txt;
    QAction *actionG2o_g2o;
    QAction *actionCustom;
    QAction *actionSend_waypoints;
    QAction *actionUpdate_cache_from_database;
    QAction *actionExport_images_RGB_jpg_Depth_png;
    QAction *actionAnchor_clouds_to_ground_truth;
    QAction *actionStereoZed;
    QAction *actionStereoUsb;
    QAction *actionExport_octomap;
    QAction *actionRealSense_R200;
    QAction *actionDepth_Calibration;
    QAction *actionRealSense_ZR300;
    QAction *actionKinect_for_Windows_SDK_v2;
    QAction *actionKinect_for_Azure;
    QAction *actionRealSense2_D400;
    QAction *actionStereoTara;
    QAction *actionRGBD_SLAM_motion_capture_format_txt;
    QAction *actionRealSense2_T265;
    QAction *actionRealSense2_SR300;
    QAction *actionMYNT_EYE_S_SDK;
    QAction *actionRealSense2_L515;
    QAction *actionZed_Open_Capture;
    QAction *actionDepthAI_oakd;
    QAction *actionRGBD_SLAM_ID_format_txt;
    QAction *actionOpenNI2_orbbec;
    QAction *actionRemove_label;
    QAction *actionDepthAI_oakdlite;
    QAction *actionDepthAI_oakdpro;
    QAction *actionVelodyne_VLP_16;
    QAction *actionXvisio_SeerSense;
    QWidget *widget_mainWindow;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuExport_poses;
    QMenu *menuEdit;
    QMenu *menuAdvanced;
    QMenu *menu6;
    QMenu *menuProcess;
    QMenu *menuSelect_source;
    QMenu *menuRGB_D_camera;
    QMenu *menuKinect_for_Xbox_360;
    QMenu *menuXtion_PRO_LIVE;
    QMenu *menuSense_3D_scanner;
    QMenu *menuKinect_v2;
    QMenu *menuKinect_K4A;
    QMenu *menuRealSense_R200;
    QMenu *menuRealSense_ZR300;
    QMenu *menuRealSense_D435;
    QMenu *menuRealSense_SR300;
    QMenu *menuRealSense_L515;
    QMenu *menuOrbbec_Astra;
    QMenu *menuXvisio_SeerSense;
    QMenu *menuStereo_camera;
    QMenu *menuBumblebee2_2;
    QMenu *menuZed_camera;
    QMenu *menuTara_Camera;
    QMenu *menuRealSense_T265;
    QMenu *menuMynt_Eye_S;
    QMenu *menuOAK_D;
    QMenu *menuOAK_D_Lite;
    QMenu *menuOAK_D_Pro;
    QMenu *menuLiDAR;
    QMenu *menuWindow;
    QMenu *menuShow_view;
    QMenu *menuAspect_ratio_2;
    QMenu *menuTools;
    QStatusBar *statusbar;
    QDockWidget *dockWidget_posterior;
    QWidget *dockWidgetContents;
    QHBoxLayout *horizontalLayout;
    UPlot *posteriorPlot;
    QToolBar *toolBar;
    QDockWidget *dockWidget_statsV2;
    QWidget *dockWidgetContents_3;
    QVBoxLayout *verticalLayout_8;
    QGridLayout *gridLayout;
    QDoubleSpinBox *doubleSpinBox_stats_timeLimit;
    QLabel *label_source;
    QLabel *label_stats_source;
    QDoubleSpinBox *doubleSpinBox_stats_imgRate;
    QLabel *label_45;
    QLabel *label_elapsedTime;
    QLabel *label_20;
    QLabel *label_stats_imageNumber;
    QLabel *label_12;
    QLabel *label_stats_loopClosuresDetected;
    QLabel *label_38;
    QLabel *label_stats_loopClosuresReactivatedDetected;
    QLabel *label_15;
    QLabel *label_stats_loopClosuresRejected;
    QLabel *doubleSpinBox_stats_imgRate_label;
    QLabel *label_timeLimit;
    QDoubleSpinBox *doubleSpinBox_stats_detectionRate;
    QLabel *doubleSpinBox_stats_imgRate_label_2;
    rtabmap::StatsToolBox *statsToolBox;
    QSpacerItem *verticalSpacer_2;
    QDockWidget *dockWidget_likelihood;
    QWidget *dockWidgetContents_4;
    QVBoxLayout *verticalLayout_6;
    UPlot *likelihoodPlot;
    QDockWidget *dockWidget_console;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout_5;
    rtabmap::ConsoleWidget *widget_console;
    QDockWidget *dockWidget_rawlikelihood;
    QWidget *dockWidgetContents_6;
    QVBoxLayout *verticalLayout_4;
    UPlot *rawLikelihoodPlot;
    QDockWidget *dockWidget_cloudViewer;
    QWidget *layout_cloudViewer;
    QVBoxLayout *verticalLayout_3;
    QDockWidget *dockWidget_loopClosureViewer;
    QWidget *layout_loopClosureViewer;
    QVBoxLayout *verticalLayout_7;
    QDockWidget *dockWidget_mapVisibility;
    QWidget *dockWidgetContents_8;
    QVBoxLayout *verticalLayout_9;
    rtabmap::MapVisibilityWidget *widget_mapVisibility;
    QDockWidget *dockWidget_graphViewer;
    QWidget *dockWidgetContents_9;
    QVBoxLayout *verticalLayout_10;
    rtabmap::GraphViewer *graphicsView_graphView;
    QDockWidget *dockWidget_imageView;
    QWidget *layout_imageview;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_refId;
    rtabmap::ImageView *imageView_source;
    QVBoxLayout *verticalLayout;
    QLabel *label_matchId;
    rtabmap::ImageView *imageView_loopClosure;
    QDockWidget *dockWidget_odometry;
    QWidget *dockWidgetContents_10;
    QVBoxLayout *verticalLayout_11;
    rtabmap::ImageView *imageView_odometry;
    QToolBar *toolBar_2;
    QDockWidget *dockWidget_multiSessionLoc;
    QWidget *layout_multiSessionLoc;
    QVBoxLayout *verticalLayout_12;

    void setupUi(QMainWindow *mainWindow)
    {
        if (mainWindow->objectName().isEmpty())
            mainWindow->setObjectName(QString::fromUtf8("mainWindow"));
        mainWindow->resize(1012, 712);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/RTAB-Map.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mainWindow->setWindowIcon(icon);
        mainWindow->setDockOptions(QMainWindow::AllowNestedDocks|QMainWindow::AllowTabbedDocks|QMainWindow::AnimatedDocks|QMainWindow::VerticalTabs);
        actionExit = new QAction(mainWindow);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/images/system-log-out.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon1);
        actionHelp = new QAction(mainWindow);
        actionHelp->setObjectName(QString::fromUtf8("actionHelp"));
        actionHelp->setEnabled(true);
        actionAbout = new QAction(mainWindow);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionPreferences = new QAction(mainWindow);
        actionPreferences->setObjectName(QString::fromUtf8("actionPreferences"));
        actionStart = new QAction(mainWindow);
        actionStart->setObjectName(QString::fromUtf8("actionStart"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/images/Play1Normal.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStart->setIcon(icon2);
        actionPause = new QAction(mainWindow);
        actionPause->setObjectName(QString::fromUtf8("actionPause"));
        actionPause->setCheckable(true);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/images/PauseNormalRed.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause->setIcon(icon3);
        actionPause_on_match = new QAction(mainWindow);
        actionPause_on_match->setObjectName(QString::fromUtf8("actionPause_on_match"));
        actionPause_on_match->setCheckable(true);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/images/PauseOnLoop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause_on_match->setIcon(icon4);
        actionStop = new QAction(mainWindow);
        actionStop->setObjectName(QString::fromUtf8("actionStop"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/images/Stop1NormalYellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionStop->setIcon(icon5);
        actionDump_the_memory = new QAction(mainWindow);
        actionDump_the_memory->setObjectName(QString::fromUtf8("actionDump_the_memory"));
        actionPause_when_a_loop_hypothesis_is_rejected = new QAction(mainWindow);
        actionPause_when_a_loop_hypothesis_is_rejected->setObjectName(QString::fromUtf8("actionPause_when_a_loop_hypothesis_is_rejected"));
        actionPause_when_a_loop_hypothesis_is_rejected->setCheckable(true);
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/images/PauseLoopRejected.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause_when_a_loop_hypothesis_is_rejected->setIcon(icon6);
        actionClear_cache = new QAction(mainWindow);
        actionClear_cache->setObjectName(QString::fromUtf8("actionClear_cache"));
        actionAuto_screen_capture = new QAction(mainWindow);
        actionAuto_screen_capture->setObjectName(QString::fromUtf8("actionAuto_screen_capture"));
        actionAuto_screen_capture->setCheckable(true);
        actionDump_the_prediction_matrix = new QAction(mainWindow);
        actionDump_the_prediction_matrix->setObjectName(QString::fromUtf8("actionDump_the_prediction_matrix"));
        actionGenerate_map = new QAction(mainWindow);
        actionGenerate_map->setObjectName(QString::fromUtf8("actionGenerate_map"));
        actionDelete_memory = new QAction(mainWindow);
        actionDelete_memory->setObjectName(QString::fromUtf8("actionDelete_memory"));
        actionOpen_working_directory = new QAction(mainWindow);
        actionOpen_working_directory->setObjectName(QString::fromUtf8("actionOpen_working_directory"));
        action16_9 = new QAction(mainWindow);
        action16_9->setObjectName(QString::fromUtf8("action16_9"));
        action16_10 = new QAction(mainWindow);
        action16_10->setObjectName(QString::fromUtf8("action16_10"));
        action4_3 = new QAction(mainWindow);
        action4_3->setObjectName(QString::fromUtf8("action4_3"));
        action360p = new QAction(mainWindow);
        action360p->setObjectName(QString::fromUtf8("action360p"));
        action480p = new QAction(mainWindow);
        action480p->setObjectName(QString::fromUtf8("action480p"));
        action720p = new QAction(mainWindow);
        action720p->setObjectName(QString::fromUtf8("action720p"));
        action1080p = new QAction(mainWindow);
        action1080p->setObjectName(QString::fromUtf8("action1080p"));
        action240p = new QAction(mainWindow);
        action240p->setObjectName(QString::fromUtf8("action240p"));
        actionPrint_loop_closure_IDs_to_console = new QAction(mainWindow);
        actionPrint_loop_closure_IDs_to_console->setObjectName(QString::fromUtf8("actionPrint_loop_closure_IDs_to_console"));
        actionSave_point_cloud = new QAction(mainWindow);
        actionSave_point_cloud->setObjectName(QString::fromUtf8("actionSave_point_cloud"));
        actionDownload_all_clouds = new QAction(mainWindow);
        actionDownload_all_clouds->setObjectName(QString::fromUtf8("actionDownload_all_clouds"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/images/view-refresh.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionDownload_all_clouds->setIcon(icon7);
        actionPause_on_local_loop_detection = new QAction(mainWindow);
        actionPause_on_local_loop_detection->setObjectName(QString::fromUtf8("actionPause_on_local_loop_detection"));
        actionPause_on_local_loop_detection->setCheckable(true);
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/images/PauseOnLocalLoop.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionPause_on_local_loop_detection->setIcon(icon8);
        actionSLAM_mode = new QAction(mainWindow);
        actionSLAM_mode->setObjectName(QString::fromUtf8("actionSLAM_mode"));
        actionSLAM_mode->setCheckable(true);
        actionLocalization_mode = new QAction(mainWindow);
        actionLocalization_mode->setObjectName(QString::fromUtf8("actionLocalization_mode"));
        actionLocalization_mode->setCheckable(true);
        actionReset_Odometry = new QAction(mainWindow);
        actionReset_Odometry->setObjectName(QString::fromUtf8("actionReset_Odometry"));
        actionView_high_res_point_cloud = new QAction(mainWindow);
        actionView_high_res_point_cloud->setObjectName(QString::fromUtf8("actionView_high_res_point_cloud"));
        actionTrigger_a_new_map = new QAction(mainWindow);
        actionTrigger_a_new_map->setObjectName(QString::fromUtf8("actionTrigger_a_new_map"));
        actionDownload_graph = new QAction(mainWindow);
        actionDownload_graph->setObjectName(QString::fromUtf8("actionDownload_graph"));
        actionScreenshot = new QAction(mainWindow);
        actionScreenshot->setObjectName(QString::fromUtf8("actionScreenshot"));
        actionOpenNI_PCL = new QAction(mainWindow);
        actionOpenNI_PCL->setObjectName(QString::fromUtf8("actionOpenNI_PCL"));
        actionOpenNI_PCL->setCheckable(true);
        actionFreenect = new QAction(mainWindow);
        actionFreenect->setObjectName(QString::fromUtf8("actionFreenect"));
        actionFreenect->setCheckable(true);
        actionOpenNI_CV = new QAction(mainWindow);
        actionOpenNI_CV->setObjectName(QString::fromUtf8("actionOpenNI_CV"));
        actionOpenNI_CV->setCheckable(true);
        actionOpenNI_CV_ASUS = new QAction(mainWindow);
        actionOpenNI_CV_ASUS->setObjectName(QString::fromUtf8("actionOpenNI_CV_ASUS"));
        actionOpenNI_CV_ASUS->setCheckable(true);
        actionOpenNI2 = new QAction(mainWindow);
        actionOpenNI2->setObjectName(QString::fromUtf8("actionOpenNI2"));
        actionOpenNI2->setCheckable(true);
        actionOpenNI_PCL_ASUS = new QAction(mainWindow);
        actionOpenNI_PCL_ASUS->setObjectName(QString::fromUtf8("actionOpenNI_PCL_ASUS"));
        actionOpenNI_PCL_ASUS->setCheckable(true);
        actionData_recorder = new QAction(mainWindow);
        actionData_recorder->setObjectName(QString::fromUtf8("actionData_recorder"));
        actionExport_2D_Grid_map_bmp_png = new QAction(mainWindow);
        actionExport_2D_Grid_map_bmp_png->setObjectName(QString::fromUtf8("actionExport_2D_Grid_map_bmp_png"));
        actionOpen_database = new QAction(mainWindow);
        actionOpen_database->setObjectName(QString::fromUtf8("actionOpen_database"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/images/document-open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen_database->setIcon(icon9);
        actionNew_database = new QAction(mainWindow);
        actionNew_database->setObjectName(QString::fromUtf8("actionNew_database"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/images/document-new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_database->setIcon(icon10);
        actionClose_database = new QAction(mainWindow);
        actionClose_database->setObjectName(QString::fromUtf8("actionClose_database"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/images/document-save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose_database->setIcon(icon11);
        actionEdit_database = new QAction(mainWindow);
        actionEdit_database->setObjectName(QString::fromUtf8("actionEdit_database"));
        actionPost_processing = new QAction(mainWindow);
        actionPost_processing->setObjectName(QString::fromUtf8("actionPost_processing"));
        actionSave_GUI_config = new QAction(mainWindow);
        actionSave_GUI_config->setObjectName(QString::fromUtf8("actionSave_GUI_config"));
        actionFreenect2 = new QAction(mainWindow);
        actionFreenect2->setObjectName(QString::fromUtf8("actionFreenect2"));
        actionFreenect2->setCheckable(true);
        actionStereoDC1394 = new QAction(mainWindow);
        actionStereoDC1394->setObjectName(QString::fromUtf8("actionStereoDC1394"));
        actionStereoDC1394->setCheckable(true);
        actionOpenNI2_kinect = new QAction(mainWindow);
        actionOpenNI2_kinect->setObjectName(QString::fromUtf8("actionOpenNI2_kinect"));
        actionOpenNI2_kinect->setCheckable(true);
        actionOpenNI2_sense = new QAction(mainWindow);
        actionOpenNI2_sense->setObjectName(QString::fromUtf8("actionOpenNI2_sense"));
        actionOpenNI2_sense->setCheckable(true);
        actionStereoFlyCapture2 = new QAction(mainWindow);
        actionStereoFlyCapture2->setObjectName(QString::fromUtf8("actionStereoFlyCapture2"));
        actionStereoFlyCapture2->setCheckable(true);
        actionSend_goal = new QAction(mainWindow);
        actionSend_goal->setObjectName(QString::fromUtf8("actionSend_goal"));
        actionCancel_goal = new QAction(mainWindow);
        actionCancel_goal->setObjectName(QString::fromUtf8("actionCancel_goal"));
        actionDefault_views = new QAction(mainWindow);
        actionDefault_views->setObjectName(QString::fromUtf8("actionDefault_views"));
        actionMore_options = new QAction(mainWindow);
        actionMore_options->setObjectName(QString::fromUtf8("actionMore_options"));
        actionMore_options->setCheckable(true);
        actionLabel_current_location = new QAction(mainWindow);
        actionLabel_current_location->setObjectName(QString::fromUtf8("actionLabel_current_location"));
        actionKITTI_format_txt = new QAction(mainWindow);
        actionKITTI_format_txt->setObjectName(QString::fromUtf8("actionKITTI_format_txt"));
        actionRGBD_SLAM_format_txt = new QAction(mainWindow);
        actionRGBD_SLAM_format_txt->setObjectName(QString::fromUtf8("actionRGBD_SLAM_format_txt"));
        actionTORO_graph = new QAction(mainWindow);
        actionTORO_graph->setObjectName(QString::fromUtf8("actionTORO_graph"));
        actionExport_cameras_in_Bundle_format_out = new QAction(mainWindow);
        actionExport_cameras_in_Bundle_format_out->setObjectName(QString::fromUtf8("actionExport_cameras_in_Bundle_format_out"));
        actionRaw_format_txt = new QAction(mainWindow);
        actionRaw_format_txt->setObjectName(QString::fromUtf8("actionRaw_format_txt"));
        actionG2o_g2o = new QAction(mainWindow);
        actionG2o_g2o->setObjectName(QString::fromUtf8("actionG2o_g2o"));
        actionCustom = new QAction(mainWindow);
        actionCustom->setObjectName(QString::fromUtf8("actionCustom"));
        actionSend_waypoints = new QAction(mainWindow);
        actionSend_waypoints->setObjectName(QString::fromUtf8("actionSend_waypoints"));
        actionUpdate_cache_from_database = new QAction(mainWindow);
        actionUpdate_cache_from_database->setObjectName(QString::fromUtf8("actionUpdate_cache_from_database"));
        actionExport_images_RGB_jpg_Depth_png = new QAction(mainWindow);
        actionExport_images_RGB_jpg_Depth_png->setObjectName(QString::fromUtf8("actionExport_images_RGB_jpg_Depth_png"));
        actionAnchor_clouds_to_ground_truth = new QAction(mainWindow);
        actionAnchor_clouds_to_ground_truth->setObjectName(QString::fromUtf8("actionAnchor_clouds_to_ground_truth"));
        actionAnchor_clouds_to_ground_truth->setCheckable(true);
        actionStereoZed = new QAction(mainWindow);
        actionStereoZed->setObjectName(QString::fromUtf8("actionStereoZed"));
        actionStereoZed->setCheckable(true);
        actionStereoUsb = new QAction(mainWindow);
        actionStereoUsb->setObjectName(QString::fromUtf8("actionStereoUsb"));
        actionStereoUsb->setCheckable(true);
        actionExport_octomap = new QAction(mainWindow);
        actionExport_octomap->setObjectName(QString::fromUtf8("actionExport_octomap"));
        actionRealSense_R200 = new QAction(mainWindow);
        actionRealSense_R200->setObjectName(QString::fromUtf8("actionRealSense_R200"));
        actionRealSense_R200->setCheckable(true);
        actionDepth_Calibration = new QAction(mainWindow);
        actionDepth_Calibration->setObjectName(QString::fromUtf8("actionDepth_Calibration"));
        actionRealSense_ZR300 = new QAction(mainWindow);
        actionRealSense_ZR300->setObjectName(QString::fromUtf8("actionRealSense_ZR300"));
        actionRealSense_ZR300->setCheckable(true);
        actionKinect_for_Windows_SDK_v2 = new QAction(mainWindow);
        actionKinect_for_Windows_SDK_v2->setObjectName(QString::fromUtf8("actionKinect_for_Windows_SDK_v2"));
        actionKinect_for_Windows_SDK_v2->setCheckable(true);
        actionKinect_for_Azure = new QAction(mainWindow);
        actionKinect_for_Azure->setObjectName(QString::fromUtf8("actionKinect_for_Azure"));
        actionKinect_for_Azure->setCheckable(true);
        actionRealSense2_D400 = new QAction(mainWindow);
        actionRealSense2_D400->setObjectName(QString::fromUtf8("actionRealSense2_D400"));
        actionRealSense2_D400->setCheckable(true);
        actionStereoTara = new QAction(mainWindow);
        actionStereoTara->setObjectName(QString::fromUtf8("actionStereoTara"));
        actionStereoTara->setCheckable(true);
        actionRGBD_SLAM_motion_capture_format_txt = new QAction(mainWindow);
        actionRGBD_SLAM_motion_capture_format_txt->setObjectName(QString::fromUtf8("actionRGBD_SLAM_motion_capture_format_txt"));
        actionRealSense2_T265 = new QAction(mainWindow);
        actionRealSense2_T265->setObjectName(QString::fromUtf8("actionRealSense2_T265"));
        actionRealSense2_T265->setCheckable(true);
        actionRealSense2_SR300 = new QAction(mainWindow);
        actionRealSense2_SR300->setObjectName(QString::fromUtf8("actionRealSense2_SR300"));
        actionRealSense2_SR300->setCheckable(true);
        actionMYNT_EYE_S_SDK = new QAction(mainWindow);
        actionMYNT_EYE_S_SDK->setObjectName(QString::fromUtf8("actionMYNT_EYE_S_SDK"));
        actionMYNT_EYE_S_SDK->setCheckable(true);
        actionRealSense2_L515 = new QAction(mainWindow);
        actionRealSense2_L515->setObjectName(QString::fromUtf8("actionRealSense2_L515"));
        actionRealSense2_L515->setCheckable(true);
        actionZed_Open_Capture = new QAction(mainWindow);
        actionZed_Open_Capture->setObjectName(QString::fromUtf8("actionZed_Open_Capture"));
        actionZed_Open_Capture->setCheckable(true);
        actionDepthAI_oakd = new QAction(mainWindow);
        actionDepthAI_oakd->setObjectName(QString::fromUtf8("actionDepthAI_oakd"));
        actionDepthAI_oakd->setCheckable(true);
        actionRGBD_SLAM_ID_format_txt = new QAction(mainWindow);
        actionRGBD_SLAM_ID_format_txt->setObjectName(QString::fromUtf8("actionRGBD_SLAM_ID_format_txt"));
        actionOpenNI2_orbbec = new QAction(mainWindow);
        actionOpenNI2_orbbec->setObjectName(QString::fromUtf8("actionOpenNI2_orbbec"));
        actionOpenNI2_orbbec->setCheckable(true);
        actionRemove_label = new QAction(mainWindow);
        actionRemove_label->setObjectName(QString::fromUtf8("actionRemove_label"));
        actionDepthAI_oakdlite = new QAction(mainWindow);
        actionDepthAI_oakdlite->setObjectName(QString::fromUtf8("actionDepthAI_oakdlite"));
        actionDepthAI_oakdlite->setCheckable(true);
        actionDepthAI_oakdpro = new QAction(mainWindow);
        actionDepthAI_oakdpro->setObjectName(QString::fromUtf8("actionDepthAI_oakdpro"));
        actionDepthAI_oakdpro->setCheckable(true);
        actionVelodyne_VLP_16 = new QAction(mainWindow);
        actionVelodyne_VLP_16->setObjectName(QString::fromUtf8("actionVelodyne_VLP_16"));
        actionVelodyne_VLP_16->setCheckable(true);
        actionXvisio_SeerSense = new QAction(mainWindow);
        actionXvisio_SeerSense->setObjectName(QString::fromUtf8("actionXvisio_SeerSense"));
        actionXvisio_SeerSense->setCheckable(true);
        widget_mainWindow = new QWidget(mainWindow);
        widget_mainWindow->setObjectName(QString::fromUtf8("widget_mainWindow"));
        mainWindow->setCentralWidget(widget_mainWindow);
        menubar = new QMenuBar(mainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1012, 22));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuExport_poses = new QMenu(menuFile);
        menuExport_poses->setObjectName(QString::fromUtf8("menuExport_poses"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        menuAdvanced = new QMenu(menuEdit);
        menuAdvanced->setObjectName(QString::fromUtf8("menuAdvanced"));
        menu6 = new QMenu(menubar);
        menu6->setObjectName(QString::fromUtf8("menu6"));
        menuProcess = new QMenu(menubar);
        menuProcess->setObjectName(QString::fromUtf8("menuProcess"));
        menuSelect_source = new QMenu(menuProcess);
        menuSelect_source->setObjectName(QString::fromUtf8("menuSelect_source"));
        menuRGB_D_camera = new QMenu(menuSelect_source);
        menuRGB_D_camera->setObjectName(QString::fromUtf8("menuRGB_D_camera"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/images/kinect_xbox_360.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRGB_D_camera->setIcon(icon12);
        menuKinect_for_Xbox_360 = new QMenu(menuRGB_D_camera);
        menuKinect_for_Xbox_360->setObjectName(QString::fromUtf8("menuKinect_for_Xbox_360"));
        menuKinect_for_Xbox_360->setIcon(icon12);
        menuXtion_PRO_LIVE = new QMenu(menuRGB_D_camera);
        menuXtion_PRO_LIVE->setObjectName(QString::fromUtf8("menuXtion_PRO_LIVE"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/images/xtion_pro_live.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuXtion_PRO_LIVE->setIcon(icon13);
        menuSense_3D_scanner = new QMenu(menuRGB_D_camera);
        menuSense_3D_scanner->setObjectName(QString::fromUtf8("menuSense_3D_scanner"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8(":/images/sense.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuSense_3D_scanner->setIcon(icon14);
        menuKinect_v2 = new QMenu(menuRGB_D_camera);
        menuKinect_v2->setObjectName(QString::fromUtf8("menuKinect_v2"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8(":/images/kinect_xbox_one.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuKinect_v2->setIcon(icon15);
        menuKinect_K4A = new QMenu(menuRGB_D_camera);
        menuKinect_K4A->setObjectName(QString::fromUtf8("menuKinect_K4A"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/images/k4a.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuKinect_K4A->setIcon(icon16);
        menuRealSense_R200 = new QMenu(menuRGB_D_camera);
        menuRealSense_R200->setObjectName(QString::fromUtf8("menuRealSense_R200"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/images/r200.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRealSense_R200->setIcon(icon17);
        menuRealSense_ZR300 = new QMenu(menuRGB_D_camera);
        menuRealSense_ZR300->setObjectName(QString::fromUtf8("menuRealSense_ZR300"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/images/zr300.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRealSense_ZR300->setIcon(icon18);
        menuRealSense_D435 = new QMenu(menuRGB_D_camera);
        menuRealSense_D435->setObjectName(QString::fromUtf8("menuRealSense_D435"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8(":/images/d435.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRealSense_D435->setIcon(icon19);
        menuRealSense_SR300 = new QMenu(menuRGB_D_camera);
        menuRealSense_SR300->setObjectName(QString::fromUtf8("menuRealSense_SR300"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8(":/images/sr300.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRealSense_SR300->setIcon(icon20);
        menuRealSense_L515 = new QMenu(menuRGB_D_camera);
        menuRealSense_L515->setObjectName(QString::fromUtf8("menuRealSense_L515"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8(":/images/l515.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRealSense_L515->setIcon(icon21);
        menuOrbbec_Astra = new QMenu(menuRGB_D_camera);
        menuOrbbec_Astra->setObjectName(QString::fromUtf8("menuOrbbec_Astra"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8(":/images/astra.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuOrbbec_Astra->setIcon(icon22);
        menuXvisio_SeerSense = new QMenu(menuRGB_D_camera);
        menuXvisio_SeerSense->setObjectName(QString::fromUtf8("menuXvisio_SeerSense"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8(":/images/seer_sense_DS80.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuXvisio_SeerSense->setIcon(icon23);
        menuStereo_camera = new QMenu(menuSelect_source);
        menuStereo_camera->setObjectName(QString::fromUtf8("menuStereo_camera"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8(":/images/bumblebee2.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuStereo_camera->setIcon(icon24);
        menuBumblebee2_2 = new QMenu(menuStereo_camera);
        menuBumblebee2_2->setObjectName(QString::fromUtf8("menuBumblebee2_2"));
        menuBumblebee2_2->setIcon(icon24);
        menuZed_camera = new QMenu(menuStereo_camera);
        menuZed_camera->setObjectName(QString::fromUtf8("menuZed_camera"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8(":/images/zed.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuZed_camera->setIcon(icon25);
        menuTara_Camera = new QMenu(menuStereo_camera);
        menuTara_Camera->setObjectName(QString::fromUtf8("menuTara_Camera"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8(":/images/tara.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuTara_Camera->setIcon(icon26);
        menuRealSense_T265 = new QMenu(menuStereo_camera);
        menuRealSense_T265->setObjectName(QString::fromUtf8("menuRealSense_T265"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8(":/images/t265.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuRealSense_T265->setIcon(icon27);
        menuMynt_Eye_S = new QMenu(menuStereo_camera);
        menuMynt_Eye_S->setObjectName(QString::fromUtf8("menuMynt_Eye_S"));
        QIcon icon28;
        icon28.addFile(QString::fromUtf8(":/images/mynteyes.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuMynt_Eye_S->setIcon(icon28);
        menuOAK_D = new QMenu(menuStereo_camera);
        menuOAK_D->setObjectName(QString::fromUtf8("menuOAK_D"));
        QIcon icon29;
        icon29.addFile(QString::fromUtf8(":/images/oakd.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuOAK_D->setIcon(icon29);
        menuOAK_D_Lite = new QMenu(menuStereo_camera);
        menuOAK_D_Lite->setObjectName(QString::fromUtf8("menuOAK_D_Lite"));
        QIcon icon30;
        icon30.addFile(QString::fromUtf8(":/images/oakd_lite.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuOAK_D_Lite->setIcon(icon30);
        menuOAK_D_Pro = new QMenu(menuStereo_camera);
        menuOAK_D_Pro->setObjectName(QString::fromUtf8("menuOAK_D_Pro"));
        QIcon icon31;
        icon31.addFile(QString::fromUtf8(":/images/oakdpro.png"), QSize(), QIcon::Normal, QIcon::Off);
        menuOAK_D_Pro->setIcon(icon31);
        menuLiDAR = new QMenu(menuSelect_source);
        menuLiDAR->setObjectName(QString::fromUtf8("menuLiDAR"));
        menuWindow = new QMenu(menubar);
        menuWindow->setObjectName(QString::fromUtf8("menuWindow"));
        menuShow_view = new QMenu(menuWindow);
        menuShow_view->setObjectName(QString::fromUtf8("menuShow_view"));
        menuAspect_ratio_2 = new QMenu(menuWindow);
        menuAspect_ratio_2->setObjectName(QString::fromUtf8("menuAspect_ratio_2"));
        menuTools = new QMenu(menubar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        mainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(mainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        mainWindow->setStatusBar(statusbar);
        dockWidget_posterior = new QDockWidget(mainWindow);
        dockWidget_posterior->setObjectName(QString::fromUtf8("dockWidget_posterior"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        horizontalLayout = new QHBoxLayout(dockWidgetContents);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        posteriorPlot = new UPlot(dockWidgetContents);
        posteriorPlot->setObjectName(QString::fromUtf8("posteriorPlot"));

        horizontalLayout->addWidget(posteriorPlot);

        dockWidget_posterior->setWidget(dockWidgetContents);
        mainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_posterior);
        toolBar = new QToolBar(mainWindow);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar);
        dockWidget_statsV2 = new QDockWidget(mainWindow);
        dockWidget_statsV2->setObjectName(QString::fromUtf8("dockWidget_statsV2"));
        dockWidget_statsV2->setFloating(true);
        dockWidgetContents_3 = new QWidget();
        dockWidgetContents_3->setObjectName(QString::fromUtf8("dockWidgetContents_3"));
        verticalLayout_8 = new QVBoxLayout(dockWidgetContents_3);
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        gridLayout->setVerticalSpacing(2);
        doubleSpinBox_stats_timeLimit = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox_stats_timeLimit->setObjectName(QString::fromUtf8("doubleSpinBox_stats_timeLimit"));
        doubleSpinBox_stats_timeLimit->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_stats_timeLimit->setDecimals(0);
        doubleSpinBox_stats_timeLimit->setMaximum(99999.000000000000000);
        doubleSpinBox_stats_timeLimit->setSingleStep(50.000000000000000);
        doubleSpinBox_stats_timeLimit->setValue(450.000000000000000);

        gridLayout->addWidget(doubleSpinBox_stats_timeLimit, 3, 1, 1, 1);

        label_source = new QLabel(dockWidgetContents_3);
        label_source->setObjectName(QString::fromUtf8("label_source"));

        gridLayout->addWidget(label_source, 0, 0, 1, 1);

        label_stats_source = new QLabel(dockWidgetContents_3);
        label_stats_source->setObjectName(QString::fromUtf8("label_stats_source"));
        label_stats_source->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_source, 0, 1, 1, 1);

        doubleSpinBox_stats_imgRate = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox_stats_imgRate->setObjectName(QString::fromUtf8("doubleSpinBox_stats_imgRate"));
        doubleSpinBox_stats_imgRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_stats_imgRate->setDecimals(1);
        doubleSpinBox_stats_imgRate->setMaximum(100.000000000000000);
        doubleSpinBox_stats_imgRate->setSingleStep(0.100000000000000);
        doubleSpinBox_stats_imgRate->setValue(2.000000000000000);

        gridLayout->addWidget(doubleSpinBox_stats_imgRate, 1, 1, 1, 1);

        label_45 = new QLabel(dockWidgetContents_3);
        label_45->setObjectName(QString::fromUtf8("label_45"));
        label_45->setWordWrap(true);

        gridLayout->addWidget(label_45, 4, 0, 1, 1);

        label_elapsedTime = new QLabel(dockWidgetContents_3);
        label_elapsedTime->setObjectName(QString::fromUtf8("label_elapsedTime"));
        label_elapsedTime->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_elapsedTime, 4, 1, 1, 1);

        label_20 = new QLabel(dockWidgetContents_3);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        gridLayout->addWidget(label_20, 5, 0, 1, 1);

        label_stats_imageNumber = new QLabel(dockWidgetContents_3);
        label_stats_imageNumber->setObjectName(QString::fromUtf8("label_stats_imageNumber"));
        label_stats_imageNumber->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_imageNumber, 5, 1, 1, 1);

        label_12 = new QLabel(dockWidgetContents_3);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout->addWidget(label_12, 6, 0, 1, 1);

        label_stats_loopClosuresDetected = new QLabel(dockWidgetContents_3);
        label_stats_loopClosuresDetected->setObjectName(QString::fromUtf8("label_stats_loopClosuresDetected"));
        label_stats_loopClosuresDetected->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_loopClosuresDetected, 6, 1, 1, 1);

        label_38 = new QLabel(dockWidgetContents_3);
        label_38->setObjectName(QString::fromUtf8("label_38"));

        gridLayout->addWidget(label_38, 7, 0, 1, 1);

        label_stats_loopClosuresReactivatedDetected = new QLabel(dockWidgetContents_3);
        label_stats_loopClosuresReactivatedDetected->setObjectName(QString::fromUtf8("label_stats_loopClosuresReactivatedDetected"));
        label_stats_loopClosuresReactivatedDetected->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_loopClosuresReactivatedDetected, 7, 1, 1, 1);

        label_15 = new QLabel(dockWidgetContents_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout->addWidget(label_15, 8, 0, 1, 1);

        label_stats_loopClosuresRejected = new QLabel(dockWidgetContents_3);
        label_stats_loopClosuresRejected->setObjectName(QString::fromUtf8("label_stats_loopClosuresRejected"));
        label_stats_loopClosuresRejected->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_stats_loopClosuresRejected, 8, 1, 1, 1);

        doubleSpinBox_stats_imgRate_label = new QLabel(dockWidgetContents_3);
        doubleSpinBox_stats_imgRate_label->setObjectName(QString::fromUtf8("doubleSpinBox_stats_imgRate_label"));

        gridLayout->addWidget(doubleSpinBox_stats_imgRate_label, 1, 0, 1, 1);

        label_timeLimit = new QLabel(dockWidgetContents_3);
        label_timeLimit->setObjectName(QString::fromUtf8("label_timeLimit"));
        label_timeLimit->setWordWrap(true);

        gridLayout->addWidget(label_timeLimit, 3, 0, 1, 1);

        doubleSpinBox_stats_detectionRate = new QDoubleSpinBox(dockWidgetContents_3);
        doubleSpinBox_stats_detectionRate->setObjectName(QString::fromUtf8("doubleSpinBox_stats_detectionRate"));
        doubleSpinBox_stats_detectionRate->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        doubleSpinBox_stats_detectionRate->setDecimals(1);
        doubleSpinBox_stats_detectionRate->setMaximum(100.000000000000000);
        doubleSpinBox_stats_detectionRate->setSingleStep(0.100000000000000);
        doubleSpinBox_stats_detectionRate->setValue(2.000000000000000);

        gridLayout->addWidget(doubleSpinBox_stats_detectionRate, 2, 1, 1, 1);

        doubleSpinBox_stats_imgRate_label_2 = new QLabel(dockWidgetContents_3);
        doubleSpinBox_stats_imgRate_label_2->setObjectName(QString::fromUtf8("doubleSpinBox_stats_imgRate_label_2"));

        gridLayout->addWidget(doubleSpinBox_stats_imgRate_label_2, 2, 0, 1, 1);

        gridLayout->setColumnStretch(0, 10);

        verticalLayout_8->addLayout(gridLayout);

        statsToolBox = new rtabmap::StatsToolBox(dockWidgetContents_3);
        statsToolBox->setObjectName(QString::fromUtf8("statsToolBox"));

        verticalLayout_8->addWidget(statsToolBox);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);

        dockWidget_statsV2->setWidget(dockWidgetContents_3);
        mainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_statsV2);
        dockWidget_likelihood = new QDockWidget(mainWindow);
        dockWidget_likelihood->setObjectName(QString::fromUtf8("dockWidget_likelihood"));
        dockWidget_likelihood->setFloating(false);
        dockWidgetContents_4 = new QWidget();
        dockWidgetContents_4->setObjectName(QString::fromUtf8("dockWidgetContents_4"));
        verticalLayout_6 = new QVBoxLayout(dockWidgetContents_4);
        verticalLayout_6->setSpacing(0);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        likelihoodPlot = new UPlot(dockWidgetContents_4);
        likelihoodPlot->setObjectName(QString::fromUtf8("likelihoodPlot"));

        verticalLayout_6->addWidget(likelihoodPlot);

        dockWidget_likelihood->setWidget(dockWidgetContents_4);
        mainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_likelihood);
        dockWidget_console = new QDockWidget(mainWindow);
        dockWidget_console->setObjectName(QString::fromUtf8("dockWidget_console"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QString::fromUtf8("dockWidgetContents_2"));
        verticalLayout_5 = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout_5->setSpacing(0);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        widget_console = new rtabmap::ConsoleWidget(dockWidgetContents_2);
        widget_console->setObjectName(QString::fromUtf8("widget_console"));

        verticalLayout_5->addWidget(widget_console);

        dockWidget_console->setWidget(dockWidgetContents_2);
        mainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_console);
        dockWidget_rawlikelihood = new QDockWidget(mainWindow);
        dockWidget_rawlikelihood->setObjectName(QString::fromUtf8("dockWidget_rawlikelihood"));
        dockWidgetContents_6 = new QWidget();
        dockWidgetContents_6->setObjectName(QString::fromUtf8("dockWidgetContents_6"));
        verticalLayout_4 = new QVBoxLayout(dockWidgetContents_6);
        verticalLayout_4->setSpacing(0);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        rawLikelihoodPlot = new UPlot(dockWidgetContents_6);
        rawLikelihoodPlot->setObjectName(QString::fromUtf8("rawLikelihoodPlot"));

        verticalLayout_4->addWidget(rawLikelihoodPlot);

        dockWidget_rawlikelihood->setWidget(dockWidgetContents_6);
        mainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_rawlikelihood);
        dockWidget_cloudViewer = new QDockWidget(mainWindow);
        dockWidget_cloudViewer->setObjectName(QString::fromUtf8("dockWidget_cloudViewer"));
        layout_cloudViewer = new QWidget();
        layout_cloudViewer->setObjectName(QString::fromUtf8("layout_cloudViewer"));
        verticalLayout_3 = new QVBoxLayout(layout_cloudViewer);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        dockWidget_cloudViewer->setWidget(layout_cloudViewer);
        mainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_cloudViewer);
        dockWidget_loopClosureViewer = new QDockWidget(mainWindow);
        dockWidget_loopClosureViewer->setObjectName(QString::fromUtf8("dockWidget_loopClosureViewer"));
        layout_loopClosureViewer = new QWidget();
        layout_loopClosureViewer->setObjectName(QString::fromUtf8("layout_loopClosureViewer"));
        verticalLayout_7 = new QVBoxLayout(layout_loopClosureViewer);
        verticalLayout_7->setSpacing(0);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        dockWidget_loopClosureViewer->setWidget(layout_loopClosureViewer);
        mainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_loopClosureViewer);
        dockWidget_mapVisibility = new QDockWidget(mainWindow);
        dockWidget_mapVisibility->setObjectName(QString::fromUtf8("dockWidget_mapVisibility"));
        dockWidget_mapVisibility->setFloating(true);
        dockWidgetContents_8 = new QWidget();
        dockWidgetContents_8->setObjectName(QString::fromUtf8("dockWidgetContents_8"));
        verticalLayout_9 = new QVBoxLayout(dockWidgetContents_8);
        verticalLayout_9->setSpacing(0);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        widget_mapVisibility = new rtabmap::MapVisibilityWidget(dockWidgetContents_8);
        widget_mapVisibility->setObjectName(QString::fromUtf8("widget_mapVisibility"));

        verticalLayout_9->addWidget(widget_mapVisibility);

        dockWidget_mapVisibility->setWidget(dockWidgetContents_8);
        mainWindow->addDockWidget(Qt::BottomDockWidgetArea, dockWidget_mapVisibility);
        dockWidget_graphViewer = new QDockWidget(mainWindow);
        dockWidget_graphViewer->setObjectName(QString::fromUtf8("dockWidget_graphViewer"));
        dockWidgetContents_9 = new QWidget();
        dockWidgetContents_9->setObjectName(QString::fromUtf8("dockWidgetContents_9"));
        verticalLayout_10 = new QVBoxLayout(dockWidgetContents_9);
        verticalLayout_10->setSpacing(0);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        graphicsView_graphView = new rtabmap::GraphViewer(dockWidgetContents_9);
        graphicsView_graphView->setObjectName(QString::fromUtf8("graphicsView_graphView"));

        verticalLayout_10->addWidget(graphicsView_graphView);

        dockWidget_graphViewer->setWidget(dockWidgetContents_9);
        mainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_graphViewer);
        dockWidget_imageView = new QDockWidget(mainWindow);
        dockWidget_imageView->setObjectName(QString::fromUtf8("dockWidget_imageView"));
        dockWidget_imageView->setAllowedAreas(Qt::AllDockWidgetAreas);
        layout_imageview = new QWidget();
        layout_imageview->setObjectName(QString::fromUtf8("layout_imageview"));
        horizontalLayout_2 = new QHBoxLayout(layout_imageview);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_refId = new QLabel(layout_imageview);
        label_refId->setObjectName(QString::fromUtf8("label_refId"));
        label_refId->setMinimumSize(QSize(0, 18));
        label_refId->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(label_refId);

        imageView_source = new rtabmap::ImageView(layout_imageview);
        imageView_source->setObjectName(QString::fromUtf8("imageView_source"));

        verticalLayout_2->addWidget(imageView_source);

        verticalLayout_2->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label_matchId = new QLabel(layout_imageview);
        label_matchId->setObjectName(QString::fromUtf8("label_matchId"));
        label_matchId->setMinimumSize(QSize(0, 18));
        label_matchId->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_matchId);

        imageView_loopClosure = new rtabmap::ImageView(layout_imageview);
        imageView_loopClosure->setObjectName(QString::fromUtf8("imageView_loopClosure"));

        verticalLayout->addWidget(imageView_loopClosure);

        verticalLayout->setStretch(1, 1);

        horizontalLayout_2->addLayout(verticalLayout);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        dockWidget_imageView->setWidget(layout_imageview);
        mainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_imageView);
        dockWidget_odometry = new QDockWidget(mainWindow);
        dockWidget_odometry->setObjectName(QString::fromUtf8("dockWidget_odometry"));
        dockWidgetContents_10 = new QWidget();
        dockWidgetContents_10->setObjectName(QString::fromUtf8("dockWidgetContents_10"));
        verticalLayout_11 = new QVBoxLayout(dockWidgetContents_10);
        verticalLayout_11->setSpacing(0);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        imageView_odometry = new rtabmap::ImageView(dockWidgetContents_10);
        imageView_odometry->setObjectName(QString::fromUtf8("imageView_odometry"));

        verticalLayout_11->addWidget(imageView_odometry);

        dockWidget_odometry->setWidget(dockWidgetContents_10);
        mainWindow->addDockWidget(Qt::LeftDockWidgetArea, dockWidget_odometry);
        toolBar_2 = new QToolBar(mainWindow);
        toolBar_2->setObjectName(QString::fromUtf8("toolBar_2"));
        mainWindow->addToolBar(Qt::TopToolBarArea, toolBar_2);
        dockWidget_multiSessionLoc = new QDockWidget(mainWindow);
        dockWidget_multiSessionLoc->setObjectName(QString::fromUtf8("dockWidget_multiSessionLoc"));
        layout_multiSessionLoc = new QWidget();
        layout_multiSessionLoc->setObjectName(QString::fromUtf8("layout_multiSessionLoc"));
        verticalLayout_12 = new QVBoxLayout(layout_multiSessionLoc);
        verticalLayout_12->setSpacing(0);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        dockWidget_multiSessionLoc->setWidget(layout_multiSessionLoc);
        mainWindow->addDockWidget(Qt::RightDockWidgetArea, dockWidget_multiSessionLoc);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuProcess->menuAction());
        menubar->addAction(menuTools->menuAction());
        menubar->addAction(menuWindow->menuAction());
        menubar->addAction(menu6->menuAction());
        menuFile->addAction(actionNew_database);
        menuFile->addAction(actionOpen_database);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_GUI_config);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_point_cloud);
        menuFile->addAction(actionExport_2D_Grid_map_bmp_png);
        menuFile->addAction(actionExport_octomap);
        menuFile->addAction(menuExport_poses->menuAction());
        menuFile->addAction(actionExport_images_RGB_jpg_Depth_png);
        menuFile->addAction(actionExport_cameras_in_Bundle_format_out);
        menuFile->addAction(actionDepth_Calibration);
        menuFile->addSeparator();
        menuFile->addAction(actionClose_database);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuExport_poses->addAction(actionRaw_format_txt);
        menuExport_poses->addAction(actionRGBD_SLAM_format_txt);
        menuExport_poses->addAction(actionRGBD_SLAM_ID_format_txt);
        menuExport_poses->addAction(actionRGBD_SLAM_motion_capture_format_txt);
        menuExport_poses->addAction(actionKITTI_format_txt);
        menuExport_poses->addAction(actionTORO_graph);
        menuExport_poses->addAction(actionG2o_g2o);
        menuEdit->addAction(actionDownload_all_clouds);
        menuEdit->addAction(actionDownload_graph);
        menuEdit->addAction(actionUpdate_cache_from_database);
        menuEdit->addAction(actionAnchor_clouds_to_ground_truth);
        menuEdit->addAction(actionClear_cache);
        menuEdit->addSeparator();
        menuEdit->addAction(actionView_high_res_point_cloud);
        menuEdit->addSeparator();
        menuEdit->addAction(actionDelete_memory);
        menuEdit->addSeparator();
        menuEdit->addAction(menuAdvanced->menuAction());
        menuAdvanced->addAction(actionOpen_working_directory);
        menuAdvanced->addAction(actionDump_the_memory);
        menuAdvanced->addAction(actionDump_the_prediction_matrix);
        menuAdvanced->addAction(actionGenerate_map);
        menuAdvanced->addAction(actionPrint_loop_closure_IDs_to_console);
        menu6->addAction(actionHelp);
        menu6->addSeparator();
        menu6->addAction(actionAbout);
        menuProcess->addAction(menuSelect_source->menuAction());
        menuProcess->addSeparator();
        menuProcess->addAction(actionStart);
        menuProcess->addAction(actionPause);
        menuProcess->addAction(actionStop);
        menuProcess->addSeparator();
        menuProcess->addAction(actionPause_on_match);
        menuProcess->addAction(actionPause_when_a_loop_hypothesis_is_rejected);
        menuProcess->addAction(actionPause_on_local_loop_detection);
        menuProcess->addSeparator();
        menuProcess->addAction(actionSLAM_mode);
        menuProcess->addAction(actionLocalization_mode);
        menuProcess->addSeparator();
        menuProcess->addAction(actionReset_Odometry);
        menuProcess->addAction(actionTrigger_a_new_map);
        menuProcess->addSeparator();
        menuProcess->addAction(actionLabel_current_location);
        menuProcess->addAction(actionRemove_label);
        menuProcess->addAction(actionSend_waypoints);
        menuProcess->addAction(actionSend_goal);
        menuProcess->addAction(actionCancel_goal);
        menuSelect_source->addAction(menuRGB_D_camera->menuAction());
        menuSelect_source->addAction(menuStereo_camera->menuAction());
        menuSelect_source->addAction(menuLiDAR->menuAction());
        menuSelect_source->addAction(actionMore_options);
        menuRGB_D_camera->addAction(menuKinect_for_Xbox_360->menuAction());
        menuRGB_D_camera->addAction(menuXtion_PRO_LIVE->menuAction());
        menuRGB_D_camera->addAction(menuOrbbec_Astra->menuAction());
        menuRGB_D_camera->addAction(menuSense_3D_scanner->menuAction());
        menuRGB_D_camera->addAction(menuKinect_v2->menuAction());
        menuRGB_D_camera->addAction(menuKinect_K4A->menuAction());
        menuRGB_D_camera->addAction(menuRealSense_R200->menuAction());
        menuRGB_D_camera->addAction(menuRealSense_ZR300->menuAction());
        menuRGB_D_camera->addAction(menuRealSense_SR300->menuAction());
        menuRGB_D_camera->addAction(menuRealSense_D435->menuAction());
        menuRGB_D_camera->addAction(menuRealSense_L515->menuAction());
        menuRGB_D_camera->addAction(menuXvisio_SeerSense->menuAction());
        menuKinect_for_Xbox_360->addAction(actionFreenect);
        menuKinect_for_Xbox_360->addAction(actionOpenNI2_kinect);
        menuKinect_for_Xbox_360->addAction(actionOpenNI_PCL);
        menuKinect_for_Xbox_360->addAction(actionOpenNI_CV);
        menuXtion_PRO_LIVE->addAction(actionOpenNI2);
        menuXtion_PRO_LIVE->addAction(actionOpenNI_PCL_ASUS);
        menuXtion_PRO_LIVE->addAction(actionOpenNI_CV_ASUS);
        menuSense_3D_scanner->addAction(actionOpenNI2_sense);
        menuKinect_v2->addAction(actionFreenect2);
        menuKinect_v2->addAction(actionKinect_for_Windows_SDK_v2);
        menuKinect_K4A->addAction(actionKinect_for_Azure);
        menuRealSense_R200->addAction(actionRealSense_R200);
        menuRealSense_ZR300->addAction(actionRealSense_ZR300);
        menuRealSense_D435->addAction(actionRealSense2_D400);
        menuRealSense_SR300->addAction(actionRealSense2_SR300);
        menuRealSense_L515->addAction(actionRealSense2_L515);
        menuOrbbec_Astra->addAction(actionOpenNI2_orbbec);
        menuXvisio_SeerSense->addAction(actionXvisio_SeerSense);
        menuStereo_camera->addAction(menuBumblebee2_2->menuAction());
        menuStereo_camera->addAction(menuZed_camera->menuAction());
        menuStereo_camera->addAction(menuTara_Camera->menuAction());
        menuStereo_camera->addAction(menuRealSense_T265->menuAction());
        menuStereo_camera->addAction(menuMynt_Eye_S->menuAction());
        menuStereo_camera->addAction(menuOAK_D->menuAction());
        menuStereo_camera->addAction(menuOAK_D_Lite->menuAction());
        menuStereo_camera->addAction(menuOAK_D_Pro->menuAction());
        menuBumblebee2_2->addAction(actionStereoDC1394);
        menuBumblebee2_2->addAction(actionStereoFlyCapture2);
        menuZed_camera->addAction(actionStereoZed);
        menuZed_camera->addAction(actionZed_Open_Capture);
        menuZed_camera->addAction(actionStereoUsb);
        menuTara_Camera->addAction(actionStereoTara);
        menuRealSense_T265->addAction(actionRealSense2_T265);
        menuMynt_Eye_S->addAction(actionMYNT_EYE_S_SDK);
        menuOAK_D->addAction(actionDepthAI_oakd);
        menuOAK_D_Lite->addAction(actionDepthAI_oakdlite);
        menuOAK_D_Pro->addAction(actionDepthAI_oakdpro);
        menuLiDAR->addAction(actionVelodyne_VLP_16);
        menuWindow->addAction(menuShow_view->menuAction());
        menuWindow->addAction(actionDefault_views);
        menuWindow->addAction(actionScreenshot);
        menuWindow->addAction(actionAuto_screen_capture);
        menuWindow->addAction(menuAspect_ratio_2->menuAction());
        menuWindow->addSeparator();
        menuWindow->addAction(actionPreferences);
        menuShow_view->addSeparator();
        menuAspect_ratio_2->addAction(action16_9);
        menuAspect_ratio_2->addAction(action16_10);
        menuAspect_ratio_2->addAction(action4_3);
        menuAspect_ratio_2->addSeparator();
        menuAspect_ratio_2->addAction(action1080p);
        menuAspect_ratio_2->addAction(action720p);
        menuAspect_ratio_2->addAction(action480p);
        menuAspect_ratio_2->addAction(action360p);
        menuAspect_ratio_2->addAction(action240p);
        menuAspect_ratio_2->addSeparator();
        menuAspect_ratio_2->addAction(actionCustom);
        menuTools->addAction(actionEdit_database);
        menuTools->addSeparator();
        menuTools->addAction(actionData_recorder);
        menuTools->addSeparator();
        menuTools->addAction(actionPost_processing);
        toolBar->addAction(actionClose_database);
        toolBar->addAction(actionNew_database);
        toolBar->addAction(actionOpen_database);
        toolBar_2->addAction(actionDownload_all_clouds);
        toolBar_2->addAction(actionStart);
        toolBar_2->addAction(actionPause);
        toolBar_2->addAction(actionStop);

        retranslateUi(mainWindow);

        QMetaObject::connectSlotsByName(mainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *mainWindow)
    {
        mainWindow->setWindowTitle(QCoreApplication::translate("mainWindow", "RTAB-Map : Real-Time Appearance-Based Mapping", nullptr));
        actionExit->setText(QCoreApplication::translate("mainWindow", "Exit", nullptr));
        actionHelp->setText(QCoreApplication::translate("mainWindow", "Help", nullptr));
        actionAbout->setText(QCoreApplication::translate("mainWindow", "About...", nullptr));
        actionPreferences->setText(QCoreApplication::translate("mainWindow", "Preferences...", nullptr));
        actionStart->setText(QCoreApplication::translate("mainWindow", "Start", nullptr));
        actionPause->setText(QCoreApplication::translate("mainWindow", "Pause", nullptr));
#if QT_CONFIG(tooltip)
        actionPause->setToolTip(QCoreApplication::translate("mainWindow", "Pause", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPause_on_match->setText(QCoreApplication::translate("mainWindow", "Pause on loop closure detection", nullptr));
        actionStop->setText(QCoreApplication::translate("mainWindow", "Stop", nullptr));
        actionDump_the_memory->setText(QCoreApplication::translate("mainWindow", "Dump the memory", nullptr));
        actionPause_when_a_loop_hypothesis_is_rejected->setText(QCoreApplication::translate("mainWindow", "Pause on loop closure rejection", nullptr));
        actionClear_cache->setText(QCoreApplication::translate("mainWindow", "Clear the cache", nullptr));
        actionAuto_screen_capture->setText(QCoreApplication::translate("mainWindow", "Auto screen capture...", nullptr));
        actionDump_the_prediction_matrix->setText(QCoreApplication::translate("mainWindow", "Dump the prediction matrix", nullptr));
        actionGenerate_map->setText(QCoreApplication::translate("mainWindow", "Generate graph (*.dot)...", nullptr));
        actionDelete_memory->setText(QCoreApplication::translate("mainWindow", "Delete memory", nullptr));
        actionOpen_working_directory->setText(QCoreApplication::translate("mainWindow", "Show working directory in file browser", nullptr));
        action16_9->setText(QCoreApplication::translate("mainWindow", "16:9", nullptr));
        action16_10->setText(QCoreApplication::translate("mainWindow", "16:10", nullptr));
        action4_3->setText(QCoreApplication::translate("mainWindow", "4:3", nullptr));
        action360p->setText(QCoreApplication::translate("mainWindow", "360p", nullptr));
        action480p->setText(QCoreApplication::translate("mainWindow", "480p", nullptr));
        action720p->setText(QCoreApplication::translate("mainWindow", "720p", nullptr));
        action1080p->setText(QCoreApplication::translate("mainWindow", "1080p", nullptr));
        action240p->setText(QCoreApplication::translate("mainWindow", "240p", nullptr));
        actionPrint_loop_closure_IDs_to_console->setText(QCoreApplication::translate("mainWindow", "Print loop closure IDs to console", nullptr));
        actionSave_point_cloud->setText(QCoreApplication::translate("mainWindow", "Export 3D clouds (*.ply *.pcd *.obj)...", nullptr));
        actionDownload_all_clouds->setText(QCoreApplication::translate("mainWindow", "Download all clouds (update cache)", nullptr));
        actionPause_on_local_loop_detection->setText(QCoreApplication::translate("mainWindow", "Pause on local loop closure detection", nullptr));
        actionSLAM_mode->setText(QCoreApplication::translate("mainWindow", "Mapping", nullptr));
#if QT_CONFIG(tooltip)
        actionSLAM_mode->setToolTip(QCoreApplication::translate("mainWindow", "Simultaneous Localization And Mapping (SLAM)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLocalization_mode->setText(QCoreApplication::translate("mainWindow", "Localization", nullptr));
        actionReset_Odometry->setText(QCoreApplication::translate("mainWindow", "Reset Odometry", nullptr));
        actionView_high_res_point_cloud->setText(QCoreApplication::translate("mainWindow", "View point clouds...", nullptr));
        actionTrigger_a_new_map->setText(QCoreApplication::translate("mainWindow", "Trigger a new map", nullptr));
        actionDownload_graph->setText(QCoreApplication::translate("mainWindow", "Download graph only", nullptr));
        actionScreenshot->setText(QCoreApplication::translate("mainWindow", "Take a screenshot", nullptr));
        actionOpenNI_PCL->setText(QCoreApplication::translate("mainWindow", "OpenNI-PCL", nullptr));
        actionFreenect->setText(QCoreApplication::translate("mainWindow", "Freenect", nullptr));
        actionOpenNI_CV->setText(QCoreApplication::translate("mainWindow", "OpenNI-CV", nullptr));
        actionOpenNI_CV_ASUS->setText(QCoreApplication::translate("mainWindow", "OpenNI-CV-ASUS", nullptr));
        actionOpenNI2->setText(QCoreApplication::translate("mainWindow", "OpenNI2", nullptr));
        actionOpenNI_PCL_ASUS->setText(QCoreApplication::translate("mainWindow", "OpenNI-PCL", nullptr));
        actionData_recorder->setText(QCoreApplication::translate("mainWindow", "Data recorder...", nullptr));
        actionExport_2D_Grid_map_bmp_png->setText(QCoreApplication::translate("mainWindow", "Export 2D grid map (*.png *.bmp)...", nullptr));
        actionOpen_database->setText(QCoreApplication::translate("mainWindow", "Open database...", nullptr));
        actionNew_database->setText(QCoreApplication::translate("mainWindow", "New database...", nullptr));
        actionClose_database->setText(QCoreApplication::translate("mainWindow", "Close database", nullptr));
        actionEdit_database->setText(QCoreApplication::translate("mainWindow", "Edit database...", nullptr));
        actionPost_processing->setText(QCoreApplication::translate("mainWindow", "Post-processing...", nullptr));
        actionSave_GUI_config->setText(QCoreApplication::translate("mainWindow", "Save config", nullptr));
        actionFreenect2->setText(QCoreApplication::translate("mainWindow", "Freenect2", nullptr));
        actionStereoDC1394->setText(QCoreApplication::translate("mainWindow", "StereoDC1394", nullptr));
        actionOpenNI2_kinect->setText(QCoreApplication::translate("mainWindow", "OpenNI2", nullptr));
        actionOpenNI2_sense->setText(QCoreApplication::translate("mainWindow", "OpenNI2", nullptr));
        actionStereoFlyCapture2->setText(QCoreApplication::translate("mainWindow", "FlyCapture2", nullptr));
        actionSend_goal->setText(QCoreApplication::translate("mainWindow", "Send a goal...", nullptr));
        actionCancel_goal->setText(QCoreApplication::translate("mainWindow", "Cancel goal", nullptr));
        actionDefault_views->setText(QCoreApplication::translate("mainWindow", "Default views", nullptr));
        actionMore_options->setText(QCoreApplication::translate("mainWindow", "More Options...", nullptr));
        actionLabel_current_location->setText(QCoreApplication::translate("mainWindow", "Label current location...", nullptr));
        actionKITTI_format_txt->setText(QCoreApplication::translate("mainWindow", "KITTI format (*.txt)", nullptr));
#if QT_CONFIG(tooltip)
        actionKITTI_format_txt->setToolTip(QCoreApplication::translate("mainWindow", "KITTI (stamp + 12 values transform)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRGBD_SLAM_format_txt->setText(QCoreApplication::translate("mainWindow", "RGBD-SLAM format (*.txt)", nullptr));
#if QT_CONFIG(tooltip)
        actionRGBD_SLAM_format_txt->setToolTip(QCoreApplication::translate("mainWindow", "RGBD-SLAM (stamp tx ty tz qx qy qz qw)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionTORO_graph->setText(QCoreApplication::translate("mainWindow", "TORO (*.graph)", nullptr));
        actionExport_cameras_in_Bundle_format_out->setText(QCoreApplication::translate("mainWindow", "Export cameras in Bundler format (*.out)...", nullptr));
        actionRaw_format_txt->setText(QCoreApplication::translate("mainWindow", "Raw format (*.txt)", nullptr));
#if QT_CONFIG(tooltip)
        actionRaw_format_txt->setToolTip(QCoreApplication::translate("mainWindow", "Raw format (12 values transform)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionG2o_g2o->setText(QCoreApplication::translate("mainWindow", "g2o (*.g2o)", nullptr));
        actionCustom->setText(QCoreApplication::translate("mainWindow", "Custom...", nullptr));
        actionSend_waypoints->setText(QCoreApplication::translate("mainWindow", "Send waypoints...", nullptr));
        actionUpdate_cache_from_database->setText(QCoreApplication::translate("mainWindow", "Update cache from a local database copy...", nullptr));
        actionExport_images_RGB_jpg_Depth_png->setText(QCoreApplication::translate("mainWindow", "Export images (RGB=*.jpg Depth=*.png)...", nullptr));
        actionAnchor_clouds_to_ground_truth->setText(QCoreApplication::translate("mainWindow", "Anchor clouds to ground truth", nullptr));
        actionStereoZed->setText(QCoreApplication::translate("mainWindow", "Zed sdk", nullptr));
        actionStereoUsb->setText(QCoreApplication::translate("mainWindow", "Stereo Usb Camera", nullptr));
        actionExport_octomap->setText(QCoreApplication::translate("mainWindow", "Export octomap...", nullptr));
        actionRealSense_R200->setText(QCoreApplication::translate("mainWindow", "RealSense", nullptr));
        actionDepth_Calibration->setText(QCoreApplication::translate("mainWindow", "Depth calibration...", nullptr));
        actionRealSense_ZR300->setText(QCoreApplication::translate("mainWindow", "RealSense", nullptr));
        actionKinect_for_Windows_SDK_v2->setText(QCoreApplication::translate("mainWindow", "Kinect for Windows SDK v2", nullptr));
        actionKinect_for_Azure->setText(QCoreApplication::translate("mainWindow", "Kinect for Azure", nullptr));
        actionRealSense2_D400->setText(QCoreApplication::translate("mainWindow", "RealSense2", nullptr));
        actionStereoTara->setText(QCoreApplication::translate("mainWindow", "Tara Stereo USB Camera", nullptr));
        actionRGBD_SLAM_motion_capture_format_txt->setText(QCoreApplication::translate("mainWindow", "RGBD-SLAM motion capture format (*.txt)", nullptr));
#if QT_CONFIG(tooltip)
        actionRGBD_SLAM_motion_capture_format_txt->setToolTip(QCoreApplication::translate("mainWindow", "RGBD-SLAM (stamp tx ty tz qx qy qz qw)", nullptr));
#endif // QT_CONFIG(tooltip)
        actionRealSense2_T265->setText(QCoreApplication::translate("mainWindow", "RealSense2", nullptr));
        actionRealSense2_SR300->setText(QCoreApplication::translate("mainWindow", "RealSense2", nullptr));
        actionMYNT_EYE_S_SDK->setText(QCoreApplication::translate("mainWindow", "MYNT EYE S SDK", nullptr));
        actionRealSense2_L515->setText(QCoreApplication::translate("mainWindow", "RealSense2", nullptr));
        actionZed_Open_Capture->setText(QCoreApplication::translate("mainWindow", "Zed Open Capture", nullptr));
        actionDepthAI_oakd->setText(QCoreApplication::translate("mainWindow", "DepthAI", nullptr));
        actionRGBD_SLAM_ID_format_txt->setText(QCoreApplication::translate("mainWindow", "RGBD-SLAM + ID format (*.txt)", nullptr));
        actionOpenNI2_orbbec->setText(QCoreApplication::translate("mainWindow", "OpenNI2", nullptr));
        actionRemove_label->setText(QCoreApplication::translate("mainWindow", "Remove label...", nullptr));
        actionDepthAI_oakdlite->setText(QCoreApplication::translate("mainWindow", "Depth AI", nullptr));
        actionDepthAI_oakdpro->setText(QCoreApplication::translate("mainWindow", "Depth AI", nullptr));
        actionVelodyne_VLP_16->setText(QCoreApplication::translate("mainWindow", "Velodyne VLP-16", nullptr));
        actionXvisio_SeerSense->setText(QCoreApplication::translate("mainWindow", "Xvisio", nullptr));
        menuFile->setTitle(QCoreApplication::translate("mainWindow", "File", nullptr));
        menuExport_poses->setTitle(QCoreApplication::translate("mainWindow", "Export poses...", nullptr));
        menuEdit->setTitle(QCoreApplication::translate("mainWindow", " Edit", nullptr));
        menuAdvanced->setTitle(QCoreApplication::translate("mainWindow", "Advanced", nullptr));
        menu6->setTitle(QCoreApplication::translate("mainWindow", "?", nullptr));
        menuProcess->setTitle(QCoreApplication::translate("mainWindow", "Detection", nullptr));
        menuSelect_source->setTitle(QCoreApplication::translate("mainWindow", "Select source", nullptr));
        menuRGB_D_camera->setTitle(QCoreApplication::translate("mainWindow", "RGB-D camera", nullptr));
        menuKinect_for_Xbox_360->setTitle(QCoreApplication::translate("mainWindow", "Kinect", nullptr));
        menuXtion_PRO_LIVE->setTitle(QCoreApplication::translate("mainWindow", "Xtion PRO LIVE", nullptr));
        menuSense_3D_scanner->setTitle(QCoreApplication::translate("mainWindow", "Sense 3D scanner", nullptr));
        menuKinect_v2->setTitle(QCoreApplication::translate("mainWindow", "Kinect v2", nullptr));
        menuKinect_K4A->setTitle(QCoreApplication::translate("mainWindow", "Kinect for Azure", nullptr));
        menuRealSense_R200->setTitle(QCoreApplication::translate("mainWindow", "RealSense R200", nullptr));
        menuRealSense_ZR300->setTitle(QCoreApplication::translate("mainWindow", "RealSense ZR300", nullptr));
        menuRealSense_D435->setTitle(QCoreApplication::translate("mainWindow", "RealSense D400", nullptr));
        menuRealSense_SR300->setTitle(QCoreApplication::translate("mainWindow", "RealSense SR300", nullptr));
        menuRealSense_L515->setTitle(QCoreApplication::translate("mainWindow", "RealSense L515", nullptr));
        menuOrbbec_Astra->setTitle(QCoreApplication::translate("mainWindow", "Orbbec Astra", nullptr));
        menuXvisio_SeerSense->setTitle(QCoreApplication::translate("mainWindow", "Xvisio SeerSense", nullptr));
        menuStereo_camera->setTitle(QCoreApplication::translate("mainWindow", "Stereo camera", nullptr));
        menuBumblebee2_2->setTitle(QCoreApplication::translate("mainWindow", "Bumblebee2", nullptr));
        menuZed_camera->setTitle(QCoreApplication::translate("mainWindow", "Zed camera", nullptr));
        menuTara_Camera->setTitle(QCoreApplication::translate("mainWindow", "Tara Camera", nullptr));
        menuRealSense_T265->setTitle(QCoreApplication::translate("mainWindow", "RealSense T265", nullptr));
        menuMynt_Eye_S->setTitle(QCoreApplication::translate("mainWindow", "Mynt Eye S", nullptr));
        menuOAK_D->setTitle(QCoreApplication::translate("mainWindow", "OAK-D", nullptr));
        menuOAK_D_Lite->setTitle(QCoreApplication::translate("mainWindow", "OAK-D Lite", nullptr));
        menuOAK_D_Pro->setTitle(QCoreApplication::translate("mainWindow", "OAK-D Pro", nullptr));
        menuLiDAR->setTitle(QCoreApplication::translate("mainWindow", "LiDAR", nullptr));
        menuWindow->setTitle(QCoreApplication::translate("mainWindow", "Window", nullptr));
        menuShow_view->setTitle(QCoreApplication::translate("mainWindow", "Show view", nullptr));
        menuAspect_ratio_2->setTitle(QCoreApplication::translate("mainWindow", "Aspect ratio", nullptr));
        menuTools->setTitle(QCoreApplication::translate("mainWindow", "Tools", nullptr));
        dockWidget_posterior->setWindowTitle(QCoreApplication::translate("mainWindow", "A posteriori PDF", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("mainWindow", "toolBar", nullptr));
        dockWidget_statsV2->setWindowTitle(QCoreApplication::translate("mainWindow", "Statistics", nullptr));
        doubleSpinBox_stats_timeLimit->setSuffix(QCoreApplication::translate("mainWindow", " ms", nullptr));
        label_source->setText(QCoreApplication::translate("mainWindow", "Source", nullptr));
        label_stats_source->setText(QCoreApplication::translate("mainWindow", "Unknown", nullptr));
        doubleSpinBox_stats_imgRate->setSuffix(QCoreApplication::translate("mainWindow", " Hz", nullptr));
        label_45->setText(QCoreApplication::translate("mainWindow", "Elapsed time (hh:mm:ss)", nullptr));
        label_elapsedTime->setText(QCoreApplication::translate("mainWindow", "Unknown", nullptr));
        label_20->setText(QCoreApplication::translate("mainWindow", "Current image id [Map id]", nullptr));
        label_stats_imageNumber->setText(QCoreApplication::translate("mainWindow", "Unknown", nullptr));
        label_12->setText(QCoreApplication::translate("mainWindow", "Loop closures detected", nullptr));
        label_stats_loopClosuresDetected->setText(QCoreApplication::translate("mainWindow", "0", nullptr));
        label_38->setText(QCoreApplication::translate("mainWindow", "Loop closures detected \n"
"(only reactivated ones)", nullptr));
        label_stats_loopClosuresReactivatedDetected->setText(QCoreApplication::translate("mainWindow", "0", nullptr));
        label_15->setText(QCoreApplication::translate("mainWindow", "Loop closures rejected", nullptr));
        label_stats_loopClosuresRejected->setText(QCoreApplication::translate("mainWindow", "0", nullptr));
        doubleSpinBox_stats_imgRate_label->setText(QCoreApplication::translate("mainWindow", "Image rate", nullptr));
        label_timeLimit->setText(QCoreApplication::translate("mainWindow", "Time limit processing", nullptr));
        doubleSpinBox_stats_detectionRate->setSuffix(QCoreApplication::translate("mainWindow", " Hz", nullptr));
        doubleSpinBox_stats_imgRate_label_2->setText(QCoreApplication::translate("mainWindow", "RTAB-Map update rate", nullptr));
        dockWidget_likelihood->setWindowTitle(QCoreApplication::translate("mainWindow", "Likelihood", nullptr));
        dockWidget_console->setWindowTitle(QCoreApplication::translate("mainWindow", "Console", nullptr));
        dockWidget_rawlikelihood->setWindowTitle(QCoreApplication::translate("mainWindow", "Raw Likelihood", nullptr));
        dockWidget_cloudViewer->setWindowTitle(QCoreApplication::translate("mainWindow", "3D Map", nullptr));
        dockWidget_loopClosureViewer->setWindowTitle(QCoreApplication::translate("mainWindow", "3D Loop closure", nullptr));
        dockWidget_mapVisibility->setWindowTitle(QCoreApplication::translate("mainWindow", "Map visibility", nullptr));
        dockWidget_graphViewer->setWindowTitle(QCoreApplication::translate("mainWindow", "Graph view", nullptr));
        dockWidget_imageView->setWindowTitle(QCoreApplication::translate("mainWindow", "Loop closure detection", nullptr));
        label_refId->setText(QString());
        label_matchId->setText(QString());
        dockWidget_odometry->setWindowTitle(QCoreApplication::translate("mainWindow", "Odometry", nullptr));
        toolBar_2->setWindowTitle(QCoreApplication::translate("mainWindow", "toolBar_2", nullptr));
        dockWidget_multiSessionLoc->setWindowTitle(QCoreApplication::translate("mainWindow", "Multi-Session Localization", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mainWindow: public Ui_mainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
