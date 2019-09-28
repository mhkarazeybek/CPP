#include <GL/glut.h>
#include <Windows.h>
#include "tchar.h"

void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0, 200, 0, 150);

}
void lineSegment(void)
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_LINES);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2i(180, 145);
	glVertex2i(10, 15);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(180, 14);
	glVertex2i(10, 15);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(180, 14);
	glVertex2i(180, 145);
	glEnd();

#pragma region with GL_TRIANGLES

	/*glBegin(GL_TRIANGLES);

	glColor3f(1.0f, 0.0f, 0.0f);
	glVertex2i(180, 145);
	glVertex2i(10, 15);

	glColor3f(0.0f, 1.0f, 0.0f);
	glVertex2i(180, 14);
	glVertex2i(10, 15);

	glColor3f(0.0f, 0.0f, 1.0f);
	glVertex2i(180, 14);
	glVertex2i(180, 145);
	glEnd();*/

#pragma endregion

	glFlush();
}

int _tmain(int argc, _TCHAR* argv[])
{
	glutInit(&argc, (char**)argv);
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
	glutInitWindowPosition(50, 100);
	glutInitWindowSize(400, 300);
	glutCreateWindow("OpenGL Triangle");
	init();
	glutDisplayFunc(lineSegment);
	glutMainLoop();
	return 0;
}