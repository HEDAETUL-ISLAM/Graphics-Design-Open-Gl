
#include<windows.h>
#include<GL/glut.h>

void display()
{
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glClear(GL_COLOR_BUFFER_BIT);


    glBegin(GL_QUADS);
    glColor3ub( 159, 168, 218);
    glVertex2f(-1.0f,1.0f);
    glVertex2f(-1.0f,-1.0f);
    glVertex2f(1.0f,-1.0f);
    glVertex2f(1.0f,1.0f);
    glEnd();

    glBegin(GL_QUADS);///////////black body
    glColor3ub(33, 33, 33);
    glVertex2f(-.3f,.4f);
    glVertex2f(-.3f,-.2f);
    glVertex2f(.3f,-.2f);
    glVertex2f(.3f,.4f);
    glEnd();
    glBegin(GL_QUADS);///////////black color big
    glColor3ub(33, 33, 33);
    glVertex2f(-.2f,.45f);
    glVertex2f(-.2f,.4f);
    glVertex2f(.2f,.4f);
    glVertex2f(.2f,.45f);
    glEnd();
    glBegin(GL_QUADS);///////////black color tiny
    glColor3ub(33, 33, 33);
    glVertex2f(-.15f,.5f);
    glVertex2f(-.15f,.45f);
    glVertex2f(.15f,.45f);
    glVertex2f(.15f,.5f);
    glEnd();

    glBegin(GL_QUADS);/////////////belt
    glColor3ub(26, 35, 126);
    glVertex2f(-.2f,-.1f);
    glVertex2f(-.2f,-.2f);
    glVertex2f(.2f,-.2f);
    glVertex2f(.2f,-.1f);
    glEnd();
    glBegin(GL_QUADS);//////////left leg
    glColor3ub(26, 35, 126);
    glVertex2f(-.2f,-.2f);
    glVertex2f(-.2f,-.7f);
    glVertex2f(-.1f,-.7f);
    glVertex2f(-.1f,-.2f);
    glEnd();
    glBegin(GL_QUADS);//////////right leg
    glColor3ub(26, 35, 126);
    glVertex2f(.2f,-.2f);
    glVertex2f(.2f,-.7f);
    glVertex2f(.1f,-.7f);
    glVertex2f(.1f,-.2f);
    glEnd();
    glBegin(GL_QUADS);//////////left leg footer
    glColor3ub(63, 81, 181);
    glVertex2f(-.2f,-.7f);
    glVertex2f(-.2f,-.75f);
    glVertex2f(-.1f,-.75f);
    glVertex2f(-.1f,-.7f);
    glEnd();
    glBegin(GL_QUADS);//////////right leg footer
    glColor3ub(63, 81, 181);
    glVertex2f(.2f,-.7f);
    glVertex2f(.2f,-.75f);
    glVertex2f(.1f,-.75f);
    glVertex2f(.1f,-.7f);
    glEnd();
    glBegin(GL_QUADS);//////////left leg shoe header
    glColor3ub(33,33,33);
    glVertex2f(-.2f,-.75f);
    glVertex2f(-.2f,-.8f);
    glVertex2f(-.1f,-.8f);
    glVertex2f(-.1f,-.75f);
    glEnd();
    glBegin(GL_QUADS);//////////left leg shoe body
    glColor3ub(33,33,33);
    glVertex2f(-.35f,-.8f);
    glVertex2f(-.35f,-.85f);
    glVertex2f(-.1f,-.85f);
    glVertex2f(-.1f,-.8f);
    glEnd();
    glBegin(GL_QUADS);//////////right leg shoe header
    glColor3ub(33,33,33);
    glVertex2f(.2f,-.75f);
    glVertex2f(.2f,-.8f);
    glVertex2f(.1f,-.8f);
    glVertex2f(.1f,-.75f);
    glEnd();
    glBegin(GL_QUADS);//////////right leg shoe body
    glColor3ub(33,33,33);
    glVertex2f(.35f,-.8f);
    glVertex2f(.35f,-.85f);
    glVertex2f(.1f,-.85f);
    glVertex2f(.1f,-.8f);
    glEnd();
    glBegin(GL_QUADS);//////////left hand
    glColor3ub(224, 224, 224);
    glVertex2f(-.3f,-.18f);
    glVertex2f(-.3f,-.3f);
    glVertex2f(-.2f,-.3f);
    glVertex2f(-.2f,-.18f);
    glEnd();
    glBegin(GL_QUADS);//////////left hand finger
    glColor3ub(224, 224, 224);
    glVertex2f(-.2f,-.18f);
    glVertex2f(-.2f,-.21f);
    glVertex2f(-.17f,-.21f);
    glVertex2f(-.17f,-.18f);
    glEnd();
    glBegin(GL_QUADS);//////////right hand
    glColor3ub(224, 224, 224);
    glVertex2f(.3f,-.18f);
    glVertex2f(.3f,-.3f);
    glVertex2f(.2f,-.3f);
    glVertex2f(.2f,-.18f);
    glEnd();
    glBegin(GL_QUADS);//////////right hand finger
    glColor3ub(224, 224, 224);
    glVertex2f(.2f,-.18f);
    glVertex2f(.2f,-.21f);
    glVertex2f(.17f,-.21f);
    glVertex2f(.17f,-.18f);
    glEnd();
    glBegin(GL_QUADS);//////////pant belt
    glColor3ub(97, 97, 97);
    glVertex2f(-.2f,-.07f);
    glVertex2f(-.2f,-.1f);
    glVertex2f(.2f,-.1f);
    glVertex2f(.2f,-.07f);
    glEnd();
    glBegin(GL_QUADS);////////// tie
    glColor3ub(97, 97, 97);
    glVertex2f(-.02f,.15f);
    glVertex2f(-.02f,-.07f);
    glVertex2f(.02f,-.07f);
    glVertex2f(.02f,.15f);
    glEnd();
    glBegin(GL_QUADS);////////// tie white tiny
    glColor3ub(224, 224, 224);
    glVertex2f(-.02f,.2f);
    glVertex2f(-.02f,.15f);
    glVertex2f(.02f,.15f);
    glVertex2f(.02f,.2f);
    glEnd();
    glBegin(GL_QUADS);////////// tie white medium
    glColor3ub(224, 224, 224);
    glVertex2f(-.05f,.25f);
    glVertex2f(-.05f,.2f);
    glVertex2f(.05f,.2f);
    glVertex2f(.05f,.25f);
    glEnd();
    glBegin(GL_QUADS);////////// tie white large
    glColor3ub(224, 224, 224);
    glVertex2f(-.1f,.35f);
    glVertex2f(-.1f,.25f);
    glVertex2f(.1f,.25f);
    glVertex2f(.1f,.35f);
    glEnd();
    glBegin(GL_QUADS);////////// gola
    glColor3ub(237, 187, 153);
    glVertex2f(-.1f,.45f);
    glVertex2f(-.1f,.35f);
    glVertex2f(.1f,.35f);
    glVertex2f(.1f,.45f);
    glEnd();
    glBegin(GL_QUADS);////////// head
    glColor3ub(237, 187, 153);
    glVertex2f(-.25f,.7f);
    glVertex2f(-.25f,.42f);
    glVertex2f(.1f,.42f);
    glVertex2f(.1f,.7f);
    glEnd();
    glBegin(GL_QUADS);////////// left glass
    glColor3ub(33,33,33);
    glVertex2f(-.32f,.68f);
    glVertex2f(-.32f,.63f);
    glVertex2f(-.25f,.63f);
    glVertex2f(-.25f,.68f);
    glEnd();
    glBegin(GL_QUADS);////////// middle glass
    glColor3ub(33,33,33);
    glVertex2f(-.25f,.68f);
    glVertex2f(-.25f,.66f);
    glVertex2f(-.22f,.66f);
    glVertex2f(-.22f,.68f);
    glEnd();
    glBegin(GL_QUADS);////////// right glass
    glColor3ub(33,33,33);
    glVertex2f(-.22f,.68f);
    glVertex2f(-.22f,.63f);
    glVertex2f(-.13f,.63f);
    glVertex2f(-.13f,.68f);
    glEnd();
    glBegin(GL_QUADS);////////// hair
    glColor3ub(33,33,33);
    glVertex2f(-.32f,.8f);
    glVertex2f(-.32f,.7f);
    glVertex2f(.12f,.7f);
    glVertex2f(.12f,.8f);
    glEnd();
    glBegin(GL_QUADS);////////// hair head
    glColor3ub(33,33,33);
    glVertex2f(-.32f,.85f);
    glVertex2f(-.32f,.8f);
    glVertex2f(-.18f,.8f);
    glVertex2f(-.18f,.85f);
    glEnd();
    glBegin(GL_QUADS);////////// hair chip
    glColor3ub(33,33,33);
    glVertex2f(-.02f,.7f);
    glVertex2f(-.02f,.5f);
    glVertex2f(.02f,.5f);
    glVertex2f(.02f,.7f);
    glEnd();
    glBegin(GL_QUADS);////////// hair chip back
    glColor3ub(33,33,33);
    glVertex2f(.02f,.7f);
    glVertex2f(.02f,.65f);
    glVertex2f(.12f,.65f);
    glVertex2f(.12f,.7f);
    glEnd();
    glBegin(GL_QUADS);////////// hair  back
    glColor3ub(33,33,33);
    glVertex2f(.05f,.7f);
    glVertex2f(.05f,.57f);
    glVertex2f(.12f,.57f);
    glVertex2f(.12f,.7f);
    glEnd();



    glFlush();


}

int main(int argc,char**argv)
{
    glutInit(&argc,argv);
    glutCreateWindow("Pyramid");
    glutReshapeWindow(500,600);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
