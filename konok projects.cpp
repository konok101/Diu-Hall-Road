#include <windows.h>
#include <GL/glut.h>
#ifdef __APPLE__
#else
#endif
#include <stdlib.h>
#include <stdio.h>
#include <GL/gl.h>
#include <math.h>
float p=-72.0;
float C=-72;
void init(void)
{
    glClearColor(1.0,1.0,1.0,0.0);
    glOrtho(-100,100,-100,100,-100,100);
}



void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);
    //

//for moving
       if(p<=100)   //moving limit with the display measurement
       p=p+0.015; //changing the object position for redisplaying

       else
       p=-100;    // For backing the object continuously
//
      if(C<=100)   //moving limit with the display measurement
       C=C+0.009; //changing the object position for redisplaying

       else
       C=-72;    // For backing the object continuously
    //
    //the sky
    glColor3f(0.57, 0.75, 0.95);
    glBegin(GL_QUADS);
    glVertex3f(-100, 0, 0.0);
    glVertex3f (-100, 100, 0.0);
    glColor3f(0.57, 0.84, 0.81);
    glVertex3f (100, 100, 0.0);
    glVertex3f(100, 0, 0);
    glEnd();
//circle the sun
    glColor3f(0.99, 0.34, 0.02);
    glBegin(GL_POLYGON);
    double radius = 7;
    double ori_x = 60;
    double ori_y = 80;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//1st cloud
  // cloud 1
    glColor3f(0.93, 0.98, 0.97);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = C+17;
     ori_y = 80;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
// cloud 2
    glColor3f(0.93, 0.98, 0.97);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = C;
     ori_y = 80;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//cloud 3
    glColor3f(0.93, 0.98, 0.97);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = C+7;
     ori_y = 85;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//cloud 4
    glColor3f(0.93, 0.98, 0.97);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = C+7;
     ori_y = 75;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
// 2nd cloud
      // cloud 1
    glColor3f(0.93, 0.98, 0.97);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -15;
     ori_y = 80;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
// cloud 2
    glColor3f(0.93, 0.98, 0.97);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -32;
     ori_y = 80;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//cloud 3
    glColor3f(0.93, 0.98, 0.97);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -25;
     ori_y = 85;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//cloud 4
    glColor3f(0.93, 0.98, 0.97);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -25;
     ori_y = 75;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();

//green field
    glColor3f(0.37, 0.97, 0.16);
    glBegin(GL_QUADS);
    glVertex3f(-100, 0, 0.0);
    glVertex3f (-100, 20, 0.0);
    glColor3f(0.41, 0.79, 0.28);
    glVertex3f (100, 30, 0.0);
    glVertex3f(100, 0, 0);
    glEnd();

// house 1
  // body
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-80, 5, 0.0);
    glVertex3f (-80, 60, 0.0);
    glVertex3f (-50, 60, 0.0);
    glVertex3f(-50, 5, 0);
    glEnd();
// window1
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-77, 50, 0.0);
    glVertex3f (-77, 57, 0.0);
    glVertex3f (-72, 57, 0.0);
    glVertex3f(-72, 50, 0);
    glEnd();
// window2
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-67, 50, 0.0);
    glVertex3f (-67, 57, 0.0);
    glVertex3f (-62, 57, 0.0);
    glVertex3f(-62, 50, 0);
    glEnd();
// window3
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-57, 50, 0.0);
    glVertex3f (-57, 57, 0.0);
    glVertex3f (-52, 57, 0.0);
    glVertex3f(-52, 50, 0);
    glEnd();

    // window4
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-77, 40, 0.0);
    glVertex3f (-77, 47, 0.0);
    glVertex3f (-72, 47, 0.0);
    glVertex3f(-72, 40, 0);
    glEnd();
// window5
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-67, 40, 0.0);
    glVertex3f (-67, 47, 0.0);
    glVertex3f (-62, 47, 0.0);
    glVertex3f(-62, 40, 0);
    glEnd();
// window6
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-57, 40, 0.0);
    glVertex3f (-57, 47, 0.0);
    glVertex3f (-52, 47, 0.0);
    glVertex3f(-52, 40, 0);
    glEnd();

    // window7
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-77, 30, 0.0);
    glVertex3f (-77, 37, 0.0);
    glVertex3f (-72, 37, 0.0);
    glVertex3f(-72, 30, 0);
    glEnd();
// window8
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-67, 30, 0.0);
    glVertex3f (-67, 37, 0.0);
    glVertex3f (-62, 37, 0.0);
    glVertex3f(-62, 30, 0);
    glEnd();
// window9
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-57, 30, 0.0);
    glVertex3f (-57, 37, 0.0);
    glVertex3f (-52, 37, 0.0);
    glVertex3f(-52, 30, 0);
    glEnd();
//

    // window10
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-77, 20, 0.0);
    glVertex3f (-77, 27, 0.0);
    glVertex3f (-72, 27, 0.0);
    glVertex3f(-72, 20, 0);
    glEnd();

// window11
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-77, 10, 0.0);
    glVertex3f (-77, 17, 0.0);
    glVertex3f (-72, 17, 0.0);
    glVertex3f(-72, 10, 0);
    glEnd();
// window12
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-57, 20, 0.0);
    glVertex3f (-57, 27, 0.0);
    glVertex3f (-52, 27, 0.0);
    glVertex3f(-52, 20, 0);
    glEnd();
//window13
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-57, 10, 0.0);
    glVertex3f (-57, 17, 0.0);
    glVertex3f (-52, 17, 0.0);
    glVertex3f(-52, 10, 0);
    glEnd();
//
// door of house  1
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-60, 5, 0.0);
    glVertex3f (-60, 28, 0.0);
    glVertex3f (-69, 28, 0.0);
    glVertex3f(-69, 5, 0);
    glEnd();
  //indoor
    glColor3f(0.75, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-61, 5, 0.0);
    glVertex3f (-61, 27, 0.0);
    glVertex3f (-68, 27, 0.0);
    glVertex3f(-68, 5, 0);
    glEnd();
// side wall
    glColor3f(0.77, 0.43, 0.02);
    glBegin(GL_QUADS);
    glVertex3f(-50, 5, 0.0);
    glVertex3f (-50, 60, 0.0);
    glVertex3f (-46, 55, 0.0);
    glVertex3f(-46, 5, 0);
    glEnd();

// house 3 roof
    glColor3f(0.76, 0.18, 0);
    glBegin(GL_QUADS);
    glVertex3f(-105, 55, 0.0);
    glVertex3f (-97, 62, 0.0);
    glVertex3f (-83, 62, 0.0);
    glVertex3f(-78, 55, 0);
    glEnd();
//  body
    glColor3f(0.99, 0.7, 0.16);
    glBegin(GL_QUADS);
    glVertex3f(-100, 5, 0.0);
    glVertex3f (-100, 55, 0.0);
    glVertex3f (-79, 55, 0.0);
    glVertex3f(-79, 5, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-100, 53, 0.0);
    glVertex3f (-100, 55, 0.0);
    glVertex3f (-79, 55, 0.0);
    glVertex3f(-79, 53, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-100, 35, 0.0);
    glVertex3f (-100, 37, 0.0);
    glVertex3f (-79, 37, 0.0);
    glVertex3f(-79, 35, 0);
    glEnd();
// window1
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-99, 37, 0.0);
    glVertex3f (-99, 53, 0.0);
    glVertex3f (-93.5, 53, 0.0);
    glVertex3f(-93.5, 37, 0);
    glEnd();
// inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-98.5, 37.7, 0.0);
    glVertex3f (-98.5, 52.2, 0.0);
    glVertex3f (-93.9, 52.2, 0.0);
    glVertex3f(-93.9, 37.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-97, 37.7, 0.0);
    glVertex3f (-97, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-95.5, 37.7, 0.0);
    glVertex3f (-95.5, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 41, 0.0);
    glVertex3f (-93.9, 41, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 45, 0.0);
    glVertex3f (-93.9, 45, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 49, 0.0);
    glVertex3f (-93.9, 49, 0.0);
    glEnd();
//window 4
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-99, 17, 0.0);
    glVertex3f (-99, 33, 0.0);
    glVertex3f (-93.5, 33, 0.0);
    glVertex3f(-93.5, 17, 0);
    glEnd();
// inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-98.5, 17.7, 0.0);
    glVertex3f (-98.5, 32.2, 0.0);
    glVertex3f (-93.9, 32.2, 0.0);
    glVertex3f(-93.9, 17.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-97, 17.7, 0.0);
    glVertex3f (-97, 32.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-95.5, 17.7, 0.0);
    glVertex3f (-95.5, 32.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 21, 0.0);
    glVertex3f (-93.9, 21, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 25, 0.0);
    glVertex3f (-93.9, 25, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 29, 0.0);
    glVertex3f (-93.9, 29, 0.0);
    glEnd();
//window2
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-92.5, 37, 0.0);
    glVertex3f (-92.5, 53, 0.0);
    glVertex3f (-86.5, 53, 0.0);
    glVertex3f(-86.5, 37, 0);
    glEnd();
//inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-91.9, 37.7, 0.0);
    glVertex3f (-91.9, 52.2, 0.0);
    glVertex3f (-87, 52.2, 0.0);
    glVertex3f(-87, 37.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-90.3, 37.7, 0.0);
    glVertex3f (-90.3, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-88.8, 37.7, 0.0);
    glVertex3f (-88.8, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-91.9, 41, 0.0);
    glVertex3f (-87, 41, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-91.9, 45, 0.0);
    glVertex3f (-87, 45, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-91.9, 49, 0.0);
    glVertex3f (-87, 49, 0.0);
    glEnd();

//window3
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-85.5, 37, 0.0);
    glVertex3f (-85.5, 53, 0.0);
    glVertex3f (-80, 53, 0.0);
    glVertex3f(-80, 37, 0);
    glEnd();
// inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-84.9, 37.7, 0.0);
    glVertex3f (-84.9, 52.2, 0.0);
    glVertex3f (-80.4, 52.2, 0.0);
    glVertex3f(-80.4, 37.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-83.4, 37.7, 0.0);
    glVertex3f (-83.4, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-81.9, 37.7, 0.0);
    glVertex3f (-81.9, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 41, 0.0);
    glVertex3f (-80.4, 41, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 45, 0.0);
    glVertex3f (-80.4, 45, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 49, 0.0);
    glVertex3f (-80.4, 49, 0.0);
    glEnd();
//window 5
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-85.5, 17, 0.0);
    glVertex3f (-85.5, 33, 0.0);
    glVertex3f (-80, 33, 0.0);
    glVertex3f(-80, 17, 0);
    glEnd();
// inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-84.9, 17.7, 0.0);
    glVertex3f (-84.9, 32.2, 0.0);
    glVertex3f (-80.4, 32.2, 0.0);
    glVertex3f(-80.4, 17.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-83.4, 17.7, 0.0);
    glVertex3f (-83.4, 32.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-81.9, 17.7, 0.0);
    glVertex3f (-81.9, 32.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 21, 0.0);
    glVertex3f (-80.4, 21, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 25, 0.0);
    glVertex3f (-80.4, 25, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 29, 0.0);
    glVertex3f (-80.4, 29, 0.0);
    glEnd();

// door
// upper part of door
    glColor3f(1, 0.85, 0.68);
    glBegin(GL_QUADS);
    glVertex3f(-93.4, 28, 0.0);
    glVertex3f (-93.4, 35, 0.0);
    glVertex3f (-85.6, 35, 0.0);
    glVertex3f(-85.6, 28, 0);
    glEnd();
//
    glColor3f(0.1, 0.29, 0.38);
    glBegin(GL_QUADS);
    glVertex3f(-92, 5, 0.0);
    glVertex3f (-92, 28, 0.0);
    glVertex3f (-87, 28, 0.0);
    glVertex3f(-87, 5, 0);
    glEnd();
//
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-91.5, 20, 0.0);
    glVertex3f (-91.5, 27, 0.0);
    glVertex3f (-87.5, 27, 0.0);
    glVertex3f(-87.5, 20, 0);
    glEnd();
//pilar1
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-92, 5, 0.0);
    glVertex3f (-92, 28, 0.0);
    glVertex3f (-93, 28, 0.0);
    glVertex3f(-93, 5, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-93.5, 26, 0.0);
    glVertex3f (-93.5, 27, 0.0);
    glVertex3f (-91.7, 27, 0.0);
    glVertex3f(-91.7, 26, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-93.5, 24, 0.0);
    glVertex3f (-93.5, 25, 0.0);
    glVertex3f (-91.7, 25, 0.0);
    glVertex3f(-91.7, 24, 0);
    glEnd();
//pillar2
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-87, 5, 0.0);
    glVertex3f (-87, 28, 0.0);
    glVertex3f (-86, 28, 0.0);
    glVertex3f(-86, 5, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-87.3, 26, 0.0);
    glVertex3f (-87.3, 27, 0.0);
    glVertex3f (-85.5, 27, 0.0);
    glVertex3f(-85.5, 26, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-87.3, 24, 0.0);
    glVertex3f (-87.3, 25, 0.0);
    glVertex3f (-85.5, 25, 0.0);
    glVertex3f(-85.5, 24, 0);
    glEnd();
// tree 1
    glColor3f(0.41, 0.23, 0.01);
    glBegin(GL_QUADS);
    glVertex3f(-80.5, 5, 0.0);
    glVertex3f (-80.5, 20, 0.0);
    glVertex3f (-78.5, 20, 0.0);
    glVertex3f(-78.5, 5, 0);
    glEnd();
// leaf of tree
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 3;
     ori_x = -81;
     ori_y = 18;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 3;
     ori_x = -78;
     ori_y = 18;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 2.5;
     ori_x = -80;
     ori_y = 22;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 2.5;
     ori_x = -79;
     ori_y = 22;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 2;
     ori_x = -79.5;
     ori_y = 25;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();



//2nd tree
// tree 2
    glColor3f(0.41, 0.23, 0.01);
    glBegin(GL_QUADS);
    glVertex3f(-44, 5, 0.0);
    glVertex3f (-44, 20, 0.0);
    glVertex3f (-41, 20, 0.0);
    glVertex3f(-41, 5, 0);
    glEnd();
// leaf of tree
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(-47, 15, 0.0);
    glVertex3f (-43, 35, 0.0);
    glVertex3f (-38, 15, 0.0);
    glEnd();
 //leaf of tree2
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(-47, 20, 0.0);
    glVertex3f (-43, 45, 0.0);
    glVertex3f (-38, 20, 0.0);
    glEnd();
    // tree 2
    glColor3f(0.41, 0.23, 0.01);
    glBegin(GL_QUADS);
    glVertex3f(17, 5, 0.0);
    glVertex3f (17, 20, 0.0);
    glVertex3f (20, 20, 0.0);
    glVertex3f(20, 5, 0);
    glEnd();
// leaf of tree
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(15, 15, 0.0);
    glVertex3f (18.5, 35, 0.0);
    glVertex3f (22, 15, 0.0);
    glEnd();
 //leaf of tree2
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(15, 20, 0.0);
    glVertex3f (18.5, 45, 0.0);
    glVertex3f (22, 20, 0.0);
    glEnd();
//  wall of field
    glColor3f(0.45, 0.37, 0);
    glBegin(GL_QUADS);
    glVertex3f(29, 0, 0.0);
    glVertex3f (34, 26.3, 0.0);
    glVertex3f (35, 26.2, 0.0);
    glVertex3f(30, 0, 0);
    glEnd();
// field1
glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(36, 4, 0.0);
    glVertex3f (39, 25, 0.0);
    glVertex3f (98, 27, 0.0);
    glVertex3f(96, 4, 0);
    glEnd();
//field2
    glColor3f(0.04, 0.35, 0);
    glBegin(GL_QUADS);
    glVertex3f(37, 5, 0.0);
    glVertex3f (40, 24, 0.0);
    glVertex3f (97, 26, 0.0);
    glVertex3f(95, 5, 0);
    glEnd();
// circle1
     glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
     radius = 4;
     ori_x = 67.5;
     ori_y = 15;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
// circle2
     glColor3f(0.04, 0.35, 0);
    glBegin(GL_POLYGON);
     radius = 3.8;
     ori_x = 67.5;
     ori_y = 15;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//lines
    glColor3f(1,1, 1);
    glBegin(GL_LINES);
    //glVertex3f(38.5, 15, 0.0);
   // glVertex3f (95, 15, 0.0);
    glVertex3f (67, 5, 0.0);
    glVertex3f(68, 26, 0);
    glEnd();
// net 1
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(41, 7, 0.0);
    glVertex3f (41, 13, 0.0);
    glVertex3f (42, 13, 0.0);
    glVertex3f(42, 7, 0);
    glEnd();
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(44, 17, 0.0);
    glVertex3f (44, 24, 0.0);
    glVertex3f (45, 24, 0.0);
    glVertex3f(45, 17, 0);
    glEnd();
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(41, 13, 0.0);
    glVertex3f (44, 24, 0.0);
    glVertex3f (45, 24, 0.0);
    glVertex3f(42, 13, 0);
    glEnd();
// d-box white
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f (42, 7, 0.0);
    glVertex3f(45, 17, 0);
    glVertex3f (50, 17, 0.0);
    glVertex3f(48, 7, 0);
    glEnd();
// d-box green
    glColor3f(0.04, 0.35, 0);
    glBegin(GL_QUADS);
    glVertex3f (42.4, 7.4, 0.0);
    glVertex3f(45, 16.7, 0);
    glVertex3f (49.7, 16.7, 0.0);
    glVertex3f(47.7, 7.4, 0);
    glEnd();
    // net 2
// d-box white
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f (85, 7, 0.0);
    glVertex3f(88, 17, 0);
    glVertex3f (94, 17, 0.0);
    glVertex3f(90.7, 7, 0);
    glEnd();
// d-box green
    glColor3f(0.04, 0.35, 0);
    glBegin(GL_QUADS);
    glVertex3f (85.3, 7.4, 0.0);
    glVertex3f(88.3, 16.7, 0);
    glVertex3f (93.6, 16.7, 0.0);
    glVertex3f(90.3, 7.4, 0);
    glEnd();

//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(91, 7, 0.0);
    glVertex3f (91, 13, 0.0);
    glVertex3f (92, 13, 0.0);
    glVertex3f(92, 7, 0);
    glEnd();
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(94, 17, 0.0);
    glVertex3f (94, 24, 0.0);
    glVertex3f (95, 24, 0.0);
    glVertex3f(95, 17, 0);
    glEnd();
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(91, 13, 0.0);
    glVertex3f (94, 24, 0.0);
    glVertex3f (95, 24, 0.0);
    glVertex3f(92, 13, 0);
    glEnd();

// black side of rood
    glColor3f(0.0, 0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-100, -2, 0.0);
    glVertex3f (-100, 0, 0.0);
    glVertex3f (100, 0, 0.0);
    glVertex3f(100, -2, 0);
    glEnd();
// rood
    glColor3f(0.36, 0.38, 0.37);
    glBegin(GL_QUADS);
    glVertex3f(-100, -30, 0.0);
    glVertex3f (-100, -2, 0.0);
    glVertex3f (100, -2, 0.0);
    glVertex3f(100, -30, 0);
    glEnd();
//black side of rood
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-100, -32, 0.0);
    glVertex3f (-100, -30, 0.0);
    glVertex3f (100, -30, 0.0);
    glVertex3f(100, -32, 0);
    glEnd();
//mud of rood side
    glColor3f(0.54, 0.21, 0.09);
    glBegin(GL_QUADS);
    glVertex3f(-100, -42, 0.0);
    glVertex3f (-100, -32, 0.0);
    glVertex3f (100, -32, 0.0);
    glVertex3f(100, -42, 0);
    glEnd();
// white ssign of rood
//1
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-95, -14, 0.0);
    glVertex3f (-95, -16, 0.0);
    glVertex3f (-90, -16, 0.0);
    glVertex3f(-90, -14, 0);
    glEnd();
//2
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-88, -14, 0.0);
    glVertex3f (-88, -16, 0.0);
    glVertex3f (-83, -16, 0.0);
    glVertex3f(-83, -14, 0);
    glEnd();
//3
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-81, -14, 0.0);
    glVertex3f (-81, -16, 0.0);
    glVertex3f (-76, -16, 0.0);
    glVertex3f(-76, -14, 0);
    glEnd();
//4
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-74, -14, 0.0);
    glVertex3f (-74, -16, 0.0);
    glVertex3f (-69, -16, 0.0);
    glVertex3f(-69, -14, 0);
    glEnd();
//5
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-67, -14, 0.0);
    glVertex3f (-67, -16, 0.0);
    glVertex3f (-62, -16, 0.0);
    glVertex3f(-62, -14, 0);
    glEnd();
//6
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-60, -14, 0.0);
    glVertex3f (-60, -16, 0.0);
    glVertex3f (-55, -16, 0.0);
    glVertex3f(-55, -14, 0);
    glEnd();
// 7
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-53, -14, 0.0);
    glVertex3f (-53, -16, 0.0);
    glVertex3f (-48, -16, 0.0);
    glVertex3f(-48, -14, 0);
    glEnd();
//8
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-46, -14, 0.0);
    glVertex3f (-46, -16, 0.0);
    glVertex3f (-41, -16, 0.0);
    glVertex3f(-41, -14, 0);
    glEnd();
//9
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-39, -14, 0.0);
    glVertex3f (-39, -16, 0.0);
    glVertex3f (-34, -16, 0.0);
    glVertex3f(-34, -14, 0);
    glEnd();
//10
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-32, -14, 0.0);
    glVertex3f (-32, -16, 0.0);
    glVertex3f (-27, -16, 0.0);
    glVertex3f(-27, -14, 0);
    glEnd();
//11
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-25, -14, 0.0);
    glVertex3f (-25, -16, 0.0);
    glVertex3f (-20, -16, 0.0);
    glVertex3f(-20, -14, 0);
    glEnd();
//12
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-18, -14, 0.0);
    glVertex3f (-18, -16, 0.0);
    glVertex3f (-13, -16, 0.0);
    glVertex3f(-13, -14, 0);
    glEnd();
//13
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-11, -14, 0.0);
    glVertex3f (-11, -16, 0.0);
    glVertex3f (-6, -16, 0.0);
    glVertex3f(-6, -14, 0);
    glEnd();
//14
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-4, -14, 0.0);
    glVertex3f (-4, -16, 0.0);
    glVertex3f (1, -16, 0.0);
    glVertex3f(1, -14, 0);
    glEnd();
//15
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(3, -14, 0.0);
    glVertex3f (3, -16, 0.0);
    glVertex3f (8, -16, 0.0);
    glVertex3f(8, -14, 0);
    glEnd();
//16
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(10, -14, 0.0);
    glVertex3f (10, -16, 0.0);
    glVertex3f (15, -16, 0.0);
    glVertex3f(15, -14, 0);
    glEnd();
//17
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(17, -14, 0.0);
    glVertex3f (17, -16, 0.0);
    glVertex3f (22, -16, 0.0);
    glVertex3f(22, -14, 0);
    glEnd();
//18
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(24, -14, 0.0);
    glVertex3f (24, -16, 0.0);
    glVertex3f (29, -16, 0.0);
    glVertex3f(29, -14, 0);
    glEnd();
//19
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(31, -14, 0.0);
    glVertex3f (31, -16, 0.0);
    glVertex3f (36, -16, 0.0);
    glVertex3f(36, -14, 0);
    glEnd();
//20
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(38, -14, 0.0);
    glVertex3f (38, -16, 0.0);
    glVertex3f (43, -16, 0.0);
    glVertex3f(43, -14, 0);
    glEnd();
//21
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(45, -14, 0.0);
    glVertex3f (45, -16, 0.0);
    glVertex3f (50, -16, 0.0);
    glVertex3f(50, -14, 0);
    glEnd();
//22
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(52, -14, 0.0);
    glVertex3f (52, -16, 0.0);
    glVertex3f (57, -16, 0.0);
    glVertex3f(57, -14, 0);
    glEnd();
//23
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(59, -14, 0.0);
    glVertex3f (59, -16, 0.0);
    glVertex3f (64, -16, 0.0);
    glVertex3f(64, -14, 0);
    glEnd();
//24
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(66, -14, 0.0);
    glVertex3f (66, -16, 0.0);
    glVertex3f (71, -16, 0.0);
    glVertex3f(71, -14, 0);
    glEnd();
//25
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(73, -14, 0.0);
    glVertex3f (73, -16, 0.0);
    glVertex3f (78, -16, 0.0);
    glVertex3f(78, -14, 0);
    glEnd();
//26
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(80, -14, 0.0);
    glVertex3f (80, -16, 0.0);
    glVertex3f (85, -16, 0.0);
    glVertex3f(85, -14, 0);
    glEnd();
//27
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(87, -14, 0.0);
    glVertex3f (87, -16, 0.0);
    glVertex3f (92, -16, 0.0);
    glVertex3f(92, -14, 0);
    glEnd();
//28
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(94, -14, 0.0);
    glVertex3f (94, -16, 0.0);
    glVertex3f (99, -16, 0.0);
    glVertex3f(99, -14, 0);
    glEnd();
// car
// body
    glColor3f(1, 0.8, 0);
    glBegin(GL_QUADS);
    glVertex3f (p, -19, 0.0);
    glVertex3f (p, -10, 0.0);
    glVertex3f (p+34, -10, 0.0);
    glVertex3f (p+34, -19, 0.0);
    glEnd();
//roof
    glColor3f(0.7, 0.01, 0.29);
    glBegin(GL_QUADS);
    glVertex3f(p+5, -10, 0.0);
    glVertex3f (p+7, -4, 0.0);
    glVertex3f (p+26, -4, 0.0);
    glVertex3f (p+28, -10, 0.0);
    glEnd();
// wheal 1

    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
     radius = 3;
     ori_x = p+7;
     ori_y = -20;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
// wheel 2
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
     radius = 3;
     ori_x = p+27;
     ori_y = -20;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();


// river
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_QUADS);
    glVertex3f(-100, -100, 0.0);
    glVertex3f (-100, -42, 0.0);
    glVertex3f (100, -42, 0.0);
    glVertex3f(100, -100, 0);
    glEnd();
// wave of river
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_TRIANGLES);
    glVertex3f(-93, -44, 0.0);
    glVertex3f (-91, -35, 0.0);
    glVertex3f (-99, -44, 0.0);
    glEnd();
//1
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_TRIANGLES);
    glVertex3f(-83, -44, 0.0);
    glVertex3f (-81, -37, 0.0);
    glVertex3f (-89, -44, 0.0);
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_TRIANGLES);
    glVertex3f(-23, -44, 0.0);
    glVertex3f (-21, -37, 0.0);
    glVertex3f (-29, -44, 0.0);
    glEnd();
//2
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -75;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//3
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 7;
     ori_x = -60;
     ori_y = -44;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//4
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -44;
     ori_y = -46;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//5
   glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -34;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
// 6
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 7;
     ori_x = -14;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//7
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 5.5;
     ori_x = 0;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6.5;
     ori_x = 20;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 8;
     ori_x = 40;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = 55;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 7;
     ori_x = 75;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
  glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius =8;
     ori_x = 88;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
//LINES IN RIVER
//1st row
//1
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+8, -52, 0.0);
    glVertex3f (p, -52, 0.0);
    glEnd();
//2
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-17, -52, 0.0);
    glVertex3f (p-17, -52, 0.0);
    glEnd();

//3
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+22, -52, 0.0);
    glVertex3f (p+32, -52, 0.0);
    glEnd();
//4
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+42, -52, 0.0);
    glVertex3f (p+52, -52, 0.0);
    glEnd();
//5
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+72, -52, 0.0);
    glVertex3f (p+62, -52, 0.0);
    glEnd();
//6
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+52, -52, 0.0);
    glVertex3f (p+42, -52, 0.0);
    glEnd();
//7
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+27, -52, 0.0);
    glVertex3f (p+17, -52, 0.0);
    glEnd();
//8
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-3, -52, 0.0);
    glVertex3f (p-18, -52, 0.0);
    glEnd();
//2nd row
//1

//2
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-17, -72, 0.0);
    glVertex3f (p-17, -72, 0.0);
    glEnd();
//3
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-22, -72, 0.0);
    glVertex3f (p-32, -72, 0.0);
    glEnd();
//4

//7
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+27, -72, 0.0);
    glVertex3f (p+17, -72, 0.0);
    glEnd();
//8
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-3, -72, 0.0);
    glVertex3f (p-18, -72, 0.0);
    glEnd();
//3rd row
//1
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+8, -92, 0.0);
    glVertex3f (p, -92, 0.0);
    glEnd();
//2

//3
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+22, -92, 0.0);
    glVertex3f (p+32, -92, 0.0);
    glEnd();
//4
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+42, -92, 0.0);
    glVertex3f (p+52, -92, 0.0);
    glEnd();
//5
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+72, -92, 0.0);
    glVertex3f (p+62, -92, 0.0);
    glEnd();
//6
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+52, -92, 0.0);
    glVertex3f (p+42, -92, 0.0);
    glEnd();
//7
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+27, -92, 0.0);
    glVertex3f (p+17, -92, 0.0);
    glEnd();
//8
//boat 1
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f (C+2, -78, 0.0);
    glVertex3f (C+2, -82, 0.0);
    glVertex3f (C+22, -82, 0.0);
    glVertex3f(C+22, -78, 0);
    glEnd();
//  boat angle
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(C+22, -78, 0.0);
    glVertex3f (C+27, -75, 0.0);
    glVertex3f (C+22, -82, 0.0);
    glEnd();
//back
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(C+2, -78, 0.0);
    glVertex3f (C-3, -75, 0.0);
    glVertex3f (C+2, -82, 0.0);
    glEnd();

// front open side ash color
    glColor3f(0.74, 0.73, 0.72);
    glBegin(GL_TRIANGLES);
    glVertex3f(C+2, -78, 0.0);
    glVertex3f (C+4, -71, 0.0);
    glVertex3f (C+8, -78, 0.0);
    glEnd();
//upper part of boat
    glColor3f(0.43, 0.24, 0.17);
    glBegin(GL_QUADS);
    glVertex3f(C+8, -78, 0.0);
    glVertex3f (C+4, -71, 0.0);
    glVertex3f (C+18, -71, 0.0);
    glVertex3f (C+22, -78, 0.0);
    glEnd();
// stand
    glColor3f(0.43, 0.24, 0.17);
    glBegin(GL_QUADS);
    glVertex3f(C+12.5, -71, 0.0);
    glVertex3f (C+12.5, -55, 0.0);
    glVertex3f (C+11.5, -55, 0.0);
    glVertex3f (C+11.5, -71, 0.0);
    glEnd();
//pal
    glColor3f(1, 0.56, 0.07);
    glBegin(GL_QUADS);
    glVertex3f(C+7.5, -68, 0.0);
    glVertex3f (C+9.5, -57, 0.0);
    glVertex3f (C+18.5, -57, 0.0);
    glVertex3f (C+16.5, -68, 0.0);
    glEnd();
//swing1
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(C+13.5, -62, 0.0);
    glVertex3f (C+16.5, -60, 0.0);
    glEnd();
//swing2
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(C+16.5, -62, 0.0);
    glVertex3f (C+13.5, -60, 0.0);
    glEnd();
//
//
    glutPostRedisplay();
    glFlush();
}
//

void night(){

    glClear(GL_COLOR_BUFFER_BIT);
    //

//for moving
       if(p<=100)   //moving limit with the display measurement
       p=p+0.015; //changing the object position for redisplaying

       else
       p=-100;    // For backing the object continuously
//
      if(C<=100)   //moving limit with the display measurement
       C=C+0.009; //changing the object position for redisplaying
       else
       C=-72;    // For backing the object continuously
    //
    //the sky
    glColor3f(0.17, 0.21, 0.2);
    glBegin(GL_QUADS);
    glVertex3f(-100, 0, 0.0);
    glVertex3f (-100, 100, 0.0);
    glVertex3f (100, 100, 0.0);
    glVertex3f(100, 0, 0);
    glEnd();
//circle the moon
    glColor3f(0.84, 0.84, 0.84);
    glBegin(GL_POLYGON);
    double radius = 7;
    double ori_x = 60;
    double ori_y = 80;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
//star1
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(-80, 80, 0.0);
    glVertex3f (-78, 79, 0.0);
    glVertex3f (-80, 78, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(-80, 80, 0.0);
    glVertex3f (-82, 79, 0.0);
    glVertex3f (-80, 78, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(-80.5, 79, 0.0);
    glVertex3f (-80, 82, 0.0);
    glVertex3f (-79, 79, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(-80.5, 79, 0.0);
    glVertex3f (-80, 76, 0.0);
    glVertex3f (-79, 79, 0.0);
    glEnd();
//star2
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(80, 70, 0.0);
    glVertex3f (78, 69, 0.0);
    glVertex3f (80, 68, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(80, 70, 0.0);
    glVertex3f (82, 69, 0.0);
    glVertex3f (80, 68, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(80.5, 69, 0.0);
    glVertex3f (80, 72, 0.0);
    glVertex3f (79, 69, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(80.5, 69, 0.0);
    glVertex3f (80, 66, 0.0);
    glVertex3f (79, 69, 0.0);
    glEnd();
//star3
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(20, 50, 0.0);
    glVertex3f (18, 49, 0.0);
    glVertex3f (20, 48, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(20, 50, 0.0);
    glVertex3f (22, 49, 0.0);
    glVertex3f (20, 48, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(20.5, 49, 0.0);
    glVertex3f (20, 52, 0.0);
    glVertex3f (19, 49, 0.0);
    glEnd();
//
    glColor3f(0.99, 0.99, 0.99);
    glBegin(GL_TRIANGLES);
    glVertex3f(20.5, 49, 0.0);
    glVertex3f (20, 46, 0.0);
    glVertex3f (19, 49, 0.0);
    glEnd();
//green field
     glColor3f(0.37, 0.97, 0.16);
    glBegin(GL_QUADS);
    glVertex3f(-100, 0, 0.0);
    glVertex3f (-100, 20, 0.0);
    glColor3f(0.41, 0.79, 0.28);
    glVertex3f (100, 30, 0.0);
    glVertex3f(100, 0, 0);
    glEnd();

// house 1
  // body
    glColor3f(1, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-80, 5, 0.0);
    glVertex3f (-80, 60, 0.0);
    glVertex3f (-50, 60, 0.0);
    glVertex3f(-50, 5, 0);
    glEnd();
// window1
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-77, 50, 0.0);
    glVertex3f (-77, 57, 0.0);
    glVertex3f (-72, 57, 0.0);
    glVertex3f(-72, 50, 0);
    glEnd();
// window2
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-67, 50, 0.0);
    glVertex3f (-67, 57, 0.0);
    glVertex3f (-62, 57, 0.0);
    glVertex3f(-62, 50, 0);
    glEnd();
// window3
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-57, 50, 0.0);
    glVertex3f (-57, 57, 0.0);
    glVertex3f (-52, 57, 0.0);
    glVertex3f(-52, 50, 0);
    glEnd();

    // window4
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-77, 40, 0.0);
    glVertex3f (-77, 47, 0.0);
    glVertex3f (-72, 47, 0.0);
    glVertex3f(-72, 40, 0);
    glEnd();
// window5
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-67, 40, 0.0);
    glVertex3f (-67, 47, 0.0);
    glVertex3f (-62, 47, 0.0);
    glVertex3f(-62, 40, 0);
    glEnd();
// window6
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-57, 40, 0.0);
    glVertex3f (-57, 47, 0.0);
    glVertex3f (-52, 47, 0.0);
    glVertex3f(-52, 40, 0);
    glEnd();

    // window7
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-77, 30, 0.0);
    glVertex3f (-77, 37, 0.0);
    glVertex3f (-72, 37, 0.0);
    glVertex3f(-72, 30, 0);
    glEnd();
// window8
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-67, 30, 0.0);
    glVertex3f (-67, 37, 0.0);
    glVertex3f (-62, 37, 0.0);
    glVertex3f(-62, 30, 0);
    glEnd();
// window9
   glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-57, 30, 0.0);
    glVertex3f (-57, 37, 0.0);
    glVertex3f (-52, 37, 0.0);
    glVertex3f(-52, 30, 0);
    glEnd();
//

    // window10
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-77, 20, 0.0);
    glVertex3f (-77, 27, 0.0);
    glVertex3f (-72, 27, 0.0);
    glVertex3f(-72, 20, 0);
    glEnd();

// window11
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-77, 10, 0.0);
    glVertex3f (-77, 17, 0.0);
    glVertex3f (-72, 17, 0.0);
    glVertex3f(-72, 10, 0);
    glEnd();
// window12
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-57, 20, 0.0);
    glVertex3f (-57, 27, 0.0);
    glVertex3f (-52, 27, 0.0);
    glVertex3f(-52, 20, 0);
    glEnd();
//window13
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-57, 10, 0.0);
    glVertex3f (-57, 17, 0.0);
    glVertex3f (-52, 17, 0.0);
    glVertex3f(-52, 10, 0);
    glEnd();
//
// door of house  1
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-60, 5, 0.0);
    glVertex3f (-60, 28, 0.0);
    glVertex3f (-69, 28, 0.0);
    glVertex3f(-69, 5, 0);
    glEnd();
  //indoor
    glColor3f(0.75, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-61, 5, 0.0);
    glVertex3f (-61, 27, 0.0);
    glVertex3f (-68, 27, 0.0);
    glVertex3f(-68, 5, 0);
    glEnd();
// side wall
    glColor3f(0.77, 0.43, 0.02);
    glBegin(GL_QUADS);
    glVertex3f(-50, 5, 0.0);
    glVertex3f (-50, 60, 0.0);
    glVertex3f (-46, 55, 0.0);
    glVertex3f(-46, 5, 0);
    glEnd();
// tree 1
    glColor3f(0.41, 0.23, 0.01);
    glBegin(GL_QUADS);
    glVertex3f(-85, 5, 0.0);
    glVertex3f (-85, 20, 0.0);
    glVertex3f (-82, 20, 0.0);
    glVertex3f(-82, 5, 0);
    glEnd();
// leaf of tree
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(-88, 15, 0.0);
    glVertex3f (-83.5, 35, 0.0);
    glVertex3f (-79, 15, 0.0);
    glEnd();
//
// house 3 roof
    glColor3f(0.76, 0.18, 0);
    glBegin(GL_QUADS);
    glVertex3f(-105, 55, 0.0);
    glVertex3f (-97, 62, 0.0);
    glVertex3f (-83, 62, 0.0);
    glVertex3f(-78, 55, 0);
    glEnd();
//  body
    glColor3f(0.99, 0.7, 0.16);
    glBegin(GL_QUADS);
    glVertex3f(-100, 5, 0.0);
    glVertex3f (-100, 55, 0.0);
    glVertex3f (-79, 55, 0.0);
    glVertex3f(-79, 5, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-100, 53, 0.0);
    glVertex3f (-100, 55, 0.0);
    glVertex3f (-79, 55, 0.0);
    glVertex3f(-79, 53, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-100, 35, 0.0);
    glVertex3f (-100, 37, 0.0);
    glVertex3f (-79, 37, 0.0);
    glVertex3f(-79, 35, 0);
    glEnd();
// window1
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-99, 37, 0.0);
    glVertex3f (-99, 53, 0.0);
    glVertex3f (-93.5, 53, 0.0);
    glVertex3f(-93.5, 37, 0);
    glEnd();
// inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-98.5, 37.7, 0.0);
    glVertex3f (-98.5, 52.2, 0.0);
    glVertex3f (-93.9, 52.2, 0.0);
    glVertex3f(-93.9, 37.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-97, 37.7, 0.0);
    glVertex3f (-97, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-95.5, 37.7, 0.0);
    glVertex3f (-95.5, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 41, 0.0);
    glVertex3f (-93.9, 41, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 45, 0.0);
    glVertex3f (-93.9, 45, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 49, 0.0);
    glVertex3f (-93.9, 49, 0.0);
    glEnd();
//window 4
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-99, 17, 0.0);
    glVertex3f (-99, 33, 0.0);
    glVertex3f (-93.5, 33, 0.0);
    glVertex3f(-93.5, 17, 0);
    glEnd();
// inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-98.5, 17.7, 0.0);
    glVertex3f (-98.5, 32.2, 0.0);
    glVertex3f (-93.9, 32.2, 0.0);
    glVertex3f(-93.9, 17.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-97, 17.7, 0.0);
    glVertex3f (-97, 32.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-95.5, 17.7, 0.0);
    glVertex3f (-95.5, 32.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 21, 0.0);
    glVertex3f (-93.9, 21, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 25, 0.0);
    glVertex3f (-93.9, 25, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-98.5, 29, 0.0);
    glVertex3f (-93.9, 29, 0.0);
    glEnd();
//window2
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-92.5, 37, 0.0);
    glVertex3f (-92.5, 53, 0.0);
    glVertex3f (-86.5, 53, 0.0);
    glVertex3f(-86.5, 37, 0);
    glEnd();
//inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-91.9, 37.7, 0.0);
    glVertex3f (-91.9, 52.2, 0.0);
    glVertex3f (-87, 52.2, 0.0);
    glVertex3f(-87, 37.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-90.3, 37.7, 0.0);
    glVertex3f (-90.3, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-88.8, 37.7, 0.0);
    glVertex3f (-88.8, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-91.9, 41, 0.0);
    glVertex3f (-87, 41, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-91.9, 45, 0.0);
    glVertex3f (-87, 45, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-91.9, 49, 0.0);
    glVertex3f (-87, 49, 0.0);
    glEnd();

//window3
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-85.5, 37, 0.0);
    glVertex3f (-85.5, 53, 0.0);
    glVertex3f (-80, 53, 0.0);
    glVertex3f(-80, 37, 0);
    glEnd();
// inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-84.9, 37.7, 0.0);
    glVertex3f (-84.9, 52.2, 0.0);
    glVertex3f (-80.4, 52.2, 0.0);
    glVertex3f(-80.4, 37.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-83.4, 37.7, 0.0);
    glVertex3f (-83.4, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-81.9, 37.7, 0.0);
    glVertex3f (-81.9, 52.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 41, 0.0);
    glVertex3f (-80.4, 41, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 45, 0.0);
    glVertex3f (-80.4, 45, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 49, 0.0);
    glVertex3f (-80.4, 49, 0.0);
    glEnd();
//window 5
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-85.5, 17, 0.0);
    glVertex3f (-85.5, 33, 0.0);
    glVertex3f (-80, 33, 0.0);
    glVertex3f(-80, 17, 0);
    glEnd();
// inner part
    glColor3f(0, 0.15, 0.52);
    glBegin(GL_QUADS);
    glVertex3f(-84.9, 17.7, 0.0);
    glVertex3f (-84.9, 32.2, 0.0);
    glVertex3f (-80.4, 32.2, 0.0);
    glVertex3f(-80.4, 17.7, 0);
    glEnd();
//lines
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-83.4, 17.7, 0.0);
    glVertex3f (-83.4, 32.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-81.9, 17.7, 0.0);
    glVertex3f (-81.9, 32.2, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 21, 0.0);
    glVertex3f (-80.4, 21, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 25, 0.0);
    glVertex3f (-80.4, 25, 0.0);
    glEnd();
//
    glColor3f(1, 1, 1);
    glBegin(GL_LINES);
    glVertex3f(-84.9, 29, 0.0);
    glVertex3f (-80.4, 29, 0.0);
    glEnd();

// door
// upper part of door
    glColor3f(1, 0.85, 0.68);
    glBegin(GL_QUADS);
    glVertex3f(-93.4, 28, 0.0);
    glVertex3f (-93.4, 35, 0.0);
    glVertex3f (-85.6, 35, 0.0);
    glVertex3f(-85.6, 28, 0);
    glEnd();
//
    glColor3f(0.1, 0.29, 0.38);
    glBegin(GL_QUADS);
    glVertex3f(-92, 5, 0.0);
    glVertex3f (-92, 28, 0.0);
    glVertex3f (-87, 28, 0.0);
    glVertex3f(-87, 5, 0);
    glEnd();
//
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-91.5, 20, 0.0);
    glVertex3f (-91.5, 27, 0.0);
    glVertex3f (-87.5, 27, 0.0);
    glVertex3f(-87.5, 20, 0);
    glEnd();
//pilar1
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-92, 5, 0.0);
    glVertex3f (-92, 28, 0.0);
    glVertex3f (-93, 28, 0.0);
    glVertex3f(-93, 5, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-93.5, 26, 0.0);
    glVertex3f (-93.5, 27, 0.0);
    glVertex3f (-91.7, 27, 0.0);
    glVertex3f(-91.7, 26, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-93.5, 24, 0.0);
    glVertex3f (-93.5, 25, 0.0);
    glVertex3f (-91.7, 25, 0.0);
    glVertex3f(-91.7, 24, 0);
    glEnd();
//pillar2
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-87, 5, 0.0);
    glVertex3f (-87, 28, 0.0);
    glVertex3f (-86, 28, 0.0);
    glVertex3f(-86, 5, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-87.3, 26, 0.0);
    glVertex3f (-87.3, 27, 0.0);
    glVertex3f (-85.5, 27, 0.0);
    glVertex3f(-85.5, 26, 0);
    glEnd();
//
    glColor3f(1, 0.81, 0.43);
    glBegin(GL_QUADS);
    glVertex3f(-87.3, 24, 0.0);
    glVertex3f (-87.3, 25, 0.0);
    glVertex3f (-85.5, 25, 0.0);
    glVertex3f(-85.5, 24, 0);
    glEnd();
//
// tree 1
    glColor3f(0.41, 0.23, 0.01);
    glBegin(GL_QUADS);
    glVertex3f(-80.5, 5, 0.0);
    glVertex3f (-80.5, 20, 0.0);
    glVertex3f (-78.5, 20, 0.0);
    glVertex3f(-78.5, 5, 0);
    glEnd();
// leaf of tree
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 3;
     ori_x = -81;
     ori_y = 18;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 3;
     ori_x = -78;
     ori_y = 18;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 2.5;
     ori_x = -80;
     ori_y = 22;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 2.5;
     ori_x = -79;
     ori_y = 22;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_POLYGON);
     radius = 2;
     ori_x = -79.5;
     ori_y = 25;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//2nd tree
// tree 2

//tree 5
    glColor3f(0.41, 0.23, 0.01);
    glBegin(GL_QUADS);
    glVertex3f(-34, 5, 0.0);
    glVertex3f (-34, 20, 0.0);
    glVertex3f (-31, 20, 0.0);
    glVertex3f(-31, 5, 0);
    glEnd();
// leaf of tree
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(-37, 15, 0.0);
    glVertex3f (-33, 35, 0.0);
    glVertex3f (-28, 15, 0.0);
    glEnd();
 //leaf of tree2
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(-37, 20, 0.0);
    glVertex3f (-33, 45, 0.0);
    glVertex3f (-28, 20, 0.0);
    glEnd();
//tree
    // tree 2
    glColor3f(0.41, 0.23, 0.01);
    glBegin(GL_QUADS);
    glVertex3f(9, 5, 0.0);
    glVertex3f (9, 20, 0.0);
    glVertex3f (6, 20, 0.0);
    glVertex3f(6, 5, 0);
    glEnd();
// leaf of tree
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(3, 15, 0.0);
    glVertex3f (7.5, 35, 0.0);
    glVertex3f (12, 15, 0.0);
    glEnd();
 //leaf of tree2
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(3, 20, 0.0);
    glVertex3f (7, 45, 0.0);
    glVertex3f (12, 20, 0.0);
    glEnd();
//trees
    // tree 2
    glColor3f(0.41, 0.23, 0.01);
    glBegin(GL_QUADS);
    glVertex3f(17, 5, 0.0);
    glVertex3f (17, 20, 0.0);
    glVertex3f (20, 20, 0.0);
    glVertex3f(20, 5, 0);
    glEnd();
// leaf of tree
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(15, 15, 0.0);
    glVertex3f (18.5, 35, 0.0);
    glVertex3f (22, 15, 0.0);
    glEnd();
 //leaf of tree2
    glColor3f(0.03, 0.27, 0.06);
    glBegin(GL_TRIANGLES);
    glVertex3f(15, 20, 0.0);
    glVertex3f (18.5, 45, 0.0);
    glVertex3f (22, 20, 0.0);
    glEnd();
//  wall of field
    glColor3f(0.45, 0.37, 0);
    glBegin(GL_QUADS);
    glVertex3f(29, 0, 0.0);
    glVertex3f (34, 26.3, 0.0);
    glVertex3f (35, 26.2, 0.0);
    glVertex3f(30, 0, 0);
    glEnd();
// field1
glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(36, 4, 0.0);
    glVertex3f (39, 25, 0.0);
    glVertex3f (98, 27, 0.0);
    glVertex3f(96, 4, 0);
    glEnd();
//field2
    glColor3f(0.04, 0.35, 0);
    glBegin(GL_QUADS);
    glVertex3f(37, 5, 0.0);
    glVertex3f (40, 24, 0.0);
    glVertex3f (97, 26, 0.0);
    glVertex3f(95, 5, 0);
    glEnd();
// circle1
     glColor3f(1, 1, 1);
    glBegin(GL_POLYGON);
     radius = 4;
     ori_x = 67.5;
     ori_y = 15;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
// circle2
     glColor3f(0.04, 0.35, 0);
    glBegin(GL_POLYGON);
     radius = 3.8;
     ori_x = 67.5;
     ori_y = 15;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//lines
    glColor3f(1,1, 1);
    glBegin(GL_LINES);
    glVertex3f (67, 5, 0.0);
    glVertex3f(68, 26, 0);
    glEnd();
// net 1
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(41, 7, 0.0);
    glVertex3f (41, 13, 0.0);
    glVertex3f (42, 13, 0.0);
    glVertex3f(42, 7, 0);
    glEnd();
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(44, 17, 0.0);
    glVertex3f (44, 24, 0.0);
    glVertex3f (45, 24, 0.0);
    glVertex3f(45, 17, 0);
    glEnd();
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(41, 13, 0.0);
    glVertex3f (44, 24, 0.0);
    glVertex3f (45, 24, 0.0);
    glVertex3f(42, 13, 0);
    glEnd();
// d-box white
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f (42, 7, 0.0);
    glVertex3f(45, 17, 0);
    glVertex3f (50, 17, 0.0);
    glVertex3f(48, 7, 0);
    glEnd();
// d-box green
    glColor3f(0.04, 0.35, 0);
    glBegin(GL_QUADS);
    glVertex3f (42.4, 7.4, 0.0);
    glVertex3f(45, 16.7, 0);
    glVertex3f (49.7, 16.7, 0.0);
    glVertex3f(47.7, 7.4, 0);
    glEnd();
    // net 2
// d-box white
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f (85, 7, 0.0);
    glVertex3f(88, 17, 0);
    glVertex3f (94, 17, 0.0);
    glVertex3f(90.7, 7, 0);
    glEnd();
// d-box green
    glColor3f(0.04, 0.35, 0);
    glBegin(GL_QUADS);
    glVertex3f (85.3, 7.4, 0.0);
    glVertex3f(88.3, 16.7, 0);
    glVertex3f (93.6, 16.7, 0.0);
    glVertex3f(90.3, 7.4, 0);
    glEnd();

//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(91, 7, 0.0);
    glVertex3f (91, 13, 0.0);
    glVertex3f (92, 13, 0.0);
    glVertex3f(92, 7, 0);
    glEnd();
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(94, 17, 0.0);
    glVertex3f (94, 24, 0.0);
    glVertex3f (95, 24, 0.0);
    glVertex3f(95, 17, 0);
    glEnd();
//
    glColor3f(1,1, 1);
    glBegin(GL_QUADS);
    glVertex3f(91, 13, 0.0);
    glVertex3f (94, 24, 0.0);
    glVertex3f (95, 24, 0.0);
    glVertex3f(92, 13, 0);
    glEnd();
// black side of rood
    glColor3f(0.0, 0, 0.0);
    glBegin(GL_QUADS);
    glVertex3f(-100, -2, 0.0);
    glVertex3f (-100, 0, 0.0);
    glVertex3f (100, 0, 0.0);
    glVertex3f(100, -2, 0);
    glEnd();
// rood
    glColor3f(0.36, 0.38, 0.37);
    glBegin(GL_QUADS);
    glVertex3f(-100, -30, 0.0);
    glVertex3f (-100, -2, 0.0);
    glVertex3f (100, -2, 0.0);
    glVertex3f(100, -30, 0);
    glEnd();
//black side of rood
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f(-100, -32, 0.0);
    glVertex3f (-100, -30, 0.0);
    glVertex3f (100, -30, 0.0);
    glVertex3f(100, -32, 0);
    glEnd();
//mud of rood side
    glColor3f(0.54, 0.21, 0.09);
    glBegin(GL_QUADS);
    glVertex3f(-100, -42, 0.0);
    glVertex3f (-100, -32, 0.0);
    glVertex3f (100, -32, 0.0);
    glVertex3f(100, -42, 0);
    glEnd();
// white ssign of rood
//1
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-95, -14, 0.0);
    glVertex3f (-95, -16, 0.0);
    glVertex3f (-90, -16, 0.0);
    glVertex3f(-90, -14, 0);
    glEnd();
//2
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-88, -14, 0.0);
    glVertex3f (-88, -16, 0.0);
    glVertex3f (-83, -16, 0.0);
    glVertex3f(-83, -14, 0);
    glEnd();
//3
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-81, -14, 0.0);
    glVertex3f (-81, -16, 0.0);
    glVertex3f (-76, -16, 0.0);
    glVertex3f(-76, -14, 0);
    glEnd();
//4
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-74, -14, 0.0);
    glVertex3f (-74, -16, 0.0);
    glVertex3f (-69, -16, 0.0);
    glVertex3f(-69, -14, 0);
    glEnd();
//5
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-67, -14, 0.0);
    glVertex3f (-67, -16, 0.0);
    glVertex3f (-62, -16, 0.0);
    glVertex3f(-62, -14, 0);
    glEnd();
//6
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-60, -14, 0.0);
    glVertex3f (-60, -16, 0.0);
    glVertex3f (-55, -16, 0.0);
    glVertex3f(-55, -14, 0);
    glEnd();
// 7
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-53, -14, 0.0);
    glVertex3f (-53, -16, 0.0);
    glVertex3f (-48, -16, 0.0);
    glVertex3f(-48, -14, 0);
    glEnd();
//8
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-46, -14, 0.0);
    glVertex3f (-46, -16, 0.0);
    glVertex3f (-41, -16, 0.0);
    glVertex3f(-41, -14, 0);
    glEnd();
//9
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-39, -14, 0.0);
    glVertex3f (-39, -16, 0.0);
    glVertex3f (-34, -16, 0.0);
    glVertex3f(-34, -14, 0);
    glEnd();
//10
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-32, -14, 0.0);
    glVertex3f (-32, -16, 0.0);
    glVertex3f (-27, -16, 0.0);
    glVertex3f(-27, -14, 0);
    glEnd();
//11
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-25, -14, 0.0);
    glVertex3f (-25, -16, 0.0);
    glVertex3f (-20, -16, 0.0);
    glVertex3f(-20, -14, 0);
    glEnd();
//12
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-18, -14, 0.0);
    glVertex3f (-18, -16, 0.0);
    glVertex3f (-13, -16, 0.0);
    glVertex3f(-13, -14, 0);
    glEnd();
//13
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-11, -14, 0.0);
    glVertex3f (-11, -16, 0.0);
    glVertex3f (-6, -16, 0.0);
    glVertex3f(-6, -14, 0);
    glEnd();
//14
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(-4, -14, 0.0);
    glVertex3f (-4, -16, 0.0);
    glVertex3f (1, -16, 0.0);
    glVertex3f(1, -14, 0);
    glEnd();
//15
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(3, -14, 0.0);
    glVertex3f (3, -16, 0.0);
    glVertex3f (8, -16, 0.0);
    glVertex3f(8, -14, 0);
    glEnd();
//16
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(10, -14, 0.0);
    glVertex3f (10, -16, 0.0);
    glVertex3f (15, -16, 0.0);
    glVertex3f(15, -14, 0);
    glEnd();
//17
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(17, -14, 0.0);
    glVertex3f (17, -16, 0.0);
    glVertex3f (22, -16, 0.0);
    glVertex3f(22, -14, 0);
    glEnd();
//18
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(24, -14, 0.0);
    glVertex3f (24, -16, 0.0);
    glVertex3f (29, -16, 0.0);
    glVertex3f(29, -14, 0);
    glEnd();
//19
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(31, -14, 0.0);
    glVertex3f (31, -16, 0.0);
    glVertex3f (36, -16, 0.0);
    glVertex3f(36, -14, 0);
    glEnd();
//20
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(38, -14, 0.0);
    glVertex3f (38, -16, 0.0);
    glVertex3f (43, -16, 0.0);
    glVertex3f(43, -14, 0);
    glEnd();
//21
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(45, -14, 0.0);
    glVertex3f (45, -16, 0.0);
    glVertex3f (50, -16, 0.0);
    glVertex3f(50, -14, 0);
    glEnd();
//22
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(52, -14, 0.0);
    glVertex3f (52, -16, 0.0);
    glVertex3f (57, -16, 0.0);
    glVertex3f(57, -14, 0);
    glEnd();
//23
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(59, -14, 0.0);
    glVertex3f (59, -16, 0.0);
    glVertex3f (64, -16, 0.0);
    glVertex3f(64, -14, 0);
    glEnd();
//24
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(66, -14, 0.0);
    glVertex3f (66, -16, 0.0);
    glVertex3f (71, -16, 0.0);
    glVertex3f(71, -14, 0);
    glEnd();
//25
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(73, -14, 0.0);
    glVertex3f (73, -16, 0.0);
    glVertex3f (78, -16, 0.0);
    glVertex3f(78, -14, 0);
    glEnd();
//26
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(80, -14, 0.0);
    glVertex3f (80, -16, 0.0);
    glVertex3f (85, -16, 0.0);
    glVertex3f(85, -14, 0);
    glEnd();
//27
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(87, -14, 0.0);
    glVertex3f (87, -16, 0.0);
    glVertex3f (92, -16, 0.0);
    glVertex3f(92, -14, 0);
    glEnd();
//28
    glColor3f(1, 1, 1);
    glBegin(GL_QUADS);
    glVertex3f(94, -14, 0.0);
    glVertex3f (94, -16, 0.0);
    glVertex3f (99, -16, 0.0);
    glVertex3f(99, -14, 0);
    glEnd();
// car
// body
    glColor3f(1, 0.8, 0);
    glBegin(GL_QUADS);
    glVertex3f (p, -19, 0.0);
    glVertex3f (p, -10, 0.0);
    glVertex3f (p+34, -10, 0.0);
    glVertex3f (p+34, -19, 0.0);
    glEnd();
//roof
    glColor3f(0.7, 0.01, 0.29);
    glBegin(GL_QUADS);
    glVertex3f(p+5, -10, 0.0);
    glVertex3f (p+7, -4, 0.0);
    glVertex3f (p+26, -4, 0.0);
    glVertex3f (p+28, -10, 0.0);
    glEnd();
// wheal 1
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
     radius = 3;
     ori_x = p+7;
     ori_y = -20;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
// wheel 2
    glColor3f(0, 0, 0);
    glBegin(GL_POLYGON);
     radius = 3;
     ori_x = p+27;
     ori_y = -20;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();


// river
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_QUADS);
    glVertex3f(-100, -100, 0.0);
    glVertex3f (-100, -42, 0.0);
    glVertex3f (100, -42, 0.0);
    glVertex3f(100, -100, 0);
    glEnd();
// wave of river
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_TRIANGLES);
    glVertex3f(-93, -44, 0.0);
    glVertex3f (-91, -35, 0.0);
    glVertex3f (-99, -44, 0.0);
    glEnd();
//1
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_TRIANGLES);
    glVertex3f(-83, -44, 0.0);
    glVertex3f (-81, -37, 0.0);
    glVertex3f (-89, -44, 0.0);
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_TRIANGLES);
    glVertex3f(-23, -44, 0.0);
    glVertex3f (-21, -37, 0.0);
    glVertex3f (-29, -44, 0.0);
    glEnd();
//2
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -75;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//3
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 7;
     ori_x = -60;
     ori_y = -44;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//4
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -44;
     ori_y = -46;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//5
   glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = -34;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
// 6
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 7;
     ori_x = -14;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//7
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 5.5;
     ori_x = 0;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6.5;
     ori_x = 20;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 8;
     ori_x = 40;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 6;
     ori_x = 55;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
    glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius = 7;
     ori_x = 75;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
//
  glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_POLYGON);
     radius =8;
     ori_x = 88;
     ori_y = -45;
    for (int i = 0; i <= 360; i++) {
    double angle = 2 * 3.1416 * i / 360;
    double x = cos(angle) * radius;
    double y = sin(angle) * radius;
    glVertex2d(ori_x + x, ori_y + y);
    }
    glEnd();
// river
   glColor3f(0.03, 0.36, 0.53);
    glBegin(GL_QUADS);
    glVertex3f(-100, -100, 0.0);
    glVertex3f (-100, -42, 0.0);
    glVertex3f (100, -42, 0.0);
    glVertex3f(100, -100, 0);
    glEnd();
//LINES IN RIVER
//1st row
//1
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+8, -52, 0.0);
    glVertex3f (p, -52, 0.0);
    glEnd();
//2
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-17, -52, 0.0);
    glVertex3f (p-17, -52, 0.0);
    glEnd();

//3
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+22, -52, 0.0);
    glVertex3f (p+32, -52, 0.0);
    glEnd();
//4
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+42, -52, 0.0);
    glVertex3f (p+52, -52, 0.0);
    glEnd();
//5
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+72, -52, 0.0);
    glVertex3f (p+62, -52, 0.0);
    glEnd();
//6
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+52, -52, 0.0);
    glVertex3f (p+42, -52, 0.0);
    glEnd();
//7
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+27, -52, 0.0);
    glVertex3f (p+17, -52, 0.0);
    glEnd();
//8
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-3, -52, 0.0);
    glVertex3f (p-18, -52, 0.0);
    glEnd();
//2nd row
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-17, -72, 0.0);
    glVertex3f (p-17, -72, 0.0);
    glEnd();
//3
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-22, -72, 0.0);
    glVertex3f (p-32, -72, 0.0);
    glEnd();
//7
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+27, -72, 0.0);
    glVertex3f (p+17, -72, 0.0);
    glEnd();
//8
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p-3, -72, 0.0);
    glVertex3f (p-18, -72, 0.0);
    glEnd();
//3rd row
//1
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+8, -92, 0.0);
    glVertex3f (p, -92, 0.0);
    glEnd();
//2

//3
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+22, -92, 0.0);
    glVertex3f (p+32, -92, 0.0);
    glEnd();
//4
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+42, -92, 0.0);
    glVertex3f (p+52, -92, 0.0);
    glEnd();
//5
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+72, -92, 0.0);
    glVertex3f (p+62, -92, 0.0);
    glEnd();
//6
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+52, -92, 0.0);
    glVertex3f (p+42, -92, 0.0);
    glEnd();
//7
    glColor3f(0, 0.2, 0.47);
    glBegin(GL_LINES);
    glVertex3f(p+27, -92, 0.0);
    glVertex3f (p+17, -92, 0.0);
    glEnd();
//8
//boat 1
    glColor3f(0, 0, 0);
    glBegin(GL_QUADS);
    glVertex3f (C+2, -78, 0.0);
    glVertex3f (C+2, -82, 0.0);
    glVertex3f (C+22, -82, 0.0);
    glVertex3f(C+22, -78, 0);
    glEnd();
//  boat angle
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(C+22, -78, 0.0);
    glVertex3f (C+27, -75, 0.0);
    glVertex3f (C+22, -82, 0.0);
    glEnd();
//back
    glColor3f(0, 0, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(C+2, -78, 0.0);
    glVertex3f (C-3, -75, 0.0);
    glVertex3f (C+2, -82, 0.0);
    glEnd();

// front open side ash color
    glColor3f(0.74, 0.73, 0.72);
    glBegin(GL_TRIANGLES);
    glVertex3f(C+2, -78, 0.0);
    glVertex3f (C+4, -71, 0.0);
    glVertex3f (C+8, -78, 0.0);
    glEnd();
//upper part of boat
    glColor3f(0.43, 0.24, 0.17);
    glBegin(GL_QUADS);
    glVertex3f(C+8, -78, 0.0);
    glVertex3f (C+4, -71, 0.0);
    glVertex3f (C+18, -71, 0.0);
    glVertex3f (C+22, -78, 0.0);
    glEnd();
// stand
    glColor3f(0.43, 0.24, 0.17);
    glBegin(GL_QUADS);
    glVertex3f(C+12.5, -71, 0.0);
    glVertex3f (C+12.5, -55, 0.0);
    glVertex3f (C+11.5, -55, 0.0);
    glVertex3f (C+11.5, -71, 0.0);
    glEnd();
//pal
    glColor3f(1, 0.56, 0.07);
    glBegin(GL_QUADS);
    glVertex3f(C+7.5, -68, 0.0);
    glVertex3f (C+9.5, -57, 0.0);
    glVertex3f (C+18.5, -57, 0.0);
    glVertex3f (C+16.5, -68, 0.0);
    glEnd();
//swing1
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(C+13.5, -62, 0.0);
    glVertex3f (C+16.5, -60, 0.0);
    glEnd();
//swing2
    glColor3f(0, 0, 0);
    glBegin(GL_LINES);
    glVertex3f(C+16.5, -62, 0.0);
    glVertex3f (C+13.5, -60, 0.0);
    glEnd();
    glutPostRedisplay();
    glFlush();

    glutPostRedisplay();
  glFlush();

}


void my_mouse(int button, int state, int x, int y)
{
   switch (button) {
      case GLUT_LEFT_BUTTON:
         if (state == GLUT_DOWN)
        // glutIdleFunc(night);
         glutDisplayFunc(night);
       // glutPostRedisplay();
        PlaySound(TEXT("nightmode.wav"),NULL,SND_ASYNC);
          glutMainLoop();
        // break;
      case GLUT_MIDDLE_BUTTON:
      case GLUT_RIGHT_BUTTON:
         if (state == GLUT_DOWN)
			glutDisplayFunc(Draw);
            PlaySound(TEXT("bus.wav"),NULL,SND_ASYNC);
			glutPostRedisplay();

     default:
    break;
   }
}

int main(int argc, char **argv){
glutInit(&argc,argv);
glutInitDisplayMode(GLUT_RGB |GLUT_SINGLE);
glutInitWindowPosition(200,200);
glutInitWindowSize(1600,900);
glutCreateWindow("Graphic-Project");
init();
glutMouseFunc(my_mouse);
glutDisplayFunc(Draw);
glutMainLoop();
return 0;
}
