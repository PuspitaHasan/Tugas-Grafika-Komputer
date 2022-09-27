//MEMBUAT PROGRAM POLIGON

#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <GL/glut.h>

void mydisplay(){
    glClear(GL_COLOR_BUFFER_BIT);

 glBegin(GL_POLYGON);
  glColor3f(1, 0, 1);
 glVertex2f(-0.20, -0.5);
 glVertex2f(-0.2, 0.3);
 glVertex2f(-0.5, 0.5);
 glVertex2f(-0.2, 0.65);
 glVertex2f(0.3, 0.5);
 glVertex2f(0.85, 0.4);
 glVertex2f(0.3, -0.5);
 glVertex2f(0.3,0.25);
 glEnd();
 glFlush();
}
int main(int argc, char** argv){
 glutInit(&argc, argv);
 glutCreateWindow("Polygon");
 glutDisplayFunc(mydisplay);
 glutMainLoop();
}
