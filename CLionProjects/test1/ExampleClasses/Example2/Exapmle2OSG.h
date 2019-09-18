//
// Created by tema on 17.09.2019.
//

#ifndef TEST1_EXAPMLE2OSG_H
#define TEST1_EXAPMLE2OSG_H
#include <osg/Geode>
#include <osg/Node>
#include <osgDB/ReaderWriter>

class Exapmle2OSG {
public:
    explicit Exapmle2OSG();
    int set3DElement();
private:
    osg::ref_ptr<osg::Node> m_root;
};


#endif //TEST1_EXAPMLE2OSG_H
