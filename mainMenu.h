#include "conio.h"
#include <iostream>
#include "graphics.h"
using namespace std;
class WELCOME
{
      public:
             int play,inst,exit;
             WELCOME()
             {
                      play=0;
                      inst=0;
                      exit=0;
             }
             int homepage()
             {
                  int x,y;
                   clearviewport();
                   setbkcolor(9);
                  settextstyle(1,HORIZ_DIR,8);
                  setcolor(15);               // TITLE
                  outtextxy(370,40,"Poker");
                  settextstyle(1,HORIZ_DIR,7);   //Menu
                  setcolor(0);
                  outtextxy(430,240,"Play");                  
//                  rectangle(430,230,620,310);
                  outtextxy(250,350,"How to play ??");                  
//                  rectangle(250,340,920,420);
                  outtextxy(430,460,"Exit");  
//                  rectangle(430,450,620,530);          
                    get_choice:                                     // mouse label
                      if(!ismouseclick(WM_LBUTTONDOWN)){}        // idle mouse
                      else
                      getmouseclick(WM_LBUTTONDOWN, x, y);
                      if((x>=430 &&x<=620) &&(y>=230 &&y<=310))
                      {
                                 play=1;
                                 inst=0;
                                 exit=0;
                      }
                      else
                      if((x>=250 &&x<=920) &&(y>=340 &&y<=420))
                      {
                                 inst=1;
                                 play=0;
                                 exit=0;
                      }
                      else
                      if((x>=430 &&x<=620) &&(y>=450 &&y<=530))
                      {
                                 play=0;
                                 inst=0;
                                 exit=1;
                      }
                      else
                      goto get_choice;
             }
             void instructions()
             { 
                  int x,y; 
                  clearviewport();
                  setbkcolor(9);
                  settextstyle(1,HORIZ_DIR,4);
                  setcolor(11);               // TITLE
                  outtextxy(130,30,"The classic poker for one player !!!");
                  setcolor(11);
                  settextstyle(1,HORIZ_DIR,3);
                  outtextxy(110,90,"Fight against computer to win maximum money");
                  setcolor(13);
                  settextstyle(1,HORIZ_DIR,3);
                  outtextxy(110,140,"Pot limit is $25000 !");
                  outtextxy(110,185,"Maximum of 4 blinds can be played !");
                  outtextxy(110,230,"The winning card combination follows the order:");
                  outtextxy(140,290,"1.Trio - Three same cards");
                  outtextxy(140,340,"2.Pure Sequence -Sequence of same color");
                  outtextxy(140,390,"3.Sequence -Sequence of different color");
                  outtextxy(140,440,"4.Color -Cards with same shape");
                  outtextxy(140,490,"5.Pair -Two same cards");
                  outtextxy(140,540,"6.High Card - Cards with more weightage");
                  settextstyle(1,HORIZ_DIR,4);
                  setcolor(11);
                  outtextxy(90,620,"Press any key to go back to Main Menu...");
}                 
};
/*int main1()
{
    WELCOME w;
    initwindow(1024,710,"Poker");
    clearviewport();
    main_menu:
    w.homepage();                     
    if(w.play==1 && w.inst==0 && w.exit==0)
    {
      
    }
    else
    if(w.play==0 && w.inst==1 && w.exit==0)
    {
       w.instructions();
       getch();
       goto main_menu;
    }
    else
    if(w.play==0 && w.inst==0 && w.exit==1)
    return 0;
    settextstyle(1,HORIZ_DIR,4);
    setcolor(11);
    outtextxy(90,590,"Press any key to go back to Main Menu...");
    setbkcolor(9);
    getch();
    goto main_menu;
}
*/
