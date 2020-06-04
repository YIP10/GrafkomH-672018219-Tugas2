#include <stdlib.h>
#include <GL/glut.h>
#include <math.h>


void layang () {
	glBegin (GL_POLYGON) ;
	glColor3f (0.5,0,0);
	glVertex2f (50,200) ; //garis bawahan,depan garis kiri
	glColor3f (0,0.5,0.5);
	glVertex2f (150,100) ; //garis bawahan
	glColor3f (0.0,0.8,0.8);
	glVertex2f (400,200) ; //garis pucukan,depan garis kanan
	glColor3f (0.5,0,0);
	glVertex2f (150,300) ;//garis pucukan
	glEnd ();
}

void garis (){
    glBegin(GL_LINES);
    glColor3f(0.5,0,1);
    glVertex2f(150,300);
    glVertex2f(150,100);
    glEnd();
}
void garis2 (){
    glBegin(GL_LINES);
    glColor3f(0.5,0,1);
    glVertex2f(50,200);
    glVertex2f(400,200);
    glEnd();
}
void buntut (){
    glBegin(GL_LINES);
    glColor3f(1,1,0.5);
    glVertex2f(400,200);
    glVertex2f(550,200);
    glEnd();
}
void buntut2 (){
    glBegin(GL_LINES);
    glColor3f(1,1,0.5);
    glVertex2f(400,200);
    glVertex2f(550,220);
    glEnd();
}
void buntut3 (){
    glBegin(GL_LINES);
    glColor3f(1,1,0.5);
    glVertex2f(400,200);
    glVertex2f(550,240);
    glEnd();
}
void buntut4 (){
    glBegin(GL_LINES);
    glColor3f(1,1,0.5);
    glVertex2f(400,200);
    glVertex2f(550,180);
    glEnd();
}
void buntut5 (){
    glBegin(GL_LINES);
    glColor3f(1,1,0.5);
    glVertex2f(400,200);
    glVertex2f(550,160);
    glEnd();
}

void ulang (){
    glBegin(GL_LINE_LOOP);
    glColor3f( 1, 1, 0.5 );
      glVertex2f(50,200);
      glVertex2f(150,100);
      glVertex2f(400,200);
      glVertex2f(150,300);
      glVertex2f(50,200);

}

void render (){
    glClear(GL_COLOR_BUFFER_BIT);
	layang ();
	garis ();
	garis2();
	buntut();
	buntut2();
	buntut3();
	buntut4();
	buntut5();
	ulang ();
	glEnd ();
    glFlush ();
}

int main (int argc, char **argv)
	{
	glutInit (&argc , argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_DEPTH | GLUT_RGBA);
	glutInitWindowPosition (100,100);
	glutInitWindowSize (640,480) ; //ukuran dari jendela
	glutCreateWindow ("TUGAS2 Grafkom 672018219") ;
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
	glutDisplayFunc (render) ; //yang mau dirender
	glutMainLoop () ;
	}
