#include<math.h>
class fill_circle
{
public:
 void Fill_circle(const int,const int,const int,int);
 void Line(const int,const int,const int,const int);
};

 void fill_circle::Fill_circle(const int x,const int y,const int r,int color)
    {
       int x1;
       int x2;

       int counter=(y+r);

       setcolor(color);
       for(int count=(y-r);count<=counter;count++)
      {
         x1=int(x+sqrt((r*r)-((count-y)*(count-y)))+0.5);
         x2=int(x-sqrt((r*r)-((count-y)*(count-y)))+0.5);

         Line(x1,count,x2,count);
      }
    }

void fill_circle::Line(const int x_1,const int y_1,const int x_2,const int y_2)
    {
       int color=getcolor( );

       int x1=x_1;
       int y1=y_1;

       int x2=x_2;
       int y2=y_2;

       if(x_1>x_2)
      {
         x1=x_2;
         y1=y_2;

         x2=x_1;
         y2=y_1;
      }

       int dx=abs(x2-x1);
       int dy=abs(y2-y1);
       int inc_dec=((y2>=y1)?1:-1);

       if(dx>dy)
      {
         int two_dy=(2*dy);
         int two_dy_dx=(2*(dy-dx));
         int p=((2*dy)-dx);

         int x=x1;
         int y=y1;

         putpixel(x,y,color);

         while(x<x2)
        {
           x++;

           if(p<0)
              p+=two_dy;

           else
              {
             y+=inc_dec;
             p+=two_dy_dx;
              }

           putpixel(x,y,color);
        }
      }

       else
      {
         int two_dx=(2*dx);
         int two_dx_dy=(2*(dx-dy));
         int p=((2*dx)-dy);

         int x=x1;
         int y=y1;

         putpixel(x,y,color);

         while(y!=y2)
        {
           y+=inc_dec;

           if(p<0)
              p+=two_dx;

           else
              {
             x++;
             p+=two_dx_dy;
              }

           putpixel(x,y,color);
        }
      }
    }
