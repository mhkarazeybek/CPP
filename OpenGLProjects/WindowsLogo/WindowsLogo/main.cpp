#include <GL/glut.h>

int  w0, w1, w2, w3, w4;

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glFlush();
}

void reshape(int w, int h)
{
	glViewport(0, 0, w, h);

	glutSetWindow(w1);
	glutPositionWindow(10, 10);
	glutReshapeWindow(100, 100);

	glutSetWindow(w2);
	glutPositionWindow(120, 10);
	glutReshapeWindow(100, 100);

	glutSetWindow(w3);
	glutPositionWindow(10, 120);
	glutReshapeWindow(100, 100);

	glutSetWindow(w4);
	glutPositionWindow(120, 120);
	glutReshapeWindow(100, 100);
}


int
main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB);
	glutInitWindowSize(240, 240);
	w0 = glutCreateWindow("Windows Logo");

	glutDisplayFunc(display);
	glutReshapeFunc(reshape);
	glClearColor(1.0, 1.0, 1.0, 1.0);

	w1 = glutCreateSubWindow(w0, 10, 10, 90, 90);
	glutDisplayFunc(display);
	glClearColor(0.99, 0.407, 0.0, 1.0);

	w2 = glutCreateSubWindow(w0, 110, 10, 90, 90);
	glutDisplayFunc(display);
	glClearColor(0.643, 0.769, 0.0, 1.0);	

	w3 = glutCreateSubWindow(w0, 10, 110, 90, 90);
	glutDisplayFunc(display);
	glClearColor(0.106, 0.631, 0.886, 1.0);

	w4 = glutCreateSubWindow(w0, 110, 110, 90, 90);
	glutDisplayFunc(display);
	glClearColor(0.901, 0.689, 0.09, 1.0);

	glutMainLoop();
	return 0;
}