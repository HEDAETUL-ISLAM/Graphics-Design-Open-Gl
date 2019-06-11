#include<windows.h>
#include<GL/glut.h>

void display(){
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);

    /*glBegin(GL_LINES);
    glColor3f(255,0,0);
    glVertex2f(1,0);
    glVertex2f(-1,0);
    glColor3f(0,0,255);
    glVertex2f(0,1);
    glVertex2f(0,-1);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(255,0,0);
    glVertex2f(-0.2f,0.2f);
    glVertex2f(-0.8f,0.2f);
    glVertex2f(-0.5f,0.6f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(255,0,0);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.8f,0.2f);
    glVertex2f(0.8f,0.7f);
    glVertex2f(0.2f,0.7f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(255,0,0);
    glVertex2f(-.3f,-.2f);
    glVertex2f(-.6f,-.2f);
    glVertex2f(-.8f,-.4f);
    glVertex2f(-.8f,-.7f);
    glVertex2f(-.6f,-.9f);
    glVertex2f(-.3f,-.9f);
    glVertex2f(-.1f,-.7f);
    glVertex2f(-.1f,-.4f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(230, 126, 34);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.8f,-0.2f);
    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.5f,-0.6f);
    glVertex2f(0.5f,-0.6f);
    glVertex2f(0.8f,-0.2f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(237, 59, 88 );
    glVertex2f(-0.8f,0.2f);
    glVertex2f(-0.8f,0.3f);
    glVertex2f(0.8f,0.3f);
    glVertex2f(0.8f,0.2f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(220, 118, 51  );
    glVertex2f(-0.8f,0.3f);
    glVertex2f(-0.8f,0.4f);
    glVertex2f(0.8f,0.4f);
    glVertex2f(0.8f,0.3f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(244, 208, 63);
    glVertex2f(-0.8f,0.4f);
    glVertex2f(-0.8f,0.5f);
    glVertex2f(0.8f,0.5f);
    glVertex2f(0.8f,0.4f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(39, 174, 96);
    glVertex2f(-0.8f,0.5f);
    glVertex2f(-0.8f,0.6f);
    glVertex2f(0.8f,0.6f);
    glVertex2f(0.8f,0.5f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(36, 113, 163  );
    glVertex2f(-0.8f,0.6f);
    glVertex2f(-0.8f,0.7f);
    glVertex2f(0.8f,0.7f);
    glVertex2f(0.8f,0.6f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub(125, 60, 152  );
    glVertex2f(-0.8f,0.7f);
    glVertex2f(-0.8f,0.8f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.8f,0.7f);
    glEnd();*/

    glBegin(GL_LINES);

    glColor3ub(36, 113, 163);
    glVertex2f(-.7f,.4f);
    glVertex2f(-.9f,.6f);
    glVertex2f(-.6f,.6f);
    glEnd();

    glFlush();
}
int main(int argc,char** argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("OpenGl setup test");
    glutInitWindowSize(320,320);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
