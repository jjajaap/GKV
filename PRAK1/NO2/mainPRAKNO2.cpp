#include <GL/glut.h>

void IFJAYA(void) {
	glClear(GL_COLOR_BUFFER_BIT);
	glBegin(GL_QUADS);
	glColor3f(1.0f, 0.0f, 0.0f);

// Membuat Tulisan "I"
//glVertex2f(-0.5, 0.1);
//glVertex2f(-0.6, 0.1);
//glVertex2f(-0.6, 0.2);
//glVertex2f(-0.5, 0.2);
	
glVertex2f(-0.5, 0.2);
glVertex2f(-0.6, 0.2);	
glVertex2f(-0.6, 0.3);
glVertex2f(-0.5, 0.3);
	
glVertex2f(-0.5, 0.3);
glVertex2f(-0.6, 0.3);
glVertex2f(-0.6, 0.4);
glVertex2f(-0.5, 0.4);	

glVertex2f(-0.5, 0.4);
glVertex2f(-0.6, 0.4);
glVertex2f(-0.6, 0.5);
glVertex2f(-0.5, 0.5);
	
glVertex2f(-0.5, 0.5);
glVertex2f(-0.6, 0.5);	
glVertex2f(-0.6, 0.6);
glVertex2f(-0.5, 0.6);
	
glVertex2f(-0.5, 0.6);
glVertex2f(-0.6, 0.6);
glVertex2f(-0.6, 0.7);
glVertex2f(-0.5, 0.7);
	
// Membuat Tulisan "F"
//glVertex2f(-0.3, 0.1);
//glVertex2f(-0.4, 0.1);
//glVertex2f(-0.4, 0.2);
//glVertex2f(-0.3, 0.2);
// Vertikal
glVertex2f(-0.3, 0.2);
glVertex2f(-0.4, 0.2);	
glVertex2f(-0.4, 0.3);
glVertex2f(-0.3, 0.3);
	
glVertex2f(-0.3, 0.3);
glVertex2f(-0.4, 0.3);
glVertex2f(-0.4, 0.4);
glVertex2f(-0.3, 0.4);	

glVertex2f(-0.3, 0.4);
glVertex2f(-0.4, 0.4);
glVertex2f(-0.4, 0.5);
glVertex2f(-0.3, 0.5);
	
glVertex2f(-0.3, 0.5);
glVertex2f(-0.4, 0.5);	
glVertex2f(-0.4, 0.6);
glVertex2f(-0.3, 0.6);
	
glVertex2f(-0.3, 0.6);
glVertex2f(-0.4, 0.6);
glVertex2f(-0.4, 0.7);
glVertex2f(-0.3, 0.7);
// Horizontal
glVertex2f(-0.2, 0.6);
glVertex2f(-0.3, 0.6);
glVertex2f(-0.3, 0.7);
glVertex2f(-0.2, 0.7);

glVertex2f(-0.1, 0.6);
glVertex2f(-0.2, 0.6);
glVertex2f(-0.2, 0.7);
glVertex2f(-0.1, 0.7);

glVertex2f(-0.2, 0.4);
glVertex2f(-0.3, 0.4);
glVertex2f(-0.3, 0.5);
glVertex2f(-0.2, 0.5);

glVertex2f(-0.1, 0.4);
glVertex2f(-0.2, 0.4);
glVertex2f(-0.2, 0.5);
glVertex2f(-0.1, 0.5);

// Membuat tulisan "!"
// Pentungan Atas
glVertex2f(0.1, 0.6);
glVertex2f(0.0, 0.6);
glVertex2f(0.0, 0.7);
glVertex2f(0.1, 0.7);

glVertex2f(0.1, 0.5);
glVertex2f(0.0, 0.5);
glVertex2f(0.0, 0.6);
glVertex2f(0.1, 0.6);

glVertex2f(0.1, 0.4);
glVertex2f(0.0, 0.4);
glVertex2f(0.0, 0.5);
glVertex2f(0.1, 0.5);
//Pentungan Bawah
glVertex2f(0.1, 0.2);
glVertex2f(0.0, 0.2);
glVertex2f(0.0, 0.3);
glVertex2f(0.1, 0.3);

	glEnd();
    glFlush();
}

int main(int argc, char* argv[]) {
    glutInit(&argc, argv);
    glutInitWindowSize(1000, 1000);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGBA);
    glutCreateWindow("IFJAYA");
    glutDisplayFunc(IFJAYA);
    glClearColor(1.0f, 0.85f, 0.85f, 0.85f);
    glutMainLoop();
    return 0;
}

