#ifndef SW_GLVIEWER_H
#define SW_GLVIEWER_H

#include"QGLViewer/qglviewer.h"

#include<list>
#include<vector>
#include<QObject>
#include<QMouseEvent>
#include<QMenu>
#include<QAction>
# include <QMenu>
#include <qcursor.h>
#include <qmap.h>
#include <math.h>
#include<QColor>
#include<QListWidgetItem>
#include <QImage>
#include<QKeyEvent>

#include<QVector2D>
#include<QVector3D>
#include"opencv2/opencv.hpp"
#include<QThread>


namespace SW{


class  GLViewer : public QGLViewer
{
    Q_OBJECT

public:

    GLViewer(QWidget *parent0=0, const QGLWidget *parent1=0, Qt::WFlags f = 0);
   // GLViewer(QWidget *parent=0, const char * name=0, Qt::WFlags f = 0);
    ~GLViewer();

    virtual void init();
    virtual void draw();
    virtual QString helpString();
    virtual void transform(){}

    virtual void mousePressEvent(QMouseEvent *e);
    virtual void mouseReleaseEvent(QMouseEvent *e);
    virtual void mouseMoveEvent(QMouseEvent *e);
    virtual void wheelEvent(QWheelEvent *e);

    virtual void keyPressEvent(QKeyEvent *e);


    void viewAll();


public:
    //draw world coordinates
    void drawAxises(double width, double length);

public slots:
    virtual void drawText(){}



signals:

};

}
#endif // SW_GLVIEWER_H
