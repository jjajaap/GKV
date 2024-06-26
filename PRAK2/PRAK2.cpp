#include <GL/glut.h>
#include <iostream>

GLfloat carX = 0.0f;
GLfloat carY = 0.0f;
GLfloat wheelAngle = 0.0f;

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-5.0, 5.0, -5.0, 5.0);
}

void drawCar() {
    glPushMatrix();

    // Body
    glColor4f(0.2, 0.2, 0.0, 0.5);
    glTranslatef(carX, carY, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(-1.5, -0.5);
    glVertex2f(1.5, -0.5);
    glVertex2f(1.9, -0.29);
    glVertex2f(1.9, 0.29);
    glVertex2f(1.0, 0.5);
    glVertex2f(0.5, 1.3);
    glVertex2f(-1.25, 1.3);
    glVertex2f(-1.5, 0.5);
	glEnd();
		
	// Jendela depan
    glColor4f(0.85, 0.85, 0.85, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(-0.00, 0.6);
    glVertex2f(0.82, 0.6);
    glVertex2f(0.45, 1.2);
    glVertex2f(-0.00, 1.2);
	glEnd();
	
		// Jendela tengah
    glColor4f(0.85, 0.85, 0.85, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(-0.6, 0.6);
    glVertex2f(-0.08, 0.6);
    glVertex2f(-0.08, 1.2);
    glVertex2f(-0.6, 1.2);
	glEnd();
	
	// Jendela belakang
    glColor4f(0.85, 0.85, 0.85, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(-1.2, 0.6);
    glVertex2f(-0.68, 0.6);
    glVertex2f(-0.68, 1.2);
    glVertex2f(-1.2, 1.2);
	glEnd();
	
	// pintu belakang
    glColor4f(0.2, 0.1, 0.1, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(-1.2, 0.45);
    glVertex2f(-0.08, 0.45);
    glVertex2f(-0.08, -0.3);
    glVertex2f(-1.2, -0.3);
	glEnd();
	
	// pintu depan
    glColor4f(0.2, 0.1, 0.1, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(0.0, 0.45);
    glVertex2f(0.82, 0.45);
    glVertex2f(0.82, -0.3);
    glVertex2f(-0.0, -0.3);
	glEnd();

    // lampu
    glColor4f(1.0, 1.0, 0.0, 0.5);
    glBegin(GL_POLYGON);
    glVertex2f(1.9, -0.29);
    glVertex2f(2.1, -0.2);
    glVertex2f(2.15, -0.0);
    glVertex2f(2.1, 0.2);
    glVertex2f(1.9, 0.29);
    glEnd();

    // Wheels
    glColor3f(0.0, 0.0, 0.0);
    glPushMatrix();
    glTranslatef(-1.0, -0.5, 0.0);
    glRotatef(wheelAngle, 0.0, 0.0, 1.0);
    glutSolidTorus(0.1, 0.3, 10, 10);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(1.0, -0.5, 0.0);
    glRotatef(wheelAngle, 0.0, 0.0, 1.0);
    glutSolidTorus(0.1, 0.3, 10, 10);
    glPopMatrix();

    glPopMatrix();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    drawCar();

    glutSwapBuffers();
}

void update(int value) {
    carX += 0.01;
    if (carX > 5.0)
        carX = -5.0;

    wheelAngle += 10.0;
    if (wheelAngle > 360.0)
        wheelAngle = 0.0;

    glutPostRedisplay();
    glutTimerFunc(16, update, 0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize(1000, 1000);
    glutCreateWindow("2D Mobil dengan Animasi");

    init();
    glutDisplayFunc(display);
    glutTimerFunc(16, update, 0);

    glutMainLoop();
    return 0;
}
