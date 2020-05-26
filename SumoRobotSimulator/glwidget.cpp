/****************************************************************************
**
** Copyright (C) 2016 The Qt Company Ltd.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the examples of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:BSD$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** BSD License Usage
** Alternatively, you may use this file under the terms of the BSD license
** as follows:
**
** "Redistribution and use in source and binary forms, with or without
** modification, are permitted provided that the following conditions are
** met:
**   * Redistributions of source code must retain the above copyright
**     notice, this list of conditions and the following disclaimer.
**   * Redistributions in binary form must reproduce the above copyright
**     notice, this list of conditions and the following disclaimer in
**     the documentation and/or other materials provided with the
**     distribution.
**   * Neither the name of The Qt Company Ltd nor the names of its
**     contributors may be used to endorse or promote products derived
**     from this software without specific prior written permission.
**
**
** THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
** "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
** LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
** A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
** OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
** SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
** LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
** DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
** THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
** (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
** OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE."
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include "glwidget.h"
#include "mainwindow.h"

//! [0]
GLWidget::GLWidget(QWidget *parent)
    : QOpenGLWidget(parent)
{
    QTimer *timer1 = new QTimer(this);
    connect(timer1, SIGNAL(timeout()), this, SLOT(update()));
    timer1->start(100);

}
//! [0]

//! [1]
void GLWidget::initializeGL(){
    glClearColor(0.8, 0, 0, 1); //sets a red background
    glMatrixMode(GL_MODELVIEW);


}

void GLWidget::paintGL(){

    int dohyoDiameter = 154;
    int dohyoBorder = 5;
    int scale = 2;
    int pixelDiameter = scale * dohyoDiameter;

    int num_segments = 100;
    float angle = 1;
    float move = 0.1;

    glPushMatrix();
    glColor3f(1,1,1);
    drawCircle(0,0,0.9,100);
    glColor3f(0,0,0);
    drawCircle(0,0,0.85,100);

    glPopMatrix();

    glColor3f(0,0,1);

    glBegin(GL_QUADS);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, 0.0f);
    glVertex2f(0.1f, -0.1f);
    glVertex2f(0.0f, -0.1f);
    glEnd();
   // glTranslatef(move,0,0);


    //glRotatef(angle,0,0,1);
    glFlush();

    //angle+=0.5;

}

void GLWidget::resizeGL(int w, int h){

}

void GLWidget::drawCircle(float cx, float cy, float r, int segmentsNumber){
    glBegin(GL_POLYGON);
    glLineWidth(1);
        for(int ii = 0; ii < segmentsNumber; ii++)
        {
            float theta = 2.0f * 3.1415926f * float(ii) / float(segmentsNumber);//get the current angle

            float x = r * cosf(theta);//calculate the x component
            float y = r * sinf(theta);//calculate the y component

            glVertex2f(x + cx, y + cy);//output vertex

        }
    glEnd();
}
