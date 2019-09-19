//
// Created by tema on 17.09.2019.
//

#ifndef TEST1_EXAPMLE2OSG_H
#define TEST1_EXAPMLE2OSG_H
#include <osg/Geode>
#include <osg/Node>
#include <osgDB/ReaderWriter>
#include <osgWidget/Frame>
#include <memory>

class Exapmle2OSG {
public:
    explicit Exapmle2OSG();
    ~Exapmle2OSG();
    int set3DElement();
private:
    osg::ref_ptr<osg::Node> m_root;
    std::unique_ptr<osgWidget::Frame> m_wdgt;
    osg::DisplaySettings *ds;
};


#endif //TEST1_EXAPMLE2OSG_H
