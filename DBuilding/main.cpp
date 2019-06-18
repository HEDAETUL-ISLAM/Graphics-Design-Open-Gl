#include<windows.h>
#include<GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
void display(){
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);




    glBegin(GL_QUADS);
    glColor3ub( 81, 90, 90);
    glVertex2f(-.4f,.2f);
    glVertex2f(-.4f,.15f);
    glVertex2f(.6f,.15f);
    glVertex2f(.6f,.2f);
    glEnd();
    glBegin(GL_QUADS);//left col
    glColor3ub( 81, 90, 90);
    glVertex2f(-.4f,.2f);
    glVertex2f(-.4f,-.3f);
    glVertex2f(.38f,-.3f);
    glVertex2f(.38f,.2f);
    glBegin(GL_QUADS);//right col
    glColor3ub( 81, 90, 90);
    glVertex2f(.58f,.2f);
    glVertex2f(.58f,-.3f);
    glVertex2f(.6f,-.3f);
    glVertex2f(.6f,.2f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub( 41, 128, 185);
    glVertex2f(-.38f,.15f);
    glVertex2f(-.38f,.0f);
    glVertex2f(.58f,.0f);
    glVertex2f(.58f,.15f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub( 81, 90, 90);
    glVertex2f(-.4f,.0f);
    glVertex2f(-.4f,-.05f);
    glVertex2f(.6f,-.05f);
    glVertex2f(.6f,.0f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub( 41, 128, 185);
    glVertex2f(-.38f,-.05f);
    glVertex2f(-.38f,-.20f);
    glVertex2f(.58f,-.20f);
    glVertex2f(.58f,-.05f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub( 81, 90, 90);
    glVertex2f(-.4f,-.20f);
    glVertex2f(-.4f,-.3f);
    glVertex2f(.6f,-.3f);
    glVertex2f(.6f,-.20f);
    glEnd();
    glBegin(GL_QUADS);//right side panel
    glColor3ub(0, 102, 102);
    glVertex2f(.6f,.2f);
    glVertex2f(.6f,-.3f);
    glVertex2f(.7f,-.2f);
    glVertex2f(.7f,.4f);
    glEnd();
    glBegin(GL_QUADS);//right upper panel
    glColor3ub( 20, 143, 119);
    glVertex2f(-.4f,.4f);
    glVertex2f(-.4f,.2f);
    glVertex2f(.6f,.2f);
    glVertex2f(.7f,.4f);
    glEnd();
    glBegin(GL_QUADS);//left upper panel
    glColor3ub( 20, 143, 119);
    glVertex2f(-.55f,.4f);
    glVertex2f(-.65f,.25f);
    glVertex2f(-.4f,.2f);
    glVertex2f(-.4f,.4f);
    glEnd();
    glBegin(GL_QUADS);//left curve panel
    glColor3ub( 81, 90, 90);
    glVertex2f(-.65f,.25f);
    glVertex2f(-.65f,-.25f);
    glVertex2f(-.4f,-.3f);
    glVertex2f(-.4f,.2f);
    glEnd();
    glBegin(GL_QUADS);//LEFT GLASS 1
    glColor3ub( 41, 128, 185);
    glVertex2f(-.63f,.20f);
    glVertex2f(-.63f,.05f);
    glVertex2f(-.42f,.0f);
    glVertex2f(-.42f,.15f);
    glEnd();
    glBegin(GL_QUADS);//LEFT GLASS 2
    glColor3ub( 41, 128, 185);
    glVertex2f(-.63f,.0f);
    glVertex2f(-.63f,-.15f);
    glVertex2f(-.42f,-.20f);
    glVertex2f(-.42f,-.05f);
    glEnd();
    glBegin(GL_LINES);//A
    glColor3ub( 236, 231, 245);
    glVertex2f(-.27f,.35f);
    glVertex2f(-.35f,.25f);
    glVertex2f(-.27f,.35f);
    glVertex2f(-.19f,.25f);
    glVertex2f(-.32f,.29f);
    glVertex2f(-.22f,.29f);
    glEnd();
    glBegin(GL_LINES);//I
    glColor3ub( 236, 231, 245);
    glVertex2f(-.1f,.35f);
    glVertex2f(-.1f,.25f);
    glEnd();
    glBegin(GL_LINES);//U
    glColor3ub( 236, 231, 245);
    glVertex2f(.0f,.35f);
    glVertex2f(.0f,.25f);
    glVertex2d(.0f,.25f);
    glVertex2d(.1f,.25f);
    glVertex2d(.1f,.25f);
    glVertex2d(.1f,.35f);
    glEnd();
    glBegin(GL_LINES);//B
    glColor3ub( 236, 231, 245);
    glVertex2f(.2f,.35f);
    glVertex2f(.2f,.25f);
    glVertex2f(.2f,.25f);
    glVertex2d(.3f,.275f);
    glVertex2d(.3f,.275f);
    glVertex2d(.2f,.30f);
    glVertex2d(.2f,.30f);
    glVertex2d(.3f,.325f);
    glVertex2d(.3f,.325f);
    glVertex2d(.2f,.35f);
    glEnd();
    glBegin(GL_QUADS);//chain
    glColor3ub( 52, 73, 94);
    glVertex2f(-.4f,-.3f);
    glVertex2f(-.4f,-.35f);
    glVertex2f(.0f,-.35f);
    glVertex2f(.0f,-.3f);
    glEnd();
    glBegin(GL_QUADS);//chain
    glColor3ub( 33, 47, 61);
    glVertex2f(-.4f,-.35f);
    glVertex2f(-.39f,-.37f);
    glVertex2f(.01f,-.37f);
    glVertex2f(.0f,-.35f);
    glEnd();
    glBegin(GL_QUADS);//chain
    glColor3ub( 33, 47, 61);
    glVertex2f(.0f,-.3f);
    glVertex2f(.0f,-.35f);
    glVertex2f(.01f,-.37f);
    glVertex2f(.01f,-.3f);
    glEnd();
    glBegin(GL_LINES);//glass line
    glColor3ub( 202, 207, 210);
    glVertex2f(-.38f,.10f);
    glVertex2f(.58f,.10f);
    glVertex2f(-.38f,.05f);
    glVertex2f(.58f,.05f);
    glVertex2f(-.38f,-.10f);
    glVertex2f(.58f,-.10f);
    glVertex2f(-.38f,-.15f);
    glVertex2f(.58f,-.15f);
    glVertex2f(-.63f,.15f);
    glVertex2f(-.42f,.10f);
    glVertex2f(-.63f,.10f);
    glVertex2f(-.42f,.05f);
    glVertex2f(-.63f,-.05f);
    glVertex2f(-.42f,-.10f);
    glVertex2f(-.63f,-.10f);
    glVertex2f(-.42f,-.15f);
    glEnd();


    glFlush();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("AIUB D Building");
    glutReshapeWindow(700,700);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
