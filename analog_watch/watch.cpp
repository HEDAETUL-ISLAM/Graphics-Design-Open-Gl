#include <GL/glut.h>
#include<math.h>

# define PI    3.14159265358979323846;
float current_hour = 0.0f;
float current_minute = 0.0f;
float current_second = 0.0f;
float speed_hour = .0001f;
float speed_minute = .001f;
float speed_second = .1f;

void circle(){
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
	glClear(GL_COLOR_BUFFER_BIT);
    
	int i;
    GLfloat x=.0f; GLfloat y=.0f;
	int lineAmount = 10000;
	GLfloat twicePi = 2.0f * PI;
	glBegin(GL_LINE_LOOP);
    glColor3ub(0, 78, 162);
    for(i = 0; i <= lineAmount;i++) {
        glVertex2f(
            x + (.5f * cos(i *  twicePi / lineAmount)),
            y + (.5f* sin(i * twicePi / lineAmount))
        );
    }
	glEnd();
	glBegin(GL_LINE_LOOP);
    glColor3ub(14, 102, 85);
    for(i = 0; i <= lineAmount;i++) {
        glVertex2f(
            x + (.51f * cos(i *  twicePi / lineAmount)),
            y + (.51f* sin(i * twicePi / lineAmount))
        );
    }
	glEnd();
	int triangleAmount = 20;
	glBegin(GL_TRIANGLE_FAN);
    glColor3ub(0, 78, 162);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount;i++) {
        glVertex2f(
			x + (.05 * cos(i *  twicePi / triangleAmount)),
			y + (.05 * sin(i * twicePi / triangleAmount))
        );
    }
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(14, 102, 85);
	glVertex2f(.0f , .5f);//12
	glVertex2f(.0f , .4f);
	glVertex2f(.001f , .5f);//12
	glVertex2f(.001f , .4f);
	glVertex2f(-.001f , .5f);//12
	glVertex2f(-.001f , .4f);
	glVertex2f(.0f , -.5f);//6
	glVertex2f(.0f , -.4f);
	glVertex2f(.001f , -.5f);//6
	glVertex2f(.001f , -.4f);
	glVertex2f(-.001f , -.5f);//6
	glVertex2f(-.001f , -.4f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(14, 102, 85);
	glVertex2f(.4f , .0f);//3
	glVertex2f(.5f , .0f);
	glVertex2f(.4f , .001f);//3
	glVertex2f(.5f , .001f);
	glVertex2f(.4f , -.001f);//3
	glVertex2f(.5f , -.001f);
	glVertex2f(-.4f , .0f);//9
	glVertex2f(-.5f , .0f);
	glVertex2f(-.4f , .001f);//9
	glVertex2f(-.5f , .001f);
	glVertex2f(-.4f , -.001f);//9
	glVertex2f(-.5f , -.001f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 78, 162);
	glVertex2f(.25f , .35f);//1
	glVertex2f(.3f , .4f);
	glVertex2f(-.25f , -.35f);//7
	glVertex2f(-.3f , -.4f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 78, 162);
	glVertex2f(-.25f , .35f);//11
	glVertex2f(-.3f , .4f);
	glVertex2f(.25f , -.35f);//5
	glVertex2f(.3f , -.4f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 78, 162);
	glVertex2f(.38f , .19f);//2
	glVertex2f(.45f , .22f);
	glVertex2f(-.38f , -.19f);//8
	glVertex2f(-.45f , -.22f);
	glEnd();

	glBegin(GL_LINES);
	glColor3ub(0, 78, 162);
	glVertex2f(-.38f , .19f);//2
	glVertex2f(-.45f , .22f);
	glVertex2f(.38f , -.19f);//8
	glVertex2f(.45f , -.22f);
	glEnd();

	glFlush();
}
void Idle(){
    glutPostRedisplay();
}
void hour(){
	glPushMatrix();
	glRotatef(current_hour,0,0,-1);
	current_hour += speed_hour;

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 78, 162);
	glVertex2f(-.05f , .0f);
	glVertex2f(.0f , .2f);
	glVertex2f(.05f , .0f);
	glEnd();
    glPopMatrix();
	glFlush();
	
}
void minute(){
	glPushMatrix();
	glRotatef(current_minute,0,0,-1);
	current_minute += speed_minute;

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 78, 162);
	glVertex2f(-.03f , .0f);
	glVertex2f(.0f , .3f);
	glVertex2f(.03f , .0f);
	glEnd();
    glPopMatrix();
	glFlush();
	
}
void second(){
	glPushMatrix();
	glRotatef(current_second,0,0,-1);
	current_second += speed_second;

	glBegin(GL_TRIANGLES);
	glColor3ub(0, 78, 162);
	glVertex2f(-.02f , .0f);
	glVertex2f(.0f , .4f);
	glVertex2f(.02f , .0f);
	glEnd();
    glPopMatrix();
	glFlush();
	
}
void display(){
	circle();
	second();
	minute();
	hour();
}
int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutCreateWindow("Watch");
	glutReshapeWindow(720, 720);
    glutIdleFunc(Idle);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}
