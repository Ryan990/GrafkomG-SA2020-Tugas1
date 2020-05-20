#include <iostream>
#include <GL/freeglut.h>

void misalRender() {
	glClearColor(0, 0, 0, 1);
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_POLYGON); // badan rumah
	glColor3f(1, 1, 1);
	glVertex2f(100, 100);
	glVertex2f(100, 200);
	glVertex2f(250, 200);
	glVertex2f(250, 100);
	glEnd();

	glBegin(GL_POLYGON); // atap 1
	glColor3f(1, 0, 0);
	glVertex2f(100, 100);
	glVertex2f(140, 20);
	glVertex2f(180, 100);
	glEnd();

	glBegin(GL_POLYGON); // atap 2
	glColor3f(0.5, 0, 0);
	glVertex2f(140, 20);
	glVertex2f(180, 100);
	glVertex2f(250, 100);
	glVertex2f(210, 20);
	glEnd();

	glBegin(GL_LINES); // burung legend 
	glColor3f(0, 1, 0.5);
	glVertex2f(425, 50);
	glVertex2f(400, 100);
	glVertex2f(425, 50);
	glVertex2f(450, 100);
	glVertex2f(450, 100);
	glVertex2f(475, 50);
	glVertex2f(475, 50);
	glVertex2f(500, 100);
	glVertex2f(430, 100);
	glVertex2f(470, 100);
	glEnd();

	glBegin(GL_TRIANGLES); // layangan
	glColor3f(1, 0, 0);
	glVertex2f(631, 20); // sisi atas 1
	glVertex2f(593, 70);
	glVertex2f(631, 70);

	glColor3f(0.5, 1, 0);
	glVertex2f(633, 20); // sisi atas 2
	glVertex2f(671, 70);
	glVertex2f(633, 70);

	glColor3f(0.5, 1, 0);
	glVertex2f(631, 72); // sisi bawah 1
	glVertex2f(593, 72);
	glVertex2f(631, 165);

	glColor3f(1, 0, 0);
	glVertex2f(633, 72); // sisi bawah 2
	glVertex2f(671, 72);
	glVertex2f(633, 165);

	glEnd();

	glBegin(GL_POINTS); // ekor layagan
	glColor3f(1, 1, 1);
	glVertex2f(632, 167); 
	glVertex2f(635, 167);
	glVertex2f(632, 170);
	glVertex2f(635, 170);

	glVertex2f(636, 180);
	glVertex2f(639, 180);
	glVertex2f(636, 183);
	glVertex2f(639, 183);

	glVertex2f(630, 190);
	glVertex2f(633, 190);
	glVertex2f(630, 193);
	glVertex2f(633, 193);

	glVertex2f(624, 200);
	glVertex2f(627, 200);
	glVertex2f(624, 203);
	glVertex2f(627, 203);
	
	glVertex2f(631, 210);
	glVertex2f(633, 210);
	glVertex2f(631, 213);
	glVertex2f(633, 213);

	glVertex2f(640, 220);
	glVertex2f(642, 220);
	glVertex2f(640, 223);
	glVertex2f(642, 223);

	glEnd();

	glBegin(GL_LINES); // jalan raya
	glColor3f(0, 0, 1);
	glVertex2f(100, 300);
	glVertex2f(320, 300);

	glVertex2f(120, 320);
	glVertex2f(140, 320);

	glVertex2f(160, 320);
	glVertex2f(180, 320);

	glVertex2f(200, 320);
	glVertex2f(220, 320);

	glVertex2f(240, 320);
	glVertex2f(260, 320);

	glVertex2f(280, 320);
	glVertex2f(300, 320);

	glVertex2f(100, 340);
	glVertex2f(320, 340);
	glEnd();


	glBegin(GL_POLYGON); // tangga
	glColor3f(1, 1, 0.5);
	glVertex2f(400, 280);
	glVertex2f(410, 280);
	glVertex2f(410, 550);
	glVertex2f(400, 550);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(460, 280);
	glVertex2f(470, 280);
	glVertex2f(470, 550);
	glVertex2f(460, 550);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 330);
	glVertex2f(460, 330);
	glVertex2f(460, 340);
	glVertex2f(410, 340);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 370);
	glVertex2f(460, 370);
	glVertex2f(460, 380);
	glVertex2f(410, 380);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 410);
	glVertex2f(460, 410);
	glVertex2f(460, 420);
	glVertex2f(410, 420);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 450);
	glVertex2f(460, 450);
	glVertex2f(460, 460);
	glVertex2f(410, 460);
	glEnd();

	glBegin(GL_POLYGON);
	glVertex2f(410, 490);
	glVertex2f(460, 490);
	glVertex2f(460, 500);
	glVertex2f(410, 500);
	glEnd();

	glBegin(GL_POLYGON); // bendera
	glColor3f(1, 1, 1);
	glVertex2f(600, 300);
	glVertex2f(609, 300);
	glVertex2f(609, 650);
	glVertex2f(600, 650);
	glEnd();

	glBegin(GL_POLYGON); 
	glColor3f(1, 0, 0);
	glVertex2f(610, 300);
	glVertex2f(750, 300);
	glVertex2f(750, 350);
	glVertex2f(610, 350);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1, 1, 1);
	glVertex2f(610, 350);
	glVertex2f(750, 350);
	glVertex2f(750, 400);
	glVertex2f(610, 400);
	glEnd();


	glFlush();
}



int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize(1000, 1000);
	glutCreateWindow("672018096 Ryan R. siematauw");
	glutDisplayFunc(misalRender);
	gluOrtho2D(0, 1000, 1000, 0);
	glutMainLoop();

	return 0;
}

