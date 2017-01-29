//ilabheshdeshpande 08062014
#include <conio.h>
#include <iostream>
#include<graphics.h>
#include<ctime>
#include"fillrectangle.h"
#include"fillcircle.h"
#include"filltriangle.h"
#define YES 1
#define NO 0
using namespace std;
char numbers[13][3]={ 
                          "A",
                          "2",
                          "3",
                          "4",
                          "5",
                          "6",
                          "7",
                          "8",
                          "9",
                          "10",
                          "J",
                          "Q",
                          "K"};
char money[6][6]={"$40",
                  "$80",
                  "$160",
                  "$320",
                  "$640",
                  "$1280"};
int bet[6]={40,80,160,320,640,1280};                          
int tleft_number,tmiddle_number,tright_number,bleft_number,bmiddle_number,bright_number;            //variables to store numbers
int tleft_shape,tmiddle_shape,tright_shape,bleft_shape,bmiddle_shape,bright_shape;                  //variables to store shapes       
int init=0,decided_winner=NO,decide_see_cards=NO,player_seen=NO,computer_seen=NO;
int blind_count=1,total_bet=40,computer_money=40000,player_money=40000,player_bet=0;
class TOP_SHAPES
{
      public:
             fill_rectangle r;
             fill_triangle t;
             fill_circle c;
             void left_card(int shape,int numb)
             {
             switch(shape)
             {
             case 1:
                  // SPADE in the top left card
                  r.fill_rect(300,40,300,220,430,220,430,40,15);                   //top left card
                  t.fill_tri(315,141,365,80,416,141,BLACK);                 
                  c.Fill_circle(340,150,26,BLACK);
                  c.Fill_circle(391,150,26,BLACK);
                  t.fill_tri(353,195,365,133,378,195,BLACK);  
                  setcolor(BLACK);
                  outtextxy(302,44,numbers[numb]);                                  //number on top left card
                  break;
             case 2:
                  // CLUB in the top left card
                  r.fill_rect(300,40,300,220,430,220,430,40,15);                    //top left card              
                  t.fill_tri(353,185,365,133,378,185,BLACK);                 
                  c.Fill_circle(346,140,20,BLACK);
                  c.Fill_circle(385,140,20,BLACK);
                  c.Fill_circle(364,112,21,BLACK);                  
                  setcolor(BLACK);
                  outtextxy(302,44,numbers[numb]);                                  //number on top left card
                  break;
             case 3:
                  // HEART in the top left card
                  r.fill_rect(300,40,300,220,430,220,430,40,15);                    //top left card
                  t.fill_tri(311,140,365,210,420,140,RED);                 
                  c.Fill_circle(338,130,28,RED);
                  c.Fill_circle(393,130,28,RED);
                  setcolor(RED);                  
                  outtextxy(302,44,numbers[numb]);                                  //number on top left card
                  break;
             case 4:
                  // DIAMOND in the top left card
                  r.fill_rect(300,40,300,220,430,220,430,40,15);                    //top left card
                  t.fill_tri(329,155,365,210,400,155,RED);
                  t.fill_tri(329,155,365,98,400,155,RED);     
                  setcolor(RED);
                  outtextxy(302,44,numbers[numb]);                                  //number on top left card
                  break;
             }
             }
             void middle_card(int shape,int numb)
             {
               switch(shape)
               {
               case 1:
                    // SPADE in the top middle card
                    r.fill_rect(450,40,450,220,580,220,580,40,15);                  //top middle card
                    t.fill_tri(465,141,515,80,566,141,BLACK);                 
                    c.Fill_circle(490,150,26,BLACK);
                    c.Fill_circle(541,150,26,BLACK);
                    t.fill_tri(503,195,515,133,528,195,BLACK);      
                    setcolor(BLACK);
                    outtextxy(452,44,numbers[numb]);                                //number on top middle card
                    break;
               case 2:
                    // CLUB in the top middle card
                    r.fill_rect(450,40,450,220,580,220,580,40,15);                  //top middle card
                    t.fill_tri(503,185,515,133,528,185,BLACK);                 
                    c.Fill_circle(496,140,20,BLACK);
                    c.Fill_circle(535,140,20,BLACK);
                    c.Fill_circle(514,112,21,BLACK);
                    setcolor(BLACK);
                    outtextxy(452,44,numbers[numb]);                                //number on top middle card
                    break;
               case 3:
                    // HEART in the top middle card
                    r.fill_rect(450,40,450,220,580,220,580,40,15);                  //top middle card
                    t.fill_tri(461,140,515,210,570,140,RED);                 
                    c.Fill_circle(488,130,28,RED);
                    c.Fill_circle(543,130,28,RED);             
                    setcolor(RED);
                    outtextxy(452,44,numbers[numb]);                                //number on top middle card
                    break;
               case 4:
                    // DIAMOND in the top middle card
                    r.fill_rect(450,40,450,220,580,220,580,40,15);                  //top middle card
                    t.fill_tri(479,155,515,210,550,155,RED);                 
                    t.fill_tri(479,155,515,98,550,155,RED);      
                    setcolor(RED);
                    outtextxy(452,44,numbers[numb]);                                //number on top middle card
                    break;
             }
             }
             void right_card(int shape,int numb)
             {
               switch(shape)
               {
               case 1:
                    
                    // SPADE in the top right card
                    r.fill_rect(600,40,600,220,730,220,730,40,15);                  //top right card
                    t.fill_tri(615,141,665,80,716,141,BLACK);                 
                    c.Fill_circle(640,150,26,BLACK);
                    c.Fill_circle(691,150,26,BLACK);
                    t.fill_tri(653,195,665,133,678,195,BLACK); 
                    setcolor(BLACK);                    
                    outtextxy(601,44,numbers[numb]);                                //number on top right card
                    break;
               case 2:
                    // CLUB in the top right card
                    r.fill_rect(600,40,600,220,730,220,730,40,15);                  //top right card
                    t.fill_tri(653,185,665,133,678,185,BLACK);                 
                    c.Fill_circle(646,140,20,BLACK);
                    c.Fill_circle(685,140,20,BLACK);
                    c.Fill_circle(664,112,21,BLACK);  
                    setcolor(BLACK);
                    outtextxy(601,44,numbers[numb]);                                //number on top right card
                    break;
               case 3:
                    // HEART in the top right card
                    r.fill_rect(600,40,600,220,730,220,730,40,15);                  //top right card
                    t.fill_tri(611,140,665,210,720,140,RED);                 
                    c.Fill_circle(638,130,28,RED);
                    c.Fill_circle(693,130,28,RED);                         
                    setcolor(RED);
                    outtextxy(601,44,numbers[numb]);                                //number on top right card
                    break;
               case 4:
                    // DIAMOND in the top right card
                    r.fill_rect(600,40,600,220,730,220,730,40,15);                  //top right card
                    t.fill_tri(629,155,665,210,700,155,RED);                 
                    t.fill_tri(629,155,665,98,700,155,RED);    
                    setcolor(RED);
                    outtextxy(601,44,numbers[numb]);                                //number on top right card
                    break;
              }
              }
};
class BOTTOM_SHAPES
{
      public:
             fill_rectangle r;
             fill_triangle t;
             fill_circle c;
             void left_card(int shape,int numb)
             {
             switch(shape)
             {
               case 1:
                    // SPADE in the bottom left card
                    r.fill_rect(300,440,300,620,430,620,430,440,15);        //bottom left card
                    t.fill_tri(315,541,365,480,416,541,BLACK);                 
                    c.Fill_circle(340,550,26,BLACK);
                    c.Fill_circle(391,550,26,BLACK);
                    t.fill_tri(353,595,365,533,378,595,BLACK);
                    setcolor(BLACK);
                    outtextxy(302,444,numbers[numb]);                      //number on bottom left card
                    break;
               case 2:
                    // CLUB in the bottom left card
                    r.fill_rect(300,440,300,620,430,620,430,440,15);        //bottom left card
                    t.fill_tri(353,585,365,533,378,585,BLACK);                 
                    c.Fill_circle(346,540,20,BLACK);
                    c.Fill_circle(385,540,20,BLACK);
                    c.Fill_circle(364,512,21,BLACK);
                    setcolor(BLACK);
                    outtextxy(302,444,numbers[numb]);                      //number on bottom left card                    
                    break;
               case 3:
                    // HEART in the bottom left card
                    r.fill_rect(300,440,300,620,430,620,430,440,15);        //bottom left card
                    t.fill_tri(311,540,365,610,420,540,RED);                 
                    c.Fill_circle(338,530,28,RED);
                    c.Fill_circle(393,530,28,RED);                    
                    setcolor(RED);
                    outtextxy(302,444,numbers[numb]);                      //number on bottom left card                    
                    break;
               case 4:
                    // DIAMOND in the bottom left card
                    r.fill_rect(300,440,300,620,430,620,430,440,15);        //bottom left card
                    t.fill_tri(329,555,365,610,400,555,RED);
                    t.fill_tri(329,555,365,498,400,555,RED);
                    setcolor(RED);
                    outtextxy(302,444,numbers[numb]);                      //number on bottom left card                    
                    break;
             }
             }
             void middle_card(int shape,int numb)
             {
               switch(shape)
               {
               case 1:
                    // SPADE in the bottom middle card
                    r.fill_rect(450,440,450,620,580,620,580,440,15);        //bottom middle card
                    t.fill_tri(465,541,515,480,566,541,BLACK);                 
                    c.Fill_circle(490,550,26,BLACK);
                    c.Fill_circle(541,550,26,BLACK);
                    t.fill_tri(503,595,515,533,528,595,BLACK);                         
                    setcolor(BLACK);
                    outtextxy(452,444,numbers[numb]);                     //number on bottom middle card
                    break;
               case 2:
                    // CLUB in the bottom middle card
                    r.fill_rect(450,440,450,620,580,620,580,440,15);        //bottom middle card
                    t.fill_tri(503,585,515,533,528,585,BLACK);                 
                    c.Fill_circle(496,540,20,BLACK);
                    c.Fill_circle(535,540,20,BLACK);
                    c.Fill_circle(514,512,21,BLACK);
                    setcolor(BLACK);
                    outtextxy(452,444,numbers[numb]);                     //number on bottom middle card                    
                    break;
               case 3:
                    // HEART in the bottom middle card
                    r.fill_rect(450,440,450,620,580,620,580,440,15);        //bottom middle card
                    t.fill_tri(461,540,515,610,570,540,RED);                 
                    c.Fill_circle(488,530,28,RED);
                    c.Fill_circle(543,530,28,RED);
                    setcolor(RED);
                    outtextxy(452,444,numbers[numb]);                     //number on bottom middle card                    
                    break;
               case 4:
                    // DIAMOND in the bottom middle card
                    r.fill_rect(450,440,450,620,580,620,580,440,15);        //bottom middle card
                    t.fill_tri(479,555,515,610,550,555,RED);
                    t.fill_tri(479,555,515,498,550,555,RED);
                    setcolor(RED);
                    outtextxy(452,444,numbers[numb]);                     //number on bottom middle card                    
                    break;
             }
             }
             void right_card(int shape,int numb)
             {
               switch(shape)
               {
               case 1:
                    // SPADE in the bottom right card
                    r.fill_rect(600,440,600,620,730,620,730,440,15);        //bottom right card
                    t.fill_tri(615,541,665,480,716,541,BLACK);                 
                    c.Fill_circle(640,550,26,BLACK);
                    c.Fill_circle(691,550,26,BLACK);
                    t.fill_tri(653,595,665,533,678,595,BLACK);
                    setcolor(BLACK);
                    outtextxy(601,444,numbers[numb]);                 //number on bottom right card
                    break;
               case 2:
                    // CLUB in the bottom right card
                    r.fill_rect(600,440,600,620,730,620,730,440,15);        //bottom right card
                    t.fill_tri(653,585,665,533,678,585,BLACK);                 
                    c.Fill_circle(646,540,20,BLACK);
                    c.Fill_circle(685,540,20,BLACK);
                    c.Fill_circle(664,512,21,BLACK);
                    setcolor(BLACK);
                    outtextxy(601,444,numbers[numb]);                 //number on bottom right card                    
                    break;
               case 3:
                    // HEART in the bottom right card
                    r.fill_rect(600,440,600,620,730,620,730,440,15);        //bottom right card
                    t.fill_tri(611,540,665,610,720,540,RED);                 
                    c.Fill_circle(638,530,28,RED);
                    c.Fill_circle(693,530,28,RED);
                    setcolor(RED);
                    outtextxy(601,444,numbers[numb]);                 //number on bottom right card                                        
                    break;
               case 4:
                    // DIAMOND in the bottom right card
                    r.fill_rect(600,440,600,620,730,620,730,440,15);        //bottom right card
                    t.fill_tri(629,555,665,610,700,555,RED);
                    t.fill_tri(629,555,665,498,700,555,RED);
                    setcolor(RED);
                    outtextxy(601,444,numbers[numb]);                 //number on bottom right card                                        
                    break;
              }
              }
};
class SHOW
{
      public:
             void top_cards()
             {
                  TOP_SHAPES top ;
                  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
                  setbkcolor(15);
                  setcolor(RED);
                  srand(time(0));
                  tleft_shape=((rand()%4)+1);                                                 //shape for top left card
                  tleft_number=(rand()%13);
                  top.left_card(tleft_shape,tleft_number);
                  tmiddle_shape=((rand()%4)+1);                                                 //shape for top middle card
                  do
                  {
                       tmiddle_number=(rand()%13);
                  }while(tleft_number==tmiddle_number && tleft_shape==tmiddle_shape);
                  top.middle_card(tmiddle_shape,tmiddle_number);
                  tright_shape=((rand()%4)+1);                                                 //shape for top right card
                  do
                  {
                       tright_number=(rand()%13);
                  }while((tleft_number==tright_number && tleft_shape==tright_shape) || (tmiddle_number==tright_number && tmiddle_shape==tright_shape));
                  top.right_card(tright_shape,tright_number);
             }
             void bottom_cards()
             {
                  BOTTOM_SHAPES bottom;
                  settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
                  setbkcolor(15);
                  setcolor(RED);
                  srand(time(0));
                  bleft_shape=((rand()%4)+1);                                                 //shape for bottom left card
                  do
                  {
                     bleft_number=(rand()%13);
                  }while((bleft_number==tleft_number && bleft_shape==tleft_shape) || (bleft_number==tright_number &&bleft_shape==tright_shape)|| (bleft_number==tmiddle_number && bleft_shape==tmiddle_shape));
                  bottom.left_card(bleft_shape,bleft_number);
                  bmiddle_shape=((rand()%4)+1);                                                 //shape for bottom middle card
                  do
                  {
                     bmiddle_number=(rand()%13);
                  }while((bleft_number==bmiddle_number && bleft_shape==bmiddle_shape)||(bmiddle_number==tleft_number && bmiddle_shape==tleft_shape)|| (bmiddle_number==tright_number && bmiddle_shape==tright_shape)|| (bmiddle_number==tmiddle_number&&bmiddle_shape==tmiddle_shape));
                  bottom.middle_card(bmiddle_shape,bmiddle_number);
                  bright_shape=((rand()%4)+1);                                                 //shape for bottom right card
                  do
                  {
                     bright_number=(rand()%13);
                  }while((bright_number==bleft_number &&bright_shape==bleft_shape)|| (bright_number==bmiddle_number &&bright_shape==bmiddle_shape)||(bright_number==tleft_number &&bright_shape==tleft_shape)|| (bright_number==tright_number &&bright_shape==tright_shape)|| (bright_number==tmiddle_number && bright_shape==tmiddle_shape));
                  bottom.right_card(bright_shape,bright_number);
             } 
};
class TABLE
{
 public:
    void blank_table()
    {
    fill_rectangle r;
    fill_triangle t;
    fill_circle c;   
    setlinestyle(SOLID_LINE,0,THICK_WIDTH);
    setcolor(WHITE);        
    ellipse(512,330,0,360,512,330);
    setlinestyle(SOLID_LINE,0,NORM_WIDTH);
    setbkcolor(2);                                           // background color for table
    setfillstyle(10,15);                                    //dotted pattern
    fillellipse(512,330,512,330);                           // main table
    
    //CARDS facing BACK
    rectangle(300,440,430,620);                             //bottom left card
    t.fill_tri(300,440,300,620,430,440,4);
    t.fill_tri(430,440,430,620,300,620,9);
    c.Fill_circle(365,530,15,9);
    rectangle(450,440,580,620);                             //bottom middle card
    t.fill_tri(450,440,450,620,580,440,4);
    t.fill_tri(580,440,580,620,450,620,9);
    c.Fill_circle(515,530,15,9);
    rectangle(600,440,730,620);                             //bottom right card
    t.fill_tri(600,440,600,620,730,440,4);
    t.fill_tri(730,440,730,620,600,620,9);
    c.Fill_circle(665,530,15,9);
    rectangle(300,40,430,220);                              //top left card
    t.fill_tri(300,40,300,220,430,40,9);
    t.fill_tri(430,40,430,220,300,220,4);
    c.Fill_circle(365,130,15,9);
    rectangle(450,40,580,220);                              //top middle card
    t.fill_tri(450,40,450,220,580,40,9);
    t.fill_tri(580,40,580,220,450,220,4);
    c.Fill_circle(515,130,15,9);
    rectangle(600,40,730,220);                              //top right card
    t.fill_tri(600,40,600,220,730,40,9);
    t.fill_tri(730,40,730,220,600,220,4);
    c.Fill_circle(665,130,15,9);
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
    setfillstyle(1,11);
    fillellipse(90,685,70,20);                             //Pack button
    fillellipse(270,685,100,20);                             //see cards button
    fillellipse(520,685,90,20);                             //bet money meter
    fillellipse(746,685,70,20);                             //bet button
    fillellipse(900,685,70,20);                             //show button
    c.Fill_circle(640,685,20,11);                           //increase wager button
    c.Fill_circle(400,685,20,11);                           //Decrease wager button
    setcolor(0);
    line(655,685,625,685);                                  //+ sign
    line(640,700,640,670);
    line(385,685,415,685);                                  //- sign
    setfillstyle(1,11);                      
    fillellipse(946,40,70,20);                              //exit button
    setbkcolor(11);  
    setcolor(0);
    outtextxy(55,675,"Pack");
    outtextxy(200,675,"See Cards");
    outtextxy(500,675,money[init]);
    outtextxy(705,675,"Blind");
//    outtextxy(720,675,"Bet");
    outtextxy(860,675,"Show");
    outtextxy(915,30,"Exit");
    
    //CHIPS
    c.Fill_circle(520,330,30,14);                            //chip in the centre
    c.Fill_circle(520,330,20,15);
    c.Fill_circle(585,320,30,10);                           //chip on right
    c.Fill_circle(585,320,20,15);
    c.Fill_circle(570,380,30,1);                           //chip on right ,below the centre chip
    c.Fill_circle(570,380,20,15);
    c.Fill_circle(490,385,30,13);                            //chip on left side of centre
    c.Fill_circle(490,385,20,15);
    c.Fill_circle(455,320,30,4);                            //chip on top left side of centre
    c.Fill_circle(455,320,20,15);    
    c.Fill_circle(420,370,30,1);                            //chip on top left side of centre
    c.Fill_circle(420,370,20,15); 
    settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
    setbkcolor(9);  
    setcolor(0);
    outtextxy(480,590,"Blind");
    outtextxy(480,50,"Blind");
 }
};
class WINNER
{
      public: 
             void win()
             {
                  char winner[2][20]={"PLAYER WIN'S","COMPUTER WIN'S"};
                  char condition[6][15]={"Trio",
                                    "Pure Sequence",
                                    "Sequence",
                                    "Color",
                                    "Pair",
                                    "High Card"};
                  fill_rectangle r;
                  r.fill_rect(820,270,820,420,200,420,200,270,13);
                  settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
                  setbkcolor(13);  
                  setcolor(1);
                  if(tleft_number==tmiddle_number && tmiddle_number==tright_number && tright_number==tleft_number)   
                  {
                  outtextxy(450,280,condition[0]);         //on trio condition 
                  outtextxy(220,350,winner[1]);            // COMPUTER won
                  }
                  else
                  if(bleft_number==bmiddle_number && bmiddle_number==bright_number && bright_number==bleft_number)
                  {
                  outtextxy(450,280,condition[0]);         //on trio condition 
                  outtextxy(270,350,winner[0]);            // PLAYER won
                  }
                  else
                  if((((tmiddle_number==tleft_number+1 && tright_number==tmiddle_number+1)||(tmiddle_number==tright_number+1 && tright_number==tleft_number+1))||((tleft_number==tmiddle_number+1 && tright_number==tleft_number+1)||(tright_number==tmiddle_number+1 && tleft_number==tright_number+1))||((tleft_number==tright_number+1&&tmiddle_number==tleft_number+1)||(tmiddle_number==tright_number+1&&tleft_number==tmiddle_number+1)))&&(tleft_shape==tmiddle_shape&&tmiddle_shape==tright_shape))
                  {
                  outtextxy(300,280,condition[1]);         //on PURE SEQUENCE condition
                  outtextxy(220,350,winner[1]);            // COMPUTER WON
                  }
                  else
                  if((((bmiddle_number==bleft_number+1 && bright_number==bmiddle_number+1)||(bmiddle_number==bright_number+1 && bright_number==bleft_number+1))||((bleft_number==bmiddle_number+1 && bright_number==bleft_number+1)||(bright_number==bmiddle_number+1 && bleft_number==bright_number+1))||((bleft_number==bright_number+1&&bmiddle_number==bleft_number+1)||(bmiddle_number==bright_number+1&&bleft_number==bmiddle_number+1)))&&(bleft_shape==bmiddle_shape&&bmiddle_shape==bright_shape))
                  {
                  outtextxy(300,280,condition[1]);         //on PURE SEQUENCE condition
                  outtextxy(270,350,winner[0]);            // PLAYER WON
                  }
                  else
                  if(((tmiddle_number==tleft_number+1 && tright_number==tmiddle_number+1)||(tmiddle_number==tright_number+1 && tright_number==tleft_number+1))||((tleft_number==tmiddle_number+1 && tright_number==tleft_number+1)||(tright_number==tmiddle_number+1 && tleft_number==tright_number+1))||((tleft_number==tright_number+1&&tmiddle_number==tleft_number+1)||(tmiddle_number==tright_number+1&&tleft_number==tmiddle_number+1)))
                  {
                  outtextxy(390,280,condition[2]);         //on SEQUENCE condition
                  outtextxy(220,350,winner[1]);            // COMPUTER WON
                  }
                  else
                  if(((bmiddle_number==bleft_number+1 && bright_number==bmiddle_number+1)||(bmiddle_number==bright_number+1 && bright_number==bleft_number+1))||((bleft_number==bmiddle_number+1 && bright_number==bleft_number+1)||(bright_number==bmiddle_number+1 && bleft_number==bright_number+1))||((bleft_number==bright_number+1&&bmiddle_number==bleft_number+1)||(bmiddle_number==bright_number+1&&bleft_number==bmiddle_number+1)))
                  {
                  outtextxy(390,280,condition[2]);         //on SEQUENCE condition
                  outtextxy(270,350,winner[0]);            // PLAYER WON
                  }
                  else
                  if((tleft_shape==tmiddle_shape&&tmiddle_shape==tright_shape))
                  {
                  outtextxy(440,280,condition[3]);         //on COLOR condition
                  outtextxy(220,350,winner[1]);            // COMPUTER WON
                  }
                  else
                  if((bleft_shape==bmiddle_shape && bmiddle_shape==bright_shape))
                  {
                  outtextxy(440,280,condition[3]);         //on COLOR condition
                  outtextxy(270,350,winner[0]);            // PLAYER WON
                  }
                  else
                  if(tleft_number==tmiddle_number || tmiddle_number==tright_number || tright_number==tleft_number)   
                  {
                  outtextxy(460,280,condition[4]);         //on PAIR condition 
                  outtextxy(220,350,winner[1]);            // COMPUTER won
                  }
                  else
                  if(bleft_number==bmiddle_number || bmiddle_number==bright_number || bright_number==bleft_number)   
                  {
                  outtextxy(460,280,condition[4]);         //on PAIR condition 
                  outtextxy(270,350,winner[0]);            // PLAYER won
                  }
                  else
                  if(tleft_number==0)
                  {
                  tleft_number=14;
                  int ttotal=tleft_number+tmiddle_number+tright_number;
                  int btotal=bleft_number+bmiddle_number+bright_number;
                  if(ttotal>btotal)
                  {
                  outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
                  outtextxy(220,350,winner[1]);            // COMPUTER won
                  }
                  else
                  {
                  outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
                  outtextxy(270,350,winner[0]);            // PLAYER won
                  }  
             }
             else
             if(tmiddle_number==0)
             {
             tmiddle_number=14;
             int ttotal=tleft_number+tmiddle_number+tright_number;
             int btotal=bleft_number+bmiddle_number+bright_number;
             if(ttotal>btotal)
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(220,350,winner[1]);            // COMPUTER won
             }
             else
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(270,350,winner[0]);            // PLAYER won
             }  
      }
      else
      if(tright_number==0)
      {
             tright_number=14;
             int ttotal=tleft_number+tmiddle_number+tright_number;
             int btotal=bleft_number+bmiddle_number+bright_number;
             if(ttotal>btotal)
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(220,350,winner[1]);            // COMPUTER won
             }
             else
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(270,350,winner[0]);            // PLAYER won
             }  
      }
      else
      if(bleft_number==0)
      {
             bleft_number=14;
             int ttotal=tleft_number+tmiddle_number+tright_number;
             int btotal=bleft_number+bmiddle_number+bright_number;
             if(ttotal>btotal)
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(220,350,winner[1]);            // COMPUTER won
             }
             else
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(270,350,winner[0]);            // PLAYER won
             }  
      }
      else
      if(bmiddle_number==0)
      {
             bmiddle_number=14;
             int ttotal=tleft_number+tmiddle_number+tright_number;
             int btotal=bleft_number+bmiddle_number+bright_number;
             if(ttotal>btotal)
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(220,350,winner[1]);            // COMPUTER won
             }
             else
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(270,350,winner[0]);            // PLAYER won
             }  
      }
      else
      if(bright_number==0)
      {
             bright_number=14;
             int ttotal=tleft_number+tmiddle_number+tright_number;
             int btotal=bleft_number+bmiddle_number+bright_number;
             if(ttotal>btotal)
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(220,350,winner[1]);            // COMPUTER won
             }
             else
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(270,350,winner[0]);            // PLAYER won
             }  
      }
      else
      {
             int ttotal=tleft_number+tmiddle_number+tright_number;
             int btotal=bleft_number+bmiddle_number+bright_number;
             if(ttotal>btotal)
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(220,350,winner[1]);            // COMPUTER won
             }
             else
             {
             outtextxy(370,280,condition[5]);         //on HIGH CARD condition 
             outtextxy(270,350,winner[0]);            // PLAYER won
             }  
      }
}
};
class CARDS_SEEN
{
      int flag,flag1;
      public:
             CARDS_SEEN()
             {
                 flag=0;
                 flag1=0;
             }
             void see()
             {
                  settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
                  setbkcolor(2);  
                  setcolor(0);
                  if(player_seen==1 &&flag==0)
                  {
                      outtextxy(450,630,"Cards Seen");
                      flag=1;
                  }
                  srand(time(0));
                  decide_see_cards=(rand()%10+1);
                  if(decide_see_cards>=5 && flag1==0)
                  {
                      computer_seen=1;
                      setbkcolor(9);  
                      outtextxy(450,50,"              ");
                      setbkcolor(2); 
                      outtextxy(450,10,"Cards Seen");
                      flag1=1;
                  }                          
             }
};
class TAKE_INPUT
{
      int x,y,cards_shown;
public:
       TAKE_INPUT()
       {
          cards_shown=0;           
       }
int mouse()
   {
   
   SHOW show;
   WINNER obj;
   setbkcolor(2);  
   get_mouse:                                              // mouse label
          while (!ismouseclick(WM_LBUTTONDOWN)){}           // idle mouse 
          getmouseclick(WM_LBUTTONDOWN, x, y);
          if((x>=170 &&x<=370) &&(y>=665 &&y<=705))         //see cards button 
          {
                   //rectangle(170,665,370,705);                             //see cards button box
                   if(player_seen==0)
                   {
                   show.bottom_cards();
                   player_seen=1;
                   settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
                   setbkcolor(11);  
                   setcolor(0);
                   outtextxy(705,675,"         ");
                   outtextxy(720,675,"Bet");
                   }
                   else
                   goto get_mouse;
          }
          else
          if((x>=830 &&x<=970) &&(y>=665 &&y<=705))
          {
                   //rectangle(830,665,970,705);                             //show button box
                   if(cards_shown==0 && player_seen==0)
                   {
                   show.top_cards();
                   show.bottom_cards();
                   player_seen=1;
                   cards_shown=1;
                   decided_winner=YES;
                   obj.win();
                   }
                   else
                   if(cards_shown==0 && player_seen==1)
                   {
                   show.top_cards();
                   cards_shown=1;
                   decided_winner=YES;
                   obj.win();
                   }
                   else
                   goto get_mouse;
          }
          else
          if((x>=876 &&x<=1016) &&(y>=20 &&y<=60))
          {
                   //rectangle(876,20,1016,60);                              //exit button box
                   decided_winner=YES;
          }
          else
          if((x>=20 &&x<=160) &&(y>=665 &&y<=705))
          {
                   //rectangle(20,665,160,705);                              //Pack button box     
                   fill_rectangle r;
                   r.fill_rect(820,240,820,420,200,420,200,240,13);
                   settextstyle(TRIPLEX_FONT,HORIZ_DIR,5);
                   setbkcolor(13);  
                   setcolor(1);
                   outtextxy(220,350,"COMPUTER WIN'S");            // COMPUTER won
                   decided_winner=YES;
          }
          else
          if((x>=676 &&x<=816) &&(y>=665 &&y<=705))
          {
                   //rectangle(676,665,816,705);                             //bet button box
                   if(blind_count==4)
                   {
                   if(cards_shown==0 && player_seen==0)
                   {
                   show.bottom_cards();
                   player_seen=1;
                   }
                   settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
                   setbkcolor(11);  
                   setcolor(0);
                   outtextxy(705,675,"         ");
                   outtextxy(720,675,"Bet");
                   }
                   else
                   blind_count++;
                   total_bet=total_bet+bet[init];
                   player_bet=1;
          }
          else
          if((x>=620 &&x<=660) &&(y>=665 &&y<=705))
          {
                   //rectangle(620,665,660,705);                             //increase wager button box
                   if(init==5)
                   goto get_mouse;
                   else
                   {
                   ++init;                             
                   settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
                   setbkcolor(11);  
                   setcolor(0);
                   if(init==5)
                   {
                   outtextxy(500,675,"       ");                            
                   outtextxy(470,675,money[init]);                            
                   }
                   else
                   {
                   outtextxy(500,675,"       ");                            
                   outtextxy(490,675,money[init]);                            
                   }
                   }        
          }
          else
          if((x>=380 &&x<=420) &&(y>=665 &&y<=705))
          {
                   //rectangle(380,665,420,705);                             //Decrease wager button box
                   if(init==0)
                   goto get_mouse;
                   else
                   {
                   --init;                             
                   settextstyle(TRIPLEX_FONT,HORIZ_DIR,2);
                   setbkcolor(11);  
                   setcolor(0);
                   outtextxy(470,675,"          ");                            
                   outtextxy(490,675,money[init]);                                             
                   }
          }
          else
              goto get_mouse;
          }
};
class TOTAL_BET
{
      public:
             char *total_money;
             void money()
             {
                  setbkcolor(2);  
                  setcolor(15);
                  settextstyle(1,0,3);
                  outtextxy(470,240,"$");
                  total_money[(((sizeof total_bet) * CHAR_BIT) + 2)/3 + 2];
                  sprintf(total_money, "%d", total_bet);
                  outtextxy(490,240,total_money);
                  delay(1000);
                  if(player_bet==1)
                  {
                  total_bet=total_bet+bet[init];
                  total_money[(((sizeof total_bet) * CHAR_BIT) + 2)/3 + 2];
                  sprintf(total_money, "%d", total_bet);
                  outtextxy(490,240,total_money);
                  player_bet==0;
                  }
             }
};
int main()
{
    initwindow(1024,710,"Poker");
    clearviewport();
    TABLE table;
    TAKE_INPUT input;
    CARDS_SEEN cards;
    table.blank_table();
    TOTAL_BET bet;
    while(decided_winner==NO)
    {
    cards.see();
    input.mouse();
    bet.money();
    }
    getch();
}

