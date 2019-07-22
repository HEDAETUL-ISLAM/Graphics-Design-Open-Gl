
#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
#define PI  3.1416


void circle(GLfloat x,GLfloat y,GLfloat radius,int triangleAmount){
    	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);

		glVertex2f(x, y);
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void init() {
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
}


///////////////////////////////////////////////////////cloud right
GLfloat cloudRight = 0.0f;
GLfloat cloudRightSpeed = 0.01f;
void cloudMoveRight(int value) {
    if(cloudRight > 1.0)
        cloudRight = -1.0f;
    cloudRight += cloudRightSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, cloudMoveRight, 0);
}
///////////////////////////////////////////////////////cloud left faster
GLfloat cloudLeft = 0.0f;
GLfloat cloudLeftSpeed = 0.1f;
void cloudMoveLeft(int value) {
    if(cloudLeft < -1.0)
        cloudLeft = 1.0f;
    cloudLeft -= cloudLeftSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, cloudMoveLeft, 0);
}
//////////////////////////////////////////////////////ship right
GLfloat shipRight = 0.0f;
GLfloat shipRightSpeed = 0.001f;
void shipMoveRight(int value) {
    if(shipRight >1.0)
        shipRight = -1.0f;
    shipRight += shipRightSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, shipMoveRight, 0);
}
//////////////////////////////////////////////////////ship left faster
GLfloat shipLeft = 0.0f;
GLfloat shipLeftSpeed = 0.01f;
void shipMoveLeft(int value) {
    if(shipLeft <-1.0)
        shipLeft = 1.0f;
    shipLeft -= shipLeftSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, shipMoveLeft, 0);
}
/////////////////////////////////////////////////////snow
GLfloat snow = 0.0f;
GLfloat snowNormalSpeed = 0.01f;
void snowEffect(int value) {
    if(snow <-1.0)
        snow = 1.0f;
    snow -= snowNormalSpeed;
	glutPostRedisplay();
	glutTimerFunc(100, snowEffect, 0);
}


void skySea(){
    glBegin(GL_QUADS);//////////////////////////sky
    glColor3ub(162, 217, 206);
    glVertex2f(-1.0f,1.0f);
    glVertex2f( -1.0f, .0f);
    glVertex2f(  1.0f, .0f);
    glVertex2f(1.0f, 1.0f);
    glEnd();
    glBegin(GL_TRIANGLES);/////////////////////1st mountain
    glColor3ub(229, 152, 102);
    glVertex2f(-1.0f, .0f);
    glVertex2f(-.8f, .3f);
    glVertex2f(-.6f, .0f);
    glEnd();
    glBegin(GL_TRIANGLES);////////////////////3rd mountain
    glColor3ub(229, 152, 102);
    glVertex2f(-.4f, .0f);
    glVertex2f(-.2f, .3f);
    glVertex2f(-.0f, .0f);
    glEnd();
    glBegin(GL_TRIANGLES);////////////////////2nd mountain
    glColor3ub(220, 118, 51);
    glVertex2f(-.7f, .0f);
    glVertex2f(-.5f, .4f);
    glVertex2f(-.3f, .0f);
    glEnd();
    glBegin(GL_QUADS);////////////////////////mountain bottom border
    glColor3ub(31, 97, 141);
    glVertex2f(-1.0f, .0f);
    glVertex2f( -1.0f, -1.0f);
    glVertex2f(  1.0f, -1.0f);
    glVertex2f( 1.0f, .0f);
    glEnd();
    glBegin(GL_QUADS);///////////////////////sea water
    glColor3ub(175, 96, 26);
    glVertex2f(-1.0f, .01f);
    glVertex2f( -1.0f, -.01f);
    glVertex2f(  -.0f, .0f);
    glVertex2f( -.0f, .01f);
    glEnd();

    glPushMatrix();
    glLoadIdentity();
    glBegin(GL_LINES);  ////////////////// 1st row
    glColor3ub(127, 179, 213);
    glVertex2f(-0.9f,-0.1f);
    glVertex2f(-0.8f,-0.1f);
    glVertex2f(-0.7f,-0.1f);
    glVertex2f(-0.6f,-0.1f);
    glVertex2f(-0.5f,-0.1f);
    glVertex2f(-0.4f,-0.1f);
    glVertex2f(-0.3f,-0.1f);
    glVertex2f(-0.2f,-0.1f);
    glVertex2f(-0.1f,-0.1f);
    glVertex2f(-0.0f,-0.1f);
    glVertex2f(0.9f,-0.1f);
    glVertex2f(0.8f,-0.1f);
    glVertex2f(0.7f,-0.1f);
    glVertex2f(0.6f,-0.1f);
    glVertex2f(0.5f,-0.1f);
    glVertex2f(0.4f,-0.1f);
    glVertex2f(0.3f,-0.1f);
    glVertex2f(0.2f,-0.1f);
    glVertex2f(0.1f,-0.1f);
    glVertex2f(0.0f,-0.1f);
    glEnd();
    glBegin(GL_LINES);  ////////////////// 2nd row
    glColor3ub(127, 179, 213);
    glVertex2f(-0.8f,-0.3f);
    glVertex2f(-0.7f,-0.3f);
    glVertex2f(-0.6f,-0.3f);
    glVertex2f(-0.5f,-0.3f);
    glVertex2f(-0.4f,-0.3f);
    glVertex2f(-0.3f,-0.3f);
    glVertex2f(-0.2f,-0.3f);
    glVertex2f(-0.1f,-0.3f);
    glVertex2f(0.8f,-0.3f);
    glVertex2f(0.7f,-0.3f);
    glVertex2f(0.6f,-0.3f);
    glVertex2f(0.5f,-0.3f);
    glVertex2f(0.4f,-0.3f);
    glVertex2f(0.3f,-0.3f);
    glVertex2f(0.2f,-0.3f);
    glVertex2f(0.1f,-0.3f);
    glEnd();
    glBegin(GL_LINES);  ////////////////// 3rd row
    glColor3ub(127, 179, 213);
    glVertex2f(-0.9f,-0.5f);
    glVertex2f(-0.8f,-0.5f);
    glVertex2f(-0.7f,-0.5f);
    glVertex2f(-0.6f,-0.5f);
    glVertex2f(-0.5f,-0.5f);
    glVertex2f(-0.4f,-0.5f);
    glVertex2f(-0.3f,-0.5f);
    glVertex2f(-0.2f,-0.5f);
    glVertex2f(-0.1f,-0.5f);
    glVertex2f(-0.0f,-0.5f);
    glVertex2f(0.9f,-0.5f);
    glVertex2f(0.8f,-0.5f);
    glVertex2f(0.7f,-0.5f);
    glVertex2f(0.6f,-0.5f);
    glVertex2f(0.5f,-0.5f);
    glVertex2f(0.4f,-0.5f);
    glVertex2f(0.3f,-0.5f);
    glVertex2f(0.2f,-0.5f);
    glVertex2f(0.1f,-0.5f);
    glVertex2f(0.0f,-0.5f);
    glEnd();
    glBegin(GL_LINES);  ////////////////// 4th row
    glColor3ub(127, 179, 213);
    glVertex2f(-0.8f,-0.7f);
    glVertex2f(-0.7f,-0.7f);
    glVertex2f(-0.6f,-0.7f);
    glVertex2f(-0.5f,-0.7f);
    glVertex2f(-0.4f,-0.7f);
    glVertex2f(-0.3f,-0.7f);
    glVertex2f(-0.2f,-0.7f);
    glVertex2f(-0.1f,-0.7f);
    glVertex2f(0.8f,-0.7f);
    glVertex2f(0.7f,-0.7f);
    glVertex2f(0.6f,-0.7f);
    glVertex2f(0.5f,-0.7f);
    glVertex2f(0.4f,-0.7f);
    glVertex2f(0.3f,-0.7f);
    glVertex2f(0.2f,-0.7f);
    glVertex2f(0.1f,-0.7f);
    glEnd();
    glBegin(GL_LINES);  ////////////////// 5th row
    glColor3ub(127, 179, 213);
    glVertex2f(-0.9f,-0.9f);
    glVertex2f(-0.8f,-0.9f);
    glVertex2f(-0.7f,-0.9f);
    glVertex2f(-0.6f,-0.9f);
    glVertex2f(-0.5f,-0.9f);
    glVertex2f(-0.4f,-0.9f);
    glVertex2f(-0.3f,-0.9f);
    glVertex2f(-0.2f,-0.9f);
    glVertex2f(-0.1f,-0.9f);
    glVertex2f(-0.0f,-0.9f);
    glVertex2f(0.9f,-0.9f);
    glVertex2f(0.8f,-0.9f);
    glVertex2f(0.7f,-0.9f);
    glVertex2f(0.6f,-0.9f);
    glVertex2f(0.5f,-0.9f);
    glVertex2f(0.4f,-0.9f);
    glVertex2f(0.3f,-0.9f);
    glVertex2f(0.2f,-0.9f);
    glVertex2f(0.1f,-0.9f);
    glVertex2f(0.0f,-0.9f);
    glEnd();
    glPopMatrix();
    glFlush();
}
void snowMove(){//////////////////////////////snow
    glPushMatrix();
    glLoadIdentity();
    glTranslatef(0.0, snow,0.0f);
    glColor3ub(242, 244, 244);
    circle(-.9f, 1.0f, .01f, 100);
    circle(-.91f, .99f, .01f, 100);
    circle(-.92f, 1.0f, .01f, 100);
    circle(-.7f, 0.95f, .01f, 100);
    circle(-.71f, 0.96f, .01f, 100);
    circle(-.72f, 0.95f, .01f, 100);
    circle(-.5f, 0.90f, .01f, 100);
    circle(-.51f, 0.89f, .01f, 100);
    circle(-.52f, 0.90f, .01f, 100);
    circle(-.3f, 0.85f, .01f, 100);
    circle(-.31f, 0.86f, .01f, 100);
    circle(-.32f, 0.85f, .01f, 100);
    circle(-.1f, 0.90f, .01f, 100);
    circle(-.11f, 0.89f, .01f, 100);
    circle(-.12f, 0.90f, .01f, 100);
    circle(.1f, 0.90f, .01f, 100);
    circle(.11f, 0.91f, .01f, 100);
    circle(.12f, 0.90f, .01f, 100);
    circle(.3f, 0.85f, .01f, 100);
    circle(.31f, 0.84f, .01f, 100);
    circle(.32f, 0.85f, .01f, 100);
    circle(.5f, 0.90f, .01f, 100);
    circle(.51f, 0.91f, .01f, 100);
    circle(.52f, 0.90f, .01f, 100);
    circle(.7f, 0.95f, .01f, 100);
    circle(.71f, 0.94f, .01f, 100);
    circle(.72f, 0.95f, .01f, 100);
    circle(.9f, 1.0f, .01f, 100);
    circle(.91f, 1.01f, .01f, 100);
    circle(.92f, 1.0f, .01f, 100);
    
    glEnd();
    glPopMatrix();
    glFlush();
}

void cloudRightMove(){//////////////////////cloud right move slow
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(cloudRight,0.0, 0.0f);
    glColor3ub(236, 240, 241);
    circle(-.10f, 0.5f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.15f, 0.5f, .07f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.20f, 0.5f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(.10f, 0.7f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(.15f, 0.7f, .07f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(.20f, 0.7f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.45f, 0.7f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.5f, 0.7f, .07f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.55f, 0.7f, .06f, 100);
    glEnd();
    glPopMatrix();
    glFlush();
    
}
void cloudLeftMove(){/////////////////////////////////cloud left move faster
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(cloudLeft,0.0, 0.0f);
    glColor3ub(236, 240, 241);
    circle(-.10f, 0.5f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.15f, 0.5f, .07f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.20f, 0.5f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(.10f, 0.7f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(.15f, 0.7f, .07f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(.20f, 0.7f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.45f, 0.7f, .06f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.5f, 0.7f, .07f, 100);
    glEnd();
    glColor3ub(236, 240, 241);
    circle(-.55f, 0.7f, .06f, 100);
    glEnd();
    glPopMatrix();
    glFlush();
    
}

void shipShiftRight(){/////////////////////////////////ship right move slow
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(shipRight,0.0, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(39, 55, 70);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f( -0.2f, -0.7f);
    glVertex2f( 0.2f,  -0.7f);
    glVertex2f(0.3f,  -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(205, 97, 85);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f( -0.2f, -0.5f);
    glVertex2f( 0.2f,  -0.5f);
    glVertex2f(0.2f,  -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(214, 219, 223);
    glVertex2f(-0.2f, -0.38f);
    glVertex2f( -0.2f, -0.4f);
    glVertex2f( 0.2f,  -0.4f);
    glVertex2f(0.2f,  -0.38f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(229, 152, 102);
    glVertex2f(-0.1f, -0.25f);
    glVertex2f( -0.1f, -0.38f);
    glVertex2f( 0.1f,  -0.38f);
    glVertex2f(0.1f,  -0.25f);
    glEnd();
    glPopMatrix();
    glFlush();
}
void shipShiftLeft(){///////////////////////////////ship left move faster
    glLoadIdentity();
    glPushMatrix();
    glTranslatef(shipLeft,0.0, 0.0f);
    glBegin(GL_QUADS);
    glColor3ub(39, 55, 70);
    glVertex2f(-0.3f, -0.5f);
    glVertex2f( -0.2f, -0.7f);
    glVertex2f( 0.2f,  -0.7f);
    glVertex2f(0.3f,  -0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(205, 97, 85);
    glVertex2f(-0.2f, -0.4f);
    glVertex2f( -0.2f, -0.5f);
    glVertex2f( 0.2f,  -0.5f);
    glVertex2f(0.2f,  -0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(214, 219, 223);
    glVertex2f(-0.2f, -0.38f);
    glVertex2f( -0.2f, -0.4f);
    glVertex2f( 0.2f,  -0.4f);
    glVertex2f(0.2f,  -0.38f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(229, 152, 102);
    glVertex2f(-0.1f, -0.25f);
    glVertex2f( -0.1f, -0.38f);
    glVertex2f( 0.1f,  -0.38f);
    glVertex2f(0.1f,  -0.25f);
    glEnd();
    glPopMatrix();
    glFlush();
}
void displayLeft() {/////////////////////////////left move
    glClear(GL_COLOR_BUFFER_BIT);
    skySea();
    cloudLeftMove();
    shipShiftLeft();
    snowMove();
    glFlush();
    glutSwapBuffers();
}
void displayRight() {//////////////////////////////right move
    glClear(GL_COLOR_BUFFER_BIT);
    skySea();
    cloudRightMove();
    shipShiftRight();
    snowMove();
    glFlush();
    glutSwapBuffers();
}

void SpecialInput(int key, int x, int y){
    switch(key){
    case GLUT_KEY_UP:
        
    break;
    case GLUT_KEY_DOWN:
        
    break;
    case GLUT_KEY_LEFT:
        glutDisplayFunc(displayLeft);
    break;
    case GLUT_KEY_RIGHT:
        glutDisplayFunc(displayRight);
    break;
    }
    glutPostRedisplay();
}

int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutCreateWindow("Mini View");
   glutReshapeWindow(1920,1080);
//    glutInitWindowSize(320,320);
   glutDisplayFunc(displayRight);/////////////////normaly right move 
   init();
    glutSpecialFunc(SpecialInput);
   glutTimerFunc(100, cloudMoveRight, 0);
   glutTimerFunc(100, cloudMoveLeft, 0);
   glutTimerFunc(100, snowEffect, 0);
   glutTimerFunc(100, shipMoveRight, 0);
   glutTimerFunc(100, shipMoveLeft, 0);
   glutMainLoop();
   return 0;
}
