#include<windows.h>
#include <GL/glut.h>
#include <math.h>

void initiaze(void)
{
	glClearColor(1.0, 1.0, 1.0, 1.0);	// Set display window colour

	glMatrixMode(GL_PROJECTION);		// Set projection parameters
	gluOrtho2D(-250.0, 250.0, -45.0, 110.0);
}

void Mamun(void)
{
	glClear(GL_COLOR_BUFFER_BIT);	// Clear display window
	float theta;
    int i;

    // background bottom
    glColor3f(0.0, 0.85, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(-250, -10);
		glVertex2i(250, -10);
		glVertex2i(250, -45);
		glVertex2i(-250, -45);
	glEnd();
    // background middle
	glColor3f(0.55, 0.85, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(-250, -10);
		glVertex2i(250, -10);
		glVertex2i(250, 20);
		glVertex2i(-250, 20);
	glEnd();
    // background top
	glColor3f(0.0, 0.85, 1.0);

	glBegin(GL_POLYGON);
		glVertex2i(250, 20);
		glVertex2i(-250, 20);
		glVertex2i(-250, 110);
		glVertex2i(250, 110);
	glEnd();

    // house
	glColor3f(1.0, 0.7, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(-95, -25);
		glVertex2i(95, -25);
		glVertex2i(95, 15);
		glVertex2i(-95, 15);
	glEnd();

	// house roof
	glColor3f(1.0, 0.85, 0.5);

	glBegin(GL_POLYGON);
		glVertex2i(100, 15);
		glVertex2i(-100, 15);
		glVertex2i(-100, 35);
		glVertex2i(100, 35);
	glEnd();

	// house door
	glColor3f(0.0, 0.0, 0.8);

	glBegin(GL_POLYGON);
		glVertex2i(-25, -25);
		glVertex2i(25, -25);
		glVertex2i(25, 5);
		glVertex2i(-25, 5);
	glEnd();

	// house window left
	glColor3f(0.5, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(-80, -6);
		glVertex2i(-50, -6);
		glVertex2i(-50, 12);
		glVertex2i(-80, 12);
	glEnd();
    // house window left part 2
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);
		glVertex2i(-75, -3);
		glVertex2i(-55, -3);
		glVertex2i(-55, 9);
		glVertex2i(-75, 9);
	glEnd();

	// house window left part 3 stripe left
	glColor3f(0.5, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(-70, -6);
		glVertex2i(-68, -6);
		glVertex2i(-68, 12);
		glVertex2i(-70, 12);
	glEnd();

	// house window left part 3 stripe right
	glColor3f(0.5, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(-62, -6);
		glVertex2i(-60, -6);
		glVertex2i(-60, 12);
		glVertex2i(-62, 12);
	glEnd();
	// house window right
	glColor3f(0.5, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(80, -6);
		glVertex2i(50, -6);
		glVertex2i(50, 12);
		glVertex2i(80, 12);
	glEnd();
	// house window right part 2
	glColor3f(1.0, 1.0, 1.0);

	glBegin(GL_POLYGON);
		glVertex2i(75, -3);
		glVertex2i(55, -3);
		glVertex2i(55, 9);
		glVertex2i(75, 9);
	glEnd();
    // house window right part 3 stripe left
	glColor3f(0.5, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(70, -6);
		glVertex2i(68, -6);
		glVertex2i(68, 12);
		glVertex2i(70, 12);
	glEnd();

	// house window right part 3 stripe right
	glColor3f(0.5, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(62, -6);
		glVertex2i(60, -6);
		glVertex2i(60, 12);
		glVertex2i(62, 12);
	glEnd();

	// tree backbone
    glColor3f(0.9, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(-190, -30);
		glVertex2i(-170, -30);
		glVertex2i(-170, 10);
		glVertex2i(-190, 10);
	glEnd();

	//tree circle
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-170+15*cos(theta),12+15*sin(theta));
	}
	glEnd();
	//tree circle 2
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-150+15*cos(theta),12+15*sin(theta));
	}
	glEnd();
	//tree circle 3
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-190+15*cos(theta),12+15*sin(theta));
	}
	glEnd();
	//tree circle 4
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-210+15*cos(theta),12+15*sin(theta));
	}
	glEnd();
    //tree circle 5
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-170+15*cos(theta),18+15*sin(theta));
	}
	glEnd();
	//tree circle 6
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-190+15*cos(theta),18+15*sin(theta));
	}
	glEnd();
	//tree circle 7
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-190+15*cos(theta),25+15*sin(theta));
	}
	glEnd();
	//tree circle 8
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-180+15*cos(theta),25+15*sin(theta));
	}
	glEnd();
	//tree circle 9
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(-170+15*cos(theta),25+15*sin(theta));
	}
	glEnd();
	// tree 2 backbone
    glColor3f(0.9, 0.0, 0.0);

	glBegin(GL_POLYGON);
		glVertex2i(190, -30);
		glVertex2i(170, -30);
		glVertex2i(170, 10);
		glVertex2i(190, 10);
	glEnd();
	//tree 2 circle
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(170+15*cos(theta),12+15*sin(theta));
	}
	glEnd();
	//tree 2 circle 2
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(150+15*cos(theta),12+15*sin(theta));
	}
	glEnd();
	//tree 2 circle 3
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(190+15*cos(theta),12+15*sin(theta));
	}
	glEnd();
	//tree 2 circle 4
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(210+15*cos(theta),12+15*sin(theta));
	}
	glEnd();
    //tree 2 circle 5
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(170+15*cos(theta),18+15*sin(theta));
	}
	glEnd();
	//tree 2 circle 6
	glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(190+15*cos(theta),18+15*sin(theta));
	}
	glEnd();
	//tree 2 circle 7
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(190+15*cos(theta),25+15*sin(theta));
	}
	glEnd();
	//tree 2 circle 8
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(180+15*cos(theta),25+15*sin(theta));
	}
	glEnd();
	//tree 2 circle 9
    glColor3f(0.0, 0.5, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(170+15*cos(theta),25+15*sin(theta));
	}
	glEnd();
	//sun
	glColor3f(1.0, 1.0, 0.0);
	glBegin(GL_POLYGON);

	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(90+15*cos(theta),90+8*sin(theta));
	}
	glEnd();
	//cloud mid
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(30+15*cos(theta),70+10*sin(theta));
	}
	glEnd();
	//cloud mid 2
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(45+15*cos(theta),69+10*sin(theta));
	}
	glEnd();
	//cloud left
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(22+15*cos(theta),70+5*sin(theta));
	}
	glEnd();
	//cloud right
	glColor3f(1.0, 1.0, 1.0);
	glBegin(GL_POLYGON);
	for(i=0;i<360;i++)
	{
	  theta=i*3.142/180;
	  glVertex2f(55+15*cos(theta),70+5*sin(theta));
	}
	glEnd();

	glFlush();
}
int main(int argc, char* argv[])
{
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);

	glutInitWindowPosition(200, 100);
	glutInitWindowSize(1200, 600);
	glutCreateWindow("171-15-8787");

	initiaze();
	glutDisplayFunc(Mamun);
	glutMainLoop();

	return 0;
}
