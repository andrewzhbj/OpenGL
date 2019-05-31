#include <GL/glut.h>
#include <stdlib.h>

static void dibujar(void)
{
       glClearColor(1,0,0,1);
       glPointSize(5);
       glColor3i(1,0,0);
       glOrtho(800, 0, 600, 0, -1 , 1);
       glClear(GL_COLOR_BUFFER_BIT);
       glBegin(GL_POINTS);
       glVertex2d(60,50);
       glEnd();
       glFlush();
}

int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(10, 10);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);

    glutCreateWindow("Palabras");
    glutDisplayFunc(dibujar);
    glutMainLoop();

    return EXIT_SUCCESS;
}


