#include <GL/gl.h>  // Librerias a utilizar
#include <GL/glut.h>
#include <math.h>
void display(void)
{
    
    glPointSize(1);
    glColor3f(1.0f,1.0f,1.0f);
    GLfloat angulo;
     
    /*
      glBegin(GL_TRIANGLES);
      glColor3f(0.0f,1.0f,1.0f);
      glVertex3f(-2.0f,2.0,0.0f);
      glVertex3f(2.0f,2.0,0.0f);
      glVertex3f(0.0f,5.0,0.0f);
    
    */
    
    glBegin(GL_POLYGON);
     glColor3f(0.0f,1.0f,0.0f);
    glVertex3f(2.0f,2.0f,0.0f);
    glVertex3f(-2.0f,2.0f,0.0f);
    glVertex3f(-2.0f,-2.0f,0.0f);
    glVertex3f(2.0f,-2.0f,0.0f);
    
    
           glEnd();
    glFlush ();
    
      glBegin(GL_TRIANGLES);
      glColor3f(0.0f,1.0f,1.0f);
      glVertex3f(-2.0f,2.0,0.0f);
      glVertex3f(2.0f,2.0,0.0f);
      glVertex3f(0.0f,5.0,0.0f);
    
    
         glEnd();
    glFlush ();
      
      
      

 
     glBegin(GL_LINES);
     glColor3f(1.0f,1.0f,0.0f);
     glVertex3f(-2.0f,-2.0,0.0f);
     glVertex3f(-2.0f,-2.0f,0.0f);
     glVertex3f(-2.0f,-1.5f,0.0f);
     glVertex3f(2.0f,-1.5f,0.0f);
 

   
    
        
      
      
   
    glEnd();
    glFlush ();
    
   
   

}
void init (void)
{
    glMatrixMode(GL_PROJECTION);//Para iniciar el tipo de matriz
    glLoadIdentity();//Trasnformacion en la matriz
    glOrtho(-10.0, 10.0, -10.0, 10.0, -10.0, 10.0);//Ortho mostrardo la ubicacion en 2PI  Y 4PI mas cerca.
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);//Modo de colores, en la pantalla
    glutInitWindowSize (600, 600);//Amplitud de la pantalla a mostrar
    glutInitWindowPosition (200, 150);//Ubicacion de la pantalla dentro del monitor 
    glutCreateWindow ("Ejemplo Cuadrado");//Nomnbre a mostrar del programa 
    init ();
    glutDisplayFunc(display);//Funcion  de devolucion de pantalla
    glutMainLoop();
    
    return 0;
}
