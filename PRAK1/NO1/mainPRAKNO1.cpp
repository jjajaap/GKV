#include <GL/glut.h>

void init() {
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0, 500.0, 0.0, 500.0);
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(5.0f);

    // GL_LINE_STRIP
    glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_LINE_STRIP);
    glVertex2f(50, 150);
    glVertex2f(20, 250);
    glVertex2f(100, 200);
    glVertex2f(150, 250);
    glVertex2f(200, 200);
    glVertex2f(300, 250);
    glVertex2f(250, 150);
    
    glEnd();

//     GL_LINE_LOOP
    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINE_LOOP);
	glVertex2f(120, 460);
    glVertex2f(130, 450);
    glVertex2f(140, 460);
    glVertex2f(160, 450);
    glVertex2f(160, 430);
    glVertex2f(130, 410);
    glVertex2f(100, 430);
    glVertex2f(100, 450);

    glEnd();

//     GL_TRIANGLE_FAN
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(40, 310);
    glVertex2i(60, 320);
    glVertex2i(70, 340);
    glEnd();
    
    glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(40, 310);
    glVertex2i(70, 340);
    glVertex2i(60, 360);
    glEnd();
    
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(40, 310);
    glVertex2i(60, 360);
    glVertex2i(45, 370);
    glEnd();
    
    glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(40, 310);
    glVertex2i(45, 370);
	glVertex2i(35, 370);
	glEnd();
	
	glColor3f(0.0, 1.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(40, 310);
    glVertex2i(35, 370);
	glVertex2i(20, 360);
	glEnd();

	glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(40, 310);
    glVertex2i(20, 360);
	glVertex2i(10, 340);
	glEnd();
	
	glColor3f(0.0, 0.0, 1.0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2i(40, 310);
    glVertex2i(10, 340);
	glVertex2i(20, 320);
	    
    glEnd();
//
//     GL_TRIANGLE_STRIP
    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_TRIANGLE_STRIP);
    glVertex2i(300, 100);
    glVertex2i(350, 100);
    glVertex2i(325, 200);
    glVertex2i(375, 200);
    glVertex2i(350, 300);
    glVertex2i(400, 300);

    glEnd();

    // GL_QUADS
    glBegin(GL_QUADS);
    glVertex2i(200, 400);
    glVertex2i(250, 450);
    glVertex2i(300, 400);
    glVertex2i(250, 350);
    glEnd();

    // GL_QUAD_STRIP
    glBegin(GL_QUAD_STRIP);
    glVertex2i(350, 400);
    glVertex2i(400, 450);
    glVertex2i(400, 400);
    glVertex2i(450, 450);
    glEnd();

    glFlush();
}
//
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(1280, 720);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
   
    glutInitWindowSize(1000, 1000);
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glutCreateWindow("OpenGL Shapes");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
