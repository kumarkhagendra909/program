zinclude <dos.h>
#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main(void)
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int x, y,i;
   int radius = 20;

   /* initialize graphics and local variables */
   initgraph(&gdriver, &gmode, "//turboc3//bgi");

   /* read result of initialization */
   errorcode = graphresult();
   if (errorcode != grOk)  /* an error occurred */
   {
      printf("Graphics error: %s\n", grapherrormsg(errorcode));
      printf("Press any key to halt:");
      getch();
      exit(1); /* terminate with an error code */
   }

   x =0;

   y = getmaxy();
   setcolor(getmaxcolor());
   for(i=0;i<420;i++)
   {
   /*draw the circle */
   rectangle(450,0,590,0);
     circle(x, y, 100);
    circle(460,60, 50);
   circle(x+i, y-i, radius);
   delay(30);
   cleardevice();

}
  rectangle(450,0,590,0);
     circle(x, y, 100);
    circle(460,60, 50);
 circle(x+i, y-i, radius);




   /* clean up */
   getch();
   closegraph();
   return 0;
}

