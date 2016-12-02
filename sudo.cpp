#include<iostream>
#include"GL/freeglut.h"
#include"GL/gl.h"
#include<GL/glut.h>
#include<stdio.h>
#include<math.h>
#define FREEGLUT_STATIC
using namespace std;

GLfloat z=0.0;
GLfloat z1=0.001;

GLfloat c=0.01;
GLfloat c1=0.00005;


GLfloat t2=0.01;
GLfloat f2=0.00005;


GLfloat t=0.0005;

GLfloat t3=0.01;
GLfloat f3=-0.00005;
GLfloat t4=0.01;
GLfloat f4=-0.00005;



GLfloat t1=0.01;
GLfloat f1=0.00005;
int d1=1;
int k1;
int p=0;


int l,a,b;

float k,m,x,y;



GLfloat ag=0.01,bg=0.01;
GLfloat ag1=0.005,bg1=0.003;

GLfloat n=0.01;
GLfloat r=0.02;
GLfloat n1=0.01;
GLfloat r1=0.0005;
void polygon(int a, int b, int c , int d);
    void DrawCube();
    int WindowHeight = 1000;
    int WindowWidth = 1000;

void printtext(int x, int y, string String)
    {
    //(x,y) is from the bottom left of the window
        glMatrixMode(GL_PROJECTION);
        glPushMatrix();
        glLoadIdentity();
        glOrtho(0, WindowWidth, 0, WindowHeight, -1.0f, 1.0f);
        glMatrixMode(GL_MODELVIEW);
        glPushMatrix();
        glLoadIdentity();
        glPushAttrib(GL_DEPTH_TEST);
        glDisable(GL_DEPTH_TEST);
        glRasterPos2i(x,y);
        for (int i=0; i<String.size(); i++)
        {
            glutBitmapCharacter(GLUT_BITMAP_9_BY_15, String[i]);
        }
        glPopAttrib();
        glMatrixMode(GL_PROJECTION);
        glPopMatrix();
        glMatrixMode(GL_MODELVIEW);
        glPopMatrix();
    }


///////////////////////////////////////////////////////////////////////////////////////////
int v=1;
int v1=1;
void renderFunction()
{
 

 ////////////////////////// life cycle

if(v==1)
 {int v1=z*1;
  if(v1<2)/////timinh
 {

   glClearColor(0.0, 0., 0.0, 0.5); //color the background
    glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudogflColor3f(1.0, 0.96, 0.56);
    
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);



//////////////////////
       glEnable(GL_DEPTH_TEST);
        
        char string[64];
        sprintf(string, "NIT HAMIRPUR BOYS(3rd Sem)");
        printtext(550,480,string);
        
        sprintf(string, "MAYANK");
        printtext(550,440,string);
        sprintf(string, "RISHAB");
        printtext(550,400,string);
        sprintf(string, "SHUBHAM JAIN");
        printtext(550,360,string);
        sprintf(string, "PRANAV");
        printtext(550,320,string);
        sprintf(string, "MILINDRA");
        printtext(550,280,string);
        sprintf(string, "SHUBHAM MANCHAL");
        printtext(550,240,string);


        sprintf(string, "L I F E     C Y C L E");
        printtext(350,640,string);
        glutSwapBuffers();
/////////////////////

//////////////////////
   
/////////////////////
}
else
{
  v=2;
z=0.0;
}

z+=z1;
}


  ////////////////////////////////////


  //////////////////// //             H O S P I T A L      ////////////////////////////////////////
 if(v==2)
 {int v1=z*1;
  if(v1<2)/////timinh
 {int i,n1;
  float jk=0.3,cm=0.2;
  glClearColor(0.74, 0.93, 1.0, 0.5); //color the background
    glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudogflColor3f(1.0, 0.96, 0.56);
    
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);




    glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON);
   
     glVertex3f(-1.0,-0.9,0.0);//Ground
     glVertex3f(1.0,-0.9,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();
glColor3f(0.61, 0.5, 0.2);
glBegin(GL_POLYGON);
     glVertex3f(-0.5,-0.9,0.0);//main buliding
          glVertex3f(-0.55,0.5,0.0);
               glVertex3f(0.7,0.5,0.0);    
      glVertex3f(0.65,-0.9,0.0);
       glEnd();
       glColor3f(0.61, 0.5, 0.2);
glBegin(GL_POLYGON);
     glVertex3f(-0.1,0.5,0.0);//+ buliding
          glVertex3f(-0.1,0.8,0.0);
               glVertex3f(0.3,0.8,0.0);    
      glVertex3f(0.3,0.5,0.0);
       glEnd();
       glColor3f(0.3, 0.6, 0.8);
glBegin(GL_POLYGON);
     glVertex3f(-0.48,0.45,0.0);//window 1
          glVertex3f(-0.28,0.45,0.0);
               glVertex3f(-0.28,0.3,0.0);    
      glVertex3f(-0.48,0.3,0.0);
       glEnd();
       
glBegin(GL_POLYGON);
     glVertex3f(-0.48+jk,0.45,0.0);//window 2
          glVertex3f(-0.28+jk,0.45,0.0);
               glVertex3f(-0.28+jk,0.3,0.0);    
      glVertex3f(-0.48+jk,0.3,0.0);
       glEnd();

glBegin(GL_POLYGON);
     glVertex3f(-0.48+2*jk,0.45,0.0);//window 3
          glVertex3f(-0.28+2*jk,0.45,0.0);
               glVertex3f(-0.28+2*jk,0.3,0.0);    
      glVertex3f(-0.48+2*jk,0.3,0.0);
       glEnd();
glBegin(GL_POLYGON);
     glVertex3f(-0.48+3*jk,0.45,0.0);//window 4
          glVertex3f(-0.28+3*jk,0.45,0.0);
               glVertex3f(-0.28+3*jk,0.3,0.0);    
      glVertex3f(-0.48+3*jk,0.3,0.0);
       glEnd();
       glBegin(GL_POLYGON);
        glVertex3f(-0.48,0.45-cm,0.0);//window 5
          glVertex3f(-0.28,0.45-cm,0.0);
               glVertex3f(-0.28,0.3-cm,0.0);    
      glVertex3f(-0.48,0.3-cm,0.0);
       glEnd();
       
glBegin(GL_POLYGON);
     glVertex3f(-0.48+jk,0.45-cm,0.0);//window 6
          glVertex3f(-0.28+jk,0.45-cm,0.0);
               glVertex3f(-0.28+jk,0.3-cm,0.0);    
      glVertex3f(-0.48+jk,0.3-cm,0.0);
       glEnd();

glBegin(GL_POLYGON);
     glVertex3f(-0.48+2*jk,0.45-cm,0.0);//window 7
          glVertex3f(-0.28+2*jk,0.45-cm,0.0);
               glVertex3f(-0.28+2*jk,0.3-cm,0.0);    
      glVertex3f(-0.48+2*jk,0.3-cm,0.0);
       glEnd();
glBegin(GL_POLYGON);
     glVertex3f(-0.48+3*jk,0.45-cm,0.0);//window 8
          glVertex3f(-0.28+3*jk,0.45-cm,0.0);
               glVertex3f(-0.28+3*jk,0.3-cm,0.0);    
      glVertex3f(-0.48+3*jk,0.3-cm,0.0);
       glEnd();
       glBegin(GL_POLYGON);
        glVertex3f(-0.48,0.45-2*cm,0.0);//window 9
          glVertex3f(-0.28,0.45-2*cm,0.0);
               glVertex3f(-0.28,0.3-2*cm,0.0);    
      glVertex3f(-0.48,0.3-2*cm,0.0);
       glEnd();
       
glBegin(GL_POLYGON);
     glVertex3f(-0.48+jk,0.45-2*cm,0.0);//window 10
          glVertex3f(-0.28+jk,0.45-2*cm,0.0);
               glVertex3f(-0.28+jk,0.3-2*cm,0.0);    
      glVertex3f(-0.48+jk,0.3-2*cm,0.0);
       glEnd();

glBegin(GL_POLYGON);
     glVertex3f(-0.48+2*jk,0.45-2*cm,0.0);//window 11
          glVertex3f(-0.28+2*jk,0.45-2*cm,0.0);
               glVertex3f(-0.28+2*jk,0.3-2*cm,0.0);    
      glVertex3f(-0.48+2*jk,0.3-2*cm,0.0);
       glEnd();
glBegin(GL_POLYGON);
     glVertex3f(-0.48+3*jk,0.45-2*cm,0.0);//window 12
          glVertex3f(-0.28+3*jk,0.45-2*cm,0.0);
               glVertex3f(-0.28+3*jk,0.3-2*cm,0.0);    
      glVertex3f(-0.48+3*jk,0.3-2*cm,0.0);
       glEnd();
       glBegin(GL_POLYGON);
        glVertex3f(-0.48,0.45-3*cm,0.0);//window 13
          glVertex3f(-0.28,0.45-3*cm,0.0);
               glVertex3f(-0.28,0.3-3*cm,0.0);    
      glVertex3f(-0.48,0.3-3*cm,0.0);
       glEnd();
       
glBegin(GL_POLYGON);
     glVertex3f(-0.48+jk,0.45-3*cm,0.0);//window 14
          glVertex3f(-0.28+jk,0.45-3*cm,0.0);
               glVertex3f(-0.28+jk,0.3-3*cm,0.0);    
      glVertex3f(-0.48+jk,0.3-3*cm,0.0);
       glEnd();

glBegin(GL_POLYGON);
     glVertex3f(-0.48+2*jk,0.45-3*cm,0.0);//window 15
          glVertex3f(-0.28+2*jk,0.45-3*cm,0.0);
               glVertex3f(-0.28+2*jk,0.3-3*cm,0.0);    
      glVertex3f(-0.48+2*jk,0.3-3*cm,0.0);
       glEnd();
glBegin(GL_POLYGON);
     glVertex3f(-0.48+3*jk,0.45-3*cm,0.0);//window 16
          glVertex3f(-0.28+3*jk,0.45-3*cm,0.0);
               glVertex3f(-0.28+3*jk,0.3-3*cm,0.0);    
      glVertex3f(-0.48+3*jk,0.3-3*cm,0.0);
       glEnd();
       
              glColor3f(0.36 ,0.78, 0.10);

       glBegin(GL_POLYGON);
     glVertex3f(-0.52,-0.34,0.0);//centre line
          glVertex3f(-0.52,-0.39,0.0);
               glVertex3f(0.67,-0.39,0.0);    
      glVertex3f(0.67,-0.34,0.0);
       glEnd();
       glColor3f(1,1,1);
       glBegin(GL_POLYGON);
     glVertex3f(-0.15,-0.47,0.0);//Door
          glVertex3f(-0.15,-0.9,0.0);
               glVertex3f(0.25,-0.9,0.0);    
      glVertex3f(0.25,-0.47,0.0);
       glEnd();
        glColor3f(0.4,0.2,0.7);
             glBegin(GL_LINES);
     glVertex3f(0.05,-0.47,0.0);//line between doors
          glVertex3f(0.05,-0.9,0.0);
            
       glEnd();
        glColor3f(0.69,0.09,0.121);
       glBegin(GL_POLYGON);
     glVertex3f(0.06,0.75,0.0);//+
          glVertex3f(0.14,0.75,0.0);
               glVertex3f(0.14,0.55,0.0);    
      glVertex3f(0.06,0.55,0.0);
       glEnd();
       glBegin(GL_POLYGON);
     glVertex3f(0.02,0.69,0.0);//+
          glVertex3f(0.18,0.69,0.0);
               glVertex3f(0.18,0.61,0.0);    
      glVertex3f(0.02,0.61,0.0);
       glEnd();
        glColor3f(1,1,1);
//badal
  glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.8+0.06*sin(i),0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.7+0.06*sin(i),0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.6+0.06*sin(i),0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.75+0.06*sin(i),0.78+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.65+0.06*sin(i),0.78+0.03*cos(i),0.0);
    }
    glEnd();
     
     glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.75+0.06*sin(i),0.82+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.65+0.06*sin(i),0.82+0.03*cos(i),0.0);
    }
   glEnd();


//////////////////////
       glEnable(GL_DEPTH_TEST);
        
        char string[64];
        sprintf(string, "S U D O     B O R N");
        printtext(350,640,string);
        glutSwapBuffers();
/////////////////////

glFlush();
}
else
{
  v=3;
z=0.0;

///////famlilty
 t1=0.01;
 f1=0.00000;
 t2=0;
 f2=-0.00000;
 t3=0.01;
 f3=-0.00005;
 t4=0.01;
f4=-0.00005;
 d1=1;
 k1;
 p=0;

///
/////////////
}

z+=z1;
}
//////////////////////////////////////////// END HOSPITAL

//////////////////////////////////////////////FAMILY
if(v==3)
{int v1=z*1;
  if(v1<6)/////timinh
{
int i;
  float as,bg;
    
t3+=f3;
t4+=f4;

       int m=100*t4;
if(m%5==0)
{
 f4=-0.00005;
  
}

     m=100*t4;
if(m%25==0)
{
 f4=0.00005;
  
}

    glClearColor(0.74, 0.93, 1.0, 0.5); //color the
    // background light blue 1
    glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudogflColor3f(1.0, 0.96, 0.56);
    
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glBegin(GL_POLYGON); //ground
     glColor3f(0.61, 0.4, 0.12);
   
     glVertex3f(-1.0,-0.9,0.0);
     glVertex3f(1.0,-0.9,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();
for(as=-1.0;as<=1.0;as=as+0.2)
{
//roses
//rose stick1
glColor3f(0.0, 0.80, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+as+t2,-0.65,0.0);
     glVertex3f(-0.252+as+t2,-0.65,0.0);
     glVertex3f(-0.252+as+t2,-0.89,0.0);
     glVertex3f(-0.25+as+t2,-0.89,0.0);
     glEnd();

//rose petals bottom base red
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.28+as+t2,-0.65,0.0);
     glVertex3f(-0.22+as+t2,-0.65,0.0);
     glVertex3f(-0.25+as+t2,-0.60,0.0);
     glEnd();

//rose petals bottom base green
glColor3f(0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.29+as+t2,-0.62,0.0);
     glVertex3f(-0.21+as+t2,-0.62,0.0);
     glVertex3f(-0.25+as+t2,-0.65,0.0);
     glEnd();


//rose petals right
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+as+t2,-0.65,0.0);
     glVertex3f(-0.23+as+t2,-0.65,0.0);
     glVertex3f(-0.22+as+t2,-0.60,0.0);
     glEnd();

//rose petals left
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+as+t2,-0.65,0.0);
     glVertex3f(-0.27+as+t2,-0.65,0.0);
     glVertex3f(-0.28+as+t2,-0.60,0.0);
     glEnd();

//roses 1 end
}

glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1
    glVertex3f(0.4+t2,-0.9,0.0);
    glVertex3f(0.42+t2,-0.8,0.0);
    glVertex3f(0.44+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1(small right)
    glVertex3f(0.4+t2,-0.9,0.0);
    glVertex3f(0.39+t2,-0.85,0.0);
    glVertex3f(0.38+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1(small left)
    glVertex3f(0.44+t2,-0.9,0.0);
    glVertex3f(0.45+t2,-0.85,0.0);
    glVertex3f(0.46+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2
    glVertex3f(-0.5+t2,-0.9,0.0);
    glVertex3f(-0.52+t2,-0.8,0.0);
    glVertex3f(-0.54+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2(small right)
    glVertex3f(-0.5+t2,-0.9,0.0);
    glVertex3f(-0.49+t2,-0.85,0.0);
    glVertex3f(-0.48+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2(small left)
    glVertex3f(-0.54+t2,-0.9,0.0);
    glVertex3f(-0.55+t2,-0.85,0.0);
    glVertex3f(-0.56+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3
    glVertex3f(-0.84+t2,-0.9,0.0);
    glVertex3f(-0.86+t2,-0.8,0.0);
    glVertex3f(-0.88+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3(small right)
    glVertex3f(-0.84+t2,-0.9,0.0);
    glVertex3f(-0.83+t2,-0.85,0.0);
    glVertex3f(-0.82+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3(small left)
    glVertex3f(-0.88+t2,-0.9,0.0);
    glVertex3f(-0.89+t2,-0.85,0.0);
    glVertex3f(-0.90+t2,-0.9,0.0);
   
  glEnd();

glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4
    glVertex3f(0.80+t2,-0.9,0.0);
    glVertex3f(0.82+t2,-0.8,0.0);
    glVertex3f(0.84+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4(small right)
    glVertex3f(0.80+t2,-0.9,0.0);
    glVertex3f(0.79+t2,-0.85,0.0);
    glVertex3f(0.78+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4(small left)
    glVertex3f(0.84+t2,-0.9,0.0);
    glVertex3f(0.85+t2,-0.85,0.0);
    glVertex3f(0.86+t2,-0.9,0.0);
   
  glEnd();
   glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5
    glVertex3f(-1.0+t2,-0.9,0.0);
    glVertex3f(-1.0+t2,-0.8,0.0);
    glVertex3f(-0.97+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5(small right)
    glVertex3f(-0.94+t2,-0.9,0.0);
    glVertex3f(-0.93+t2,-0.85,0.0);
    glVertex3f(-0.92+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5(small left)
    glVertex3f(-0.98+t2,-0.9,0.0);
    glVertex3f(-0.99+t2,-0.85,0.0);
    glVertex3f(-0.10+t2,-0.9,0.0);
   
  glEnd();

   glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6
    glVertex3f(1.0+t2,-0.9,0.0);
    glVertex3f(1.0+t2,-0.8,0.0);
    glVertex3f(0.97+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6(small right)
    glVertex3f(0.94+t2,-0.9,0.0);
    glVertex3f(0.93+t2,-0.85,0.0);
    glVertex3f(0.92+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6(small left)
    glVertex3f(0.98+t2,-0.9,0.0);
    glVertex3f(0.99+t2,-0.85,0.0);
    glVertex3f(0.10+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(1.0, 0.843, 0.0); //color in the polygon
   glBegin(GL_POLYGON);//Sun
   for(i=0;i<=90;i++)
   {
     glVertex3f(0.1*cos(i)-0.6,0.1*sin(i)+0.7,0.0);
     //glVertex3f()
   }
    glEnd();
  glColor3f(0.545, 0.396, 0.031); //color in the polygon
    glBegin(GL_POLYGON);//TREE lower
    glVertex3f(-0.08+t2,-0.9,0.0);
    glVertex3f(0.08+t2,-0.9,0.0);
    glVertex3f(0.08+t2,-0.4,0.0);
    glVertex3f(-0.08+t2,-0.4,0.0);
    glEnd();
     glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper 1
    
    glVertex3f(-0.36+t2,-0.4,0.0);
    glVertex3f(0.0+t2,0.1,0.0);
    glVertex3f(0.36+t2,-0.4,0.0);
    glEnd();
    glColor3f(0.0+t2, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper2
    glVertex3f(-0.31+t2,-0.2,0.0);
    glVertex3f(-0.0+t2,0.22,0.0);
    glVertex3f(0.31+t2,-0.2,0.0);
    
    glEnd();
    glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper3
    glVertex3f(-0.25+t2,0.0,0.0);
    glVertex3f(-0.0+t2,0.42,0.0);
    glVertex3f(0.25+t2,0.0,1.0);
    
    glEnd();
    glEnd();


k1=t1*100;
  if(k1%10==0)
        {p++;
            if(d1==1)d1=2;
            else d1=1;
        }
    
 if(d1==1)
 {t1+=f1;}
else
    {t1=t1-f1;}


  float gf=0.30;

   

 glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON); //ground
  
     glVertex3f(-1.0,-0.89,0.0);
     glVertex3f(1.0,-0.89,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();

///sudo baby

glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.07*cos(i)+0.5+t3,0.04*sin(i)-0.79,0.0); //sudo face
   }
    glEnd();

glColor3f(1, 0.96, 0.566); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.11*cos(i)+0.66+t3,0.045*sin(i)-0.79,0.0); //body
   }
    glEnd();

glColor3f(0.80, 0.77, 0.45); //leg
    glBegin(GL_POLYGON);
   
     glVertex2f(0.6+t3,-0.825); //
       glVertex2f(0.64+t3,-0.825);
         glVertex2f(0.58+t3+t4,-0.9);
           glVertex2f(0.62+t3+t4,-0.9);
    glEnd();
glColor3f(0.80, 0.77, 0.45); //leg
    glBegin(GL_POLYGON);
   
     glVertex2f(0.7+t3,-0.825); //
       glVertex2f(0.74+t3,-0.825);
         glVertex2f(0.68+t3+t4,-0.9);
           glVertex2f(0.72+t3+t4,-0.9);
    glEnd();

glColor3f(0.80, 0.77, 0.45); //leg
    glBegin(GL_POLYGON);
   
     glVertex2f(0.78+t3+t4,-0.87); //
       glVertex2f(0.82+t3+t4,-0.9);
         glVertex2f(0.72+t3+t4,-0.87);
           glVertex2f(0.72+t3+t4,-0.9);
    glEnd();
/////////////////end baby

//sudo body
    glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.7,0.09*sin(i)-0.2,0.0); //sudo face
   }
    glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.69,-0.30,0.0);
     glVertex3f(-0.69+t1,-0.59,0.0);
     glVertex3f(-0.72+t1,-0.60,0.0);
     glVertex3f(-0.72,-0.38,0.0);
     glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.62,-0.29,0.0);
     glVertex3f(-0.78,-0.29,0.0);
     glVertex3f(-0.75,-0.59,0.0);
     glVertex3f(-0.65,-0.59,0.0);
     glEnd();


glColor3f(0.81, 0.45, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.648,-0.59,0.0);
     glVertex3f(-0.752,-0.59,0.0);
     glVertex3f(-0.72-t1,-0.85,0.0);
     glVertex3f(-0.68-t1,-0.85,0.0);
     glEnd();


glColor3f(0.81, 0.45, 0.12);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.648,-0.59,0.0);
     glVertex3f(-0.752,-0.59,0.0);
     glVertex3f(-0.72+t1,-0.85,0.0);
     glVertex3f(-0.68+t1,-0.85,0.0);
     glEnd();


glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.69,-0.30,0.0);
     glVertex3f(-0.55-t1,-0.59,0.0);
     glVertex3f(-0.58-t1,-0.60,0.0);
     glVertex3f(-0.70,-0.38,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.69-t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.69+t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

    //sudo body ends

    //sudo gf start 
     glColor3f(1.0, 0.0, 0.0);
      glBegin(GL_POLYGON);
    
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.05*cos(i)-0.39,0.02*sin(i)-0.1,0.0); //hait
    
   }
    glEnd();

glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.69+gf,-0.30,0.0);
     glVertex3f(-0.69+t1+gf,-0.59,0.0);
     glVertex3f(-0.72+t1+gf,-0.60,0.0);
     glVertex3f(-0.72+gf,-0.38,0.0);
     glEnd();


    glColor3f(0.93, 0.90, 0.66); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.39,0.09*sin(i)-0.2,0.0); //sudo face
     
   }
    glEnd();


glColor3f(1.0, 0.0, 1.0);
glBegin(GL_POLYGON); //shirt top
     glVertex3f(-0.65+gf,-0.29,0.0);
     glVertex3f(-0.78+gf,-0.29,0.0);
     glVertex3f(-0.75+gf,-0.59,0.0);
     glVertex3f(-0.65+gf,-0.59,0.0);
     glVertex3f(-0.62+gf,-0.36,0.0);
     glEnd();


glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.648+gf,-0.59,0.0);
     glVertex3f(-0.752+gf,-0.59,0.0);
     glVertex3f(-0.72+gf+t1,-0.85,0.0);
     glVertex3f(-0.68+gf+t1,-0.85,0.0);
     glEnd();



glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.648+gf,-0.59,0.0);
     glVertex3f(-0.752+gf,-0.59,0.0);
     glVertex3f(-0.72+gf-t1,-0.85,0.0);
     glVertex3f(-0.68+gf-t1,-0.85,0.0);
     glEnd();

//skirt
glColor3f(0.81, 0.45, 0.72);
glBegin(GL_POLYGON); 
     glVertex3f(-0.648+gf,-0.59,0.0);
     glVertex3f(-0.752+gf,-0.59,0.0);
     glVertex3f(-0.771+gf,-0.66,0.0);
     glVertex3f(-0.630+gf,-0.66,0.0);
     glEnd();

glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.69+gf,-0.30,0.0);
     glVertex3f(-0.55+gf-t1,-0.59,0.0);
     glVertex3f(-0.58+gf-t1,-0.60,0.0);
     glVertex3f(-0.70+gf,-0.38,0.0);
     glEnd();


glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.39-t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  

glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.39+t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  
    //sudo gf ends
    glFlush();
t2+=f2;


}
else
{
  v=4;
z=0.0;

///////alone
 r=0.01;
 t=0.0005;

///
/////////////
}

z+=z1;
}


///////////////////////////////////////////END FAMILY

//////////////////////////////////////////////////////    alone
if(v==4)
{int v1=z*1;
  if(v1<2)/////timinh
{

int i,j;
float kd=0.45,kd1=0.90;
    glClearColor(0.74, 0.93, 1.0, 0.5); //color the background
    //glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudo gf glColor3f(1.0, 0.96, 0.56);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glBegin(GL_POLYGON); //ground
     glColor3f(0.61, 0.4, 0.12);
   
     glVertex3f(-1.0,-0.9,0.0);
     glVertex3f(1.0,-0.9,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();

glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1
    glVertex3f(0.4,-0.9,0.0);
    glVertex3f(0.42,-0.8,0.0);
    glVertex3f(0.44,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1(small right)
    glVertex3f(0.4,-0.9,0.0);
    glVertex3f(0.39,-0.85,0.0);
    glVertex3f(0.38,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1(small left)
    glVertex3f(0.44,-0.9,0.0);
    glVertex3f(0.45,-0.85,0.0);
    glVertex3f(0.46,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2
    glVertex3f(-0.5,-0.9,0.0);
    glVertex3f(-0.52,-0.8,0.0);
    glVertex3f(-0.54,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2(small right)
    glVertex3f(-0.5,-0.9,0.0);
    glVertex3f(-0.49,-0.85,0.0);
    glVertex3f(-0.48,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2(small left)
    glVertex3f(-0.54,-0.9,0.0);
    glVertex3f(-0.55,-0.85,0.0);
    glVertex3f(-0.56,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3
    glVertex3f(-0.84,-0.9,0.0);
    glVertex3f(-0.86,-0.8,0.0);
    glVertex3f(-0.88,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3(small right)
    glVertex3f(-0.84,-0.9,0.0);
    glVertex3f(-0.83,-0.85,0.0);
    glVertex3f(-0.82,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3(small left)
    glVertex3f(-0.88,-0.9,0.0);
    glVertex3f(-0.89,-0.85,0.0);
    glVertex3f(-0.90,-0.9,0.0);
   
  glEnd();

glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4
    glVertex3f(0.80,-0.9,0.0);
    glVertex3f(0.82,-0.8,0.0);
    glVertex3f(0.84,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4(small right)
    glVertex3f(0.80,-0.9,0.0);
    glVertex3f(0.79,-0.85,0.0);
    glVertex3f(0.78,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4(small left)
    glVertex3f(0.84,-0.9,0.0);
    glVertex3f(0.85,-0.85,0.0);
    glVertex3f(0.86,-0.9,0.0);
   
  glEnd();
   glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5
    glVertex3f(-1.0,-0.9,0.0);
    glVertex3f(-1.0,-0.8,0.0);
    glVertex3f(-0.97,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5(small right)
    glVertex3f(-0.94,-0.9,0.0);
    glVertex3f(-0.93,-0.85,0.0);
    glVertex3f(-0.92,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5(small left)
    glVertex3f(-0.98,-0.9,0.0);
    glVertex3f(-0.99,-0.85,0.0);
    glVertex3f(-0.10,-0.9,0.0);
   
  glEnd();

   glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6
    glVertex3f(1.0,-0.9,0.0);
    glVertex3f(1.0,-0.8,0.0);
    glVertex3f(0.97,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6(small right)
    glVertex3f(0.94,-0.9,0.0);
    glVertex3f(0.93,-0.85,0.0);
    glVertex3f(0.92,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6(small left)
    glVertex3f(0.98,-0.9,0.0);
    glVertex3f(0.99,-0.85,0.0);
    glVertex3f(0.10,-0.9,0.0);
   
  glEnd();
  glColor3f(1.0, 0.843, 0.0); //color in the polygon
   glBegin(GL_POLYGON);//Sun
   for(i=0;i<=90;i++)
   {
     glVertex3f(0.1*cos(i)-0.6,0.1*sin(i)+0.7,0.0);
     //glVertex3f()
   }
    glEnd();
  glColor3f(0.545, 0.396, 0.031); //color in the polygon
    glBegin(GL_POLYGON);//TREE lower
    glVertex3f(-0.08,-0.9,0.0);
    glVertex3f(0.08,-0.9,0.0);
    glVertex3f(0.08,-0.4,0.0);
    glVertex3f(-0.08,-0.4,0.0);
    glEnd();
     glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper 1
    
    glVertex3f(-0.36,-0.4,0.0);
    glVertex3f(0.0,0.1,0.0);
    glVertex3f(0.36,-0.4,0.0);
    glEnd();
    glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper2
    glVertex3f(-0.31,-0.2,0.0);
    glVertex3f(-0.0,0.22,0.0);
    glVertex3f(0.31,-0.2,0.0);
    
    glEnd();
    glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper3
    glVertex3f(-0.25,0.0,0.0);
    glVertex3f(-0.0,0.42,0.0);
    glVertex3f(0.25,0.0,1.0);
    
    glEnd();
   

 glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON); //ground
  
     glVertex3f(-1.0,-0.89,0.0);
     glVertex3f(1.0,-0.89,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();

//sudo friend body
    glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.05*cos(i)-0.25,0.05*sin(i)-0.5,0.0); //sudo face
   }
    glEnd();

 glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.007*cos(i)-0.23,0.007*sin(i)-0.48,0.0); //left eye
   }
    glEnd();

glColor3f(1.0, 0.0, 0.0); 
   glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.007*cos(i)-0.27,0.007*sin(i)-0.48,0.0); //left eye
   }
    glEnd();  
//smile
glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_POLYGON);
   for(i=0;i<=180;i++)
   {
     glVertex3f(0.02*cos(i)-0.25,0.005*sin(i)-0.52,0.0);//smile 
   }
    glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.63+kd,-0.55,0.0);
     glVertex3f(-0.77+kd,-0.55,0.0);
     glVertex3f(-0.75+kd,-0.70,0.0);
     glVertex3f(-0.65+kd,-0.70,0.0);
     glEnd();


glColor3f(0.21, 0.4, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.75+kd,-0.70,0.0);
     glVertex3f(-0.65+kd,-0.70,0.0);
     glVertex3f(-0.73+kd,-0.85,0.0);
     glVertex3f(-0.78+kd,-0.85,0.0);
     glEnd();

glColor3f(0.61, 0.23, 0.12);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.75+kd,-0.70,0.0);
     glVertex3f(-0.65+kd,-0.70,0.0);
     glVertex3f(-0.62+kd,-0.85,0.0);
     glVertex3f(-0.67+kd,-0.85,0.0);
     glEnd();

glColor3f(0.71, 0.23, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.77+kd,-0.55,0.0);
     glVertex3f(-0.90+kd,-0.49-r,0.0);
     glVertex3f(-0.88+kd,-0.51-r,0.0);
     glVertex3f(-0.76+kd,-0.60,0.0);
     glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.63+kd,-0.55,0.0);
     glVertex3f(-0.50+kd,-0.49-r,0.0);
     glVertex3f(-0.52+kd,-0.51-r,0.0);
     glVertex3f(-0.64+kd,-0.60,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.18,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.31,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  
   
    //sudo friend body ends
    int m=100*r;
if(m%20==0)
{
 t=-t;
}

/*m=r*1000;
if(m==0.001)
{

 t=-0.0005; 
}
*/
r+=t;
    glFlush();


}
else
{
  v=5;
z=0.0;

///////baby
 r=0.01;
t=0.0005;

///
/////////////
}

z+=z1;
}

////////////////////////////////////////////////////// end alone


//////////////////////////////      BABY SUDO    /////////////////////////////////

if(v==5)
{int v1=z*1;
  if(v1<2)/////timinh
{

 int i,j;
float kd=0.45,kd1=0.90;
    glClearColor(0.74, 0.93, 1.0, 0.5); //color the background
    //glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudo gf glColor3f(1.0, 0.96, 0.56);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glBegin(GL_POLYGON); //ground
     glColor3f(0.61, 0.4, 0.12);
   
     glVertex3f(-1.0,-0.9,0.0);
     glVertex3f(1.0,-0.9,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();

glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1
    glVertex3f(0.4,-0.9,0.0);
    glVertex3f(0.42,-0.8,0.0);
    glVertex3f(0.44,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1(small right)
    glVertex3f(0.4,-0.9,0.0);
    glVertex3f(0.39,-0.85,0.0);
    glVertex3f(0.38,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1(small left)
    glVertex3f(0.44,-0.9,0.0);
    glVertex3f(0.45,-0.85,0.0);
    glVertex3f(0.46,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2
    glVertex3f(-0.5,-0.9,0.0);
    glVertex3f(-0.52,-0.8,0.0);
    glVertex3f(-0.54,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2(small right)
    glVertex3f(-0.5,-0.9,0.0);
    glVertex3f(-0.49,-0.85,0.0);
    glVertex3f(-0.48,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2(small left)
    glVertex3f(-0.54,-0.9,0.0);
    glVertex3f(-0.55,-0.85,0.0);
    glVertex3f(-0.56,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3
    glVertex3f(-0.84,-0.9,0.0);
    glVertex3f(-0.86,-0.8,0.0);
    glVertex3f(-0.88,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3(small right)
    glVertex3f(-0.84,-0.9,0.0);
    glVertex3f(-0.83,-0.85,0.0);
    glVertex3f(-0.82,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3(small left)
    glVertex3f(-0.88,-0.9,0.0);
    glVertex3f(-0.89,-0.85,0.0);
    glVertex3f(-0.90,-0.9,0.0);
   
  glEnd();

glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4
    glVertex3f(0.80,-0.9,0.0);
    glVertex3f(0.82,-0.8,0.0);
    glVertex3f(0.84,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4(small right)
    glVertex3f(0.80,-0.9,0.0);
    glVertex3f(0.79,-0.85,0.0);
    glVertex3f(0.78,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4(small left)
    glVertex3f(0.84,-0.9,0.0);
    glVertex3f(0.85,-0.85,0.0);
    glVertex3f(0.86,-0.9,0.0);
   
  glEnd();
   glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5
    glVertex3f(-1.0,-0.9,0.0);
    glVertex3f(-1.0,-0.8,0.0);
    glVertex3f(-0.97,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5(small right)
    glVertex3f(-0.94,-0.9,0.0);
    glVertex3f(-0.93,-0.85,0.0);
    glVertex3f(-0.92,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5(small left)
    glVertex3f(-0.98,-0.9,0.0);
    glVertex3f(-0.99,-0.85,0.0);
    glVertex3f(-0.10,-0.9,0.0);
   
  glEnd();

   glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6
    glVertex3f(1.0,-0.9,0.0);
    glVertex3f(1.0,-0.8,0.0);
    glVertex3f(0.97,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6(small right)
    glVertex3f(0.94,-0.9,0.0);
    glVertex3f(0.93,-0.85,0.0);
    glVertex3f(0.92,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6(small left)
    glVertex3f(0.98,-0.9,0.0);
    glVertex3f(0.99,-0.85,0.0);
    glVertex3f(0.10,-0.9,0.0);
   
  glEnd();
  glColor3f(1.0, 0.843, 0.0); //color in the polygon
   glBegin(GL_POLYGON);//Sun
   for(i=0;i<=90;i++)
   {
     glVertex3f(0.1*cos(i)-0.6,0.1*sin(i)+0.7,0.0);
     //glVertex3f()
   }
    glEnd();
  glColor3f(0.545, 0.396, 0.031); //color in the polygon
    glBegin(GL_POLYGON);//TREE lower
    glVertex3f(-0.08,-0.9,0.0);
    glVertex3f(0.08,-0.9,0.0);
    glVertex3f(0.08,-0.4,0.0);
    glVertex3f(-0.08,-0.4,0.0);
    glEnd();
     glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper 1
    
    glVertex3f(-0.36,-0.4,0.0);
    glVertex3f(0.0,0.1,0.0);
    glVertex3f(0.36,-0.4,0.0);
    glEnd();
    glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper2
    glVertex3f(-0.31,-0.2,0.0);
    glVertex3f(-0.0,0.22,0.0);
    glVertex3f(0.31,-0.2,0.0);
    
    glEnd();
    glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper3
    glVertex3f(-0.25,0.0,0.0);
    glVertex3f(-0.0,0.42,0.0);
    glVertex3f(0.25,0.0,1.0);
    
    glEnd();
   

 glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON); //ground
  
     glVertex3f(-1.0,-0.89,0.0);
     glVertex3f(1.0,-0.89,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();
//sudo body
    glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.05*cos(i)-0.7,0.05*sin(i)-0.5,0.0); //sudo face
   }
    glEnd();

 glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.007*cos(i)-0.723,0.007*sin(i)-0.48,0.0); //left eye
   }
    glEnd();

glColor3f(1.0, 0.0, 0.0); 
   glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.007*cos(i)-0.677,0.007*sin(i)-0.48,0.0); //left eye
   }
    glEnd();  
//smile
glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_POLYGON);
   for(i=0;i<=180;i++)
   {
     glVertex3f(0.02*cos(i)-0.70,0.005*sin(i)-0.52,0.0);//smile 
   }
    glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.63,-0.55,0.0);
     glVertex3f(-0.77,-0.55,0.0);
     glVertex3f(-0.75,-0.70,0.0);
     glVertex3f(-0.65,-0.70,0.0);
     glEnd();


glColor3f(0.21, 0.4, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.75,-0.70,0.0);
     glVertex3f(-0.65,-0.70,0.0);
     glVertex3f(-0.73,-0.85,0.0);
     glVertex3f(-0.78,-0.85,0.0);
     glEnd();

glColor3f(0.61, 0.23, 0.12);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.75,-0.70,0.0);
     glVertex3f(-0.65,-0.70,0.0);
     glVertex3f(-0.62,-0.85,0.0);
     glVertex3f(-0.67,-0.85,0.0);
     glEnd();

glColor3f(0.71, 0.23, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.77,-0.55,0.0);
     glVertex3f(-0.90,-0.69+r,0.0);
     glVertex3f(-0.88,-0.71+r,0.0);
     glVertex3f(-0.76,-0.60,0.0);
     glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.63,-0.55,0.0);
     glVertex3f(-0.50,-0.69+r,0.0);
     glVertex3f(-0.52,-0.71+r,0.0);
     glVertex3f(-0.64,-0.60,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.765,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.635,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  
   
    //sudo body ends

//sudo friend body
    glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.05*cos(i)-0.25,0.05*sin(i)-0.5,0.0); //sudo face
   }
    glEnd();

 glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.007*cos(i)-0.23,0.007*sin(i)-0.48,0.0); //left eye
   }
    glEnd();

glColor3f(1.0, 0.0, 0.0); 
   glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.007*cos(i)-0.27,0.007*sin(i)-0.48,0.0); //left eye
   }
    glEnd();  
//smile
glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_POLYGON);
   for(i=0;i<=180;i++)
   {
     glVertex3f(0.02*cos(i)-0.25,0.005*sin(i)-0.52,0.0);//smile 
   }
    glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.63+kd,-0.55,0.0);
     glVertex3f(-0.77+kd,-0.55,0.0);
     glVertex3f(-0.75+kd,-0.70,0.0);
     glVertex3f(-0.65+kd,-0.70,0.0);
     glEnd();


glColor3f(0.21, 0.4, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.75+kd,-0.70,0.0);
     glVertex3f(-0.65+kd,-0.70,0.0);
     glVertex3f(-0.73+kd,-0.85,0.0);
     glVertex3f(-0.78+kd,-0.85,0.0);
     glEnd();

glColor3f(0.61, 0.23, 0.12);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.75+kd,-0.70,0.0);
     glVertex3f(-0.65+kd,-0.70,0.0);
     glVertex3f(-0.62+kd,-0.85,0.0);
     glVertex3f(-0.67+kd,-0.85,0.0);
     glEnd();

glColor3f(0.71, 0.23, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.77+kd,-0.55,0.0);
     glVertex3f(-0.90+kd,-0.49-r,0.0);
     glVertex3f(-0.88+kd,-0.51-r,0.0);
     glVertex3f(-0.76+kd,-0.60,0.0);
     glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.63+kd,-0.55,0.0);
     glVertex3f(-0.50+kd,-0.49-r,0.0);
     glVertex3f(-0.52+kd,-0.51-r,0.0);
     glVertex3f(-0.64+kd,-0.60,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.18,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.31,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  
   
    //sudo friend body ends

    //sudo friend1 body
    glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.05*cos(i)+0.20,0.05*sin(i)-0.5,0.0); //sudo face
   }
    glEnd();

 glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.007*cos(i)+0.22,0.007*sin(i)-0.48,0.0); //left eye
   }
    glEnd();

glColor3f(1.0, 0.0, 0.0); 
   glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.007*cos(i)+0.18,0.007*sin(i)-0.48,0.0); //left eye
   }
    glEnd();  
//smile
glColor3f(1.0, 0.0, 0.0); 
    glBegin(GL_POLYGON);
   for(i=0;i<=180;i++)
   {
     glVertex3f(0.02*cos(i)+0.20,0.005*sin(i)-0.52,0.0);//smile 
   }
    glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.63+kd1,-0.55,0.0);
     glVertex3f(-0.77+kd1,-0.55,0.0);
     glVertex3f(-0.75+kd1,-0.70,0.0);
     glVertex3f(-0.65+kd1,-0.70,0.0);
     glEnd();


glColor3f(0.21, 0.4, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.75+kd1,-0.70,0.0);
     glVertex3f(-0.65+kd1,-0.70,0.0);
     glVertex3f(-0.73+kd1,-0.85,0.0);
     glVertex3f(-0.78+kd1,-0.85,0.0);
     glEnd();

glColor3f(0.61, 0.23, 0.12);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.75+kd1,-0.70,0.0);
     glVertex3f(-0.65+kd1,-0.70,0.0);
     glVertex3f(-0.62+kd1,-0.85,0.0);
     glVertex3f(-0.67+kd1,-0.85,0.0);
     glEnd();

glColor3f(0.71, 0.23, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.77+kd1,-0.55,0.0);
     glVertex3f(-0.90+kd1,-0.69+r,0.0);
     glVertex3f(-0.88+kd1,-0.71+r,0.0);
     glVertex3f(-0.76+kd1,-0.60,0.0);
     glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.63+kd1,-0.55,0.0);
     glVertex3f(-0.50+kd1,-0.69+r,0.0);
     glVertex3f(-0.52+kd1,-0.71+r,0.0);
     glVertex3f(-0.64+kd1,-0.60,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)+0.135,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)+0.27,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  
   
    //sudo friend1 body ends
    int m=100*r;
if(m%20==0)
{
 t=-t;
}

/*m=r*1000;
if(m==0.001)
{

 t=-0.0005; 
}
*/
r+=t;
    glFlush();


}
else
{v=6;
z=0.0;


/////////school
  n=0.01;
 r=0.02;
 n1=0.01;
 r1=0.0005;
c=0.01;
c1=0.00005;
//////////////

///
/////////////
}

z+=z1;
}

////////////////////////////        BABY SUDO END ///////////////////////////////////

//////////////////       S C H O O L     ////////////////////////////////////////////////////////////////////
if(v==6)
{int v1=z*1;
  if(v1<2)/////timinh
{ int i,j,l,a,b;

float gf=0.70,k,m,x,y;
    glClearColor(0.529, 0.565, 1.0, 0.5); //color the background
    //glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudo gf glColor3f(1.0, 0.96, 0.56);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

//////////// frame 1
  glColor3f(0.0, 0.772, 0.804);
 glBegin(GL_POLYGON);//Grass 1
     glVertex3f(0.0,0.05,0.0);
     glVertex3f(0.0,0.4,0.0);
     glVertex3f(0.2,0.35,0.0);
     glVertex3f(0.2,0.0,0.0);
    glEnd();

///////////////////frame 2

glColor3f(0.749, 0.243, 1.0);
 glBegin(GL_POLYGON);//Grass 1
     glVertex3f(0.0,0.4,0.0);
     glVertex3f(0.1,0.46,0.0);
     glVertex3f(0.4,0.5,0.0);
     glVertex3f(0.2,0.35,0.0);
     
    glEnd();

    /////////////frame 4


     glColor3f(1.0, 0.0, 0.0);
 glBegin(GL_POLYGON);//Grass 1
     glVertex3f(0.7,0.3,0.0);
     glVertex3f(0.7,0.6,0.0);
     glVertex3f(0.9,0.60,0.0);
     glVertex3f(0.9,0.3,0.0);

    glEnd();

///////////////frame 3

    glColor3f(0.0, 0.898, 0.933);
 glBegin(GL_POLYGON);//Grass 1
     glVertex3f(0.2,0.0,0.0);
     glVertex3f(0.2,0.35,0.0);
     glVertex3f(0.4,0.50,0.0);
     glVertex3f(0.96,0.3,0.0);
     glVertex3f(0.96,0.0,0.0);

     
    glEnd();
//////////////////frame 5


     glColor3f(0.733, 1.0, 1.0);
 glBegin(GL_POLYGON);//Grass 1
     glVertex3f(0.3,0.0,0.0);
     glVertex3f(0.3,0.2,0.0);
     glVertex3f(0.5,0.2,0.0);
     glVertex3f(0.5,0.0,0.0);
     glEnd();
glColor3f(0,0,0);
glBegin(GL_LINE_LOOP);
glVertex3f(0.4,0.0,0.0);
glVertex3f(0.4,0.2,0.0);
glEnd();
glBegin(GL_LINES);//Grass 1
     glVertex3f(0.3,0.0,0.0);
     glVertex3f(0.3,0.2,0.0);
     glVertex3f(0.5,0.2,0.0);
     glVertex3f(0.5,0.0,0.0);
     glEnd();

/////////////////frame 61

     glColor3f(1.0, 1.0, 1.0);
 glBegin(GL_POLYGON);//Grass 1
     glVertex3f(0.6,0.1,0.0);
     glVertex3f(0.6,0.2,0.0);
     glVertex3f(0.75,0.2,0.0);
     glVertex3f(0.75,0.1,0.0);
     
     
    glEnd();

/////////frame 62

 /*    glColor3f(1.0, 0.0, 0.0);
 glBegin(GL_POLYGON);//Grass 1
     glVertex3f(0.2,0.0,0.0);
     glVertex3f(0.2,0.35,0.0);
     glVertex3f(0.4,0.50,0.0);
     glVertex3f(0.8,0.3,0.0);
     glVertex3f(0.8,0.0,0.0);

     
    glEnd();*/
    
////////////////////////ROAD

     glColor3f(0,0,0);
     glBegin(GL_POLYGON);
     glVertex3f(0.3,0.0,0.0);
     glVertex3f(0.5,0,0);
     glVertex3f(0.6,-1.0,0.0);
     glVertex3f(-1,-1,0);
     glVertex3f(-1.0,-0.8,0.0);
  glEnd();

///// badal  1
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.8+0.06*sin(i)+n1,0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.7+0.06*sin(i)+n1,0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.6+0.06*sin(i)+n1,0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.75+0.06*sin(i)+n1,0.78+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.65+0.06*sin(i)+n1,0.78+0.03*cos(i),0.0);
    }
    glEnd();
     
     glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.75+0.06*sin(i)+n1,0.82+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(-0.65+0.06*sin(i)+n1,0.82+0.03*cos(i),0.0);
    }
    glEnd();
      
            
    ////////////////////////

///// badal  2
  glColor3f(1,1,1);
  glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(0.3+0.06*sin(i)+n1,0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(0.2+0.06*sin(i)+n1,0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(0.1+0.06*sin(i)+n1,0.8+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(0.25+0.06*sin(i)+n1,0.78+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(0.15+0.06*sin(i)+n1,0.78+0.03*cos(i),0.0);
    }
    glEnd();
     
     glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(0.25+0.06*sin(i)+n1,0.82+0.03*cos(i),0.0);
    }
    glEnd();
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    {
    glVertex3f(0.15+0.06*sin(i)+n1,0.82+0.03*cos(i),0.0);
    }
    glEnd();
////////////////////////////////////////   sudo
      
    glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.7+c,0.09*sin(i)-0.2+c,0.0); //sudo face
   }
    glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.69+c,-0.30+c,0.0);
     glVertex3f(-0.69+c,-0.59+c,0.0);
     glVertex3f(-0.72+c,-0.60+c,0.0);
     glVertex3f(-0.72+c,-0.38+c,0.0);
     glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.62+c,-0.29+c,0.0);
     glVertex3f(-0.78+c,-0.29+c,0.0);
     glVertex3f(-0.75+c,-0.59+c,0.0);
     glVertex3f(-0.65+c,-0.59+c,0.0);
     glEnd();


glColor3f(0.81, 0.45, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.648+c,-0.59+c,0.0);
     glVertex3f(-0.752+c,-0.59+c,0.0);
     glVertex3f(-0.72+c,-0.85+c,0.0);
     glVertex3f(-0.68+c,-0.85+c,0.0);
     glEnd();


glColor3f(0.81, 0.45, 0.12);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.648+c,-0.59+c,0.0);
     glVertex3f(-0.752+c,-0.59+c,0.0);
     glVertex3f(-0.72+c,-0.85+c,0.0);
     glVertex3f(-0.68+c,-0.85+c,0.0);
     glEnd();


glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.69+c,-0.30+c,0.0);
     glVertex3f(-0.55+c,-0.59+c,0.0);
     glVertex3f(-0.58+c,-0.60+c,0.0);
     glVertex3f(-0.70+c,-0.38+c,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.69+c,0.02*sin(i)-0.87+c,0.0); 
     
   }
    glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.69+c,0.02*sin(i)-0.87+c,0.0); 
     
   }
    glEnd();

    //sudo body ends




///////////////////////////////////
      
            
    ////////////////////////
int f=100*n1;
if(f==185)
{n1=-1.5;}
n1+=r1;
n+=r;
c+=c1;

/////////////////////////////////////school
        glEnable(GL_DEPTH_TEST);
        
        char string[64];
        sprintf(string, "S C H O O L");
        printtext(650,640,string);
        glutSwapBuffers();
    
////////////////////////////////////////   
 }
else
{v=7;
   z=0.0;

/////////geeekkk
 n=0.0001;
 r=0.0002;
//////////////
 }

z+=z1;
    glFlush();

  }


//////////////////           schooll        //////////////////////////////////////////////////////////////////
/////////////////////// G E E K////////////////////////////////////////////////////////////////////////////////

if(v==7)
{

 int v1=z*1;
  if(v1<3)/////timinh
{ 
  
int i,j;
float gf=0.30;
    glClearColor(0.757, 0.804, 0.804, 0.5); //color the background
    //glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudo gf glColor3f(1.0, 0.96, 0.56);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//lapi
glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex2f(-0.32,-0.48);
glVertex2f(-0.19,-0.48);
glVertex2f(-0.19,-0.46);
glVertex2f(-0.32,-0.46);    
     glEnd();
   
glColor3f(1, 1,1);
glBegin(GL_POLYGON);

glVertex2f(-0.19,-0.48);
glVertex2f(-0.19,-0.46);
glVertex2f(-0.15,-0.33);
glVertex2f(-0.16,-0.33);    
     glEnd();

 glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON); //ground
  
     glVertex3f(-1.0,-0.89,0.0);
     glVertex3f(1.0,-0.89,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();

      glColor3f(0.70, 0.57, 0.45); //color of table
    glBegin(GL_POLYGON);
   glVertex2f(-0.35,-0.48);
   glVertex2f(0.35,-0.48);
   glVertex2f(0.35,-0.5);
   glVertex2f(-0.35,-0.5);
   
    glEnd();

//table legs
glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //left
     glVertex3f(-0.27,-0.51,0.0);
     glVertex3f(-0.3,-0.49,0.0);
     glVertex3f(-0.3,-0.89,0.0);
     glVertex3f(-0.29,-0.89,0.0);
     glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //right
     glVertex3f(0.27,-0.51,0.0);
     glVertex3f(0.3,-0.49,0.0);
     glVertex3f(0.3,-0.89,0.0);
     glVertex3f(0.29,-0.89,0.0);
     glEnd();
//table ends

//chair of sudo
//chair back
glColor3f(0.19, 0.25, 0.32);
glBegin(GL_POLYGON); 
     glVertex3f(-0.63,-0.3,0.0);
     glVertex3f(-0.65,-0.3,0.0);
     glVertex3f(-0.65,-0.89,0.0);
     glVertex3f(-0.63,-0.89,0.0);
     glEnd();  
//chair sit
glColor3f(0.29, 0.35, 0.32);
glBegin(GL_POLYGON); 
     glVertex3f(-0.63,-0.66,0.0);
     glVertex3f(-0.46,-0.66,0.0);
     glVertex3f(-0.46,-0.69,0.0);
     glVertex3f(-0.63,-0.69,0.0);
     glEnd();     

//chair leg right
glColor3f(0.29, 0.95, 0.72);
glBegin(GL_POLYGON); 
     glVertex3f(-0.46,-0.66,0.0);
     glVertex3f(-0.46,-0.89,0.0);
     glVertex3f(-0.44,-0.89,0.0);
     glVertex3f(-0.44,-0.66,0.0);
     glEnd(); 
//chair ends




//sudo body

  glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.48,0.09*sin(i)-0.2,0.0); //sudo face
   }
    glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.50,-0.30,0.0);
     glVertex3f(-0.28,-0.35-n,0.0);
     glVertex3f(-0.31,-0.36-n,0.0);
     glVertex3f(-0.51,-0.38,0.0);
     glEnd();
int z=n*100;
if(z==9 ||z==-1 )
    { 
      
r=0-r;
    }
glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.42,-0.29,0.0);
     glVertex3f(-0.58,-0.29,0.0);
     glVertex3f(-0.60,-0.59,0.0);
     glVertex3f(-0.50,-0.59,0.0);
     glEnd();

//sudo leg upper
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.60,-0.59,0.0);
     glVertex3f(-0.38,-0.59,0.0);
     glVertex3f(-0.41,-0.66,0.0);
     glVertex3f(-0.60,-0.66,0.0);
     glEnd();

//sudo leg lower
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.38,-0.59,0.0);
     glVertex3f(-0.34,-0.86,0.0);
     glVertex3f(-0.37,-0.86,0.0);
     glVertex3f(-0.44,-0.59,0.0);
     glEnd();



glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.50,-0.30,0.0);
     glVertex3f(-0.28,-0.45+n,0.0);
     glVertex3f(-0.31,-0.46+n,0.0);
     glVertex3f(-0.51,-0.38,0.0);
     glEnd();

/*glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.48,-0.33,0.0);
     glVertex3f(-0.28,-0.37,0.0);
     glVertex3f(-0.31,-0.40,0.0);
     glVertex3f(-0.49,-0.38,0.0);
     glEnd();

*/

glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.35,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

    //sudo body ends


/////////////////////////////////////           sudo love LINUX
        glEnable(GL_DEPTH_TEST);
        
        char string[64];
        sprintf(string, "S U D O     L O V E S     L I N U X");
        printtext(350,540,string);
        glutSwapBuffers(); 
    
////////////////////////////////////////   


n+=r;
}

else
{
v=8;
z=0.0;
 
///////sudo propose
 n=0.01;
 r=0.02;
 n1=0.01;
 r1=0.005;
 t1=0.01;
 ag=0.01,bg=0.01;
 ag1=0.005,bg1=0.003;
////////////
}
glFlush();
z+=z1;

}  

///////////////////////         geek end  ///////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////    sudo propose  /////////////////////////////////////////////////////////////////////////////////////////
if(v==8)
{
int v1=z*1;
  if(v1<10)/////timing
{


int i,j;
float gf=-0.50,ab=0.15;
    glClearColor(0.1, 0.1, 0.1, 0.5); //color the background
    //glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudo gf glColor3f(1.0, 0.96, 0.56);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

   

 glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON); //ground
  
     glVertex3f(-1.0,-0.89,0.0);
     glVertex3f(1.0,-0.89,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();

   
//sudo body

  glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.55+ab,0.09*sin(i)-0.2,0.0); //sudo face
   }
    glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.47+ab,-0.29,0.0);
     glVertex3f(-0.63+ab,-0.29,0.0);
     glVertex3f(-0.60+ab,-0.59,0.0);
     glVertex3f(-0.50+ab,-0.59,0.0);
     glEnd();

//sudo leg1 upper
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.60+ab,-0.59,0.0);
     glVertex3f(-0.38+ab,-0.59,0.0);
     glVertex3f(-0.41+ab,-0.66,0.0);
     glVertex3f(-0.60+ab,-0.66,0.0);
     glEnd();

//sudo leg1 lower
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.38+ab,-0.59,0.0);
     glVertex3f(-0.34+ab,-0.86,0.0);
     glVertex3f(-0.37+ab,-0.86,0.0);
     glVertex3f(-0.44+ab,-0.59,0.0);
     glEnd();

//sudo leg2 upper
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.60+ab,-0.59,0.0);
     glVertex3f(-0.53+ab,-0.59,0.0);
     glVertex3f(-0.55+ab,-0.86,0.0);
     glVertex3f(-0.60+ab,-0.86,0.0);
     glEnd();

//sudo leg2 lower
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.55+ab,-0.84,0.0);
     glVertex3f(-0.55+ab,-0.89,0.0);
     glVertex3f(-0.77+ab,-0.88,0.0);
     glVertex3f(-0.77+ab,-0.84,0.0);
     glEnd();

//rose stick
glColor3f(0.71, 0.93, 0.72);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+ab,-0.25,0.0);
     glVertex3f(-0.252+ab,-0.25,0.0);
     glVertex3f(-0.252+ab,-0.42,0.0);
     glVertex3f(-0.25+ab,-0.42,0.0);
     glEnd();

//rose petals bottom base red
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.28+ab,-0.25,0.0);
     glVertex3f(-0.22+ab,-0.25,0.0);
     glVertex3f(-0.25+ab,-0.20,0.0);
     glEnd();

//rose petals bottom base green
glColor3f(0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.29+ab,-0.22,0.0);
     glVertex3f(-0.21+ab,-0.22,0.0);
     glVertex3f(-0.25+ab,-0.25,0.0);
     glEnd();


//rose petals right
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+ab,-0.25,0.0);
     glVertex3f(-0.23+ab,-0.25,0.0);
     glVertex3f(-0.22+ab,-0.20,0.0);
     glEnd();

//rose petals left
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+ab,-0.25,0.0);
     glVertex3f(-0.27+ab,-0.25,0.0);
     glVertex3f(-0.28+ab,-0.20,0.0);
     glEnd();



glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand lower
     glVertex3f(-0.55+ab,-0.30,0.0);
     glVertex3f(-0.40+ab,-0.42,0.0);
     glVertex3f(-0.40+ab,-0.46,0.0);
     glVertex3f(-0.56+ab,-0.38,0.0);
     glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand upper
     glVertex3f(-0.41+ab,-0.46,0.0);
     glVertex3f(-0.44+ab,-0.43,0.0);
     glVertex3f(-0.25+ab,-0.335,0.0);
     glVertex3f(-0.25+ab,-0.36,0.0);
     glEnd();


glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.55+ab,-0.30,0.0);
     glVertex3f(-0.38+ab,-0.45,0.0);
     glVertex3f(-0.41+ab,-0.46,0.0);
     glVertex3f(-0.56+ab,-0.38,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.35+ab,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.02*cos(i)-0.78+ab,0.04*sin(i)-0.86,0.0); 
     
   }
    glEnd();

    //sudo body ends


//sudo gf start 
     glColor3f(1.0, 0.0, 0.0);
      glBegin(GL_POLYGON);
    
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.05*cos(i)-0.29-gf,0.02*sin(i)-0.1,0.0); //hait
    
   }
    glEnd();

glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //right hand
     glVertex3f(0.69+gf,-0.30,0.0);
     glVertex3f(0.69+t1+gf,-0.59,0.0);
     glVertex3f(0.72+t1+gf,-0.60,0.0);
     glVertex3f(0.72+gf,-0.38,0.0);
     glEnd();


    glColor3f(0.93, 0.90, 0.66); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.29-gf,0.09*sin(i)-0.2,0.0); //sudo face
     
   }
    glEnd();


glColor3f(1.0, 0.0, 1.0);
glBegin(GL_POLYGON); //shirt top
     glVertex3f(0.65+gf,-0.29,0.0);
     glVertex3f(0.78+gf,-0.29,0.0);
     glVertex3f(0.75+gf,-0.59,0.0);
     glVertex3f(0.65+gf,-0.59,0.0);
     glVertex3f(0.62+gf,-0.36,0.0);
     glEnd();


glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //pant right
     glVertex3f(0.648+gf,-0.59,0.0);
     glVertex3f(0.752+gf,-0.59,0.0);
     glVertex3f(0.72+gf+t1,-0.85,0.0);
     glVertex3f(0.68+gf+t1,-0.85,0.0);
     glEnd();



glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //pant left
     glVertex3f(0.648+gf,-0.59,0.0);
     glVertex3f(0.752+gf,-0.59,0.0);
     glVertex3f(0.72+gf-t1,-0.85,0.0);
     glVertex3f(0.68+gf-t1,-0.85,0.0);
     glEnd();

//skirt
glColor3f(0.81, 0.45, 0.72);
glBegin(GL_POLYGON); 
     glVertex3f(0.648+gf,-0.59,0.0);
     glVertex3f(0.752+gf,-0.59,0.0);
     glVertex3f(0.771+gf,-0.66,0.0);
     glVertex3f(0.630+gf,-0.66,0.0);
     glEnd();

glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //left hand
     glVertex3f(0.69+gf,-0.30,0.0);
     glVertex3f(0.55+gf-t1-bg,-0.59+ag,0.0);
     glVertex3f(0.58+gf-t1-bg,-0.60+ag,0.0);
     glVertex3f(0.70+gf,-0.38,0.0);
     glEnd();


glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.29-t1-gf,0.02*sin(i)-0.87,0.0); 
     
   }
 glEnd();  

glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.29+t1-gf,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  
    //sudo gf ends
   /////                 SNOW        //////////
//////////////////////////////////////
for(l=0;l<=30;l++)
{m=0.2*l;    
for(j=0;j<=30;j++)//left move
{   
    k=0.4*j;

    glColor3f(1.0, 1.0, 1.0); //color in the polygon
    

    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    { x=0.01*cos(i)-0.9+k-n1;
     y=0.01*sin(i)+0.9-n+m;
    glVertex3f(x,y,0.0);
    }
    glEnd();

}
}


for(l=0;l<=30;l++)
{m=0.2*l; 
for(j=0;j<=30;j++)//right move
{   
     
    k=0.4*j;
    glColor3f(1.0, 1.0, 1.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1
    for(i=0;i<=360;i++)
   {     
    x=0.01*cos(i)-1.9+k+n1;
    y=0.01*sin(i)+0.8-n+m;
    glVertex3f(x,y,0.0);
   
   } 
    glEnd();

}
}


for(l=0;l<=30;l++)
{m=0.2*l; 
for(j=0;j<=30;j++)//straight move
{   

    k=0.3*j;
    glColor3f(1.0, 1.0, 1.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1
    for(i=0;i<=360;i++)
    {x=0.01*cos(i)-0.9+k;
        y=0.01*sin(i)+0.7-n+m;
        glVertex3f(x,y,0.0);
    }
    glEnd();

}
}



/////////////snow end
/////////////////////////////////////////////////


       int m=100*ag;
if(m%25==0)
{
 ag1=0;
  bg1=0;
}

n1+=r1;
n+=r;

   ag+=ag1;
   bg+=bg1;
//////////////////////
       glEnable(GL_DEPTH_TEST);
        
        char string[64];
        sprintf(string, "W I L L      Y O U      M A R R Y    M E");
        printtext(250,640,string);
        glutSwapBuffers();
/////////////////////
    glFlush();



}

else
{
v=9;
z=0.0;
 
///////sudo and gf
 t1=0.01;
 f1=0.00005;
 d1=1;
 k1;
 p=0;
 t2=1.2;
 f2=-0.00005;
////////////
}
//glFlush();
z+=0.05;

}
///////////////////////////  sudo propose //////////////////////////////////////////////////////////////////
////////////////////////////// sudo and gf   //////////////////////////////////////////////////////////

if(v==9)
{
int v1=z*1;
  if(v1<10)/////timing
{ 
  int i;
  float as,bg;
    

    glClearColor(0.74, 0.93, 1.0, 0.5); //color the
    // background light blue 1
    glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudogflColor3f(1.0, 0.96, 0.56);
    
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glBegin(GL_POLYGON); //ground
     glColor3f(0.61, 0.4, 0.12);
   
     glVertex3f(-1.0,-0.9,0.0);
     glVertex3f(1.0,-0.9,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();
for(as=-1.0;as<=1.0;as=as+0.2)
{
//roses
//rose stick1
glColor3f(0.0, 0.80, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+as+t2,-0.65,0.0);
     glVertex3f(-0.252+as+t2,-0.65,0.0);
     glVertex3f(-0.252+as+t2,-0.89,0.0);
     glVertex3f(-0.25+as+t2,-0.89,0.0);
     glEnd();

//rose petals bottom base red
glColor3f(1.0, 0.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.28+as+t2,-0.65,0.0);
     glVertex3f(-0.22+as+t2,-0.65,0.0);
     glVertex3f(-0.25+as+t2,-0.60,0.0);
     glEnd();

//rose petals bottom base green
glColor3f(0.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.29+as+t2,-0.62,0.0);
     glVertex3f(-0.21+as+t2,-0.62,0.0);
     glVertex3f(-0.25+as+t2,-0.65,0.0);
     glEnd();


//rose petals right
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+as+t2,-0.65,0.0);
     glVertex3f(-0.23+as+t2,-0.65,0.0);
     glVertex3f(-0.22+as+t2,-0.60,0.0);
     glEnd();

//rose petals left
glColor3f(1.0, 1.0, 0.0);
glBegin(GL_POLYGON);
     glVertex3f(-0.25+as+t2,-0.65,0.0);
     glVertex3f(-0.27+as+t2,-0.65,0.0);
     glVertex3f(-0.28+as+t2,-0.60,0.0);
     glEnd();

//roses 1 end
}

glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1
    glVertex3f(0.4+t2,-0.9,0.0);
    glVertex3f(0.42+t2,-0.8,0.0);
    glVertex3f(0.44+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1(small right)
    glVertex3f(0.4+t2,-0.9,0.0);
    glVertex3f(0.39+t2,-0.85,0.0);
    glVertex3f(0.38+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1(small left)
    glVertex3f(0.44+t2,-0.9,0.0);
    glVertex3f(0.45+t2,-0.85,0.0);
    glVertex3f(0.46+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2
    glVertex3f(-0.5+t2,-0.9,0.0);
    glVertex3f(-0.52+t2,-0.8,0.0);
    glVertex3f(-0.54+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2(small right)
    glVertex3f(-0.5+t2,-0.9,0.0);
    glVertex3f(-0.49+t2,-0.85,0.0);
    glVertex3f(-0.48+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 2(small left)
    glVertex3f(-0.54+t2,-0.9,0.0);
    glVertex3f(-0.55+t2,-0.85,0.0);
    glVertex3f(-0.56+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3
    glVertex3f(-0.84+t2,-0.9,0.0);
    glVertex3f(-0.86+t2,-0.8,0.0);
    glVertex3f(-0.88+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3(small right)
    glVertex3f(-0.84+t2,-0.9,0.0);
    glVertex3f(-0.83+t2,-0.85,0.0);
    glVertex3f(-0.82+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 3(small left)
    glVertex3f(-0.88+t2,-0.9,0.0);
    glVertex3f(-0.89+t2,-0.85,0.0);
    glVertex3f(-0.90+t2,-0.9,0.0);
   
  glEnd();

glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4
    glVertex3f(0.80+t2,-0.9,0.0);
    glVertex3f(0.82+t2,-0.8,0.0);
    glVertex3f(0.84+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4(small right)
    glVertex3f(0.80+t2,-0.9,0.0);
    glVertex3f(0.79+t2,-0.85,0.0);
    glVertex3f(0.78+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 4(small left)
    glVertex3f(0.84+t2,-0.9,0.0);
    glVertex3f(0.85+t2,-0.85,0.0);
    glVertex3f(0.86+t2,-0.9,0.0);
   
  glEnd();
   glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5
    glVertex3f(-1.0+t2,-0.9,0.0);
    glVertex3f(-1.0+t2,-0.8,0.0);
    glVertex3f(-0.97+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5(small right)
    glVertex3f(-0.94+t2,-0.9,0.0);
    glVertex3f(-0.93+t2,-0.85,0.0);
    glVertex3f(-0.92+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 5(small left)
    glVertex3f(-0.98+t2,-0.9,0.0);
    glVertex3f(-0.99+t2,-0.85,0.0);
    glVertex3f(-0.10+t2,-0.9,0.0);
   
  glEnd();

   glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6
    glVertex3f(1.0+t2,-0.9,0.0);
    glVertex3f(1.0+t2,-0.8,0.0);
    glVertex3f(0.97+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6(small right)
    glVertex3f(0.94+t2,-0.9,0.0);
    glVertex3f(0.93+t2,-0.85,0.0);
    glVertex3f(0.92+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(0.0, 1.0, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 6(small left)
    glVertex3f(0.98+t2,-0.9,0.0);
    glVertex3f(0.99+t2,-0.85,0.0);
    glVertex3f(0.10+t2,-0.9,0.0);
   
  glEnd();
  glColor3f(1.0, 0.843, 0.0); //color in the polygon
   glBegin(GL_POLYGON);//Sun
   for(i=0;i<=90;i++)
   {
     glVertex3f(0.1*cos(i)-0.6,0.1*sin(i)+0.7,0.0);
     //glVertex3f()
   }
    glEnd();
  glColor3f(0.545, 0.396, 0.031); //color in the polygon
    glBegin(GL_POLYGON);//TREE lower
    glVertex3f(-0.08+t2,-0.9,0.0);
    glVertex3f(0.08+t2,-0.9,0.0);
    glVertex3f(0.08+t2,-0.4,0.0);
    glVertex3f(-0.08+t2,-0.4,0.0);
    glEnd();
     glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper 1
    
    glVertex3f(-0.36+t2,-0.4,0.0);
    glVertex3f(0.0+t2,0.1,0.0);
    glVertex3f(0.36+t2,-0.4,0.0);
    glEnd();
    glColor3f(0.0+t2, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper2
    glVertex3f(-0.31+t2,-0.2,0.0);
    glVertex3f(-0.0+t2,0.22,0.0);
    glVertex3f(0.31+t2,-0.2,0.0);
    
    glEnd();
    glColor3f(0.0, 0.391, 0.0); //color in the polygon
    glBegin(GL_POLYGON);//TREE upper3
    glVertex3f(-0.25+t2,0.0,0.0);
    glVertex3f(-0.0+t2,0.42,0.0);
    glVertex3f(0.25+t2,0.0,1.0);
    
    glEnd();
    glEnd();


k1=t1*100;
  if(k1%10==0)
        {p++;
            if(d1==1)d1=2;
            else d1=1;
        }
    
 if(d1==1)
 {t1+=f1;}
else
    {t1=t1-f1;}


  float gf=0.30;

   

 glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON); //ground
  
     glVertex3f(-1.0,-0.89,0.0);
     glVertex3f(1.0,-0.89,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();
//sudo body
    glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.7,0.09*sin(i)-0.2,0.0); //sudo face
   }
    glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.69,-0.30,0.0);
     glVertex3f(-0.69+t1,-0.59,0.0);
     glVertex3f(-0.72+t1,-0.60,0.0);
     glVertex3f(-0.72,-0.38,0.0);
     glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.62,-0.29,0.0);
     glVertex3f(-0.78,-0.29,0.0);
     glVertex3f(-0.75,-0.59,0.0);
     glVertex3f(-0.65,-0.59,0.0);
     glEnd();


glColor3f(0.81, 0.45, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.648,-0.59,0.0);
     glVertex3f(-0.752,-0.59,0.0);
     glVertex3f(-0.72-t1,-0.85,0.0);
     glVertex3f(-0.68-t1,-0.85,0.0);
     glEnd();


glColor3f(0.81, 0.45, 0.12);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.648,-0.59,0.0);
     glVertex3f(-0.752,-0.59,0.0);
     glVertex3f(-0.72+t1,-0.85,0.0);
     glVertex3f(-0.68+t1,-0.85,0.0);
     glEnd();


glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.69,-0.30,0.0);
     glVertex3f(-0.55-t1,-0.59,0.0);
     glVertex3f(-0.58-t1,-0.60,0.0);
     glVertex3f(-0.70,-0.38,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.69-t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.69+t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

    //sudo body ends

    //sudo gf start 
     glColor3f(1.0, 0.0, 0.0);
      glBegin(GL_POLYGON);
    
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.05*cos(i)-0.39,0.02*sin(i)-0.1,0.0); //hait
    
   }
    glEnd();

glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //right hand
     glVertex3f(-0.69+gf,-0.30,0.0);
     glVertex3f(-0.69+t1+gf,-0.59,0.0);
     glVertex3f(-0.72+t1+gf,-0.60,0.0);
     glVertex3f(-0.72+gf,-0.38,0.0);
     glEnd();


    glColor3f(0.93, 0.90, 0.66); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.39,0.09*sin(i)-0.2,0.0); //sudo face
     
   }
    glEnd();


glColor3f(1.0, 0.0, 1.0);
glBegin(GL_POLYGON); //shirt top
     glVertex3f(-0.65+gf,-0.29,0.0);
     glVertex3f(-0.78+gf,-0.29,0.0);
     glVertex3f(-0.75+gf,-0.59,0.0);
     glVertex3f(-0.65+gf,-0.59,0.0);
     glVertex3f(-0.62+gf,-0.36,0.0);
     glEnd();


glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //pant right
     glVertex3f(-0.648+gf,-0.59,0.0);
     glVertex3f(-0.752+gf,-0.59,0.0);
     glVertex3f(-0.72+gf+t1,-0.85,0.0);
     glVertex3f(-0.68+gf+t1,-0.85,0.0);
     glEnd();



glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.648+gf,-0.59,0.0);
     glVertex3f(-0.752+gf,-0.59,0.0);
     glVertex3f(-0.72+gf-t1,-0.85,0.0);
     glVertex3f(-0.68+gf-t1,-0.85,0.0);
     glEnd();

//skirt
glColor3f(0.81, 0.45, 0.72);
glBegin(GL_POLYGON); 
     glVertex3f(-0.648+gf,-0.59,0.0);
     glVertex3f(-0.752+gf,-0.59,0.0);
     glVertex3f(-0.771+gf,-0.66,0.0);
     glVertex3f(-0.630+gf,-0.66,0.0);
     glEnd();

glColor3f(0.93, 0.90, 0.66);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.69+gf,-0.30,0.0);
     glVertex3f(-0.55+gf-t1,-0.59,0.0);
     glVertex3f(-0.58+gf-t1,-0.60,0.0);
     glVertex3f(-0.70+gf,-0.38,0.0);
     glEnd();


glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.39-t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  

glColor3f(0.66, 0.52, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.39+t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();  
    //sudo gf ends
  //  glFlush();
t2+=f2;
 }
else
{
  v=10;
  z=0.0;


//////

 n=0.01;
 r=0.02;
 n1=0.01;
 r1=0.005;

////////////////////////////////////

}    


    z+=z1;
    glFlush();

}

////////////////////////////////////////    sudo-n-gf                      ////////////////// /////////////////////////////////////
//////////////////////////////////////////////         SNOW               ////////////////////////////////////////////////////////

if(v==10)
{
int v1=z*1;
  if(v1<10)/////timing
{
int i,j;

float gf=0.70,k,m,x,y;
    glClearColor(0.0, 1.0, 1.0, 0.5); //color the background
    //glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudo gf glColor3f(1.0, 0.96, 0.56);
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);

glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON); //ground
  
     glVertex3f(-1.0,-0.89,0.0);
     glVertex3f(1.0,-0.89,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();

  glColor3f(1.0, 0.00, 1.0); //color umberlla
    
    glBegin(GL_POLYGON);// UMBERALLa
    
    for(i=-10;i<=190;i++)
    {   m=3.14*i/180;
       y=0.4*sin(m);
       x=0.8*cos(m);
       glVertex2f(x,y); 
    }
    glEnd();


      glColor3f(0.70, 0.57, 0.45); //color of table
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.35*cos(i),0.09*sin(i)-0.45,0.0); //table
   }
    glEnd();

    //table umbrella
glColor3f(1.0,1.0,1.0);
glBegin(GL_LINES);

glVertex3f(0.0,-0.45,0.0);
glVertex3f(0.0,0.2,0.0);

glEnd();

//table legs
glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //left
     glVertex3f(-0.27,-0.51,0.0);
     glVertex3f(-0.3,-0.49,0.0);
     glVertex3f(-0.3,-0.89,0.0);
     glVertex3f(-0.29,-0.89,0.0);
     glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //right
     glVertex3f(0.27,-0.51,0.0);
     glVertex3f(0.3,-0.49,0.0);
     glVertex3f(0.3,-0.89,0.0);
     glVertex3f(0.29,-0.89,0.0);
     glEnd();
//table ends

//chair of sudo
//chair back
glColor3f(0.19, 0.25, 0.32);
glBegin(GL_POLYGON); 
     glVertex3f(-0.63,-0.3,0.0);
     glVertex3f(-0.65,-0.3,0.0);
     glVertex3f(-0.65,-0.89,0.0);
     glVertex3f(-0.63,-0.89,0.0);
     glEnd();  
//chair sit
glColor3f(0.29, 0.35, 0.32);
glBegin(GL_POLYGON); 
     glVertex3f(-0.63,-0.66,0.0);
     glVertex3f(-0.46,-0.66,0.0);
     glVertex3f(-0.46,-0.69,0.0);
     glVertex3f(-0.63,-0.69,0.0);
     glEnd();     

//chair leg right
glColor3f(0.29, 0.95, 0.72);
glBegin(GL_POLYGON); 
     glVertex3f(-0.46,-0.66,0.0);
     glVertex3f(-0.46,-0.89,0.0);
     glVertex3f(-0.44,-0.89,0.0);
     glVertex3f(-0.44,-0.66,0.0);
     glEnd(); 
//chair ends


//chair of sudo's gf
//chair back
glColor3f(0.19, 0.25, 0.32);
glBegin(GL_POLYGON); 
     glVertex3f(0.63,-0.3,0.0);
     glVertex3f(0.65,-0.3,0.0);
     glVertex3f(0.65,-0.89,0.0);
     glVertex3f(0.63,-0.89,0.0);
     glEnd();  
//chair sit
glColor3f(0.29, 0.35, 0.32);
glBegin(GL_POLYGON); 
     glVertex3f(0.63,-0.66,0.0);
     glVertex3f(0.46,-0.66,0.0);
     glVertex3f(0.46,-0.69,0.0);
     glVertex3f(0.63,-0.69,0.0);
     glEnd();     

//chair leg right
glColor3f(0.29, 0.95, 0.72);
glBegin(GL_POLYGON); 
     glVertex3f(0.46,-0.66,0.0);
     glVertex3f(0.46,-0.89,0.0);
     glVertex3f(0.44,-0.89,0.0);
     glVertex3f(0.44,-0.66,0.0);
     glEnd(); 
//chair ends


//sudo body

  glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.55,0.09*sin(i)-0.2,0.0); //sudo face
   }
    glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.47,-0.29,0.0);
     glVertex3f(-0.63,-0.29,0.0);
     glVertex3f(-0.60,-0.59,0.0);
     glVertex3f(-0.50,-0.59,0.0);
     glEnd();

//sudo leg upper
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.60,-0.59,0.0);
     glVertex3f(-0.38,-0.59,0.0);
     glVertex3f(-0.41,-0.66,0.0);
     glVertex3f(-0.60,-0.66,0.0);
     glEnd();

//sudo leg lower
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.38,-0.59,0.0);
     glVertex3f(-0.34,-0.86,0.0);
     glVertex3f(-0.37,-0.86,0.0);
     glVertex3f(-0.44,-0.59,0.0);
     glEnd();



glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.55,-0.30,0.0);
     glVertex3f(-0.28,-0.45,0.0);
     glVertex3f(-0.31,-0.46,0.0);
     glVertex3f(-0.56,-0.38,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.35,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

    //sudo body ends


//sudo gf
glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)+0.55,0.09*sin(i)-0.2,0.0); //sudo gf face
   }
    glEnd();

    glColor3f(1.0, 0.0, 0.0);
      glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.05*cos(i)+0.55,0.02*sin(i)-0.1,0.0); //hait
     
   }
    glEnd();


glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt top
     glVertex3f(0.50,-0.29,0.0);
     glVertex3f(0.63,-0.29,0.0);
     glVertex3f(0.60,-0.59,0.0);
     glVertex3f(0.50,-0.59,0.0);
     glVertex3f(0.47,-0.34,0.0);
     glEnd();

//sudo gf leg upper
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(0.60,-0.59,0.0);
     glVertex3f(0.38,-0.59,0.0);
     glVertex3f(0.41,-0.66,0.0);
     glVertex3f(0.60,-0.66,0.0);
     glEnd();

//sudo gf skirt
glColor3f(0.91, 0.55, 0.42);
glBegin(GL_POLYGON); 
     glVertex3f(0.60,-0.59,0.0);
     glVertex3f(0.45,-0.58,0.0);
     glVertex3f(0.47,-0.66,0.0);
     glVertex3f(0.60,-0.66,0.0);
     glEnd();

//sudo gf leg lower
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(0.38,-0.59,0.0);
     glVertex3f(0.34,-0.86,0.0);
     glVertex3f(0.37,-0.86,0.0);
     glVertex3f(0.42,-0.59,0.0);
     glEnd();



glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(0.55,-0.30,0.0);
     glVertex3f(0.28,-0.45,0.0);
     glVertex3f(0.31,-0.46,0.0);
     glVertex3f(0.56,-0.38,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)+0.35,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();

    //sudo gf body ends

/*b=n1*100;
  if(b==4)
    {n1=0-n1;}*/
/////                 SNOW        //////////
//////////////////////////////////////////////////////
for(l=0;l<=30;l++)
{m=0.2*l;    
for(j=0;j<=30;j++)//left move
{   
    k=0.4*j;

    glColor3f(1.0, 1.0, 1.0); //color in the polygon
    

    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<=360;i++)
    
    { x=0.01*cos(i)-0.9+k-n1;
     y=0.01*sin(i)+0.9-n+m;
    if(x>=-0.7 && x<=0.7 && y<=0.3){}
    else glVertex3f(x,y,0.0);
    }
    glEnd();

}
}


for(l=0;l<=30;l++)
{m=0.2*l; 
for(j=0;j<=30;j++)//right move
{   
     
    k=0.4*j;
    glColor3f(1.0, 1.0, 1.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1
    for(i=0;i<=360;i++)
   {     
    x=0.01*cos(i)-1.9+k+n1;
    y=0.01*sin(i)+0.8-n+m;
    if(x>=-0.7 && x<=0.7 && y<=0.3){}
    else
    glVertex3f(x,y,0.0);
   
   } 
    glEnd();

}
}


for(l=0;l<=30;l++)
{m=0.2*l; 
for(j=0;j<=30;j++)//straight move
{   

    k=0.3*j;
    glColor3f(1.0, 1.0, 1.0); //color in the polygon
    glBegin(GL_POLYGON);//Grass 1
    for(i=0;i<=360;i++)
    {x=0.01*cos(i)-0.9+k;
        y=0.01*sin(i)+0.7-n+m;
        if(x>=-0.7 && x<=0.7 && y<=0.3){}
    else
        glVertex3f(x,y,0.0);
    }
    glEnd();

}
}


n1+=r1;
n+=r;

    glFlush();


 }
else
{
  v=11;
  z=0.0;


//////


////////////////////////////////////

}    


    z+=0.05;
    glFlush();

}

/////////////////////////////////            S NO  W         ///////////////////////////////////////////////


/////////////////////////////        GRAVE              ////////////////////////////////////////////

if(v==11)
{
int v1=z*1;
  if(v1<10)/////timing
{ 

float i,x,y,m;
    float mk=0.2,gr=0.2;

    glClearColor(.411, .411, .411, 0.5); //color the background
    glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudogflColor3f(1.0, 0.96, 0.56);
    
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
    glBegin(GL_POLYGON); //ground
     glColor3f(0.61, 0.4, 0.12);
   
     glVertex3f(-1.0,-0.9,0.0);
     glVertex3f(1.0,-0.9,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();

//////////////////////tree

       glColor3f(0.545, 0.396, 0.031);
  
     glBegin(GL_POLYGON);
   
     glVertex3f(0.3,-0.9,0.0);//tree lower
     glVertex3f(0.3,-0.0+mk,0.0);
     glVertex3f(0.38,-0.0+mk,0.0);
     glVertex3f(0.4,-0.9,0.0);
     glEnd();
      //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.3,-0.0+mk,0.0);//tree upper1
     glVertex3f(0.0,0.3+mk,0.0);
     glVertex3f(0.06,0.32+mk,0.0);
     glVertex3f(0.34,-0.0+mk,0.0);
     glEnd();
     //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.34,-0.0+mk,0.0);//tree upper 2
     glVertex3f(0.64,0.3+mk,0.0);
     glVertex3f(0.70,0.32+mk,0.0);
     glVertex3f(0.38,-0.0+mk,0.0);
     glEnd();
     //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.45,0.10+mk,0.0);//tree upper2 left
     glVertex3f(0.44,0.48+mk,0.0);
     glVertex3f(0.48,0.37+mk,0.0);
     glVertex3f(0.5,0.25+mk,0.0);
     glEnd();

     //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.50,0.28+mk,0.0);//tree upper2 right
     glVertex3f(0.4,0.20+mk,0.0);
     glVertex3f(0.67,0.15+mk,0.0);
     glVertex3f(0.65,0.10+mk,0.0);
     glEnd();
      //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.25,0.20+mk,0.0);//tree upper1 right
     glVertex3f(0.3,-0.05+mk,0.0);
     glVertex3f(0.31,0.38+mk,0.0);
     glVertex3f(0.27,0.17+mk,0.0);
     glEnd();
      //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.12,0.22+mk,0.0);//tree upper1 left
     glVertex3f(0.02,0.20+mk,0.0);
     glVertex3f(0.02,0.25+mk,0.0);
     glVertex3f(0.22,0.28+mk,0.0);
     glEnd();
 

/////////////////treee

     glColor3f(0.545, .2, .2); //color in the polygon
    
    glBegin(GL_POLYGON);//Grass 1
    
    for(i=0;i<180;i++)
    {   m=3.14*(i/180);
       y=0.3*sin(m)-0.37;
       x=0.2*cos(m)+0.4;
       glVertex2f(x,y); 
    }
    glEnd();
     glBegin(GL_POLYGON); 
     glColor3f(1, 1, 1);
   
     glVertex3f(0.2,-0.35,0.0);
     glVertex3f(0.2,-0.9,0.0);
     glVertex3f(0.6,-0.9,0.0);
     glVertex3f(0.6,-0.35,0.0);
     glEnd();

     glBegin(GL_POLYGON); 
     glColor3f(0, 1, 1);
   
     glVertex3f(-0.2,-0.85,0.0);
     glVertex3f(-0.2,-0.9,0.0);
     glVertex3f(0.6,-0.9,0.0);
     glVertex3f(0.6,-0.85,0.0);
     glEnd();
//sudo body

  glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.55+gr,0.09*sin(i)-0.2,0.0); //sudo face
   }
    glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.47+gr,-0.29,0.0);
     glVertex3f(-0.63+gr,-0.29,0.0);
     glVertex3f(-0.60+gr,-0.59,0.0);
     glVertex3f(-0.50+gr,-0.59,0.0);
     glEnd();

//sudo leg2 upper
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.60+gr,-0.59,0.0);
     glVertex3f(-0.50+gr,-0.59,0.0);
     glVertex3f(-0.52+gr,-0.88,0.0);
     glVertex3f(-0.60+gr,-0.86,0.0);
     glEnd();

//sudo leg2 lower
glColor3f(0.91, 0.25, 0.12);
glBegin(GL_POLYGON); 
     glVertex3f(-0.55+gr,-0.84,0.0);
     glVertex3f(-0.55+gr,-0.89,0.0);
     glVertex3f(-0.77+gr,-0.90,0.0);
     glVertex3f(-0.77+gr,-0.84,0.0);
     glEnd();


glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand lower
     glVertex3f(-0.55+gr,-0.30,0.0);
     glVertex3f(-0.40+gr,-0.56,0.0);
     glVertex3f(-0.40+gr,-0.60,0.0);
     glVertex3f(-0.56+gr,-0.38,0.0);
     glEnd();

glBegin(GL_POLYGON); //left hand lower
     glVertex3f(-0.40+gr,-0.60,0.0);
     glVertex3f(-0.56+gr,-0.38,0.0);
     glEnd();


glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot right
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.02*cos(i)-0.78+gr,0.04*sin(i)-0.86,0.0); 
     
   }
    glEnd();

//////////////////////
       glEnable(GL_DEPTH_TEST);
        
        char string[1004];
        sprintf(string, "R I P");
        printtext(670,270,string);
        sprintf(string, "S U D O  W I F E");
        printtext(600,220,string);
       
        glutSwapBuffers();
/////////////////////
    glFlush();



}
else
{
  v=12;
  z=0.0;


///////// OLD INIIZILAIZE//////////////
 t1=0.01;
f1=0.00005;
 d1=1;
 k1;

t2=0.01;
f2=0.0001;


////////////////////////////////////

}    


    z+=z1;
    glFlush();


}




////////////////////////                 GRAVE END  ////////////////////////////////////////////////

////////////////////     old walk    .//////////////////////////////////////////////////////////////////////////

if(v==12)
{
int v1=z*1;
  if(v1<5)/////timing
{ 
  t2+=f2;
int i=t2*10;  
    if(i==15)
    {
      t2=-1.5;
      
    }
    
  float mk=0.2;
  glClearColor(0.74, 0.93, 1.0, 0.5); //color the background
    glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudogflColor3f(1.0, 0.96, 0.56);
    
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
  glColor3f(1.0, 0.843, 0.0); //color in the polygon
   glBegin(GL_POLYGON);
   for(i=0;i<=90;i++)
   {
     glVertex3f(0.1*cos(i)-0.7,0.1*sin(i)+0.6,0.0);
     //glVertex3f()
   }
    glEnd();
    glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON);
   
     glVertex3f(-1.0,-0.9,0.0);//Ground
     glVertex3f(1.0,-0.9,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();
         glColor3f(0.545, 0.396, 0.031);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.3-t2,-0.9,0.0);//tree lower
     glVertex3f(0.3-t2,-0.4+mk,0.0);
     glVertex3f(0.38-t2,-0.4+mk,0.0);
     glVertex3f(0.4-t2,-0.9,0.0);
     glEnd();
      //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.3-t2,-0.4+mk,0.0);//tree upper1
     glVertex3f(0.0-t2,-0.1+mk,0.0);
     glVertex3f(0.06-t2,-0.12+mk,0.0);
     glVertex3f(0.34-t2,-0.4+mk,0.0);
     glEnd();
     //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.34-t2,-0.4+mk,0.0);//tree upper 2
     glVertex3f(0.64-t2,-0.1+mk,0.0);
     glVertex3f(0.70-t2,-0.12+mk,0.0);
     glVertex3f(0.38-t2,-0.4+mk,0.0);
     glEnd();
     //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.45-t2,-0.30+mk,0.0);//tree upper2 left
     glVertex3f(0.44-t2,-0.08+mk,0.0);
     glVertex3f(0.48-t2,-0.07+mk,0.0);
     glVertex3f(0.5-t2,-0.25+mk,0.0);
     glEnd();

     //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.50-t2,-0.28+mk,0.0);//tree upper2 right
     glVertex3f(0.4-t2,-0.20+mk,0.0);
     glVertex3f(0.67-t2,-0.35+mk,0.0);
     glVertex3f(0.65-t2,-0.30+mk,0.0);
     glEnd();
      //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.25-t2,-0.20+mk,0.0);//tree upper1 right
     glVertex3f(0.3-t2,-0.45+mk,0.0);
     glVertex3f(0.31-t2,-0.08+mk,0.0);
     glVertex3f(0.27-t2,-0.37+mk,0.0);
     glEnd();
      //glColor3f(0.011, 0.011, 0.011);
     glBegin(GL_POLYGON);
   
     glVertex3f(0.12-t2,-0.22+mk,0.0);//tree upper1 left
     glVertex3f(0.02-t2,-0.20+mk,0.0);
     glVertex3f(0.02-t2,-0.25+mk,0.0);
     glVertex3f(0.22-t2,-0.28+mk,0.0);
     glEnd();
      
    k1=t1*100;
  if(k1%10==0)
        {
            if(d1==1)d1=2;
            else d1=1;
        }
    
 if(d1==1)
 {t1+=f1;}
else
    {t1=t1-f1;}
int j;
float gf=0.30;
    

   

 glColor3f(0.61, 0.4, 0.12);
glBegin(GL_POLYGON); //ground
  
     glVertex3f(-1.0,-0.89,0.0);
     glVertex3f(1.0,-0.89,0.0);
     glVertex3f(1.0,-1.0,0.0);
     glVertex3f(-1.0,-1.0,0.0);
     glEnd();
//sudo body
    glColor3f(0.80, 0.77, 0.45); //color in the polygon
    glBegin(GL_POLYGON);
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.06*cos(i)-0.66,0.09*sin(i)-0.215,0.0); //sudo face
   }
    glEnd();

glColor3f(0.11, 0.45, 0.12);
glBegin(GL_POLYGON); //shirt
     glVertex3f(-0.59,-0.31,0.0);
     glVertex3f(-0.75,-0.29,0.0);
     glVertex3f(-0.75,-0.59,0.0);
     glVertex3f(-0.65,-0.59,0.0);
     glEnd();


glColor3f(0.81, 0.45, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.648,-0.59,0.0);
     glVertex3f(-0.752,-0.59,0.0);
     glVertex3f(-0.72+t1,-0.85,0.0);
     glVertex3f(-0.68+t1,-0.85,0.0);
     glEnd();
glColor3f(0.81, 0.45, 0.12);
glBegin(GL_POLYGON); //pant left
     glVertex3f(-0.648,-0.59,0.0);
     glVertex3f(-0.752,-0.59,0.0);
     glVertex3f(-0.72-t1,-0.85,0.0);
     glVertex3f(-0.68-t1,-0.85,0.0);
     glEnd();

//sudo stick handle
glColor3f(0.51, 0.13, 0.22);
glBegin(GL_POLYGON); 
     glVertex3f(-0.58,-0.58,0.0);
     glVertex3f(-0.52,-0.58,0.0);
     glVertex3f(-0.52,-0.60,0.0);
     glVertex3f(-0.58,-0.60,0.0);
     glEnd();

//sudo stick
glColor3f(0.51, 0.13, 0.22);
glBegin(GL_POLYGON); 
     glVertex3f(-0.55,-0.58,0.0);
     glVertex3f(-0.53,-0.58,0.0);
     glVertex3f(-0.53+t1,-0.89,0.0);
     glVertex3f(-0.55+t1,-0.89,0.0);
     
     glEnd();

glColor3f(0.71, 0.53, 0.12);
glBegin(GL_POLYGON); //left hand
     glVertex3f(-0.67,-0.30,0.0);
     glVertex3f(-0.53,-0.58,0.0);
     glVertex3f(-0.56,-0.59,0.0);
     glVertex3f(-0.70,-0.38,0.0);
     glEnd();



glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.69+t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();
glColor3f(0.56, 0.53, 0.12);
glBegin(GL_POLYGON);//foot left
   for(i=0;i<=360;i++)
   {
     glVertex3f(0.04*cos(i)-0.69-t1,0.02*sin(i)-0.87,0.0); 
     
   }
    glEnd();
    //sudo body ends

  
    glFlush();
 
}
else
{
  v=13;
  z=0.0;



}    


    z+=z1;
    glFlush();


}


//////////////////////////////////////////////////////// halt

if(v==13)
{
    
  float mk=0.2;
  glClearColor(0.74, 0.93, 1.0, 0.5); //color the background
    glClear(GL_COLOR_BUFFER_BIT); //clears background image
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //sudogflColor3f(1.0, 0.96, 0.56);
    
    glOrtho(-1.0, 1.0, -1.0, 1.0, -1.0, 1.0);
//////////////////////
       glEnable(GL_DEPTH_TEST);
        
        char string[64];
        sprintf(string, " S U D 0              H A L T");
        printtext(250,640,string);
         glutSwapBuffers();



  


    z+=z1;
    glFlush();


}

    glutPostRedisplay();
  

}

void dis()
{
//renderFunction1();
  renderFunction();
  
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(720,720); //size of window
    glutInitWindowPosition(100,100); //where to pop window(x,y)
    glutCreateWindow("LIFE CYCLE - SUDO"); //creates window
   //  glutDisplayFunc(dis);
   glutDisplayFunc(renderFunction);

      
     glutMainLoop();   
  
  
    return 0;

}