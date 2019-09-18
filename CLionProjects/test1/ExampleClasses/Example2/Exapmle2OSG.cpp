//
// Created by tema on 17.09.2019.
//

#include "Exapmle2OSG.h"
#include <osgDB/ReadFile>
#include <osgViewer/Viewer>

Exapmle2OSG::Exapmle2OSG() = default;

int Exapmle2OSG::set3DElement(){
    m_root = osgDB::readNodeFile("../data/Faucet LUMIER LM1808 N200416.3DS");
    osgViewer::Viewer viewer;
    viewer.setSceneData(m_root.get());
    return viewer.run();
}