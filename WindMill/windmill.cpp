#include <GL/glut.h>
#include<math.h>

# define PI           3.14159265358979323846
float current_angle = 0.0f;
float speed_normal_angle = .2f;
float speed_up_angle = .7f;
float speed_down_angle = .4f;
// float center_x = .0f;
// float  center_y = .0f;

void display(){

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	//glTranslatef(center_x,center_y, 0.0f);
	glRotatef(current_angle,0,0,1);
	current_angle += speed_normal_angle;
	//glTranslatef(-center_x,-center_y,.0f);

	int i;
	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 78, 162);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(.9f,.1f);
	glVertex2f(.9f,-.1f);
	glVertex2f(.1f,-.05);
	glVertex2f(.1f,.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(-.05f,.1f);
	glVertex2f(-.1f,.05f);
	glVertex2f(-.7f,.55);
	glVertex2f(-.55f,.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(-.05f,-.1f);
	glVertex2f(-.1f,-.05f);
	glVertex2f(-.7f,-.55);
	glVertex2f(-.55f,-.7f);
	glEnd();
    glPopMatrix();
	glFlush();
}

void display_up(){

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	//glTranslatef(center_x,center_y, 0.0f);
	glRotatef(current_angle,0,0,1);
	current_angle += speed_up_angle;
	//glTranslatef(-center_x,-center_y,.0f);

	int i;
	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 78, 162);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(.9f,.1f);
	glVertex2f(.9f,-.1f);
	glVertex2f(.1f,-.05);
	glVertex2f(.1f,.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(-.05f,.1f);
	glVertex2f(-.1f,.05f);
	glVertex2f(-.7f,.55);
	glVertex2f(-.55f,.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(-.05f,-.1f);
	glVertex2f(-.1f,-.05f);
	glVertex2f(-.7f,-.55);
	glVertex2f(-.55f,-.7f);
	glEnd();
    glPopMatrix();
	glFlush();
}

void display_down(){

	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);

	glPushMatrix();
	//glTranslatef(center_x,center_y, 0.0f);
	glRotatef(current_angle,0,0,1);
	current_angle += speed_down_angle;
	//glTranslatef(-center_x,-center_y,.0f);

	int i;
	GLfloat x=.0f; GLfloat y=.0f; GLfloat radius =.2f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0, 78, 162);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
                x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(.9f,.1f);
	glVertex2f(.9f,-.1f);
	glVertex2f(.1f,-.05);
	glVertex2f(.1f,.05f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(-.05f,.1f);
	glVertex2f(-.1f,.05f);
	glVertex2f(-.7f,.55);
	glVertex2f(-.55f,.7f);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(0, 78, 162);
	glVertex2f(-.05f,-.1f);
	glVertex2f(-.1f,-.05f);
	glVertex2f(-.7f,-.55);
	glVertex2f(-.55f,-.7f);
	glEnd();
    glPopMatrix();
	glFlush();
}

void Idle(){
    glutPostRedisplay();
}
void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
    case 'u':
         glutDisplayFunc(display_up);//
        break;
    case 'd':
         glutDisplayFunc(display_down);//
        break;
    glutPostRedisplay();
    }
}
void SpecialInput(int key, int x, int y){
    switch(key){
    case GLUT_KEY_UP:
        glutDisplayFunc(display_up);
    break;
    case GLUT_KEY_DOWN:
        glutDisplayFunc(display_down);
    break;
    case GLUT_KEY_LEFT:
    break;
    case GLUT_KEY_RIGHT:
    break;
    }
    glutPostRedisplay();
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON){
        glutDisplayFunc(display_up);
    }

    if (button == GLUT_RIGHT_BUTTON){
        glutDisplayFunc(display_down);
    }

    glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Fan");
	glutReshapeWindow(720, 720);
    glutIdleFunc(Idle);
	glutDisplayFunc(display);
	glutKeyboardFunc(handleKeypress);
    glutSpecialFunc(SpecialInput);
    glutMouseFunc(handleMouse);
	glutMainLoop();
	return 0;
}
