#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void choice()
{ int ch;
 printf("1] LANDER,\n2] ROVER");
printf("\n Enter the PHASE you want to see=");
scanf("%d",&ch);
switch (ch)
{
case 1:
setbkcolor(1);
printf("--LANDER--");
printf(
"\n\
 /-----\\\n\ \
 | _ |\n\
 |__|_|__|\n\
 | | | | | |\n\
~___\"\"\"\"___~ \n\
\n\
");
break;
case 2:
setbkcolor(2);
printf("\n--ROVER--");
printf(
"\n\
 _______ \n\ \
 / \\ \n\
/_____________\\ \n\
 / | | \\\n\
 /___|_______________|___\\\n\
* * * * * * * * \n\ ");
break;
default:
printf("\n Enter the 
right choice.");}}
void delay(unsigned 
value)
{ unsigned int 
count1=0;
unsigned int 
count2=0;
for(count1=0;count1<
value;count1++)
{ 
for(count2=0;count2<
count1;count2++)
 { 
//setbkcolor(9);}}}
const char rocket[]=
"\n\
/^\\\n\ \
 |-|\n\
 | |\n\
 |C|\n\
 |H|\n\
 |A|\n\
 |N|\n\
 |D|\n\
 |R|\n\
 |A|\n\
 |Y|\n\
 |A|\n\
 |A|\n\
 |N|\n\
 |-|\n\
 |3|\n\
 | |\\\n\
 / | | \\\n\
 | | | |\n\
~_\"\"\"_~\n\
 \n\ ";
void drawman();
void 
drawcloud(int,int);
void fundrawcloud();
void rainandcloud();
 int main()
{ int 
gd=DETECT,gm;
 int i,ch,j,k;
 int jcab=0;
const int 
somedelay=6000;
int shiftcontrol=0;
initgraph(&gd,&gm,"
C:\\TURBOC3\\BGI"
); rainandcloud();
for(jcab=0;jcab<30;++jca
b)
{setcolor(6);
 printf("\n");} 
fputs(rocket,stdout);
for( 
shiftcontrol=0;shiftco
ntrol<30;++shiftcontr
ol)
{ setbkcolor(9);
delay(somedelay);
 printf("\n"); }
 choice();
getch();
 return 0;}
 void rainandcloud()
{ int i,j,k;
 setcolor(15);
for(i=0;!kbhit();i+=10
) {
 if(i>680)
 i=0;
 line(0,460,679,460);
 drawman(i);
 //setcolor(1);
 fundrawcloud();
 
for(j=120;j<480;j+=5)
 
for(k=0;k<640;k+=5)
 { if(j%2==0)
 { if(k>i-
25&&j>340&&k<i+5
0&&j<460)
 {}
 else
 
putpixel(k+5,j,9);}}
 delay(250);
 cleardevice();
drawman(i);
 
line(0,460,679,460);
 fundrawcloud();
 
for(j=120;j<480;j+=5)
 
for(k=0;k<640;k+=5)
 {
 if(j%2==0)
 { if(k>i-
25&&j>340&&k<i+5
0&&j<460)
 {}
 else
 putpixel(k,j,1);} }
 delay(100);
 cleardevice();}}
void drawman(int x)
{setcolor(5);
outtextxy(180,280,"R
ain do not have the 
power to stop Our 
Chandrayaan-3!!!!");
 circle(x,380,20);
line(x,400,x,430);
line(x,415,x+10,410);
line(x,430,x-10,460);
line(x,430,x+10,460);
setcolor(15);line(x+10
,410,x+10,340);
setcolor(4); line(x-
25,340,x+50,340);
setcolor(4);
arc(x+12,340,0,180,3
5);
setcolor(10);
outtextxy(10,450,"|||||||
|||||||||||||||||||||||||||||||||||||||||||||
||||||||||||||||||||||||||||||||||||||||||"
);}
void fundrawcloud()
{ setcolor(9);
 // 
floodfill(100,100,15);
drawcloud(100,100);
drawcloud(152,125);
drawcloud(400,100);
drawcloud(452,125);
} void drawcloud(int 
x,int y)
{int r=50;
// setcolor(9);
arc(x,y,45,135,r); 
arc(x+50,y,45,135,r);
arc(x+100,y,45,135,r);
arc(x,y,135,225,r);
arc(x+50,y,135+90,225+9
0,r);arc(x,y,135+90,225+
90,r);
arc(x+100,y,135+90,225+
90,r);
arc(x+100,y,135,45,r);}
