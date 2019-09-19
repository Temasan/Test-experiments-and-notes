//
// Created by tema on 17.09.2019.
//

#include "Exapmle2OSG.h"
#include <osgDB/ReadFile>
#include <osgViewer/Viewer>
#include <osgWidget/Widget>

Exapmle2OSG::Exapmle2OSG() = default;

int Exapmle2OSG::set3DElement(){
    m_root = osgDB::readNodeFile("../data/Faucet LUMIER LM1808 N200416.3DS");
    osg::ref_ptr<osgViewer::View> view = new osgViewer::View;
    view->setSceneData(m_root);
    view->setUpViewInWindow(50, 50, 320, 240);
    osgViewer::CompositeViewer multiviewer;
    multiviewer.addView(view);
    return multiviewer.run();
}