#include <windows.h>
#include <iostream>
#include <GL/glut.h>
#include <math.h>

//////water
int waterStatus = 0;
float waterX = 0;
float waterY = 0;
//////car
int carStatus = 0;
float carX = 0;
float carY = 0;
//////cloud
int meghStatus = 0;
float meghX = 0;
float meghY = 0;
/////sun
int sunStatus = 0;
float sunX = 0;
float sunY = 0;
//////
void DrawCircle(float cx, float cy, float r, int num_segments) {

	glBegin(GL_TRIANGLE_FAN);
	for (int i = 0; i < num_segments; i++)
	{
		float theta = 2.0f * 3.1415926f * float(i) / float(num_segments);//get current angle

		float x = r * cosf(theta);//calculate x
		float y = r * sinf(theta);//calculate y

		glVertex2f(x + cx, y + cy);//output vertex

	}
	glEnd();
	glFlush();
}
void sky()
{
    glColor3ub (84, 153, 199);
    glBegin(GL_QUADS);
    glVertex2i(0, 480);
    glVertex2i(0, 255);
    glVertex2i(640, 255);
    glVertex2i(640, 480);
    glEnd();
}
void hills()
{
    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);////// from left
    glVertex2i(80, 255);
    glVertex2i(120, 290);
    glVertex2i(160, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2i(140, 255);
    glVertex2i(170, 280);
    glVertex2i(200, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2i(180, 255);
    glVertex2i(270, 320);
    glVertex2i(360, 255);
    glEnd();
    //////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(180, 255);
    glVertex2i(270, 320);

    glVertex2i(270, 320);
    glVertex2i(360, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2i(260, 255);
    glVertex2i(320, 300);
    glVertex2i(380, 255);
    glEnd();
    //////line shape
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(260, 255);
    glVertex2i(320, 300);

    glVertex2i(320, 300);
    glVertex2i(380, 255);
    glEnd();

    glColor3ub(21, 67, 96);
    glBegin(GL_TRIANGLES);
    glVertex2i(370, 255);
    glVertex2i(420, 275);
    glVertex2i(470, 255);

    glEnd();
    glFlush();
}
void mountain()
{
    glColor3ub (19, 141, 117);
    glBegin(GL_QUADS);
    glVertex2i(0, 255);
    glVertex2i(500, 255);
    glVertex2i(500, 258);
    glVertex2i(0, 258);
    glEnd();
}
void oposite_village()
{
    //////tree 1st(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(110, 255);
    glVertex2i(110, 270);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(110, 270, 5, 5000);
    DrawCircle(110, 274, 3, 5000);
    glEnd();
    glFlush();
    //////tree 2nd(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(200, 255);
    glVertex2i(200, 270);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(200, 270, 5, 5000);
    DrawCircle(200, 274, 3, 5000);
    glEnd();
    glFlush();
    //////tree 3rd(from left)
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(250, 255);
    glVertex2i(250, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(250, 275, 5, 5000);
    DrawCircle(250, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tee 4th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(270, 255);
    glVertex2i(270, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(270, 275, 5, 5000);
    DrawCircle(270, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 5th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(300, 255);
    glVertex2i(300, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(300, 275, 5, 6000);
    DrawCircle(300, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 6th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(310, 255);
    glVertex2i(310, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(310, 275, 5, 6000);
    DrawCircle(310, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 7th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(355, 255);
    glVertex2i(355, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(355, 275, 5, 6000);
    DrawCircle(355, 279, 3, 6000);
    glEnd();
    glFlush();
    //////tree 8th
    glColor3ub (148, 124, 84);
    glBegin(GL_LINES);
    glVertex2i(360, 255);
    glVertex2i(360, 275);
    glEnd();

    glColor3ub (40, 180, 99);
    DrawCircle(360, 275, 5, 6000);
    DrawCircle(360, 279, 3, 6000);
    glEnd();
    glFlush();
    //////house 1st
    glColor3ub (144, 164, 174);
    glBegin(GL_POLYGON);//roof
    glVertex2i(150, 260);
    glVertex2i(165, 260);
    glVertex2i(163, 265);
    glVertex2i(152, 265);
    glEnd();

    glColor3ub(153, 153, 153);
    glBegin(GL_QUADS);//body
    glVertex2i(152, 255);
    glVertex2i(163, 255);
    glVertex2i(163, 260);
    glVertex2i(152, 260);
    glEnd();
    glFlush();
    //////house 2nd
    glColor3ub (144, 164, 174);
    glBegin(GL_POLYGON);//roof
    glVertex2i(220, 260);
    glVertex2i(235, 260);
    glVertex2i(233, 265);
    glVertex2i(222, 265);
    glEnd();

    glColor3ub(153, 153, 153);
    glBegin(GL_QUADS);//body
    glVertex2i(222, 255);
    glVertex2i(233, 255);
    glVertex2i(233, 260);
    glVertex2i(222, 260);
    glEnd();
    glFlush();
}
void land()
{
    glColor3ub (14, 102, 85);
    glBegin(GL_QUADS);
    glVertex2i(0, 60);
    glVertex2i(640, 60);
    glVertex2i(640, 180);
    glVertex2i(0, 180);
    glEnd();
}
void river()
{
    glColor3ub (118, 215, 196);
    glBegin(GL_QUADS);
    glVertex2i(0, 180);
    glVertex2i(640, 180);
    glVertex2i(640, 255);
    glVertex2i(0, 255);
    glEnd();
}
void road()
{
    //////road
    glColor3ub (87, 81, 92);
    glBegin(GL_QUADS);
    glVertex2i(0, 0);
    glVertex2i(640, 0);
    glVertex2i(640, 50);
    glVertex2i(0, 50);
    glEnd();
    glFlush();
    //////roads i-land
    glColor3ub (153, 153, 102);
    glBegin(GL_QUADS);
    glVertex2i(0, 50);
    glVertex2i(640, 50);
    glVertex2i(640, 60);
    glVertex2i(0, 60);
    glEnd();
    //////road devider
    glColor3ub (252, 252, 252);
    glBegin(GL_LINES);
    glVertex2i(0, 25);
    glVertex2i(40, 25);
    glVertex2i(50, 25);
    glVertex2i(90, 25);
    glVertex2i(100, 25);
    glVertex2i(140, 25);
    glVertex2i(150, 25);
    glVertex2i(190, 25);
    glVertex2i(200, 25);
    glVertex2i(240, 25);
    glVertex2i(250, 25);
    glVertex2i(290, 25);
    glVertex2i(300, 25);
    glVertex2i(340, 25);
    glVertex2i(350, 25);
    glVertex2i(390, 25);
    glVertex2i(400, 25);
    glVertex2i(440, 25);
    glVertex2i(450, 25);
    glVertex2i(490, 25);
    glVertex2i(500, 25);
    glVertex2i(540, 25);
    glVertex2i(550, 25);
    glVertex2i(590, 25);
    glVertex2i(600, 25);
    glVertex2i(640, 25);
    glEnd();
    glFlush();
}
void house()
{
    //////left home
    //////left triangle or chal
    glColor3ub (49, 27, 146);
    glBegin(GL_TRIANGLES);
    glVertex2i(50, 200);
    glVertex2i(70, 250);
    glVertex2i(90, 200);
    glEnd();
    //////line of chal
    glColor3ub (170, 140, 70);
    glBegin(GL_LINES);
    glVertex2i(55, 200);
    glVertex2i(75, 250);
    glEnd();
    //////right  chal
    glColor3ub (69, 39, 160);
    glBegin(GL_QUADS);
    glVertex2i(90, 200);
    glVertex2i(170, 200);
    glVertex2i(150, 250);
    glVertex2i(70, 250);
    glEnd();
    ////// left body
    glColor3ub (97, 97, 97);
    glBegin(GL_QUADS);
    glVertex2i(55, 150);
    glVertex2i(90, 150);
    glVertex2i(90, 200);
    glVertex2i(55, 200);
    glEnd();
    //////right body
    glColor3ub (117, 117, 117);
    glBegin(GL_QUADS);
    glVertex2i(90, 150);
    glVertex2i(165, 150);
    glVertex2i(165, 200);
    glVertex2i(90, 200);
    glEnd();
    //////right body janala (left)
    glColor3ub (78, 52, 46);
    glBegin(GL_QUADS);
    glVertex2i(95, 160);
    glVertex2i(110, 160);
    glVertex2i(110, 187);
    glVertex2i(95, 187);
    glEnd();
    //////right body janala (right)
    glColor3ub (78, 52, 46);
    glBegin(GL_QUADS);
    glVertex2i(145, 160);
    glVertex2i(160, 160);
    glVertex2i(160, 187);
    glVertex2i(145, 187);
    glEnd();
    //////left body janala
    glColor3ub (78, 52, 46);
    glBegin(GL_QUADS);
    glVertex2i(65, 160);
    glVertex2i(80, 160);
    glVertex2i(80, 187);
    glVertex2i(65, 187);
    glEnd();
    //////right body door
    glColor3ub (78, 52, 46);
    glBegin(GL_QUADS);
    glVertex2i(120, 155);
    glVertex2i(135, 155);
    glVertex2i(135, 190);
    glVertex2i(120, 190);
    glEnd();

    //////left home shadow
    glColor3ub (0, 77, 64);
    glBegin(GL_QUADS);
    glVertex2i(30, 100);
    glVertex2i(140, 100);
    glVertex2i(165, 150);
    glVertex2i(55, 150);
    glEnd();
    //////right home
    //////front side
    glColor3ub (81, 90, 90);
    glBegin(GL_QUADS);
    glVertex2i(500, 70);
    glVertex2i(600, 70);
    glVertex2i(600, 130);
    glVertex2i(500, 130);
    glEnd();
    //////front door
    glColor3ub (51, 51, 51);
    glBegin(GL_QUADS);
    glVertex2i(540, 75);
    glVertex2i(560, 75);
    glVertex2i(560, 110);
    glVertex2i(540, 110);
    glEnd();
    //////left janala
    glColor3ub (51, 51, 51);
    glBegin(GL_QUADS);
    glVertex2i(510, 85);
    glVertex2i(520, 85);
    glVertex2i(520, 105);
    glVertex2i(510, 105);
    glEnd();
    //////right janala
    glColor3ub (51, 51, 51);
    glBegin(GL_QUADS);
    glVertex2i(580, 85);
    glVertex2i(590, 85);
    glVertex2i(590, 105);
    glVertex2i(580, 105);
    glEnd();
    glFlush();
     //////////////right  side
    glColor3ub (97, 106, 107);
    glBegin(GL_QUADS);
    glVertex2i(600, 70);
    glVertex2i(630, 120);
    glVertex2i(630, 180);
    glVertex2i(600, 130);
    glEnd();
    glFlush();
    ///////down roof
    glColor3ub (69, 39, 160);
    glBegin(GL_QUADS);
    glVertex2i(500, 130);
    glVertex2i(600, 130);
    glVertex2i(605, 150);
    glVertex2i(505, 150);
    glEnd();
    glFlush();
    //////upper body
    glColor3ub (81, 90, 90);
    glBegin(GL_QUADS);
    glVertex2i(505, 150);
    glVertex2i(605, 150);
    glVertex2i(605, 180);
    glVertex2i(505, 180);
    glEnd();
    glFlush();
    //////upper body janala
    glColor3ub (51, 51, 51);
    glBegin(GL_QUADS);
    glVertex2i(530, 160);
    glVertex2i(580, 160);
    glVertex2i(580, 170);
    glVertex2i(530, 170);
    glEnd();
    glFlush();
    ///////right upper side
    glColor3ub (97, 106, 107);
    glBegin(GL_POLYGON);
    glVertex2i(605, 150);
    glVertex2i(600, 130);
    glVertex2i(630, 180);
    glVertex2i(630, 220);
    glVertex2i(605, 180);
    glEnd();
    glFlush();
    //////top roof
    glColor3ub (49, 27, 146);
    glBegin(GL_QUADS);
    glVertex2i(505, 180);
    glVertex2i(605, 180);
    glVertex2i(615, 230);
    glVertex2i(520, 230);
    glEnd();
    glFlush();
    //////top triangle
    glColor3ub (97, 106, 107);
    glBegin(GL_TRIANGLES);
    glVertex2i(605, 180);
    glVertex2i(615, 230);
    glVertex2i(630, 220);
    glEnd();
    glFlush();
    //////lines
    glColor3ub (158, 158, 158);
    glBegin(GL_LINES);
    glVertex2i(505, 150);
    glVertex2i(605, 150);
    glEnd();
    glFlush();
}
void shipyard()
{
    /////////////////bot body
    glColor3ub (150, 129, 117);
    glBegin(GL_QUADS);
    glVertex2i(350, 195);
    glVertex2i(360, 183);
    glVertex2i(410, 183);
    glVertex2i(420, 195);
    glEnd();
    /////////////////boat roof
    glColor3ub (220, 118, 51);
    glBegin(GL_QUADS);
    glVertex2i(370, 195);
    glVertex2i(400, 195);
    glVertex2i(400, 210);
    glVertex2i(370, 210);
    glEnd();
    ////////////////////khuti and dori
    glColor3ub (46, 64, 83);
    glBegin(GL_LINES);
    glVertex2i(340, 170);
    glVertex2i(340, 250);

    glVertex2i(340, 200);
    glVertex2i(350, 195);
    glEnd();
    //////////////////////////////////khutir shadow
    glColor3ub (0, 77, 64);

    glBegin(GL_LINES);
    glVertex2i(340, 170);
    glVertex2i(310, 100);
    glEnd();
    /////////////////////////////////////nouka er shadow
    glColor3ub (0, 77, 64);
    glBegin(GL_QUADS);
    glVertex2i(350, 170);
    glVertex2i(402, 170);
    glVertex2i(410, 180);
    glVertex2i(360, 180);
    glEnd();
}
void tree(){

    glColor3ub (46, 125, 50);
    DrawCircle(50, 320, 35, 3000);//1
    glColor3ub (27, 94, 32);
    DrawCircle(50, 280, 50, 2000);//1
    glEnd();
    ////////////////////////////////majher daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2i(40, 155);
    glVertex2i(60, 155);
    glVertex2i(60, 245);
    glVertex2i(40, 245);
    glEnd();
    //////////////////////////////////bam daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2i(40, 245);
    glVertex2i(50, 245);
    glVertex2i(40, 270);
    glVertex2i(30, 270);
    glEnd();
    /////////////////////////////////right daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2i(50, 245);
    glVertex2i(60, 245);
    glVertex2i(70, 270);
    glVertex2i(60, 270);
    glEnd();
    glFlush();
        /////////////////////tree shadow
    glColor3ub (0, 77, 64);
    glBegin(GL_QUADS);
    glVertex2i(15, 120);
    glVertex2i(35, 120);
    glVertex2i(55, 155);
    glVertex2i(40, 155);
    glEnd();

    glColor3ub (0, 77, 64);
    DrawCircle(20,100,30,1000);
    glEnd();

    /////////////////////////////right tree
    glColor3ub (46, 125, 50);
    DrawCircle(500, 320, 35, 3000);//1
    glColor3ub (27, 94, 32);
    DrawCircle(500, 280, 50, 2000);//1
    glEnd();
    ////////////////////////////////majher daal
    glColor3ub (100, 30, 22);
    glBegin(GL_QUADS);
    glVertex2i(490, 155);
    glVertex2i(510, 155);
    glVertex2i(510, 245);
    glVertex2i(490, 245);
    glEnd();

    /////////////////////tree shadow
    glColor3ub (0, 77, 64);
    glBegin(GL_QUADS);
    glVertex2i(450, 120);
    glVertex2i(470, 120);
    glVertex2i(510, 155);
    glVertex2i(490, 155);
    glEnd();
    glColor3ub (0, 77, 64);
    DrawCircle(450,120,30,1000);
    glEnd();
    glFlush();

}
void water(int x)
{
    glColor3ub (169, 242, 242);
    glBegin(GL_LINES);
    glVertex2i(200, 220);
    glVertex2i(220, 220);

    glVertex2i(210, 230);
    glVertex2i(220, 230);

    glVertex2i(300, 220);
    glVertex2i(320, 220);

    glVertex2i(400, 220);
    glVertex2i(420, 220);

    glVertex2i(100, 240);
    glVertex2i(120, 240);

    glVertex2i(150, 180);
    glVertex2i(150, 180);

    glVertex2i(0, 190);
    glVertex2i(10, 190);

    glVertex2i(0, 200);
    glVertex2i(10, 200);

    glVertex2i(30, 185);
    glVertex2i(40, 185);

    glVertex2i(100, 250);
    glVertex2i(125, 250);

    glVertex2i(150,240);
    glVertex2i(165,240);

    glVertex2i(90,200);
    glVertex2i(100,200);

    glVertex2i(300,190);
    glVertex2i(320,190);

    glVertex2i(270,235);
    glVertex2i(275,235);

    glVertex2i(500,200);
    glVertex2i(510,200);

    glVertex2i(600,220);
    glVertex2i(615,220);

    glVertex2i(550,200);
    glVertex2i(555,200);

    glVertex2i(520,225);
    glVertex2i(540,225);

    glVertex2i(370,215);
    glVertex2i(380,215);

    glEnd();
   //////boat

    ////////////////////////////////noukar body
    glColor3ub (150, 129, 117);
    glBegin(GL_QUADS);
    glVertex2i(20, 220);
    glVertex2i(60, 220);
    glVertex2i(70, 230);
    glVertex2i(10, 230);
    glEnd();
    ///////////////////////////////noukar soi
    glColor3ub (206, 175, 109);
    glBegin(GL_POLYGON);
    glVertex2i(27, 230);
    glVertex2i(57, 230);
    glVertex2i(57, 240);
    glVertex2i(27, 240);
    glEnd();
    //glFlush();
    ////////////////////////////////pal er chera kapor
    glColor3ub (209, 102, 27);
    glBegin(GL_TRIANGLES);
    glVertex2i(57, 230);
    glVertex2i(90, 280);
    glVertex2i(50, 290);
    glEnd();
        ///////////////////////////noukar pal er khuda :D
    glColor3ub (206, 175, 109);
    glBegin(GL_LINES);
    glVertex2i(57, 230);
    glVertex2i(73, 290);
    glEnd();

    /////////////////////////////////gach er guri
    glColor3ub (206, 175, 109);
    glBegin(GL_POLYGON);
    glVertex2i(300, 200);
    glVertex2i(330, 200);
    glVertex2i(330, 210);
    glVertex2i(300, 210);
    glEnd();
    glBegin(GL_POLYGON);
    glVertex2i(310, 210);
    glVertex2i(315, 210);
    glVertex2i(310, 217);
    glVertex2i(305, 217);
    glEnd();
    glFlush();
    /////////////////////////////////gach er gurir shadow
    glColor3ub (149, 187, 198);
    glBegin(GL_POLYGON);
    glVertex2i(295, 190);
    glVertex2i(325, 190);
    glVertex2i(330, 200);
    glVertex2i(300, 200);
    glEnd();
    glFlush();
    ///////////////////////////////noukar shadow
    glColor3ub (149, 187, 198);
    glBegin(GL_QUADS);
    glVertex2i(15, 210);
    glVertex2i(55, 210);
    glVertex2i(60, 220);
    glVertex2i(20, 220);
    glEnd();
}
////////////////////////////////////////////////////move  the  water
void movewater()
{
    if (waterStatus ==1)
    {
        waterX += 1;
    }
    if (waterX>2000)
    {
        waterX = -200;
    }
    glPushMatrix();
    glTranslatef(waterX, waterY, 0);
    water(1);
    glPopMatrix();
    glFlush();
}
void car(int x)
{
    glColor3ub(255, 0, 0);///////////back
    glBegin(GL_QUADS);
    glVertex2i(20, 20);
    glVertex2i(20, 40);
    glVertex2i(10, 70);
    glVertex2i(10, 50);
    glEnd();
    ////////////////////////////////line
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(20, 20);
    glVertex2i(20, 40);

    glVertex2i(20, 40);
    glVertex2i(10, 70);

    glVertex2i(10, 70);
    glVertex2i(10, 50);

    glVertex2i(10, 50);
    glVertex2i(20, 20);
    glEnd();

    glColor3ub(255,0,0);/////////////dikki
    glBegin(GL_QUADS);
    glVertex2i(20, 40);
    glVertex2i(40, 40);
    glVertex2i(29, 70);
    glVertex2i(10, 70);
    glEnd();
    //////////////////////////////////line
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(20, 40);
    glVertex2i(40, 40);

    glVertex2i(40, 40);
    glVertex2i(29, 70);

    glVertex2i(29, 70);
    glVertex2i(10, 70);

    glVertex2i(20, 40);
    glVertex2i(10, 70);
    glEnd();
    /////////////////
    glColor3ub(255, 255, 255);/////////back window
    glBegin(GL_QUADS);
    glVertex2i(40, 40);
    glVertex2i(55, 60);
    glVertex2i(43, 90);
    glVertex2i(29, 70);
    glEnd();
    ///////////////////////////////line
    glColor3ub(0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(40, 40);
    glVertex2i(55, 60);

    glVertex2i(55, 60);
    glVertex2i(43, 90);

    glVertex2i(43, 90);
    glVertex2i(29, 70);

    glVertex2i(29, 70);
    glVertex2i(40, 40);
    glEnd();

    ///////////////
    glColor3ub(255,0,0);/////////roof
    glBegin(GL_QUADS);
    glVertex2i(55, 60);
    glVertex2i(91, 60);
    glVertex2i(77, 90);
    glVertex2i(43, 90);
    glEnd();
    ///////////////////////////////////////line

    glColor3ub(0,0,0);
    //glLineWidth(20.0f);
    glBegin(GL_LINES);
    glVertex2i(55, 60);
    glVertex2i(91, 60);

    glVertex2i(91, 60);
    glVertex2i(77, 90);

    glVertex2i(77, 90);
    glVertex2i(43, 90);

    glVertex2i(43, 90);
    glVertex2i(55, 60);
    glEnd();

    /////////////
    glColor3ub(255,0,0);/////////door er nicher ongsho
    glBegin(GL_QUADS);
    glVertex2i(20, 20);
    glVertex2i(140, 20);
    glVertex2i(140, 40);
    glVertex2i(20, 40);
    glEnd();
    ////////////////////////lines
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(20, 20);
    glVertex2i(140, 20);

    glVertex2i(140, 20);
    glVertex2i(140, 40);

    glVertex2i(140, 40);
    glVertex2i(20, 40);

    glVertex2i(20, 40);
    glVertex2i(20, 20);
    glEnd();
    //////////

    glColor3ub(255,0,0);/////////bonet
    glBegin(GL_QUADS);
    glVertex2i(100, 40);
    glVertex2i(140, 40);
    glVertex2i(124, 70);
    glVertex2i(86, 70);
    glEnd();
    ///////////////////////////////////lines
    glColor3ub(0,0,0);
    glBegin(GL_LINES);
    glVertex2i(100, 40);
    glVertex2i(140, 40);

    glVertex2i(124, 70);
    glVertex2i(140, 40);

    glVertex2i(86, 70);
    glVertex2i(124, 70);

    glVertex2i(86, 70);
    glVertex2i(100, 40);
    glEnd();
    /////////////

    glColor3ub (0,0,0);    ////////////////chakka
    DrawCircle(50, 20, 10, 6000);//1
    DrawCircle(100, 20, 10, 6000);//1

    glColor3ub (255,255,255);
    DrawCircle(50, 20, 5, 6000);//1
    DrawCircle(100, 20, 5, 6000);//1
    glEnd();

    glColor3ub (227, 247, 244);    /////////doors
    glBegin(GL_POLYGON);
    glVertex2i(40, 40);
    glVertex2i(100, 40);
    glVertex2i(91, 60);
    glVertex2i(55, 60);
    glEnd();
    ///////////////////////////lines
    glColor3ub (0, 0, 0);
    glBegin(GL_LINES);
    glVertex2i(40, 40);
    glVertex2i(100, 40);

    glVertex2i(100, 40);
    glVertex2i(91, 60);

    glVertex2i(91, 60);
    glVertex2i(55, 60);

    glVertex2i(55, 60);
    glVertex2i(40, 40);

    glVertex2i(72, 40);
    glVertex2i(72, 60);
    glEnd();
}
void movecar()
{
    if (carStatus ==1)
    {
        carX += 3; ///////speed
    }
    if (carX>2000)
    {
        carX = -20;
    }
    glPushMatrix();
    glTranslatef(carX, carY, 0);
    car(1);
    glPopMatrix();
}
void megh(int x) {
    glColor3ub (200, 220, 220);
	DrawCircle(170, 400, 25, 2000);
	DrawCircle(200, 400, 35, 2000);
	DrawCircle(230, 400, 25, 2000);

    glColor3ub (200, 220, 220);
	DrawCircle(300, 420, 25, 2000);
	DrawCircle(330, 420, 35, 2000);
	DrawCircle(360, 420, 25, 2000);
	glFlush();
}
void movemegh()
{
	if (meghStatus == 1)
        {
            meghX +=.5;
        }
	if (meghX>2000)
        {
            meghX = -200;
        }
	glPushMatrix();
	glTranslatef(meghX, meghY, 0);
	megh(1);
	glPopMatrix();
	glFlush();
}
void drawSun(int x)
{
    glColor3ub (243, 156, 18);
	DrawCircle(550, 275, 15, 1000);
	//////////////////ray of sun
    glColor3ub (243, 156, 18);
    glBegin(GL_LINES);
    glVertex2i(550, 290);//up
    glVertex2i(550, 300);

    glVertex2i(565, 275);//right
    glVertex2i(575, 275);

    glVertex2i(550, 260);//down
    glVertex2i(550, 250);

    glVertex2i(535, 275);//left
    glVertex2i(525, 275);
    glEnd();
    glFlush();

}
void moveSun()
{
	if (sunStatus == 1)
	{
		if (sunY >= 300)
			sunX = 300;
		else
            sunX -= 1.5;
			sunY += .5;

	}
	glPushMatrix();
	glTranslatef(sunX, sunY, 0);
	drawSun(1);
	glPopMatrix();
	glFlush();
}
void myDisplay(void){
    sky();
    hills();
    mountain();
    oposite_village();
    moveSun();
    land();
    river();
    movewater();
    tree();
    road();
    house();
    shipyard();
    movemegh();
    movecar();

    glutPostRedisplay();
    glutSwapBuffers();
}
void myInit(void){
    glClearColor(1.0f,1.0f,1.0f,1.0f);
    glColor3f(.0f,.0f,.0f);
    glPointSize(3.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(640,480);
    glutCreateWindow("Village Scene");
    glutPostRedisplay();
    glutDisplayFunc(myDisplay);
    myInit();
    glutMainLoop();
    return 0;
}
