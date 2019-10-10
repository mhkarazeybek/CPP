#include <GL/glut.h> 
#include <math.h> 

int h = 500, w = 500; 
char name[4] = { 'T','E','X','T' };

void init() 
{ 
	glClearColor(1, 1, 1, 0);  
	glMatrixMode(GL_PROJECTION);  
	glLoadIdentity();  
	gluOrtho2D(0, 500, 0, 500); 
}

void display() {
	int n = 12, r = 180;

	glClear(GL_COLOR_BUFFER_BIT);  
	glColor3f(0.8, 0.5, 1);

	glBegin(GL_POLYGON);  
	for (int i = 0; i < n + 1; i++)   //x = r*cos(a), y = r*sin(a)
		glVertex2f((w / 2) + r * cos(i*(360.0 / n)*3.14159265359 / 180), (h / 2) + r * sin(i*(360.0 / n)*3.14159265359 / 180));  
	glEnd();

	glColor3f(1.0f, 0.0f, 0.0f);  

	for (int k = 0; k < n; k++) 
	{ 
		glRasterPos2i((w / 2)- 4 + r * cos(k*(360.0 / n)*3.14159265359 / 180), (h / 2) - 4 + r * sin(k*(360.0 / n)*3.14159265359 / 180));
		glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 1); 
	}

	glColor3f(0.0f, 0.0f, 1.0f);  
	glRasterPos2i(w / 2 - 21, h / 2 - 9);  
	for (int i = 0; i < 4; i++)   
		glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, name[i]);  
	glFlush();
}

void windowKey(unsigned char key, int x, int y)
{
	if (key == 27) exit(0); // Esc  
}
int main(int argc, char* argv[]) 
{ 
	glutInit(&argc, argv);  
	glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);  
	glutInitWindowPosition(0, 0);  
	glutInitWindowSize(w, h);  
	glutCreateWindow("POLYGON");  
	init();  
	glutDisplayFunc(display);  
	glutKeyboardFunc(windowKey);  
	glutMainLoop();  return 0; 
}