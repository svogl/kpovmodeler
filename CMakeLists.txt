#cmake_minimum_required(VERSION 3.1)
#find_package (KDE4 REQUIRED)
#find_package (Freetype REQUIRED)
project(kpov-qt5)
cmake_minimum_required(VERSION 3.0)
set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
find_package (OpenGL REQUIRED)

##find_package(ECM REQUIRED NO_MODULE)
##set(CMAKE_MODULE_PATH ${ECM_MODULE_DIR})

find_package(Qt5 ${REQUIRED_QT_VERSION} CONFIG REQUIRED Core)


find_package(Freetype REQUIRED)
find_package(OpenGL REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5Widgets REQUIRED)
find_package(Qt5PrintSupport REQUIRED)
find_package(Qt5DBus REQUIRED)
find_package(Qt5Xml REQUIRED)

find_package(KF5Parts NO_MODULE)
find_package(KF5KIO REQUIRED)
find_package(KF5Archive REQUIRED)
find_package(ECM REQUIRED NO_MODULE)
find_package(KF5Config)
find_package(KF5IconThemes)
find_package(KF5I18n)
set(CMAKE_MODULE_PATH ${ECM_MODULE_PATH})
set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ECM_MODULE_PATH})
##set(CMAKE_MODULE_PATH ${CMAKE_MODULE_PATH} ${ECM_MODULE_PATH} ${ECM_KDE_MODULE_DIR})

#include(KDEInstallDirs)
#include(KDECMakeSettings)
#include(KDECompilerSettings)
include(FeatureSummary)
#include(ECMInstallIcons)

#include(KDEFrameworkCompilerSettings)

#add_subdirectory( pics )
#add_subdirectory( examples )
#add_subdirectory( library )

##MACRO_LOG_FEATURE(FREETYPE_FOUND "libfreetype" "FreeType lib is needed to build the kpovmodeler project"
add_feature_info(FREETYPE_FOUND "libfreetype" "FreeType lib is needed to build the kpovmodeler project"
"http://freetype.sf.net" FALSE "" "")

configure_file(config-kpovmodeler.h.cmake ${CMAKE_CURRENT_BINARY_DIR}/config-kpovmodeler.h )

include_directories(${FREETYPE_INCLUDE_DIR})
include_directories("/usr/include/freetype2")
#include_directories(kguibuilder/KConfigWidgets)
#include_directories(kguibuilder/KXmlGui)
#include_directories(kguibuilder/KConfigGui)
#include_directories(kguibuilder/KWidgetsAddons)
#include_directories(kguibuilder/KParts)
#LINK_DIRECTORIES(kguibuilder)
#add_definitions (-O0 -DQT3_SUPPORT -DQT3_SUPPORT_WARNINGS)
add_definitions (-O0 )

########### next target ###############

set(lkpovmodeler_LIB_SRCS
   kpovmodeleradaptator.cpp
   pmpart.cpp
   pmview.cpp
   pmshell.cpp
   pmobjectdrag.cpp
   pmtreeview.cpp
   pmmessage.cpp
   pmtreeviewitem.cpp
   pmerrordialog.cpp
   pminsertpopup.cpp
   pminserterrordialog.cpp
   pmglview.cpp
   pmrendermanager.cpp
   pmobjectselect.cpp
   pmrendermodesdialog.cpp
   pmpovrayrenderwidget.cpp
   pmpovraywidget.cpp
   pmpovrayoutputwidget.cpp
   pmsettingsdialog.cpp
   pmcolorsettings.cpp
   pmgridsettings.cpp
   pmlayoutsettings.cpp
   pmobjectlibrarysettings.cpp
   pmobjectsettings.cpp
   pmpluginsettings.cpp
   pmpovraysettings.cpp
   pmpreviewsettings.cpp
   pmopenglsettings.cpp
   pmdockwidget.cpp
   pmdockwidget_private.cpp
   pmviewlayoutmanager.cpp
   pmviewbase.cpp
   pmviewfactory.cpp
   pmunknownview.cpp
   pmdragwidget.cpp
   pmprototypemanager.cpp
   pmobject.cpp
   pmcompositeobject.cpp
   pmgraphicalobject.cpp
   pmsolidobject.cpp
   pmscene.cpp
   pmglobalsettings.cpp
   pmskysphere.cpp
   pmrainbow.cpp
   pmfog.cpp
   pmbox.cpp
   pmsphere.cpp
   pmblob.cpp
   pmblobsphere.cpp
   pmblobcylinder.cpp
   pmtext.cpp
   pmjuliafractal.cpp
   pmcylinder.cpp
   pmcone.cpp
   pmtorus.cpp
   pmplane.cpp
   pmpolynom.cpp
   pmdisc.cpp
   pmbicubicpatch.cpp
   pmtriangle.cpp
   pmlathe.cpp
   pmprism.cpp
   pmsor.cpp
   pmsqe.cpp
   pmheightfield.cpp
   pmheightfieldroam.cpp
   pmcomment.cpp
   pmraw.cpp
   pmnamedobject.cpp
   pmtranslate.cpp
   pmscale.cpp
   pmrotate.cpp
   pmpovraymatrix.cpp
   pmcsg.cpp
   pmcamera.cpp
   pmboundedby.cpp
   pmclippedby.cpp
   pmlight.cpp
   pmlookslike.cpp
   pmprojectedthrough.cpp
   pmtexturebase.cpp
   pmtexture.cpp
   pmpigment.cpp
   pmsolidcolor.cpp
   pmlistpattern.cpp
   pmquickcolor.cpp
   pmpattern.cpp
   pmblendmapmodifiers.cpp
   pmtexturemap.cpp
   pmnormal.cpp
   pmslope.cpp
   pmwarp.cpp
   pmfinish.cpp
   pminterior.cpp
   pmmedia.cpp
   pmmaterial.cpp
   pmmaterialmap.cpp
   pmdensity.cpp
   pmimagemap.cpp
   pmbumpmap.cpp
   pmisosurface.cpp
   pmradiosity.cpp
   pmglobalphotons.cpp
   pmphotons.cpp
   pmlightgroup.cpp
   pminteriortexture.cpp
   pmspheresweep.cpp
   pmmesh.cpp
   pmdetailobject.cpp
   pmdeclare.cpp
   pmobjectlink.cpp
   pmrecursiveobjectiterator.cpp
   pmaddcommand.cpp
   pmcommandmanager.cpp
   pmdatachangecommand.cpp
   pmdeletecommand.cpp
   pmmovecommand.cpp
   pmdialogview.cpp
   pmdialogeditbase.cpp
   pmgraphicalobjectedit.cpp
   pmnamedobjectedit.cpp
   pmsolidobjectedit.cpp
   pmskysphereedit.cpp
   pmglobalsettingsedit.cpp
   pmrainbowedit.cpp
   pmfogedit.cpp
   pmboxedit.cpp
   pmsphereedit.cpp
   pmblobedit.cpp
   pmblobsphereedit.cpp
   pmblobcylinderedit.cpp
   pmtextedit.cpp
   pmjuliafractaledit.cpp
   pmcylinderedit.cpp
   pmconeedit.cpp
   pmtorusedit.cpp
   pmplaneedit.cpp
   pmpolynomedit.cpp
   pmheightfieldedit.cpp
   pmlatheedit.cpp
   pmprismedit.cpp
   pmsoredit.cpp
   pmsqeedit.cpp
   pmdiscedit.cpp
   pmbicubicpatchedit.cpp
   pmtriangleedit.cpp
   pmcommentedit.cpp
   pmrawedit.cpp
   pmrotateedit.cpp
   pmscaleedit.cpp
   pmtranslateedit.cpp
   pmpovraymatrixedit.cpp
   pmcsgedit.cpp
   pmcameraedit.cpp
   pmlightedit.cpp
   pmboundedbyedit.cpp
   pmclippedbyedit.cpp
   pmlineedits.cpp
   pmvectorlistedit.cpp
   pmcoloredit.cpp
   pmlinkedit.cpp
   pmvectoredit.cpp
   pmpalettevalueedit.cpp
   pmformulalabel.cpp
   pmtexturebaseedit.cpp
   pmtextureedit.cpp
   pmpigmentedit.cpp
   pmsolidcoloredit.cpp
   pmlistpatternedit.cpp
   pmquickcoloredit.cpp
   pmpatternedit.cpp
   pmblendmapmodifiersedit.cpp
   pmimagemapedit.cpp
   pmtexturemapedit.cpp
   pmbumpmapedit.cpp
   pmmaterialmapedit.cpp
   pmnormaledit.cpp
   pmslopeedit.cpp
   pmfinishedit.cpp
   pmwarpedit.cpp
   pminterioredit.cpp
   pmmediaedit.cpp
   pmmaterialedit.cpp
   pmdensityedit.cpp
   pmdeclareedit.cpp
   pmobjectlinkedit.cpp
   pmisosurfaceedit.cpp
   pmradiosityedit.cpp
   pmglobalphotonsedit.cpp
   pmphotonsedit.cpp
   pmlightgroupedit.cpp
   pminteriortextureedit.cpp
   pmspheresweepedit.cpp
   pmmeshedit.cpp
   pmdetailobjectedit.cpp
   pmcontrolpoint.cpp
   pm3dcontrolpoint.cpp
   pm2dcontrolpoint.cpp
   pmsorcontrolpoint.cpp
   pmtranslatecontrolpoint.cpp
   pmrotatecontrolpoint.cpp
   pmscalecontrolpoint.cpp
   pmvectorcontrolpoint.cpp
   pmdistancecontrolpoint.cpp
   pmplanenormalcontrolpoint.cpp
   pmmemento.cpp
   pmmapmemento.cpp
   pmsplinememento.cpp
   pmprismmemento.cpp
   pmpalettevaluememento.cpp
   pmiomanager.cpp
   pmpovrayformat.cpp
   pmpovray31format.cpp
   pmpovray35format.cpp
   pmpovray31serialization.cpp
   pmpovray35serialization.cpp
   pmscanner.cpp
   pmparser.cpp
   pmxmlparser.cpp
   pmpovrayparser.cpp
   pmserializer.cpp
   pmoutputdevice.cpp
   pmxmlhelper.cpp
   pmfiledialog.cpp
   pmpalettevalue.cpp
   pmvector.cpp
   pmmath.cpp
   pmmatrix.cpp
   pmviewstructure.cpp
   pmline.cpp
   pmcolor.cpp
   pmpoint.cpp
   pmsymboltable.cpp
   pmactions.cpp
   pmsplinesegment.cpp
   pmsorsegment.cpp
   pmpolynomexponents.cpp
   pmvariant.cpp
   pmmetaobject.cpp
   pmenumproperty.cpp
   pmface.cpp
   pmrendermode.cpp
   pmresourcelocator.cpp
   pmtruetypecache.cpp
   pmdocumentationmap.cpp
   pminsertrulesystem.cpp
  pmlibrarymanager.cpp
  pmlibraryhandle.cpp
  pmlibraryhandleedit.cpp
  pmlibraryobject.cpp
  pmlibraryentrypreview.cpp
  pmlibrarybrowser.cpp
  pmlibraryiconview.cpp
  pmlibraryobjectsearch.cpp
   pmpluginmanager.cpp
  )


add_library(lkpovmodeler ${lkpovmodeler_LIB_SRCS})

target_link_libraries(lkpovmodeler ${FREETYPE_LIBRARIES} ${OPENGL_gl_LIBRARY} ${OPENGL_glu_LIBRARY}
KF5::Parts KF5::Archive KF5::KIOCore KF5::KIOFileWidgets KF5::KIOWidgets KF5::KIONTLM OpenGL ${X11_X11_LIB}
KF5::ConfigCore
KF5::ConfigGui
KF5::IconThemes
KF5::I18n
Qt5::Core Qt5::Gui Qt5::Widgets Qt5::DBus
)

set_target_properties(lkpovmodeler PROPERTIES VERSION 0.0.0 SOVERSION 0 )
install(TARGETS lkpovmodeler DESTINATION  $ENV{HOME}/.local/share/kpovmodeler )


########### next target ###############

set(kpovmodelerpart_PART_SRCS ${CMAKE_CURRENT_BINARY_DIR}/dummy.cpp )


file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/dummy.cpp "//autogenerated file by cmake\n")

add_library(kpovmodelerpart ${kpovmodelerpart_PART_SRCS})
target_link_libraries(kpovmodelerpart lkpovmodeler)
install(TARGETS kpovmodelerpart DESTINATION $ENV{HOME}/.local/share/kpovmodeler )


########### next target ###############

set( kpovmodeler_SRCS main.cpp )


add_executable(kpovmodeler ${kpovmodeler_SRCS} add-png-icons.qrc)

target_link_libraries(kpovmodeler Qt5::Core Qt5::Gui Qt5::Widgets lkpovmodeler)

install(TARGETS kpovmodeler DESTINATION  $ENV{HOME}/.local/share/kpovmodeler )


########### install files ###############

install( PROGRAMS kpovmodeler.desktop  DESTINATION  $ENV{HOME}/.local/share/kpovmodeler )
install( FILES kpovmodelerpart.desktop  DESTINATION  $ENV{HOME}/.local/share/kpovmodeler )
install( FILES kpovmodelershell.rc kpovmodelerui.rc kpovmodelerbrowser.rc
               povraydocmap.xml baseinsertrules.xml questionmark.png  DESTINATION  $ENV{HOME}/.local/share/kpovmodeler )

install( FILES org.kde.kpovmodeler.xml DESTINATION $ENV{HOME}/.local/share/kpovmodeler )


#install( DIRECTORY icons/ DESTINATION "povmodeler/icons" )
install( DIRECTORY examples/ DESTINATION $ENV{HOME}/.local/share/kpovmodeler/examples )
install( DIRECTORY library/ DESTINATION $ENV{HOME}/.local/share/kpovmodeler/library )


