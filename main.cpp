
#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
static void display(void)
{

    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glBegin(GL_QUADS);
    glColor3f(0,1,1);

    glVertex2f(0.0f,0.0f);
    glVertex2f(0.0f,0.5f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(0.5f,0.0f);




//now i draw top
    glColor3f(1,0,1);
    glVertex2f(0.0f,0.5f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(0.5f,0.5f);
    glVertex2f(0.25f,0.7f);


    glEnd();

       // now i draw door
    glBegin(GL_QUADS);

    glColor3f(0,1,0);
    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.2f,0.3f);
    glVertex2f(0.4f,0.3f);
    glVertex2f(0.4f,0.0f);


    glEnd();



    //WINDOW CODE
    glBegin(GL_QUADS);

    glColor3f(0,0,1);
    glVertex2f(0.05f,0.1f);
    glVertex2f(0.05f, 0.2f);
    glVertex2f(0.15f, 0.2f);
    glVertex2f(0.15f, 0.1f);
    glEnd();

    glBegin(GL_QUADS);

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.040f,0);

    glVertex2f(-0.040f,0);
    glVertex2f(-0.040f, -0.040f);

    glVertex2f(-0.040f, -0.040f);
    glVertex2f(0.55f, -0.040f);

    glVertex2f(0.55f,0.0f);
    glVertex2f(0.0f,0.0f);

    glEnd();

    //TREE DRAWING

    glBegin(GL_QUADS);

    glVertex2f(-0.1f,0.0f);
    glVertex2f(-0.1f,0.5f);
    glVertex2f(-0.3f,0.5f);
    glVertex2f(-0.3f,0.0f);

    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0,1,0);
    glVertex2f(-0.2f,0.7f);
    glVertex2f(-0.4f,0.5f);
    glVertex2f(0.0f,0.5f);
    glEnd();

 //HOUSE NUMBER TWO

    glBegin(GL_QUADS);
    glColor3f(0,1,1);
    glVertex2f(-0.5f,0.0f);
    glVertex2f(-0.98f,0.0f);
    glVertex2f(-0.98f,0.5f);
    glVertex2f(-0.5f,0.5f);



    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,0);
    glVertex2f(-0.70f,0.3f);
    glVertex2f(-0.83f,0.3f );
    glVertex2f(-0.83f,0.0f);
    glVertex2f(-0.70f,0.0f);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1,0,0);
    glVertex2f(-0.98f,0.5f);
    glVertex2f(-0.74f,0.7f);
    glVertex2f(-0.5f,0.5f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1,0,0);
    glVertex2f(-0.99f,-0.05f);
    glVertex2f(-0.49f,-0.05f);
    glVertex2f(-0.49f,-0.0f);
   glVertex2f(-0.99f,-0.0f);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(-0.66f,0.15f);
    glVertex2f(-0.55f,0.15f);
    glVertex2f(-0.55f,0.25f);
    glVertex2f(-0.66f,0.25f);

    glEnd();

    glBegin(GL_QUADS);
    glColor3f(0,0,1);
    glVertex2f(-0.86f,0.15f);
    glVertex2f(-0.96f,0.15f);
    glVertex2f(-0.96f,0.25f);
    glVertex2f(-0.86f,0.25f);

    glEnd();

    glBegin(GL_QUADS);
    //glClearColor(1,1,0,0);
    glColor3f(1,1,0);
    glVertex2f(-0.99f,-0.3f);
    glVertex2f(0.5f,-0.5f);
    glVertex2f(1.0f,-0.5f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(1.0f,-0.7f);
    glVertex2f(-0.99f,-0.5f);
    glVertex2f(-0.99f,-0.5f);
    glVertex2f(-0.99f,-0.3f);

    glEnd();

    glFlush();

    }


int main(int argc, char *argv[])
{
    glutInit(&argc, argv);
    glutInitWindowSize(640,480);
    glutInitWindowPosition(0,0);
    glutCreateWindow("Home city view");
    glutInitDisplayMode(GLUT_RED | GLUT_DEPTH);
    glutDisplayFunc(display);


    glutMainLoop();

    return EXIT_SUCCESS;
}
