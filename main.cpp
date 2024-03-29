
/*NAME:SUMIYA HUR TASNIM (21-44851-2)
*/
#include <windows.h>
#include<stdio.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#define SPEED 40.0

float i=0.0;
float m=0.0;
int light=1;
float _moveA = 0.0f;
float _moveB = 0.0f;
float _moveC2 = 0.0f;
float _moveT = -38.0f;
float _move = 0.0f;
float _angle1 =0.0f;
float speed = 0.02f;
float speed1 = 0.03f;
float _rain=0.0;
bool rainday = false;
float speedS = 0.03f;
float speedSu = 0.03f;
float speedS2 = 0.03f;
float _moveS = 0.0f;
float _moveSS = 0.0f;
float _moveS2 = 0.0f;





void skySummer()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    //sky
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	//glColor3f(0.97608f,  0.67843f,  0.32941f); // Yellow 0.75686  0.91765  0.89412
	glColor3f(1.00000f , 0.78039f , 0.45490f);
	glVertex2f(31.0f, -18.0f);
	glVertex2f(31.0f, 38.0f);
	glVertex2f(-32.0f, 38.0f);
	glVertex2f(-32.0f, -18.0f);

	glEnd();

	glFlush();
}

void skyWinter()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    //sky
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f( 0.73725f, 0.83922f, 0.92157f); // Yellow
	glVertex2f(31.0f, -18.0f);
	glVertex2f(31.0f, 38.0f);
	glVertex2f(-32.0f, 38.0f);
	glVertex2f(-32.0f, -18.0f);

	glEnd();
}
void skySpring()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    //sky
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f( 0.72157f,  0.92941f,  0.96078f); // Yellow
	glVertex2f(31.0f, -18.0f);
	glVertex2f(31.0f, 38.0f);
	glVertex2f(-32.0f, 38.0f);
	glVertex2f(-32.0f, -18.0f);

	glEnd();

	glFlush();
}



void mainroadSpring()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //main road
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	//glColor3f(0.61176f,  0.81961f,  0.24706f); // Yellow

	glVertex2f(38.0f, -18.0f);
	glVertex2f(-38.0f, -18.0f);
	glVertex2f(-38.0f, -24.0f);
	glVertex2f(38.0f, -24.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.54118f,  0.58431f,  0.60784f); // Yellow
	glVertex2f(38.0f, -38.0f);
	glVertex2f(38.0f, -24.0f);
	glVertex2f(-38.0f, -24.0f);
	glVertex2f(-38.0f, -38.0f);


	glEnd();

	glFlush();

}

void sunSpring()
{
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(0.0f, _moveS, 0.0f);

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(1.00000 , 0.94118 , 0.00000);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y+30);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
glPopMatrix();
	//glFlush();;
}
void treeSpring()
{
   //tree1

   //tree 1 base
   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21176f,  0.53725f,  0.08627f); // Yellow
	glVertex2f(-26.5f, -18.0f);
	glVertex2f(-26.5f, -12.0f);
	glVertex2f(-27.0f, -12.0f);
	glVertex2f(-27.0f, -18.0f);

	glEnd();


	//flower1 leaf 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.96078,  0.74118,  0.01176);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26.5,y-12);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//flower1 leaf 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.42745 , 0.12157 , 0.01569);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26.5,y-12);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();



	//tree 2


	//tree 2 base

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21176f,  0.53725f,  0.08627f); // Yellow

	glVertex2f(7.0f, -18.0f);
	glVertex2f(7.0f, -9.0f);
	glVertex2f(6.5f, -9.0f);
	glVertex2f(6.5f, -18.0f);

	glEnd();


	//flower2 leaf 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.96078,  0.74118,  0.01176);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.5,y-10);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//flower2 leaf 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.42745 , 0.12157 , 0.01569);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.5,y-10);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();


	//tree3

   //tree 3 base
   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21176f,  0.53725f,  0.08627f); // Yellow
	glVertex2f(23.5f, -18.0f);
	glVertex2f(23.5f,-12.0f);
	glVertex2f(24.0f, -12.0f);
	glVertex2f(24.0f, -18.0f);

	glEnd();


	//flower3 leaf 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.96078,  0.74118,  0.01176);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+23.5,y-12);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//flower3 leaf 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.42745 , 0.12157 , 0.01569);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+23.5,y-12);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();


	//tree4

   //tree 4 base
   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21176f,  0.53725f,  0.08627f); // Yellow
	glVertex2f(-16.5f, -18.0f);
	glVertex2f(-16.5f, -12.0f);
	glVertex2f(-17.0f, -12.0f);
	glVertex2f(-17.0f, -18.0f);

	glEnd();


	//flower4 leaf 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.96078,  0.74118,  0.01176);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-17,y-10);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//flower4 leaf 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.42745 , 0.12157 , 0.01569);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-17,y-10);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();


	glFlush();

}



//moon
void moon()
{
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(0.0f, _moveS2, 0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.94118,  0.96471,  0.98431);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-15,y+30);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
	glPopMatrix();
	//glFlush();;
}

void building1shadow()
{
    // Building1 base
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(-9.0f, -27.0f);
    glVertex2f(-9.0f, 24.0f);
    glVertex2f(-12.0f, 24.0f);
    glVertex2f(-12.0f, -27.0f);
    glEnd();

    // Building1 side
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(-12.0f, -27.0f);
    glVertex2f(-12.0f, 24.0f);
    glVertex2f(-15.0f, 21.0f);
    glVertex2f(-15.0f, -27.0f);
    glEnd();

    // Building1 border 1
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(-9.0f, 23.0f);
    glVertex2f(-9.0f, 24.0f);
    glVertex2f(-12.0f, 24.0f);
    glVertex2f(-12.0f, 23.0f);
    glEnd();

    // Building1 border 2
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(-12.0f, 23.0f);
    glVertex2f(-12.0f, 24.0f);
    glVertex2f(-15.0f, 21.0f);
    glVertex2f(-15.0f, 20.0f);
    glEnd();

    // Building1 border 3
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(-15.0f, 5.0f);
    glVertex2f(-15.0f, 21.0f);
    glVertex2f(-12.0f, 21.0f);
    glVertex2f(-12.0f, 5.0f);
    glEnd();

    // Building1 window 1
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(-12.0f, 18.0f);
    glVertex2f(-12.0f, 19.0f);
    glVertex2f(-15.0f, 19.0f);
    glVertex2f(-15.0f, 18.0f);
    glEnd();

    glFlush();
}



void building1()
{
    //glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color


   //building1 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.81961f,  1.00000f,  1.07059f); // Yellow0.81961  1.00000  1.07059
	glVertex2f(-3.0f, -18.0f);
	glVertex2f(-3.0f, 16.0f);
	glVertex2f(-6.0f, 16.0f);
	glVertex2f(-6.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
	glVertex2f(-6.0f, -18.0f);
	glVertex2f(-6.0f, 16.0f);
	glVertex2f(-11.0f, 13.0f);
	glVertex2f(-11.0f, -18.0f);

	glEnd();

	//building 1 border 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.95622f,  0.78944f,  0.87758f); // Yellow
	glVertex2f(-3.0f, 15.0f);
	glVertex2f(-3.0f, 16.0f);
	glVertex2f(-6.0f, 16.0f);
	glVertex2f(-6.0f, 15.0f);

	glEnd();

	//building 1 border 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.99991f,  0.55800f,  0.66072f); // Yellow
	glVertex2f(-6.0f, 15.0f);
	glVertex2f(-6.0f, 16.0f);
	glVertex2f(-11.0f, 13.0f);
	glVertex2f(-11.0f, 12.0f);

	glEnd();


	//building 1 border 3

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.99991f,  0.55800f,  0.66072f); // Yellow
	glVertex2f(-10.0f, 2.0f);
	glVertex2f(-10.0f, 13.0f);
	glVertex2f(-11.0f, 13.0f);
	glVertex2f(-11.0f, 2.0f);

	glEnd();

	//building 1 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 10.0+0.6f);
	glVertex2f(-6.0f, 11.0f);
	glVertex2f(-10.0f, 11.0f);
	glVertex2f(-10.0f, 10.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 8.0+0.6f);
	glVertex2f(-6.0f, 9.0f);
	glVertex2f(-10.0f, 9.0f);
	glVertex2f(-10.0f, 8.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 6.0+0.6f);
	glVertex2f(-6.0f, 7.0f);
	glVertex2f(-10.0f, 7.0f);
	glVertex2f(-10.0f, 6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 4.0+0.6f);
	glVertex2f(-6.0f, 5.0f);
	glVertex2f(-10.0f, 5.0f);
	glVertex2f(-10.0f, 4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 2.0+0.6f);
	glVertex2f(-6.0f, 3.0f);
	glVertex2f(-10.0f, 3.0f);
	glVertex2f(-10.0f, 2.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 0.0+0.6f);
	glVertex2f(-6.0f, 1.0f);
	glVertex2f(-10.0f, 1.0f);
	glVertex2f(-10.0f, 0.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, -2.0+0.6f);
	glVertex2f(-6.0f, -1.0f);
	glVertex2f(-10.0f, -1.0f);
	glVertex2f(-10.0f, -2.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, -4.0+0.6f);
	glVertex2f(-6.0f, -3.0f);
	glVertex2f(-10.0f, -3.0f);
	glVertex2f(-10.0f, -4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, -6.0+0.6f);
	glVertex2f(-6.0f, -5.0f);
	glVertex2f(-10.0f, -5.0f);
	glVertex2f(-10.0f, -6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, -11.0+0.6f);
	glVertex2f(-6.0f, -10.0f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(-10.0f, -11.0+0.6f);

	glEnd();

	//building 1 window 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 10.0+0.6f);
	glVertex2f(-3.0f, 11.0f);
	glVertex2f(-6.0f, 11.0f);
	glVertex2f(-6.0f, 10.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 8.0+0.6f);
	glVertex2f(-3.0f, 9.0f);
	glVertex2f(-6.0f, 9.0f);
	glVertex2f(-6.0f, 8.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 6.0+0.6f);
	glVertex2f(-3.0f, 7.0f);
	glVertex2f(-6.0f, 7.0f);
	glVertex2f(-6.0f, 6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 4.0+0.6f);
	glVertex2f(-3.0f, 5.0f);
	glVertex2f(-6.0f, 5.0f);
	glVertex2f(-6.0f, 4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 2.0+0.6f);
	glVertex2f(-3.0f, 3.0f);
	glVertex2f(-6.0f, 3.0f);
	glVertex2f(-6.0f, 2.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 0.0+0.6f);
	glVertex2f(-3.0f, 1.0f);
	glVertex2f(-6.0f, 1.0f);
	glVertex2f(-6.0f, 0.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, -2.0+0.6f);
	glVertex2f(-3.0f, -1.0f);
	glVertex2f(-6.0f, -1.0f);
	glVertex2f(-6.0f, -2.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, -4.0+0.6f);
	glVertex2f(-3.0f, -3.0f);
	glVertex2f(-6.0f, -3.0f);
	glVertex2f(-6.0f, -4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, -6.0+0.6f);
	glVertex2f(-3.0f, -5.0f);
	glVertex2f(-6.0f, -5.0f);
	glVertex2f(-6.0f, -6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, -11.0+0.6f);
	glVertex2f(-3.0f, -10.0f);
	glVertex2f(-6.0f, -10.0f);
	glVertex2f(-6.0f, -11.0+0.6f);

	glEnd();





	glFlush();
}
void building12shadow()
{
    // Building12 base
    glBegin(GL_POLYGON);
    glColor3f(0.76863f, 0.76863f, 0.76863); // Gray
    glVertex2f(-19.0f, -27.0f);  // Adjust the bottom-left vertex
    glVertex2f(-19.0f, 24.0f);   // Adjust the top-left vertex
    glVertex2f(-23.0f, 24.0f);  // Adjust the top-right vertex
    glVertex2f(-23.0f, -27.0f); // Adjust the bottom-right vertex
    glEnd();

    // Building12 side
    glBegin(GL_POLYGON);
    glColor3f(0.76863f, 0.76863f, 0.76863); // Gray
    glVertex2f(-23.0f, -27.0f);
    glVertex2f(-23.0f, 24.0f);
    glVertex2f(-25.0f, 22.0f);  // Adjust the top-right vertex
    glVertex2f(-25.0f, -27.0f); // Adjust the bottom-right vertex
    glEnd();

    // Building12 border 1
    glBegin(GL_POLYGON);
    glColor3f(0.76863f, 0.76863f, 0.76863); // Gray
    glVertex2f(-19.0f, 23.0f);  // Adjust the top-left vertex
    glVertex2f(-19.0f, 24.0f);
    glVertex2f(-23.0f, 24.0f);
    glVertex2f(-23.0f, 23.0f);
    glEnd();

    // Building12 border 2
    glBegin(GL_POLYGON);
    glColor3f(0.76863f, 0.76863f, 0.76863); // Gray
    glVertex2f(-23.0f, 23.0f);
    glVertex2f(-23.0f, 24.0f);
    glVertex2f(-25.0f, 22.0f);  // Adjust the top-right vertex
    glVertex2f(-25.0f, 21.0f);  // Adjust the bottom-right vertex
    glEnd();

    // Building12 border 3
    glBegin(GL_POLYGON);
    glColor3f(0.76863f, 0.76863f, 0.76863); // Gray
    glVertex2f(-24.0f, 5.0f);  // Adjust the top-left vertex
    glVertex2f(-24.0f, 22.0f);
    glVertex2f(-25.0f, 22.0f); // Adjust the top-right vertex
    glVertex2f(-25.0f, 5.0f);  // Adjust the bottom-right vertex
    glEnd();

    glFlush();
}


void building12()
{
    // Building12 base
    glBegin(GL_POLYGON);
    glColor3f(-0.81961f,  1.00000f,  1.07059f);
	//glColor3f(-0.99991f,  0.55800f,  0.66072f); // Yellow
    glVertex2f(-15.0f, -18.0f);
    glVertex2f(-15.0f, 16.0f);
    glVertex2f(-18.0f, 16.0f);
    glVertex2f(-18.0f, -18.0f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
    glVertex2f(-18.0f, -18.0f);
    glVertex2f(-18.0f, 16.0f);
    glVertex2f(-23.0f, 13.0f);
    glVertex2f(-23.0f, -18.0f);
    glEnd();

    // Building12 border 1
    glBegin(GL_POLYGON);
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
    glVertex2f(-15.0f, 15.0f);
    glVertex2f(-15.0f, 16.0f);
    glVertex2f(-18.0f, 16.0f);
    glVertex2f(-18.0f, 15.0f);
    glEnd();

    // Building2 border 2
    glBegin(GL_POLYGON);
    glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
    glVertex2f(-18.0f, 15.0f);
    glVertex2f(-18.0f, 16.0f);
    glVertex2f(-23.0f, 13.0f);
    glVertex2f(-23.0f, 12.0f);
    glEnd();

    // Building2 border 3
    glBegin(GL_POLYGON);
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
    glVertex2f(-22.0f, 2.0f);
    glVertex2f(-22.0f, 13.0f);
    glVertex2f(-23.0f, 13.0f);
    glVertex2f(-23.0f, 2.0f);
    glEnd();

    // Building2 window 1
    glBegin(GL_POLYGON);
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
    glVertex2f(-18.0f, 10.0f);
    glVertex2f(-18.0f, 11.0f);
    glVertex2f(-22.0f, 11.0f);
    glVertex2f(-22.0f, 10.0f);
    glEnd();



    glFlush();
}



void building1Rain()
{
    	glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

//glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color

    //sky
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.4f, 0.4f, 0.4f); // Yellow
	glVertex2f(31.0f, -18.0f);
	glVertex2f(31.0f, 38.0f);
	glVertex2f(-32.0f, 38.0f);
	glVertex2f(-32.0f, -18.0f);


	glEnd();
   //building1 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.99991f,  0.55800f,  0.66072f); // Yellow
	glVertex2f(-3.0f, -18.0f);
	glVertex2f(-3.0f, 16.0f);
	glVertex2f(-6.0f, 16.0f);
	glVertex2f(-6.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
	glVertex2f(-6.0f, -18.0f);
	glVertex2f(-6.0f, 16.0f);
	glVertex2f(-11.0f, 13.0f);
	glVertex2f(-11.0f, -18.0f);

	glEnd();

	//building 1 border 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.95622f,  0.78944f,  0.87758f); // Yellow
	glVertex2f(-3.0f, 15.0f);
	glVertex2f(-3.0f, 16.0f);
	glVertex2f(-6.0f, 16.0f);
	glVertex2f(-6.0f, 15.0f);

	glEnd();

	//building 1 border 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.99991f,  0.55800f,  0.66072f); // Yellow
	glVertex2f(-6.0f, 15.0f);
	glVertex2f(-6.0f, 16.0f);
	glVertex2f(-11.0f, 13.0f);
	glVertex2f(-11.0f, 12.0f);

	glEnd();


	//building 1 border 3

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.99991f,  0.55800f,  0.66072f); // Yellow
	glVertex2f(-10.0f, 2.0f);
	glVertex2f(-10.0f, 13.0f);
	glVertex2f(-11.0f, 13.0f);
	glVertex2f(-11.0f, 2.0f);

	glEnd();

	//building 1 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 10.0+0.6f);
	glVertex2f(-6.0f, 11.0f);
	glVertex2f(-10.0f, 11.0f);
	glVertex2f(-10.0f, 10.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 8.0+0.6f);
	glVertex2f(-6.0f, 9.0f);
	glVertex2f(-10.0f, 9.0f);
	glVertex2f(-10.0f, 8.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 6.0+0.6f);
	glVertex2f(-6.0f, 7.0f);
	glVertex2f(-10.0f, 7.0f);
	glVertex2f(-10.0f, 6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 4.0+0.6f);
	glVertex2f(-6.0f, 5.0f);
	glVertex2f(-10.0f, 5.0f);
	glVertex2f(-10.0f, 4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 2.0+0.6f);
	glVertex2f(-6.0f, 3.0f);
	glVertex2f(-10.0f, 3.0f);
	glVertex2f(-10.0f, 2.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, 0.0+0.6f);
	glVertex2f(-6.0f, 1.0f);
	glVertex2f(-10.0f, 1.0f);
	glVertex2f(-10.0f, 0.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, -2.0+0.6f);
	glVertex2f(-6.0f, -1.0f);
	glVertex2f(-10.0f, -1.0f);
	glVertex2f(-10.0f, -2.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, -4.0+0.6f);
	glVertex2f(-6.0f, -3.0f);
	glVertex2f(-10.0f, -3.0f);
	glVertex2f(-10.0f, -4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, -6.0+0.6f);
	glVertex2f(-6.0f, -5.0f);
	glVertex2f(-10.0f, -5.0f);
	glVertex2f(-10.0f, -6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-6.0f, -11.0+0.6f);
	glVertex2f(-6.0f, -10.0f);
	glVertex2f(-10.0f, -10.0f);
	glVertex2f(-10.0f, -11.0+0.6f);

	glEnd();

	//building 1 window 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 10.0+0.6f);
	glVertex2f(-3.0f, 11.0f);
	glVertex2f(-6.0f, 11.0f);
	glVertex2f(-6.0f, 10.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 8.0+0.6f);
	glVertex2f(-3.0f, 9.0f);
	glVertex2f(-6.0f, 9.0f);
	glVertex2f(-6.0f, 8.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 6.0+0.6f);
	glVertex2f(-3.0f, 7.0f);
	glVertex2f(-6.0f, 7.0f);
	glVertex2f(-6.0f, 6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 4.0+0.6f);
	glVertex2f(-3.0f, 5.0f);
	glVertex2f(-6.0f, 5.0f);
	glVertex2f(-6.0f, 4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 2.0+0.6f);
	glVertex2f(-3.0f, 3.0f);
	glVertex2f(-6.0f, 3.0f);
	glVertex2f(-6.0f, 2.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, 0.0+0.6f);
	glVertex2f(-3.0f, 1.0f);
	glVertex2f(-6.0f, 1.0f);
	glVertex2f(-6.0f, 0.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, -2.0+0.6f);
	glVertex2f(-3.0f, -1.0f);
	glVertex2f(-6.0f, -1.0f);
	glVertex2f(-6.0f, -2.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, -4.0+0.6f);
	glVertex2f(-3.0f, -3.0f);
	glVertex2f(-6.0f, -3.0f);
	glVertex2f(-6.0f, -4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, -6.0+0.6f);
	glVertex2f(-3.0f, -5.0f);
	glVertex2f(-6.0f, -5.0f);
	glVertex2f(-6.0f, -6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(-3.0f, -11.0+0.6f);
	glVertex2f(-3.0f, -10.0f);
	glVertex2f(-6.0f, -10.0f);
	glVertex2f(-6.0f, -11.0+0.6f);

	glEnd();



glFlush();


	////glFlush();;
}

void building3Winter()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //building3 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.00784f,  0.27059f,  0.58039f); // Yellow
	glVertex2f(5.0f, -18.0f);
	glVertex2f(5.0f, 4.0f);
	glVertex2f(0.0f, 4.0f);
	glVertex2f(0.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.00392f,  0.26667f,  0.58431f); // Yellow
	glVertex2f(0.0f, -18.0f);
	glVertex2f(0.0f, 4.0f);
	glVertex2f(-4.0f, 3.0f);
	glVertex2f(-4.0f, -18.0f);


	glEnd();

	//building3 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.20784f,  0.43922f,  0.61176f); // Yellow
	glVertex2f(0.0-0.6f, 0.0f);
	glVertex2f(0.0-0.6f, 3.0f);
	glVertex2f(-3.0f, 2.0f);
	glVertex2f(-3.0f, 0.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.20784f,  0.43922f,  0.61176f); // Yellow
	glVertex2f(0.0-0.6f, -1.0f);
	glVertex2f(-3.0f, -1.0f);
	glVertex2f(-3.0f, -4.0f);
	glVertex2f(0.0-0.6f, -4.0f);

    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.20784f,  0.43922f,  0.61176f); // Yellow
	glVertex2f(0.0-0.6f, -8.0f);
	glVertex2f(0.0-0.6f, -5.0f);
	glVertex2f(-3.0f, -5.0f);
	glVertex2f(-3.0f, -8.0f);

    glEnd();

     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.20784f,  0.43922f,  0.61176f); // Yellow
	glVertex2f(0.0-0.6f, -12.0f);
	glVertex2f(0.0-0.6f, -9.0f);
	glVertex2f(-3.0f, -9.0f);
	glVertex2f(-3.0f, -12.0f);

    glEnd();


     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.20784f,  0.43922f,  0.61176f); // Yellow
	glVertex2f(0.0-0.6f, -16.0f);
	glVertex2f(0.0-0.6f, -13.0f);
	glVertex2f(-3.0f, -13.0f);
	glVertex2f(-3.0f, -16.0f);

    glEnd();

    //building3 window 2

     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.20784f,  0.43922f,  0.61176f); // Yellow
	glVertex2f(1.0f, -18.0f);
	glVertex2f(1.0f, 4.0f);
	glVertex2f(0.0f, 4.0f);
	glVertex2f(0.0f, -18.0f);

    glEnd();


	glFlush();

}



void building10Winter()
{
    //building10 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.00784f,  0.27059f,  0.58039f); // Yellow
	glVertex2f(-18.0f, -18.0f);
	glVertex2f(-18.0f, -13.0f);
	glVertex2f(-22.0f, -13.0f);
	glVertex2f(-22.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.00784f,  0.27059f,  0.58039f); // Yellow
	glVertex2f(-22.0f, -18.0f);
	glVertex2f(-22.0f, -13.0f);
	glVertex2f(-25.0f, -14.0f);
	glVertex2f(-25.0f, -18.0f);


	glEnd();

	//building 10 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21961f,  0.54118f,  0.72941f); // Yellow
	glVertex2f(-23.0f, -16.0f);
	glVertex2f(-23.0f, -15.0f);
	glVertex2f(-24.0f, -15.0f);
	glVertex2f(-24.0f, -16.0f);


	glEnd();


	//building 10 window 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21961f,  0.54118f,  0.72941f); // Yellow
	glVertex2f(-21.0-0.6f, -18.0f);
	glVertex2f(-21.0-0.6f, -13.0f);
	glVertex2f(-22.0f, -13.0f);
	glVertex2f(-22.0f, -18.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21961f,  0.54118f,  0.72941f); // Yellow
	glVertex2f(-21.0-0.6+1.0f, -18.0f);
	glVertex2f(-21.0-0.6+1.0f, -13.0f);
	glVertex2f(-22.0+1.0f, -13.0f);
	glVertex2f(-22.0+1.0f, -18.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21961f,  0.54118f,  0.72941f); // Yellow
	glVertex2f(-21.0-0.6+2.0f, -18.0f);
	glVertex2f(-21.0-0.6+2.0f, -13.0f);
	glVertex2f(-22.0+2.0f, -13.0f);
	glVertex2f(-22.0+2.0f, -18.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.21961f,  0.54118f,  0.72941f); // Yellow
	glVertex2f(-21.0-0.6+3.0f, -18.0f);
	glVertex2f(-21.0-0.6+3.0f, -13.0f);
	glVertex2f(-22.0+3.0f, -13.0f);
	glVertex2f(-22.0+3.0f, -18.0f);


	glEnd();


	glFlush();

}
void building11Winter()
{

    //building11 base 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
	glVertex2f(0.0f, -18.0f);
	glVertex2f(0.0f, -11.0f);
	glVertex2f(-4.0f, -11.0f);
	glVertex2f(-4.0f, -18.0f);

	glEnd();

	//building11 base 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.00784f,  0.27059f,  0.58039f); // Yellow
	glVertex2f(-4.0f, -18.0f);
	glVertex2f(-4.0f, -11.0f);
	glVertex2f(-8.0f, -11.0f);
	glVertex2f(-8.0f, -18.0f);

	glEnd();

	//building11 base 3

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.00784f,  0.27059f,  0.58039f); // Yellow
	glVertex2f(-8.0f, -18.0f);
	glVertex2f(-8.0f, -12.0f);
	glVertex2f(-11.0f, -12.0f);
	glVertex2f(-11.0f, -18.0f);

	glEnd();

	//building11 border

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.41661f,  0.38833f,  0.66144f); // Yellow
	glVertex2f(0.0f, -12.0f);
	glVertex2f(0.0f, -11.0f);
	glVertex2f(-4.0f, -11.0f);
	glVertex2f(-4.0f, -12.0f);

	glEnd();

	//building11 base 1 window

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.41661f,  0.38833f,  0.66144f); // Yellow
	glVertex2f(0.0-0.6f, -13.0f);
	glVertex2f(0.0-0.6f, -12.0-0.3f);
	glVertex2f(-4.0+0.6f, -12.0-0.3f);
	glVertex2f(-4.0+0.6f, -13.0f);

	glEnd();



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.41661f,  0.38833f,  0.66144f); // Yellow
	glVertex2f(0.0-0.6f, -15.0f);
	glVertex2f(0.0-0.6f, -14.0-0.3f);
	glVertex2f(-4.0+0.6f, -14.0-0.3f);
	glVertex2f(-4.0+0.6f, -15.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.41661f,  0.38833f,  0.66144f); // Yellow
	glVertex2f(0.0-0.6f, -17.0f);
	glVertex2f(0.0-0.6f, -16.0-0.3f);
	glVertex2f(-4.0+0.6f, -16.0-0.3f);
	glVertex2f(-4.0+0.6f, -17.0f);

	glEnd();

	//building11 base 2 window

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-7.0f, -17.0f);
	glVertex2f(-7.0f, -12.0f);
	glVertex2f(-8.0+0.6f, -12.0f);
	glVertex2f(-8.0+0.6f, -17.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-5.0-0.6f, -17.0f);
	glVertex2f(-5.0-0.6f, -12.0f);
	glVertex2f(-6.0-0.3f, -12.0f);
	glVertex2f(-6.0-0.3f, -17.0f);



	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-4.0-0.4f, -17.0f);
	glVertex2f(-4.0-0.4f, -12.0f);
	glVertex2f(-4.0-0.8f, -12.0f);
	glVertex2f(-4.0-0.8f, -17.0f);

	glEnd();

	//building11 base 3 window

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-10.0+0.2f, -12.0-0.3f);
	glVertex2f(-10.0+0.2f, -14.0-0.3f);
	glVertex2f(-9.0f, -14.0-0.3f);
	glVertex2f(-9.0f, -12.0-0.3f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-10.0+0.2f, -14.0f);
	glVertex2f(-10.0+0.2f, -18.0+0.3f);
	glVertex2f(-9.0f, -18.0+0.3f);
	glVertex2f(-9.0f, -14.0f);

	glEnd();



	glFlush();

}

void building2()
{
    //building2 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon

	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(6.0f, -18.0f);
	glVertex2f(6.0f, 22.0f);
	glVertex2f(3.0f, 22.0f);
	glVertex2f(3.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
	glVertex2f(11.0f, -18.0f);
	glVertex2f(11.0f, 19.0f);
	glVertex2f(6.0f, 22.0f);
	glVertex2f(6.0f, -18.0f);


	glEnd();

	//building 2 border 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.95622f,  0.78944f,  0.87758f); // Yellow
	glVertex2f(6.0f, 21.0f);
	glVertex2f(6.0f, 22.0f);
	glVertex2f(3.0f, 22.0f);
	glVertex2f(3.0f, 21.0f);

	glEnd();

	//building 2 border 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.99991f,  0.55800f,  0.66072f); // Yellow
	glVertex2f(11.0f, 18.0f);
	glVertex2f(11.0f, 19.0f);
	glVertex2f(6.0f, 22.0f);
	glVertex2f(6.0f, 21.0f);


	glEnd();

	//building 2 border 3

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.99991f,  0.55800f,  0.66072f); // Yellow
	glVertex2f(11.0f, 0.0f);
	glVertex2f(11.0f, 19.0f);
	glVertex2f(10.0f, 19.0f);
	glVertex2f(10.0f, 0.0f);


	glEnd();


	//building 2 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 16.0+0.6f);
	glVertex2f(6.0f, 17.0f);
	glVertex2f(3.0f, 17.0f);
	glVertex2f(3.0f, 16.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 14.0+0.6f);
	glVertex2f(6.0f, 15.0f);
	glVertex2f(3.0f, 15.0f);
	glVertex2f(3.0f, 14.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 12.0+0.6f);
	glVertex2f(6.0f, 13.0f);
	glVertex2f(3.0f, 13.0f);
	glVertex2f(3.0f, 12.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 10.0+0.6f);
	glVertex2f(6.0f, 11.0f);
	glVertex2f(3.0f, 11.0f);
	glVertex2f(3.0f, 10.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 8.0+0.6f);
	glVertex2f(6.0f, 9.0f);
	glVertex2f(3.0f, 9.0f);
	glVertex2f(3.0f, 8.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 6.0+0.6f);
	glVertex2f(6.0f, 7.0f);
	glVertex2f(3.0f, 7.0f);
	glVertex2f(3.0f, 6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 4.0+0.6f);
	glVertex2f(6.0f, 5.0f);
	glVertex2f(3.0f, 5.0f);
	glVertex2f(3.0f, 4.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 2.0+0.6f);
	glVertex2f(6.0f, 3.0f);
	glVertex2f(3.0f, 3.0f);
	glVertex2f(3.0f, 2.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, 0.0+0.6f);
	glVertex2f(6.0f, 1.0f);
	glVertex2f(3.0f, 1.0f);
	glVertex2f(3.0f, 0.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, -2.0+0.6f);
	glVertex2f(6.0f, -1.0f);
	glVertex2f(3.0f, -1.0f);
	glVertex2f(3.0f, -2.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, -4.0+0.6f);
	glVertex2f(6.0f, -3.0f);
	glVertex2f(3.0f, -3.0f);
	glVertex2f(3.0f, -4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, -6.0+0.6f);
	glVertex2f(6.0f, -5.0f);
	glVertex2f(3.0f, -5.0f);
	glVertex2f(3.0f, -6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, -8.0+0.6f);
	glVertex2f(6.0f, -7.0f);
	glVertex2f(3.0f, -7.0f);
	glVertex2f(3.0f, -8.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, -10.0+0.6f);
	glVertex2f(6.0f, -9.0f);
	glVertex2f(3.0f, -9.0f);
	glVertex2f(3.0f, -10.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, -12.0+0.6f);
	glVertex2f(6.0f, -11.0f);
	glVertex2f(3.0f, -11.0f);
	glVertex2f(3.0f, -12.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.63117f,  0.41289f,  0.55087f); // Yellow
	glVertex2f(6.0f, -14.0+0.6f);
	glVertex2f(6.0f, -13.0f);
	glVertex2f(3.0f, -13.0f);
	glVertex2f(3.0f, -14.0+0.6f);

	glEnd();

	//building 2 window 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 16.0+0.6f);
	glVertex2f(10.0f, 17.0f);
	glVertex2f(6.0f, 17.0f);
	glVertex2f(6.0f, 16.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 14.0+0.6f);
	glVertex2f(10.0f, 15.0f);
	glVertex2f(6.0f, 15.0f);
	glVertex2f(6.0f, 14.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 12.0+0.6f);
	glVertex2f(10.0f, 13.0f);
	glVertex2f(6.0f, 13.0f);
	glVertex2f(6.0f, 12.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 10.0+0.6f);
	glVertex2f(10.0f, 11.0f);
	glVertex2f(6.0f, 11.0f);
	glVertex2f(6.0f, 10.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 8.0+0.6f);
	glVertex2f(10.0f, 9.0f);
	glVertex2f(6.0f, 9.0f);
	glVertex2f(6.0f, 8.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 6.0+0.6f);
	glVertex2f(10.0f, 7.0f);
	glVertex2f(6.0f, 7.0f);
	glVertex2f(6.0f, 6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 4.0+0.6f);
	glVertex2f(10.0f, 5.0f);
	glVertex2f(6.0f, 5.0f);
	glVertex2f(6.0f, 4.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 2.0+0.6f);
	glVertex2f(10.0f, 3.0f);
	glVertex2f(6.0f, 3.0f);
	glVertex2f(6.0f, 2.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, 0.0+0.6f);
	glVertex2f(10.0f, 1.0f);
	glVertex2f(6.0f, 1.0f);
	glVertex2f(6.0f, 0.0+0.6f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, -2.0+0.6f);
	glVertex2f(10.0f, -1.0f);
	glVertex2f(6.0f, -1.0f);
	glVertex2f(6.0f, -2.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.81176f , 0.97647f, 0.97255f);
	glVertex2f(10.0f, -4.0+0.6f);
	glVertex2f(10.0f, -3.0f);
	glVertex2f(6.0f, -3.0f);
	glVertex2f(6.0f, -4.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(10.0f, -6.0+0.6f);
	glVertex2f(10.0f, -5.0f);
	glVertex2f(6.0f, -5.0f);
	glVertex2f(6.0f, -6.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(10.0f, -8.0+0.6f);
	glVertex2f(10.0f, -7.0f);
	glVertex2f(6.0f, -7.0f);
	glVertex2f(6.0f, -8.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(10.0f, -10.0+0.6f);
	glVertex2f(10.0f, -9.0f);
	glVertex2f(6.0f, -9.0f);
	glVertex2f(6.0f, -10.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(10.0f, -12.0+0.6f);
	glVertex2f(10.0f, -11.0f);
	glVertex2f(6.0f, -11.0f);
	glVertex2f(6.0f, -12.0+0.6f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(10.0f, -14.0+0.6f);
	glVertex2f(10.0f, -13.0f);
	glVertex2f(6.0f, -13.0f);
	glVertex2f(6.0f, -14.0+0.6f);

	glEnd();


glFlush();


}

void mainroad()
{
    //main road
	glBegin(GL_POLYGON);            // These vertices form a closed polygon


	glColor3f(1.00000f,  0.88235f,  0.69804f); // Yellow

	glVertex2f(38.0f, -18.0f);
	glVertex2f(-38.0f, -18.0f);
	glVertex2f(-38.0f, -24.0f);
	glVertex2f(38.0f, -24.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon

	glColor3f(0.54118f,  0.58431f,  0.60784f);

	glVertex2f(38.0f, -38.0f);
	glVertex2f(38.0f, -24.0f);
	glVertex2f(-38.0f, -24.0f);
	glVertex2f(-38.0f, -38.0f);


	glEnd();
glFlush();

	////glFlush();;

}
void building3shadow()
{
    // building3 base
    glBegin(GL_POLYGON);
    glColor3f(0.76863f, 0.76863f, 0.76863); // Gray
    glVertex2f(10.0f, -30.0f);
    glVertex2f(10.0f, 8.0f);
    glVertex2f(0.0f, 8.0f);
    glVertex2f(0.0f, -30.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.76863f, 0.76863f, 0.76863); // Gray
    glVertex2f(0.0f, -30.0f);
    glVertex2f(0.0f, 8.0f);
    glVertex2f(-8.0f, 7.0f);
    glVertex2f(-8.0f, -30.0f);
    glEnd();

    glFlush();
}

void building3()
{
    //building3 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.91330f,  0.53405f,  0.16696f); // Yellow
	glVertex2f(5.0f, -18.0f);
	glVertex2f(5.0f, 4.0f);
	glVertex2f(0.0f, 4.0f);
	glVertex2f(0.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.07029f,  0.78557f,  0.43610f); // Yellow
	glVertex2f(0.0f, -18.0f);
	glVertex2f(0.0f, 4.0f);
	glVertex2f(-4.0f, 3.0f);
	glVertex2f(-4.0f, -18.0f);


	glEnd();

	//building3 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.80322f,  0.43326f,  0.50467f); // Yellow
	glVertex2f(0.0-0.6f, 0.0f);
	glVertex2f(0.0-0.6f, 3.0f);
	glVertex2f(-3.0f, 2.0f);
	glVertex2f(-3.0f, 0.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.80322f,  0.43326f,  0.50467f); // Yellow
	glVertex2f(0.0-0.6f, -1.0f);
	glVertex2f(-3.0f, -1.0f);
	glVertex2f(-3.0f, -4.0f);
	glVertex2f(0.0-0.6f, -4.0f);

    glEnd();

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.80322f,  0.43326f,  0.50467f); // Yellow
	glVertex2f(0.0-0.6f, -8.0f);
	glVertex2f(0.0-0.6f, -5.0f);
	glVertex2f(-3.0f, -5.0f);
	glVertex2f(-3.0f, -8.0f);

    glEnd();

     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.80322f,  0.43326f,  0.50467f); // Yellow
	glVertex2f(0.0-0.6f, -12.0f);
	glVertex2f(0.0-0.6f, -9.0f);
	glVertex2f(-3.0f, -9.0f);
	glVertex2f(-3.0f, -12.0f);

    glEnd();


     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.80322f,  0.43326f,  0.50467f); // Yellow
	glVertex2f(0.0-0.6f, -16.0f);
	glVertex2f(0.0-0.6f, -13.0f);
	glVertex2f(-3.0f, -13.0f);
	glVertex2f(-3.0f, -16.0f);

    glEnd();

    //building3 window 2

     glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.80322f,  0.43326f,  0.50467f); // Yellow
	glVertex2f(1.0f, -18.0f);
	glVertex2f(1.0f, 4.0f);
	glVertex2f(0.0f, 4.0f);
	glVertex2f(0.0f, -18.0f);

    glEnd();




glFlush();




}
void building4shadow()
{
    // building4 base
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(14.0f, -18.0f);
    glVertex2f(14.0f, 10.0f);   // Increase the height
    glVertex2f(7.0f, 10.0f);    // Increase the height
    glVertex2f(7.0f, -18.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(7.0f, -18.0f);
    glVertex2f(7.0f, 10.0f);    // Increase the height
    glVertex2f(5.0f, 8.0f);     // Adjusted position to make the weight smaller
    glVertex2f(5.0f, -18.0f);
    glEnd();

    // building 4 border 1
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(14.0f, -1.0f);
    glVertex2f(14.0f, 0.0f);
    glVertex2f(10.0f, 0.0f);
    glVertex2f(10.0f, -1.0f);
    glEnd();

    // building 4 border 2
    glBegin(GL_POLYGON);
    glColor3f(0.74902f, 0.79216f, 0.76078f); // Gray
    glVertex2f(10.0f, -1.0f);
    glVertex2f(10.0f, 0.0f);
    glVertex2f(7.0f, -2.0f);
    glVertex2f(7.0f, -3.0f);
    glEnd();

    glFlush();
}

void building4()
{
    //building4 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-1.40202f,  0.77008f,  0.87432f); // Yellow

	glVertex2f(14.0f, -18.0f);
	glVertex2f(14.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(10.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.92846f,  0.53405f,  0.67370f); // Yellowf
	glVertex2f(10.0f, -18.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(7.0f, -3.0f);
	glVertex2f(7.0f, -18.0f);


	glEnd();

	//building 4 border 1
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(14.0f, -1.0f);
	glVertex2f(14.0f, 0.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(10.0f, -1.0f);

	glEnd();
	//building 4 border 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(10.0f, -1.0f);
	glVertex2f(10.0f, 0.0f);
	glVertex2f(7.0f, -2.0f);
	glVertex2f(7.0f, -3.0f);

	glEnd();


	//building4 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(10.0f, -4.0f);
	glVertex2f(10.0f, -3.0f);
	glVertex2f(8.0f, -3.0f);
	glVertex2f(8.0f, -4.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(10.0f, -6.0f);
	glVertex2f(10.0f, -5.0f);
	glVertex2f(8.0f, -5.0f);
	glVertex2f(8.0f, -6.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(10.0f, -8.0f);
	glVertex2f(10.0f, -7.0f);
	glVertex2f(8.0f, -7.0f);
	glVertex2f(8.0f, -8.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(10.0f, -10.0f);
	glVertex2f(10.0f, -9.0f);
	glVertex2f(8.0f, -9.0f);
	glVertex2f(8.0f, -10.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(10.0f, -12.0f);
	glVertex2f(10.0f, -11.0f);
	glVertex2f(8.0f, -11.0f);
	glVertex2f(8.0f, -12.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(10.0f, -14.0f);
	glVertex2f(10.0f, -13.0f);
	glVertex2f(8.0f, -13.0f);
	glVertex2f(8.0f, -14.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20071f,  0.30969f,  0.42084f); // Yellow
	glVertex2f(10.0f, -16.0f);
	glVertex2f(10.0f, -15.0f);
	glVertex2f(8.0f, -15.0f);
	glVertex2f(8.0f, -16.0f);

	glEnd();


   // building4 window 2

   glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.92846f,  0.53405f,  0.67370f); // Yellow
	glVertex2f(14.0-0.6f, -4.0f);
	glVertex2f(14.0-0.6f, -3.0f);
	glVertex2f(10.0+0.6f, -3.0f);
	glVertex2f(10.0+0.6f, -4.0f);

	glEnd();


	 glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.92846f,  0.53405f,  0.67370f); // Yellow
	glVertex2f(12.0f, -6.0f);
	glVertex2f(12.0f, -5.0f);
	glVertex2f(10.0+0.6f, -5.0f);
	glVertex2f(10.0+0.6f, -6.0f);

	glEnd();

	 glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.92846f,  0.53405f,  0.67370f); // Yellow
	glVertex2f(12.0f, -8.0f);
	glVertex2f(12.0f, -7.0f);
	glVertex2f(10.0+0.6f, -7.0f);
	glVertex2f(10.0+0.6f, -8.0f);

	glEnd();

	 glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.92846f,  0.53405f,  0.67370f); // Yellow
	glVertex2f(12.0f, -10.0f);
	glVertex2f(12.0f, -9.0f);
	glVertex2f(10.0+0.6f, -9.0f);
	glVertex2f(10.0+0.6f, -10.0f);

	glEnd();

	 glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.92846f,  0.53405f,  0.67370f); // Yellow
	glVertex2f(12.0f, -12.0f);
	glVertex2f(12.0f, -11.0f);
	glVertex2f(10.0+0.6f, -11.0f);
	glVertex2f(10.0+0.6f, -12.0f);

	glEnd();


	 glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.92846f,  0.53405f,  0.67370f); // Yellow
	glVertex2f(12.0f, -14.0f);
	glVertex2f(12.0f, -13.0f);
	glVertex2f(10.0+0.6f, -13.0f);
	glVertex2f(10.0+0.6f, -14.0f);

	glEnd();


	 glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.92846f,  0.53405f,  0.67370f); // Yellow
	glVertex2f(12.0f, -16.0f);
	glVertex2f(12.0f, -15.0f);
	glVertex2f(10.0+0.6f, -15.0f);
	glVertex2f(10.0+0.6f, -16.0f);

	glEnd();

glFlush();

	////glFlush();;

}


void building7()
{
    //building7 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.42745f,  0.78431f,  0.94118f);


	glVertex2f(19.0f, -18.0f);
	glVertex2f(19.0f, -6.0f);
	glVertex2f(17.0f, -4.0f);
	glVertex2f(17.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.00784f,  0.27059f,  0.58039f);


	glVertex2f(17.0f, -18.0f);
	glVertex2f(17.0f, -4.0f);
	glVertex2f(12.0f, -4.0f);
	glVertex2f(12.0f, -18.0f);


	glEnd();

	//building7 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.57036f,  0.81648f,  0.71907f); // Yellow
	glVertex2f(17.0f, -8.0f);
	glVertex2f(17.0f, -7.0f);
	glVertex2f(12.0+0.6f, -7.0f);
	glVertex2f(12.0+0.6f, -8.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.57036f,  0.81648f,  0.71907f); // Yellow
	glVertex2f(17.0f, -10.0f);
	glVertex2f(17.0f, -9.0f);
	glVertex2f(12.0+0.6f, -9.0f);
	glVertex2f(12.0+0.6f, -10.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.57036f,  0.81648f,  0.71907f); // Yellow
	glVertex2f(17.0f, -12.0f);
	glVertex2f(17.0f, -11.0f);
	glVertex2f(12.0+0.6f, -11.0f);
	glVertex2f(12.0+0.6f, -12.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.57036f,  0.81648f,  0.71907f); // Yellow
	glVertex2f(17.0f, -14.0f);
	glVertex2f(17.0f, -13.0f);
	glVertex2f(12.0+0.6f, -13.0f);
	glVertex2f(12.0+0.6f, -14.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.57036f,  0.81648f,  0.71907f); // Yellow
	glVertex2f(17.0f, -16.0f);
	glVertex2f(17.0f, -15.0f);
	glVertex2f(12.0+0.6f, -15.0f);
	glVertex2f(12.0+0.6f, -16.0f);

	glEnd();

	//building7 window 2


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f( 0.78348f,  0.91628f,  0.86429f); // Yellow
	glVertex2f(19.0-0.6f, -8.0f);
	glVertex2f(19.0-0.6f, -7.0f);
	glVertex2f(17.0f, -7.0f);
	glVertex2f(17.0f, -8.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.78348f,  0.91628f,  0.86429f); // Yellow
	glVertex2f(19.0-0.6f, -10.0f);
	glVertex2f(19.0-0.6f, -9.0f);
	glVertex2f(17.0f, -9.0f);
	glVertex2f(17.0f, -10.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.78348f,  0.91628f,  0.86429f); // Yellow
	glVertex2f(19.0-0.6f, -12.0f);
	glVertex2f(19.0-0.6f, -11.0f);
	glVertex2f(17.0f, -11.0f);
	glVertex2f(17.0f, -12.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.78348f,  0.91628f,  0.86429f); // Yellow
	glVertex2f(19.0-0.6f, -14.0f);
	glVertex2f(19.0-0.6f, -13.0f);
	glVertex2f(17.0f, -13.0f);
	glVertex2f(17.0f, -14.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.78348f,  0.91628f,  0.86429f); // Yellow
	glVertex2f(19.0-0.6f, -16.0f);
	glVertex2f(19.0-0.6f, -15.0f);
	glVertex2f(17.0f, -15.0f);
	glVertex2f(17.0f, -16.0f);

	glEnd();


glFlush();

	////glFlush();;

}

void building8()
{
    //building8 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.15324f,  0.28034f,  0.38795f); // Yellow
	glVertex2f(-9.0f, -18.0f);
	glVertex2f(-9.0f, 2.0f);
	glVertex2f(-13.0f, 3.0f);
	glVertex2f(-13.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.15324f,  0.28034f,  0.38795f); // Yellow
	glVertex2f(-13.0+0.4f, -18.0f);
	glVertex2f(-13.0+0.4f, 3.0f);
	glVertex2f(-16.0f, 3.0f);
	glVertex2f(-16.0f, -18.0f);


	glEnd();

	//building8 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon

	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-15.0-0.6f, -17.0f);
	glVertex2f(-15.0-0.6f, 2.0f);
	glVertex2f(-16.0+0.1f, 2.0f);
	glVertex2f(-16.0+0.1f, -17.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-14.0-0.9f, -17.0f);
	glVertex2f(-14.0-0.9f, 2.0f);
	glVertex2f(-15.0-0.2f, 2.0f);
	glVertex2f(-15.0-0.2f, -17.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-13.0-0.9f, -17.0f);
	glVertex2f(-13.0-0.9f, 2.0f);
	glVertex2f(-14.0-0.3f, 2.0f);
	glVertex2f(-14.0-0.3f, -17.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-12.0-0.9f, -17.0f);
	glVertex2f(-12.0-0.9f, 2.0f);
	glVertex2f(-13.0-0.3f, 2.0f);
	glVertex2f(-13.0-0.3f, -17.0f);

	glEnd();

	//building8 window 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-11.0-0.9f, 2.0-0.4f);
	glVertex2f(-12.0-0.3f, 2.0-0.4f);
	glVertex2f(-12.0-0.3f, -17.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-10.0-0.9f, -17.0f);
	glVertex2f(-10.0-0.9f, 2.0-0.6f);
	glVertex2f(-11.0-0.3f, 2.0-0.6f);
	glVertex2f(-11.0-0.3f, -17.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-9.0-0.9f, -17.0f);
	glVertex2f(-9.0-0.9f, 2.0-0.9f);
	glVertex2f(-10.0-0.3f, 2.0-0.9f);
	glVertex2f(-10.0-0.3f, -17.0f);

	glEnd();
glFlush();

	////glFlush();;

}



void building9()
{
    //building9 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow

	glVertex2f(-17.0f, -18.0f);
	glVertex2f(-17.0f, 2.0f);
	glVertex2f(-19.0f, 2.0f);
	glVertex2f(-19.0f, -18.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon

	glColor3f(0.75686f,  0.91765f,   0.89412f);

	glVertex2f(-19.0f, -18.0f);
	glVertex2f(-19.0f, 2.0f);
	glVertex2f(-22.0f, 2.0f);
	glVertex2f(-22.0f, -18.0f);


	glEnd();

	//building 9 border 1
	glBegin(GL_POLYGON);            // These vertices form a closed polygon

	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-17.0f, 1.0f);
	glVertex2f(-17.0f, 2.0f);
	glVertex2f(-19.0f, 2.0f);
	glVertex2f(-19.0f, 1.0f);

	glEnd();
	//building 9 border 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-19.0f, 1.0f);
	glVertex2f(-19.0f, 2.0f);
	glVertex2f(-22.0f, 2.0f);
	glVertex2f(-22.0f, 1.0f);

	glEnd();

	//building9 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-20.0-0.6f, -13.0f);
	glVertex2f(-20.0-0.6f, 0.0f);
	glVertex2f(-21.0f, 0.0f);
	glVertex2f(-21.0f, -13.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-19.0-0.6f, -13.0f);
	glVertex2f(-19.0-0.6f, 0.0f);
	glVertex2f(-20.0f, 0.0f);
	glVertex2f(-20.0f, -13.0f);

	glEnd();

	//building 9 window 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-17.0-0.2f, -1.0f);
	glVertex2f(-17.0-0.2f, 0.0f);
	glVertex2f(-19.0+0.2f, 0.0f);
	glVertex2f(-19.0+0.2f, -1.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-17.0-0.2f, -2.0f);
	glVertex2f(-17.0-0.2f, -3.0f);
	glVertex2f(-19.0+0.2f, -3.0f);
	glVertex2f(-19.0+0.2f, -2.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-17.0-0.2f, -4.0f);
	glVertex2f(-17.0-0.2f, -5.0f);
	glVertex2f(-19.0+0.2f, -5.0f);
	glVertex2f(-19.0+0.2f, -4.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-17.0-0.2f, -6.0f);
	glVertex2f(-17.0-0.2f, -7.0f);
	glVertex2f(-19.0+0.2f, -7.0f);
	glVertex2f(-19.0+0.2f, -6.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-17.0-0.2f, -8.0f);
	glVertex2f(-17.0-0.2f, -9.0f);
	glVertex2f(-19.0+0.2f, -9.0f);
	glVertex2f(-19.0+0.2f, -8.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-17.0-0.2f, -10.0f);
	glVertex2f(-17.0-0.2f, -11.0f);
	glVertex2f(-19.0+0.2f, -11.0f);
	glVertex2f(-19.0+0.2f, -10.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-17.0-0.2f, -12.0f);
	glVertex2f(-17.0-0.2f, -13.0f);
	glVertex2f(-19.0+0.2f, -13.0f);
	glVertex2f(-19.0+0.2f, -12.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.20356f,  0.25075f,  0.37183f); // Yellow
	glVertex2f(-17.0-0.2f, -14.0f);
	glVertex2f(-17.0-0.2f, -15.0f);
	glVertex2f(-19.0+0.6f, -15.0f);
	glVertex2f(-19.0+0.6f, -14.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.75686f,  0.91765f,  0.89412f);
	glVertex2f(-17.0-0.2f, -16.0f);
	glVertex2f(-17.0-0.2f, -17.0f);
	glVertex2f(-19.0+0.6f, -17.0f);
	glVertex2f(-19.0+0.6f, -16.0f);

	glEnd();



glFlush();

	////glFlush();;

}

void building10()
{
    //building10 base
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.38039f , 0.78039f,  0.87451); // Yellow

	glVertex2f(-18.0f, -18.0f);
	glVertex2f(-18.0f, -13.0f);
	glVertex2f(-22.0f, -13.0f);
	glVertex2f(-22.0f, -18.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	//glColor3f(1.07029f,  0.78557f,  0.43610f); // Yellow
	glColor3f(-0.81961f,  1.00000f,  1.07059f);
	glVertex2f(-22.0f, -18.0f);
	glVertex2f(-22.0f, -13.0f);
	glVertex2f(-25.0f, -14.0f);
	glVertex2f(-25.0f, -18.0f);


	glEnd();

	//building 10 window 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
	glVertex2f(-23.0f, -16.0f);
	glVertex2f(-23.0f, -15.0f);
	glVertex2f(-24.0f, -15.0f);
	glVertex2f(-24.0f, -16.0f);


	glEnd();


	//building 10 window 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	//glColor3f(1.0f,  1.0f,  1.0f); // Yellow
	glColor3f(-0.81961f,  1.00000f,  1.07059f);
	glVertex2f(-21.0-0.6f, -18.0f);
	glVertex2f(-21.0-0.6f, -13.0f);
	glVertex2f(-22.0f, -13.0f);
	glVertex2f(-22.0f, -18.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f,  1.0f,  1.0f); // Yellow
	glVertex2f(-21.0-0.6+1.0f, -18.0f);
	glVertex2f(-21.0-0.6+1.0f, -13.0f);
	glVertex2f(-22.0+1.0f, -13.0f);
	glVertex2f(-22.0+1.0f, -18.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f,  1.0f,  1.0f); // Yellow
	glVertex2f(-21.0-0.6+2.0f, -18.0f);
	glVertex2f(-21.0-0.6+2.0f, -13.0f);
	glVertex2f(-22.0+2.0f, -13.0f);
	glVertex2f(-22.0+2.0f, -18.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f,  1.0f,  1.0f); // Yellow
	glVertex2f(-21.0-0.6+3.0f, -18.0f);
	glVertex2f(-21.0-0.6+3.0f, -13.0f);
	glVertex2f(-22.0+3.0f, -13.0f);
	glVertex2f(-22.0+3.0f, -18.0f);


	glEnd();
glFlush();


	////glFlush();;

}

void building11()
{

    //building11 base 1

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(-0.28080f,  0.34297f,  0.46176f); // Yellow
	glVertex2f(0.0f, -18.0f);
	glVertex2f(0.0f, -11.0f);
	glVertex2f(-4.0f, -11.0f);
	glVertex2f(-4.0f, -18.0f);

	glEnd();

	//building11 base 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	//glColor3f(1.0f,  1.0f,  1.0f); // Yellow
	glColor3f(0.38039f , 0.78039f , 0.87451f);
	glVertex2f(-4.0f, -18.0f);
	glVertex2f(-4.0f, -11.0f);
	glVertex2f(-8.0f, -11.0f);
	glVertex2f(-8.0f, -18.0f);

	glEnd();

	//building11 base 3

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f,  1.0f,  1.0f); // Yellow
	glVertex2f(-8.0f, -18.0f);
	glVertex2f(-8.0f, -12.0f);
	glVertex2f(-11.0f, -12.0f);
	glVertex2f(-11.0f, -18.0f);

	glEnd();

	//building11 border

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.41661f,  0.38833f,  0.66144f); // Yellow
	glVertex2f(0.0f, -12.0f);
	glVertex2f(0.0f, -11.0f);
	glVertex2f(-4.0f, -11.0f);
	glVertex2f(-4.0f, -12.0f);

	glEnd();

	//building11 base 1 window

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.41661f,  0.38833f,  0.66144f); // Yellow
	glVertex2f(0.0-0.6f, -13.0f);
	glVertex2f(0.0-0.6f, -12.0-0.3f);
	glVertex2f(-4.0+0.6f, -12.0-0.3f);
	glVertex2f(-4.0+0.6f, -13.0f);

	glEnd();



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.41661f,  0.38833f,  0.66144f); // Yellow
	glVertex2f(0.0-0.6f, -15.0f);
	glVertex2f(0.0-0.6f, -14.0-0.3f);
	glVertex2f(-4.0+0.6f, -14.0-0.3f);
	glVertex2f(-4.0+0.6f, -15.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.41661f,  0.38833f,  0.66144f); // Yellow
	glVertex2f(0.0-0.6f, -17.0f);
	glVertex2f(0.0-0.6f, -16.0-0.3f);
	glVertex2f(-4.0+0.6f, -16.0-0.3f);
	glVertex2f(-4.0+0.6f, -17.0f);

	glEnd();

	//building11 base 2 window

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-7.0f, -17.0f);
	glVertex2f(-7.0f, -12.0f);
	glVertex2f(-8.0+0.6f, -12.0f);
	glVertex2f(-8.0+0.6f, -17.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-5.0-0.6f, -17.0f);
	glVertex2f(-5.0-0.6f, -12.0f);
	glVertex2f(-6.0-0.3f, -12.0f);
	glVertex2f(-6.0-0.3f, -17.0f);



	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-4.0-0.4f, -17.0f);
	glVertex2f(-4.0-0.4f, -12.0f);
	glVertex2f(-4.0-0.8f, -12.0f);
	glVertex2f(-4.0-0.8f, -17.0f);

	glEnd();

	//building11 base 3 window

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-10.0+0.2f, -12.0-0.3f);
	glVertex2f(-10.0+0.2f, -14.0-0.3f);
	glVertex2f(-9.0f, -14.0-0.3f);
	glVertex2f(-9.0f, -12.0-0.3f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.69542f,  0.75067f,  0.76685f); // Yellow
	glVertex2f(-10.0+0.2f, -14.0f);
	glVertex2f(-10.0+0.2f, -18.0+0.3f);
	glVertex2f(-9.0f, -18.0+0.3f);
	glVertex2f(-9.0f, -14.0f);

	glEnd();




glFlush();

	////glFlush();;

}
void railroad1()
{
    //railroad1
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.58793f,  0.62145f,  0.86718f); // Yellow
	glVertex2f(-22.0f, -10.0f);
	glVertex2f(-22.0f, -6.0f);
	glVertex2f(-38.0f, -6.0f);
	glVertex2f(-38.0f, -10.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.34966f,  0.29294f,  0.57015f); // Yellow
	glVertex2f(-22.0f, -9.0f);
	glVertex2f(-22.0f, -8.0f);
	glVertex2f(-38.0f, -8.0f);
	glVertex2f(-38.0f, -9.0f);

	glEnd();
glFlush();

	////glFlush();;
}

void railroad2()
{
    //railroad2
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.58793f,  0.62145f,  0.86718f); // Yellow
	glVertex2f(-4.0f, -10.0f);
	glVertex2f(-4.0f, -6.0f);
	glVertex2f(-21.0f, -6.0f);
	glVertex2f(-21.0f, -10.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.34966f,  0.29294f,  0.57015f); // Yellow
	glVertex2f(-4.0f, -9.0f);
	glVertex2f(-4.0f, -8.0f);
	glVertex2f(-21.0f, -8.0f);
	glVertex2f(-21.0f, -9.0f);



	glEnd();
glFlush();

	////glFlush();;
}
void railroad3()
{
    //railroad3
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.58793f,  0.62145f,  0.86718f); // Yellow
	glVertex2f(19.0f, -10.0f);
	glVertex2f(38.0f, -10.0f);
	glVertex2f(38.0f, -6.0f);
	glVertex2f(19.0f, -6.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.34966f,  0.29294f,  0.57015f); // Yellow
	glVertex2f(19.0f, -9.0f);
	glVertex2f(38.0f, -9.0f);
	glVertex2f(38.0f, -8.0f);
	glVertex2f(19.0f, -8.0f);


	glEnd();
glFlush();

	////glFlush();;
}

void train()
{
    //train base green
    glPushMatrix();
    //glColor3d(0,1,0);
    glTranslatef(_moveA, 0.0f, 0.0f);

    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.01858f,  0.30132f,  0.29695f); // Yellow
	glColor3f(0.17134f,  0.53005f,  0.52170f);
	glVertex2f(-8.0f, -6.0f);
	glVertex2f(-8.0+0.5f, -5.0f);
	glVertex2f(-25.0f, -5.0f);
	glVertex2f(-25.0f, -6.0f);


	glEnd();

	//train base white

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.98862f,  0.98862f,  0.99258f); // Yellow
	glVertex2f(-8.0+0.5f, -5.0f);
	glVertex2f(-8.0+0.3f, -4.0f);
	glVertex2f(-25.0f, -4.0f);
	glVertex2f(-25.0f, -5.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.98862f,  0.98862f,  0.99258f); // Yellow
	glVertex2f(-8.0+0.3f, -4.0f);
	glVertex2f(-8.0-0.2f, -3.0f);
	glVertex2f(-25.0f, -3.0f);
	glVertex2f(-25.0f, -4.0f);


	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.98862f,  0.98862f,  0.99258f); // Yellow
	glVertex2f(-8.0-0.1f, -3.0f);
	glVertex2f(-8.0-0.8f, -2.0f);
	glVertex2f(-25.0f, -2.0f);
	glVertex2f(-25.0f, -3.0f);


	glEnd();

	//train window 1
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.01858f,  0.30132f,  0.29695f); // Yellow
	glVertex2f(-12.0f, -4.0+1.0f);
	glVertex2f(-25.0f, -4.0+1.0f);
	glVertex2f(-25.0f, -5.0+1.0f);
	glVertex2f(-12.0f, -5.0+1.0f);


	glEnd();

	//train window 2

	glBegin(GL_POLYGON);            // These vertices form a closed polygon

	glColor3f(1.01858f,  0.30132f,  0.29695f); // Yellow
	glVertex2f(-8.0-0.1f, -3.0);
	glVertex2f(-11.0f, -3.0);
	glVertex2f(-11.0f, -4.0);
	glVertex2f(-8.0+0.3f, -4.0);


	glEnd();

    glPopMatrix();
    glFlush();

    ////glFlush();;



}

//car
void wheel(){

  glPushMatrix();
    //glTranslatef(_move, 0.0f, 0.0f);
    //glTranslatef(0.45,0,0);
    //glRotatef(_angle1, 0.0f, 0.0f,1.0f);

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.06667 , 0.25490 , 0.36471);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
              glVertex2f(x-15,y-26 );
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
	glPopMatrix();

	//circle 2

    glPushMatrix();
    //glTranslatef(_move, 0.0f, 0.0f);
    //glTranslatef(0.1,0,0);
    //glRotatef(_angle1, 0.0f, 0.0f,1.0f);

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.06667 , 0.25490 , 0.36471);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-9,y-26);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
	glPopMatrix();
}
void mainroadSummer()
{
    //glClear(GL_COLOR_BUFFER_BIT);
    //main road
	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.00000f,  0.88235f,  0.69804f); // Yellow
	glVertex2f(38.0f, -18.0f);
	glVertex2f(-38.0f, -18.0f);
	glVertex2f(-38.0f, -24.0f);
	glVertex2f(38.0f, -24.0f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.54118f,  0.58431f,  0.60784f);
	glVertex2f(38.0f, -38.0f);
	glVertex2f(38.0f, -24.0f);
	glVertex2f(-38.0f, -24.0f);
	glVertex2f(-38.0f, -38.0f);


	glEnd();

	glFlush();

}

void car1()
{
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);

   //car base 1
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.36471f,  0.74902f,  0.89412f); // Yellow
	glVertex2f(-6.0f, -26.0f);
	glVertex2f(-6.0f, -24.0f);
	glVertex2f(-8.0f, -22.0f);
	glVertex2f(-19.0f, -22.0f);
	glVertex2f(-19.0f, -26.0f);


	glEnd();
	////glFlush();;

	 //car base 2
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.36471f,  0.74902f,  0.89412f); // Yellow

	glVertex2f(-8.0f, -22.0f);
	glVertex2f(-9.0f, -19.0f);
	glVertex2f(-19.0f, -19.0f);
	glVertex2f(-19.0f, -22.0f);

	glEnd();
	////glFlush();;

	 //car base 3
    glBegin(GL_POLYGON);// These vertices form a closed polygon
	glColor3f(0.07059f,  0.25490f,  0.36471f); // Yellow
	glVertex2f(-3.0f, -22.0f);
	glVertex2f(-4.0f, -19.0f);
	glVertex2f(-9.0f, -19.0f);
	glVertex2f(-8.0f, -22.0f);

	glEnd();
	////glFlush();;

	 //car base 4
    glBegin(GL_POLYGON);
    glColor3f(0.36471f,  0.74902f,  0.89412f);   // These vertices form a closed polygon
	glVertex2f(-1.0f, -24.0f);
	glVertex2f(-3.0f, -22.0f);
	glVertex2f(-8.0f, -22.0f);
	glVertex2f(-6.0f, -24.0f);

	glEnd();
	////glFlush();;

	//car base 5
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	 glColor3f(0.36471f,  0.74902f,  0.89412f);
	glVertex2f(-1.0f, -26.0f);
	glVertex2f(-1.0f, -24.0f);
	glVertex2f(-6.0f, -24.0f);
	glVertex2f(-6.0f, -26.0f);

	glEnd();
	////glFlush();;

	//car wheel


//circle 1

  wheel();
	glPopMatrix();

glFlush();



}

//car 2

void car2()
{glPushMatrix();
glTranslatef(_moveC2, 0.0f, 0.0f);
   //car base 1
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.27451f,  0.52941f,  0.74118f);
	glVertex2f(15.0f, -26.0-8.0f);
	glVertex2f(15.0f, -23.0-8.0f);
	glVertex2f(8.0f, -23.0-8.0f);
	glVertex2f(8.0f, -26.0-8.0f);



	glEnd();


	 //car base 2
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.27451f,  0.52941f,  0.74118f);
	glVertex2f(26.0f, -26.0-8.0f);
	glVertex2f(26.0f, -23.0-8.0f);
	glVertex2f(15.0f, -23.0-8.0f);
	glVertex2f(15.0f, -26.0-8.0f);

	glEnd();


	 //car base 3
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.36471f,  0.74902f,  0.89412f); // Yellow
	glVertex2f(23.0f, -23.0-8.0f);
	glVertex2f(22.0f, -20.0-8.0f);
	glVertex2f(17.0f, -20.0-8.0f);
	glVertex2f(16.0f, -23.0-8.0f);

	glEnd();


	 //car base 4
    glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.07059f,  0.25490f,  0.36471f); // Yellow
	glVertex2f(16.0f, -23.0-8.0f);
	glVertex2f(17.0f, -20.0-8.0f);
	glVertex2f(13.0f, -20.0-8.0f);
	glVertex2f(12.0f, -23.0-8.0f);

	glEnd();




	//car wheel

	//circle 1
	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.06667 , 0.25490 , 0.36471);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
              glVertex2f(x+17,y-34 );
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();



	//circle 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.06667 , 0.25490 , 0.36471);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+23,y-34);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
glPopMatrix();
	glFlush();



}



void tree()
{
   //tree1
   //tree 1 leaf 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.54118 , 0.71373 , 0.09020);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26,y-13);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//tree 1 leaf 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.54118 , 0.71373 , 0.09020);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26.0,y-9.1);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

   //tree 1 base
   glBegin(GL_POLYGON);            // These vertices form a closed polygon
   glColor3f(0.40f, 0.126f, 0.25f);
	glVertex2f(-26.0f, -18.0f);
	glVertex2f(-26.0f, -12.0f);
	glVertex2f(-27.0f, -12.0f);
	glVertex2f(-27.0f, -18.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.40f, 0.126f, 0.25f);
	glColor3f(0.40f, 0.126f, 0.25f);  // Yellow
	glVertex2f(-23.0f, -13.0f);
	glVertex2f(-24.0f, -13.0f);
	glVertex2f(-26.0f, -15.0f);
	glVertex2f(-26.0f, -16.0f);

	glEnd();



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.40f, 0.126f, 0.25f);  // Yellow
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -14.0f);
	glVertex2f(-29.0f, -12.0f);
	glVertex2f(-29.0f, -13.0f);

	glEnd();


	//tree 2

	//tree 2 leaf 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.54118 , 0.71373 , 0.09020);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.5,y-12);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//tree 2 leaf 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.54118 , 0.71373 , 0.09020);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.5,y-8);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//tree 2 base

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.40f, 0.126f, 0.25f);  // Yellow
	glVertex2f(7.0f, -18.0f);
	glVertex2f(7.0f, -9.0f);
	glVertex2f(6.0f, -9.0f);
	glVertex2f(6.0f, -18.0f);

	glEnd();



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.40f, 0.126f, 0.25f); // Yellow
	glVertex2f(9.0f, -12.0f);
	glVertex2f(9.0f, -11.0f);
	glVertex2f(7.0f, -14.0f);
	glVertex2f(7.0f, -15.0f);

	glEnd();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.40f, 0.126f, 0.25f);  // Yellow
	glVertex2f(6.0f, -13.0f);
	glVertex2f(6.0f, -12.0f);
	glVertex2f(4.0f, -10.0f);
	glVertex2f(4.0f, -11.0f);

	glEnd();
	//tree 3

//tree 3 leaf 1

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0; i<200; i++)
{
    glColor3f(0.54118, 0.71373, 0.09020);
    float pi = 3.1416;
    float A = (i * 2 * pi) / 200;
    float r = 3.5;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x - 6.5, y - 12); // Adjust the x-coordinate to position on the right side
}

glEnd();

//tree 3 leaf 2

glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
for(int i=0; i<200; i++)
{
    glColor3f(0.54118, 0.71373, 0.09020);
    float pi = 3.1416;
    float A = (i * 2 * pi) / 200;
    float r = 3.5;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x - 6.5, y - 8); // Adjust the x-coordinate to position on the right side
}

glEnd();

//tree 3 base

    glBegin(GL_POLYGON);
    glColor3f(0.40f, 0.126f, 0.25f);
    glVertex2f(-6.0f, -18.0f);
    glVertex2f(-6.0f, -9.0f);
    glVertex2f(-7.0f, -9.0f);
    glVertex2f(-7.0f, -18.0f);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.40f, 0.126f, 0.25f);
    glVertex2f(-4.0f, -12.0f);
    glVertex2f(-4.0f, -11.0f);
    glVertex2f(-6.0f, -14.0f);
    glVertex2f(-6.0f, -15.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.40f, 0.126f, 0.25f);
    glVertex2f(-7.0f, -13.0f);
    glVertex2f(-7.0f, -12.0f);
    glVertex2f(-9.0f, -10.0f);
    glVertex2f(-9.0f, -11.0f);

    glEnd();

    // Tree 4

// Tree leaf 1
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.54118, 0.71373, 0.09020);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 3.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25.5, y - 12); // Change the sign of x-coordinate for the right side
    }
    glEnd();

    // Tree leaf 2
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.54118, 0.71373, 0.09020);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 3.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25.5, y - 8); // Change the sign of x-coordinate for the right side
    }
    glEnd();
    // Tree base
    glBegin(GL_POLYGON);
    glColor3f(0.40f, 0.126f, 0.25f);
    glVertex2f(26.0f, -18.0f);
    glVertex2f(26.0f, -9.0f);
    glVertex2f(25.0f, -9.0f);
    glVertex2f(25.0f, -18.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.40f, 0.126f, 0.25f);
    glVertex2f(28.0f, -12.0f);
    glVertex2f(28.0f, -11.0f);
    glVertex2f(26.0f, -14.0f);
    glVertex2f(26.0f, -15.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.40f, 0.126f, 0.25f);
    glVertex2f(25.0f, -13.0f);
    glVertex2f(25.0f, -12.0f);
    glVertex2f(23.0f, -10.0f);
    glVertex2f(23.0f, -11.0f);
    glEnd();



    glFlush();



}
void sun()
{
    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(0.0f, _moveS, 0.0f);

    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.52549 , 0.30588);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y+30);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
glPopMatrix();
	//glFlush();;
}

void cloud1()
{
    //cloud 1
glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-22,y+11);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	//glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-25,y+11);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	//glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-23,y+12);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

glPopMatrix();
	//glFlush();;
}

	void cloud2()
	{glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
	    //cloud2 circle 1
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-4,y+15);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//cloud2 circle 2
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-1,y+15);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//cloud2 circle 3

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-3,y+17);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
glPopMatrix();
	glFlush();

}

void cloud3()
{
    //cloud3 circle 1
glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+22,y+11);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	//glEnd();

	//cloud3 circle2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+11);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	//glEnd();

	//cloud3 circle 3

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+23,y+13);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

glPopMatrix();
	glFlush();

}

void cloud4()
	{glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
	    //cloud4 circle 1
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+22);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//cloud4 circle 2
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+12,y+22);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//cloud4 circle 3

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.8f, 0.8f, 0.8f);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+14,y+24);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
glPopMatrix();
	////glFlush();;
}

void cloud1Summer()
{
    //cloud 1
glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-22,y+11);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	//glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-25,y+11);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	//glEnd();

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-23,y+12);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

glPopMatrix();
	//glFlush();;
}
void cloud2Summer()
	{
	    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
	    //cloud2 circle 1
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-4,y+15);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//cloud2 circle 2
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-1,y+15);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//cloud2 circle 3

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-3,y+17);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
glPopMatrix();
	glFlush();

}
void cloud3Summer()
{
    //cloud3 circle 1
glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+22,y+11);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	//glEnd();

	//cloud3 circle2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+11);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	//glEnd();

	//cloud3 circle 3

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+23,y+13);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

glPopMatrix();
	glFlush();

}

void cloud4Summer()
	{
	    glPushMatrix();
    //glColor3d(1,0,0);
    glTranslatef(_moveB, 0.0f, 0.0f);
	    //cloud4 circle 1
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+22);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//cloud4 circle 2
	  glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+12,y+22);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//cloud4 circle 3

	 glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.95294 , 0.94902,  0.97647);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+14,y+24);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
glPopMatrix();
	////glFlush();;
}


void Rain() {
    if (rainday) {
        _rain += 0.01f;
glLineWidth(1);
        glBegin(GL_LINES);
        for (int i = 0; i < 1000; i++) {
            int x = rand() % 62 - 32;
            int y = rand() % 76 - 38;
            int xEnd = x + 1;
            int yEnd = y + 1;
            glColor3f(1.0, 1.0, 1.0);
            glVertex2d(x, y);
            glVertex2d(xEnd, yEnd);
        }
        glEnd();
    }
}
void updateRain(int value) {
    glutTimerFunc(5, updateRain, 0);
    glutPostRedisplay();
}

void mainroadWinter()
{
    	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.95686f,  0.90588f,  0.90196f); // Yellow
	glVertex2f(38.0f, -18.0f);
	glVertex2f(-38.0f, -18.0f);
	glVertex2f(-38.0f, -24.0f);
	glVertex2f(38.0f, -24.0f);

	glEnd();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(38.0f, -38.0f);
	glVertex2f(38.0f, -24.0f);
	glVertex2f(-38.0f, -24.0f);
	glVertex2f(-38.0f, -38.0f);


	glEnd();

	glFlush();

}
void treeWinter()
{
   //tree1

    // hand 1
    	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.54510f,  0.37255f,  0.25098f); // Yellow
	glVertex2f(-22.0f, -13.0f);
	glVertex2f(-24.0f, -13.0f);
	glVertex2f(-26.0f, -15.0f);
	glVertex2f(-26.0f, -16.0f);

	glEnd();



	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(0.54510f,  0.37255f,  0.25098f); // Yellow
	glVertex2f(-27.0f, -15.0f);
	glVertex2f(-27.0f, -14.0f);
	glVertex2f(-31.0f, -12.0f);
	glVertex2f(-29.0f, -13.0f);

	glEnd();
	//tree 2

   //tree 1 leaf 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(1.0, 1.0, 1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26,y-16);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//tree 1 leaf 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(1.0, 1.0, 1.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26.0,y-11.1);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();
        // Tree 2

    // Tree leaf 1
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.54118, 0.71373, 0.09020);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 3.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25.5, y - 12); // Change the sign of x-coordinate for the right side
    }
    glEnd();

    // Tree leaf 2
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        glColor3f(0.54118, 0.71373, 0.09020);
        float pi = 3.1416;
        float A = (i * 2 * pi) / 200;
        float r = 3.5;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x + 25.5, y - 8); // Change the sign of x-coordinate for the right side
    }
    glEnd();
    // Decorations - Yellow Ball
glBegin(GL_POLYGON);
glColor3f(1.0f, 1.0f, 0.0f); // Yellow
for (int i = 0; i < 360; i++)
{
    float pi = 3.1416;
    float A = (i * pi) / 180;
    float r = 0.5;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x + 25.5, y - 8.5);
}
glEnd();

// Decorations - Blue Ball
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f); // Blue
for (int i = 0; i < 360; i++)
{
    float pi = 3.1416;
    float A = (i * pi) / 180;
    float r = 0.5;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x + 25.5, y -6.5);
}
glEnd();
// Decorations - RED Ball
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 0.0f); // RED
for (int i = 0; i < 360; i++)
{
    float pi = 3.1416;
    float A = (i * pi) / 180;
    float r = 0.5;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x + 23.5, y -5.5);
}
glEnd();
// Decorations - BLUE Ball
glBegin(GL_POLYGON);
glColor3f(0.0f, 0.0f, 1.0f); // Blue
for (int i = 0; i < 360; i++)
{
    float pi = 3.1416;
    float A = (i * pi) / 180;
    float r = 0.5;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x + 26.5, y -4.5);
}
glEnd();
// Decorations - YELLOW Ball
glBegin(GL_POLYGON);
glColor3f(0.0f, 1.0f, 1.0f); // YLW
for (int i = 0; i < 360; i++)
{
    float pi = 3.1416;
    float A = (i * pi) / 180;
    float r = 0.5;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x + 26.5, y -12.5);
}
glEnd();
// Decorations - BLUE Ball
glBegin(GL_POLYGON);
glColor3f(1.0f, 0.0f, 1.0f); // Blue
for (int i = 0; i < 360; i++)
{
    float pi = 3.1416;
    float A = (i * pi) / 180;
    float r = 0.5;
    float x = r * cos(A);
    float y = r * sin(A);
    glVertex2f(x + 24.5, y -14.5);
}
glEnd();



    // Tree base
    glBegin(GL_POLYGON);
    glColor3f(1.54510f,  1.37255f,  1.25098f); // Yellow
    glVertex2f(26.0f, -18.0f);
    glVertex2f(26.0f, -9.0f);
    glVertex2f(25.0f, -9.0f);
    glVertex2f(25.0f, -18.0f);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(1.54510f,  1.37255f,  1.25098f); // Yellow
    glVertex2f(28.0f, -12.0f);
    glVertex2f(28.0f, -11.0f);
    glVertex2f(26.0f, -14.0f);
    glVertex2f(26.0f, -15.0f);
    glEnd();

    glBegin(GL_POLYGON);
     glColor3f(1.54510f,  1.37255f,  1.25098f); // Yellow
    glVertex2f(25.0f, -13.0f);
    glVertex2f(25.0f, -12.0f);
    glVertex2f(23.0f, -10.0f);
    glVertex2f(23.0f, -11.0f);
    glEnd();


	// eye 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.0, 0.0, 0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-27,y-10.5);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	// eye 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.0, 0.0, 0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-25,y-10.5);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//nose circle 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.94902,  0.38039, 0.05490);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26,y-12.0);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	// button 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.0,  0.0, 0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26,y-15.0);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	// button 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.0,  0.0, 0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26,y-16.0);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

     // button 3

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
           glColor3f(0.0,  0.0, 0.0);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.3;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26,y-17.0);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();



	//tree 2 leaf 1

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f( 0.54118 , 0.71373 , 0.09020);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.5,y-12);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//tree 2 leaf 2

	glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f( 0.54118 , 0.71373 , 0.09020);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=3.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.5,y-8);
        }

    //glVertex2f(0.3f,0.4f);
    //glVertex2f(0.1f,0.4f);

	glEnd();

	//tree 2 base

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(7.0f, -18.0f);
	glVertex2f(7.0f, -9.0f);
	glVertex2f(6.0f, -9.0f);
	glVertex2f(6.0f, -18.0f);

	glEnd();
	glFlush();


	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(9.0f, -12.0f);
	glVertex2f(9.0f, -11.0f);
	glVertex2f(7.0f, -14.0f);
	glVertex2f(7.0f, -15.0f);

	glEnd();
	glFlush();

	glBegin(GL_POLYGON);            // These vertices form a closed polygon
	glColor3f(1.0f, 1.0f, 1.0f); // Yellow
	glVertex2f(6.0f, -13.0f);
	glVertex2f(6.0f, -12.0f);
	glVertex2f(4.0f, -10.0f);
	glVertex2f(4.0f, -11.0f);

	glEnd();

	glFlush();

}
void snow()
{
    //cloud 1
     glPushMatrix();
    //glColor3d(1,0,0);

    glTranslatef(0.0f, _moveSS, 0.0f);


    glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+3,y+9);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y+19);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+2,y+29);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26,y+34);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-20,y+31);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-20,y+18);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-16,y+14);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-14,y+14);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-32,y+18);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-28,y+15);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-28,y+22);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.9;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-26,y+30);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-20,y+13);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+20,y+18);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=0.7;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+22,y+16);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+22,y+26);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+29);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+16,y+20);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+12,y+26);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+31,y+28);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y+24);
        }

     glEnd();

     glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y+12);
        }

     glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+20,y+55);
        }

     glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y+62);
        }

     glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-29,y+42);
        }

     glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+30,y+45);
        }

     glEnd();

        glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-19,y+50);
        }

     glEnd();

          glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-19,y+70);
        }

     glEnd();

         glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-18,y+60);
        }

     glEnd();

          glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+19,y+55);
        }

     glEnd();

          glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x-5,y+50);
        }

     glEnd();

          glBegin(GL_POLYGON);// Draw a Red 1x1 Square centered at origin
	for(int i=0;i<200;i++)
        {
            glColor3f(0.99216 , 1.00000 , 0.99608);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.0;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+7,y+50);
        }

     glEnd();

     glPopMatrix();


	//glFlush();
}

void Summer(){
skySummer();
sun();
building4shadow();
building3shadow();
building1shadow();
building12shadow();

building1();
building2();
mainroadSummer();
building3();
building4();

building7();
building8();
building12();
building9();


train();
building2();

building3();
building4();
building7();
//building10();
//train();
//building10();
building11();

//train();
railroad1();
railroad2();
railroad3();
building9();




//train();
car1();
car2();
tree();

//sun();
cloud1Summer();
cloud2Summer();
cloud3Summer();
cloud4Summer();

glutSwapBuffers();


}

void Winter(){
skyWinter();
moon();
building4shadow();
building3shadow();
building1shadow();
building12shadow();

building1();
building2();
mainroadWinter();
building3Winter();
building4();
building7();
building8();
building12();


train();
building2();
building9();
building3();
building4();
building7();


//train();
building10Winter();
building11Winter();
//train();
railroad1();
railroad2();
railroad3();
//railroad4();
building9();
//sky();
//train();
car1();
car2();
treeWinter();
snow();



glutSwapBuffers();


}


void RainSaida(){
 //sky();

building1Rain();
//building2();


mainroad();

building3();
//building4();




//building7();
building8();
building12();


train();
building2();
building9();
building3();
building4();
building7();

//train();
building10();
building11();
//train();
railroad1();
railroad2();
railroad3();
building9();
//sky();
//train();
//car1();
//car2();
tree();
//sun(); // for a rainy day
cloud1();
cloud2();
cloud3();
cloud4();

car1();
car2();
Rain();

glutSwapBuffers();
}

void Spring() {
glClear(GL_COLOR_BUFFER_BIT);
skySpring();
sunSpring();
building4shadow();
building3shadow();
building1shadow();
building12shadow();


building1();

building2();
mainroadSpring();

building3();
building4();
building7();
building8();
//building9();

 building12();

train();
building2();
building9();
building3();
building4();
building7();
//train();
building10();
building11();
//train();
railroad1();
railroad2();
railroad3();
building9();

//train();
car1();
car2();
treeSpring();
//sun();
cloud1Summer();
cloud2Summer();
cloud3Summer();
cloud4Summer();
glutSwapBuffers();
}
void update1(int value) {

    _moveA += speed;
    if(_moveA > 38)
    {
        _moveA = -38;
    }
     //Notify GLUT that the display has changed

//_moveA += 0.11;

    glutTimerFunc(20, update1, 0); //Notify GLUT to call update again in 20 milliseconds
    glutPostRedisplay();
}

void updateC(int value) {
_move += .07;
if(_move > 48)
{
_move = -32;
}
glutPostRedisplay();
glutTimerFunc(20, updateC, 0);
}

void updateC2(int value) {
_moveC2 -= .05;
if(_moveC2 < -48)
{
_moveC2 = +30;
}

glutPostRedisplay();
glutTimerFunc(20, updateC2, 0);
}
void updateT(int value) {
_moveT -= 0.60;
if(_moveT < -18)
{
_moveT = +38;
}
glutPostRedisplay();
glutTimerFunc(20, updateT, 0);
}
void updateA(int value) {

    _angle1+=2.0f;
    if(_angle1 > 360.0)
    {
        _angle1-=360;
    }
    glutPostRedisplay();

    glutTimerFunc(20, updateA, 0);
}

void update2(int value) {

    _moveB += speed1;
    if(_moveB > 35)
    {
        _moveB = -38;
    }
     //Notify GLUT that the display has changed

//_moveA += 0.11;

    glutTimerFunc(20, update2, 0); //Notify GLUT to call update again in 25 milliseconds
    glutPostRedisplay();
}




//snow move
void updatesnow(int value) {

    _moveSS -= speedS;
if(_moveSS <- 38)
{
_moveSS = +38;
}

glutPostRedisplay();

glutTimerFunc(20, updatesnow, 0);
}


//sum move
void updatemoon(int value) {

    _moveS2 += speedS2;
if(_moveS2 > 18)
{
_moveS2 = -10;
}

glutPostRedisplay();
glutTimerFunc(20, updatemoon, 0);
}
//
//sum move
void updatesun(int value) {

    _moveS += speedSu;
if(_moveS > 18)
{
_moveS = -10;
}

glutPostRedisplay();
glutTimerFunc(20, updatesun, 0);
}


void handleMouse(int button, int state, int x, int y) {

if (button == GLUT_LEFT_BUTTON)
	{
	    speed += 0.05f;
    }


else if (button == GLUT_RIGHT_BUTTON)
	{
	    speed -= 0.05f;
	}
glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y)
{
	switch (key)
	{
case 's'://stops
    speed = 0.0f;
    break;
case 'r'://runs
    speed = 0.02f;
    break;
case 'd':
        rainday = true;
        Rain();
        glutSwapBuffers();


    break;

case 'f':
        rainday = false;
        //glutSwapBuffers();

        break;
  case 'p'://moon stops
    speedS2 = 0.0f;
    break;

case 'l'://moon runs
    speedS2 = 0.03f;
    break;

case 'o'://snow stop
    speedS = 0.0f;
    break;

case 'x'://snow run
    speedS = 0.03f;
    break;

case 'm'://sun stops
    speedSu = 0.0f;
    break;
case 'n'://sun runs
    speedSu = 0.03f;
    break;
case 'c'://cloud stops
    speed1 = 0.0f;
    break;
case 't'://cloud starts
    speed1 = 0.03f;
    break;

case 'S'://summer
    glutDisplayFunc(Summer);
    break;

case 'W'://winter
    glutDisplayFunc(Winter);
    break;
case 'R'://Rainy
    glutDisplayFunc(RainSaida);
    break;
case 'B'://Spring
    glutDisplayFunc(Spring);
    break;


	default:
	break;
glutPostRedisplay();
	}
	}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInit(&argc, argv);
	glutInitWindowSize(780, 600);                // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test");
	//gluOrtho2D(-0.1,0.7,-0.1,0.3);
	//gluOrtho2D(2,2,-2,0.2);
	gluOrtho2D(-32,30,-38,38);
	//gluOrtho2D(0, 620, 0, 520);   // Create a window with the given title
	//glutInitWindowSize(320, 320);
	glutInitWindowPosition(50, 50);// Set the window's initial width & height
	glutDisplayFunc(Summer);
	glutTimerFunc(20, update1, 0);
	glutTimerFunc(20, update2, 0);
	glutTimerFunc(20, updateC, 0);
	glutTimerFunc(20, updateC2, 0);
	glutTimerFunc(20, updateT, 0);
	glutTimerFunc(20, updateA, 0);
	glutTimerFunc(5, updateRain, 0);
    glutTimerFunc(20, updatesnow, 0);
    glutTimerFunc(20, updatesun, 0);
    glutTimerFunc(20, updatemoon, 0);
	glutKeyboardFunc(handleKeypress);
    glutMouseFunc(handleMouse);
    printf("Name:SUMIYA HUR TASNIM    Id:21-44851-2\n");
    

//	initGL(); // Register display callback handler for window re-paint
	glutMainLoop();


	return 0;
}

