#include<windows.h>
#include<GL/glut.h>
#include<math.h>>
# define PI           3.14159265358979323846
void display(){
    glClearColor(0.0f,0.0f,0.0f,0.0f);
    glClear(GL_COLOR_BUFFER_BIT);




    glBegin(GL_QUADS);
    glColor3ub( 25, 111, 61);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.6f,0.2f);
    glVertex2f(0.6f,0.2f);
    glVertex2f(0.6f,0.8f);
    glEnd();
    glBegin(GL_QUADS);
    glColor3ub( 23, 32, 42);
    glVertex2f(-0.6f,0.8f);
    glVertex2f(-0.6f,-0.8f);
    glVertex2f(-0.5f,-0.8f);
    glVertex2f(-0.5f,0.8f);
    glEnd();


    GLfloat x=.05f; GLfloat y=.5f; GLfloat radius =.2f;
        int triangleAmount = 20;
        GLfloat twicePi = 2.0f * PI;

        glBegin(GL_TRIANGLE_FAN);
         glColor3ub(  176, 58, 46 );
        glVertex2f(x, y);
        for(int i = 0;  i <= triangleAmount;i++) {
            glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
                y + (radius * sin(i * twicePi / triangleAmount))
            );
        }
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
