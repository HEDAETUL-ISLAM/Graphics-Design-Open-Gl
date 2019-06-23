#include<windows.h>
#include<GL/glut.h>

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3ub( 159, 168, 218);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,.4f);
    glVertex2f(1.0f,.4f);
    glVertex2f(1.0f,1.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub( 161, 136, 127);
    glVertex2f(-1.0f,.4f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,.4f);
    glEnd();

    glColor3ub(121, 85, 72); ///3
    glBegin(GL_TRIANGLES);
    glVertex2f(.5f,0.0f);
    glVertex2f(.4f,0.5f);
    glVertex2f(.1f,.02f);
    glEnd();

    glColor3ub(109, 76, 65);
    glBegin(GL_TRIANGLES);
    glVertex2f(.8f,0.1f);
    glVertex2f(.4f,0.5f);
    glVertex2f(.5f,0.0f);
    glEnd();


    glLoadIdentity();    ////2
    glTranslatef(-0.5f,-0.15f,0.0f);
    glScalef(1.3f,1.2f,0.0f);

    glColor3ub(121, 85, 72); ////2
    glBegin(GL_TRIANGLES);
    glVertex2f(.5f,0.0f);
    glVertex2f(.4f,0.5f);
    glVertex2f(.1f,.02f);
    glEnd();

    glColor3ub(109, 76, 65);
    glBegin(GL_TRIANGLES);
    glVertex2f(.8f,0.1f);
    glVertex2f(.4f,0.5f);
    glVertex2f(.5f,0.0f);
    glEnd();

    glLoadIdentity();    ////1
    glTranslatef(-1.0f,-0.3f,0.0f);
    glScalef(1.5f,1.4f,0.0f);

    glColor3ub(121, 85, 72); ////1
    glBegin(GL_TRIANGLES);
    glVertex2f(.5f,0.0f);
    glVertex2f(.4f,0.5f);
    glVertex2f(.1f,.02f);
    glEnd();

    glColor3ub(109, 76, 65);
    glBegin(GL_TRIANGLES);
    glVertex2f(.8f,0.1f);
    glVertex2f(.4f,0.5f);
    glVertex2f(.5f,0.0f);
    glEnd();


    glFlush();


}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("Pyramid");
    glutReshapeWindow(700,600);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
