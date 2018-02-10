#include<iostream.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>

void main()
{
int k,i,x,y,p,q,up=0,down=0,left=0,right=0,score=0,speed=50;
char point[4]="<*>",pointup[4]="^*-",f='#';
highvideo();
clrscr();
x=39;
y=12;
cout<<"********************************************************************************";
cout<<"********************************************************************************";
cout<<"********************************************************************************\n\n\n\n\n\n";

textcolor(10);
cout<<"\n================================>  Made By NJ  <===============================";
cout<<"\n==========================>  'W' & 'S' FoR Up & DoWn  <========================";
cout<<"\n=========================>  'A' & 'D' FoR LeFt & RiGhT  <======================";
cout<<"\n===============================>  'E' FoR ExIt  <==============================";

cout<<"\n\n\n\n\n\n********************************************************************************";
cout<<"********************************************************************************";
cout<<"********************************************************************************";
cout<<"PreSs AnY KeY To BeGiN......";
getch();
clrscr();
p=40;
q=20;
while(1){
clrscr();
if(p==x&&q==y){
  score++;
  p=(rand()%100);
  p=p/2;
  p++;
  q=(rand()%100);
  q=q/4;
  p++;
  }
cout<<score;
gotoxy(p,q);
cout<<f;
if(up==1||down==1){
speed=70;
gotoxy(x,y-1);
cout<<pointup[0];
gotoxy(x,y);
cout<<pointup[1];
gotoxy(x,y+1);
cout<<pointup[2];
}else{
     speed=40;
     gotoxy(x,y);
     cout<<point;
     }
   if(up==1){
     y--;
     if(y<=0){
       y=24;
       }
     }else if(down==1){
     y++;
     if(y>=25){
       y=1;
       }
     }else if(left==1){
     x--;
     if(x<=0){
       x=80;
       }
     }else if(right==1){
     x++;
     if(x>=80){
       x=0;
       }
     }
if(kbhit()){
   k=getch();
   if(k=='e'){
     exit(0);
     }else if(k=='w'){
     up=1;
     down=0;
     left=0;
     right=0;
     }else if(k=='s'){
     up=0;
     down=1;
     left=0;
     right=0;
     }else if(k=='a'){
     up=0;
     down=0;
     left=1;
     right=0;
     }else if(k=='d'){
     up=0;
     down=0;
     left=0;
     right=1;
     }
  }
 delay(speed);
}

}

