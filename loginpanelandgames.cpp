//this is my first project which includes a login panel that stores registered passwords in a file after encrypting them with RSA algorithm.
//there are a set of games to play which are created by C as well using basic concepts such as array,loops,conditionals,functions etc.

#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>

int height=40,width=40,score,gameover,xc,yc,foodx,foody,flag,counttail;
int tailx[100],taily[100];
int xe=7, ye=13, ne, te, ie, flage;
long int ee[50], de[50], tempe[50], je, me[50], ene[50];
char atic[]={'1','2','3','4','5','6','7','8','9'};
int gameovertic,won;
char player1[25],player2[25];
char password[100],passt[15];
int prime(long int);
void encryption_key();
long int cd(long int);
void encrypt();
void decrypt();


int prime(long int pr)
{
  int ie;
  je = sqrt(pr);
  for(ie = 2; ie <= je; ie++)
  {
   if(pr % ie == 0)
     return 0;
  }
  return 1;
 }

void encryption_key()
{
  int k;
  k = 0;
  for(ie = 2; ie < te; ie++)
  {
    if(te % ie == 0)
     continue;
    flage = prime(ie);
    if(flage == 1 && ie != xe && ie != ye)
    {
     ee[k] = ie;
     flage = cd(ee[k]);
    if(flage > 0)
    {
     de[k] = flage;
     k++;
    }
   if(k == 99)
    break;
   }
 }
}
long int cd(long int a)
{
  long int k = 1;
  while(1)
  {
    k = k + te;
    if(k % a == 0)
     return(k / a);
  }
}

void encrypt()
{
  long int pt, ct, key = ee[0], k, len;
  ie = 0;
  len = strlen(password);
  while(ie != len)
  {
    pt = me[ie];
    pt = pt - 96;
    k = 1;
    for(je = 0; je < key; je++)
    {
     k = k * pt;
     k = k % ne;
    }
   tempe[ie] = k;
   ct = k + 96;
   ene[ie] = ct;
   ie++;
  }
   FILE *fptr;
    fptr=fopen("users.txt","a");
  ene[ie] = -1;
  for(ie = 0; ene[ie] != -1; ie++){
    putc(ene[ie],fptr);
}
return;
}

void encrypt1()
{
  long int pt, ct, key = ee[0], k, len;
  ie = 0;
  len = strlen(passt);
  while(ie != len)
  {
    pt = me[ie];
    pt = pt - 96;
    k = 1;
    for(je = 0; je < key; je++)
    {
     k = k * pt;
     k = k % ne;
    }
   tempe[ie] = k;
   ct = k + 96;
   ene[ie] = ct;
   ie++;
  }
  ene[ie] = -1;
  for(ie = 0; ene[ie] != -1; ie++){
    passt[ie]=ene[ie];
}
return;
}

void decrypt()
{
  long int pt, ct, key = de[0], k;
  ie = 0;
  while(ene[ie] != -1)
  {
    ct = tempe[ie];
    k = 1;
    for(je = 0; je < key; je++)
    {
      k = k * ct;
      k = k % ne;
    }
   pt = k + 96;
   me[ie] = pt;
   ie++;
  }
  me[ie] = -1;
  printf("\n\nYOUR ACCESS PASSWORD IS\n");
  for(ie = 0; me[ie] != -1; ie++)
   printf("%c", me[ie]);
  printf("\n");
}

void input(){
	if(kbhit()){
		switch(getch())
		{
			case 'a':
				flag=1;
				break;
			case  'd':
				flag=2;
				break;	
			case 'w':
				flag=3;
				break;
			case 's':
				flag=4;
				break;
			case 'x':
				gameover=1;
				break;
		}
	}
}
void checktic()
{
	if(atic[0]==atic[1]&&atic[1]==atic[2])
	{
		
		if(atic[0]=='x')
		won=2;
		else
		won=1;
		gameovertic=1;
		return;
	}
	if(atic[3]==atic[4]&&atic[4]==atic[5])
	{
		if(atic[3]=='x')
		won=2;
		else
		won=1;
		gameovertic=1;
		return;
	}
	if(atic[6]==atic[7]&&atic[7]==atic[8])
	{
		if(atic[6]=='x')
		won=2;
		else
		won=1;
		gameovertic=1;
		return;
	}
	if(atic[2]==atic[5]&&atic[5]==atic[8])
	{
		
		if(atic[2]=='x')
		won=2;
		else
		won=1;
		gameovertic=1;
		return;
	}
	if(atic[0]==atic[3]&&atic[3]==atic[6])
	{
		if(atic[0]=='x')
		won=2;
		else
		won=1;
		gameovertic=1;
		return;
	}
	if(atic[1]==atic[4]&&atic[4]==atic[7])
	{
		if(atic[1]=='x')
		won=2;
		else
		won=1;
		gameovertic=1;
		return;
	}
	if(atic[0]==atic[4]&&atic[4]==atic[8])
	{
		if(atic[0]=='x')
		won=2;
		else
		won=1;
		gameovertic=1;
		return;
	}
	if(atic[2]==atic[4]&&atic[4]==atic[6])
	{
		
		if(atic[2]=='x')
		won=2;
		else
		won=1;
		gameovertic=1;
		return;
	}
	if((atic[0]=='x'||atic[0]=='0')&&(atic[1]=='x'||atic[1]=='0')&&(atic[2]=='x'||atic[2]=='0')&&(atic[3]=='x'||atic[3]=='0')&&(atic[4]=='x'||atic[4]=='0')&&(atic[5]=='x'||atic[5]=='0')&&(atic[6]=='x'||atic[6]=='0')&&(atic[7]=='x'||atic[7]=='0')&&(atic[8]=='x'||atic[8]=='0'))
	{
		won=0;
		gameovertic=1;
	}
}

void play1()
{
	int pos,c;
	while(1)
	{
		printf("\n\n\n\t\t\tPlayer 1 choose the position: ");
		fflush(stdin);
		scanf("%d",&pos);
		if(pos>9||pos<1)
		{
			printf("\n\tInvlid input");
			continue;
		}
		else if(atic[pos-1]=='0'||atic[pos-1]=='x')
		{
			printf("\n\tPosition already occupied..");
			continue;
		}
		else
		{
			atic[pos-1]='0';
			break;
		}
	}
	checktic();
}

void play2()
{
	int pos,c;
	while(1)
	{
		printf("\n\n\n\t\t\tPlayer 2 choose the position: ");
		fflush(stdin);
		scanf("%d",&pos);
		if(pos>9||pos<1)
		{
			printf("\n\tInvlid input");
			continue;
		}
		else if(atic[pos-1]=='0'||atic[pos-1]=='x')
		{
			printf("\n\tPosition already occupied..");
			continue;
		}
		else
		{
			atic[pos-1]='x';
			break;
		}
	}
	checktic();
}


void show()
{
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t  TIC-TAC-TOE");
	printf("\n\t\t\t\t\t\t\t\t  ```````````\n");
	printf("\n\n\t\t\t\t\t\t\t__________|_________|_________");
	printf("\n\t\t\t\t\t\t\t          |         |         ");
	printf("\n\t\t\t\t\t\t\t    %c     |    %c    |    %c    ",atic[0],atic[1],atic[2]);
	printf("\n\t\t\t\t\t\t\t__________|_________|_________");
	printf("\n\t\t\t\t\t\t\t          |         |         ");
	printf("\n\t\t\t\t\t\t\t    %c     |    %c    |    %c    ",atic[3],atic[4],atic[5]);
	printf("\n\t\t\t\t\t\t\t__________|_________|_________");
	printf("\n\t\t\t\t\t\t\t          |         |         ");
	printf("\n\t\t\t\t\t\t\t    %c     |    %c    |    %c    ",atic[6],atic[7],atic[8]);
	printf("\n\t\t\t\t\t\t\t__________|_________|_________");
	printf("\n\t\t\t\t\t\t\t          |         |         ");
	printf("\n\tPlayer-1's Symbol : 0");
	printf("\n\tPlayer-2's Symbol : x\n\n");
}


void tictactoe()
{
	system("cls");
	gameovertic=0;
	won=0;
	printf("\n\t\t\t\t\t\t\t\t  TIC-TAC-TOE\n");
	printf("\n\t\t\t\t\t\t\t\t  ```````````\n");
	printf("\n\n\n\n\n\t\t\t\t\tPlayer 1 enter your name: ");
	fflush(stdin);
	gets(player1);
	system("cls");
	printf("\n\t\t\t\t\t\t\t\t  TIC-TAC-TOE\n");
	printf("\n\t\t\t\t\t\t\t\t  ```````````\n");
	printf("\n\n\n\n\n\t\t\t\t\tPlayer 1 enter your name: %s",player1);
	printf("\n\n\n\t\t\t\t\tPlayer 2 enter your name: ");
	fflush(stdin);
	gets(player2);
	while(!gameovertic)
	{
		show();
		play1();
		show();
		if(gameovertic==1)
		break;
		play2();
		show();
		if(gameovertic==1)
		break;
	}
	if(won==1)
	{
		printf("\n\n\n\t\t\t\t\t\t\t______________________________________________");
		printf("\n\n\t\t\t\t\t\t\t\t\t%s won!",player1);
		printf("\n\n\t\t\t\t\t\t\t______________________________________________\n\n");
	}
	else if(won==2)
	{
		printf("\n\n\n\t\t\t\t\t\t\t______________________________________________");
		printf("\n\n\t\t\t\t\t\t\t\t\t%s won!",player2);
		printf("\n\n\t\t\t\t\t\t\t______________________________________________\n\n");
	}
	else
	{
		printf("\n\n\n\t\t\t\t\t\t\t______________________________________________");
		printf("\n\n\t\t\t\t\t\t\t\t\tMatch Draw!");
		printf("\n\n\t\t\t\t\t\t\t______________________________________________\n\n");
	}
	getch();
}

void makelogic()
{
	int prevx=tailx[0];
	int prevy=taily[0];
	tailx[0]=xc;
	taily[0]=yc;
	int prev2x,prev2y,i;
	for(i=1;i<counttail;i++){
		prev2x=tailx[i];
		prev2y=taily[i];
		tailx[i]=prevx;
		taily[i]=prevy;
		prevx=prev2x;
		prevy=prev2y;
	}
	switch(flag){
		case 1:
			yc--;
			break;
		case 2:
			yc++;
			break;
		case 3:
			xc--;
			break;
		case 4:
			xc++;
			break;
		default:
			break;
	}
	
	for(i=0;i<counttail;i++){
		if(xc==tailx[i]&&yc==taily[i]){
			gameover=1;
		}
	}
		if(xc<0||xc>=width||yc<0||yc>=height){
		gameover=1;
	}
	if(xc==foodx&&yc==foody){
	label3:
	foodx=rand()%40;
	if(foodx==0)
	goto label3;
	label4:
	foody=rand()%40;
	if(foody==0)
	goto label4;
	score+=10;
	counttail++;
	}
}

void setup(){
	gameover=0;
	score=0;
	xc=height/2;
	yc=width/2;
	label1:
	foodx=rand()%40;
	if(foodx==0)
	goto label1;
	label2:
	foody=rand()%40;
	if(foody==0)
	goto label2;
}

void draw(){
	int i,j,k;
	system("cls");
	for(i=0;i<width;i++){
		printf("\t\t\t\t\t");
		for(j=0;j<height;j++){
			if(i==0||i==height-1||j==0||j==width-1){
				printf("*");
			}
			else{
				if(i==xc&&j==yc){
					printf("O");
				}
				else if(i==foodx&&j==foody){
					printf("@");
				}
				else
				{
					int ax=0;
					for(k=0;k<counttail;k++)
					{
						if(i==tailx[k]&&j==taily[k])
						{
							printf("o");
							ax=1;
						}
					}
					if(ax==0)
					printf(" ");
				}
			}
		}
	    printf("\n");
	}
	printf("SCORE=%d",score);
	
}

void snake(){
	setup();
	while(!gameover){
	draw();
	input();
	makelogic();
}
   printf("\n\t\t\t\t\t\t\t\t\tGAME OVER!");
   getch();
	return;
}

void toss(){
	while(1){
		system("cls");
		printf("\n\n\n\n\t\t\t\t\t\t\t\tCOIN TOSS");
		printf("\n\t\t\t\t\t\t\t\t`````````");
		printf("\n\n\n\n\n\n\n\t\t\t\t Press '1' to toss or any other number to go to previous menu");
		printf("\n\n\n\n\t\t\t\tEnter your choice...");
		int a=rand()%2,b;
		scanf("%d",&b);
		if(b!=1){
			break;
		}
		system("cls");
		printf("\n\n\n\n\t\t\t\t\t\t\t\tCOIN TOSS");
		printf("\n\t\t\t\t\t\t\t\t`````````");
		printf("\n\n\n\n\n\n\n\n\t\t\t\t Enter '1' to choose 'HEADS' and '2' to choose 'TAILS'..");
		int c;
		scanf("%d",&c);
		if(b==1){
			if(c==1){
				if(a+1==c){
					printf("\n\n\n\n\n\t\t\t\t\tYou won!\n\t\t\t\t\tPredicted:HEADS\n\t\t\t\t\toutcome:HEADS");
					getch();
				}
				else{
					printf("\n\n\n\n\n\t\t\t\t\tYou lose!\n\t\t\t\t\tPredicted:HEADS\n\t\t\t\t\toutcome:TAILS");
					getch();
				}
			}
			else if(c==2){
				if(a+1==c){
					printf("\n\n\n\n\n\t\t\t\t\tYou won!\n\t\t\t\t\tPredicted:TAILS\n\t\t\t\t\toutcome:TAILS");
					getch();
				}
				else{
					printf("\n\n\n\n\n\t\t\t\t\tYou lose!\n\t\t\t\t\tPredicted:TAILS\n\t\t\t\t\toutcome:HEADS");
					getch();
				}
			}
			else{
				break;
			}
		}
		else
		{
			break;
		}
	} 
}

rock(){
	while(1){
	system("cls");
	printf("\n\n\t\t\t\t\t\t\t\t\tROCK PAPER SCISSORS");
	printf("\n\t\t\t\t\t\t\t\t\t```````````````````");
	int c=0,y=0;
	while(c!=5&&y!=5){
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\t Press '1' for Rock, '2' for Paper and '3' for Scissors...");
	printf("\n\n\n\n\n\t\t\t\t\tEnter your choice...");
	int b;
	scanf("%d",&b);
	int a=rand()%3;
	if(a==b-1){
		if(b==1){
			printf("\n\n\n\t\t\t\t\t\tYou:Rock\n\t\t\t\t\t\tcomputer:Rock\n\n\n\t\t\t\t\t\t\tIts a tie!");
			printf("\n___________________________________");
			printf("\n|                                 |");
			printf("\n|Current Score: computer->%d you->%d|",c,y);
			printf("\n|_________________________________|");
		}
		else if(b==2){
			printf("\n\n\n\t\t\t\t\t\tYou:Paper\n\t\t\t\t\t\tcomputer:Paper\n\n\n\t\t\t\t\t\t\tIts a tie!");
			printf("\n___________________________________");
			printf("\n|                                 |");
			printf("\n|Current Score: computer->%d you->%d|",c,y);
			printf("\n|_________________________________|");
		}
		else if(b==3){
			printf("\n\n\n\t\t\t\t\t\tYou:Scissors\n\t\t\t\t\t\tcomputer:scissors\n\n\n\t\t\t\t\t\t\tIts a tie!");
			printf("\n___________________________________");
			printf("\n|                                 |");
			printf("\n|Current Score: computer->%d you->%d|",c,y);
			printf("\n|_________________________________|");
		}
	}
	else if(a==0&&b==2){
		printf("\n\n\n\t\t\t\t\t\tYou:Paper\n\t\t\t\t\t\tcomputer:Rock\n\n\n\t\t\t\t\t\t\tYou won!");
		y++;
		printf("\n_____________________________________");
		printf("\n|                                   |");
		printf("\n| Current Score: computer->%d you->%d |",c,y);
		printf("\n|___________________________________|");
	}
	else if(a==0&&b==3){
		printf("\n\n\n\t\t\t\t\t\tYou:Scissors\n\t\t\t\t\t\tcomputer:Rock\n\n\n\t\t\t\t\t\t\tYou lose!");
		c++;
		printf("\n_____________________________________");
		printf("\n|                                   |");
		printf("\n| Current Score: computer->%d you->%d |",c,y);
		printf("\n|___________________________________|");
	}
	else if(a==1&&b==1){
		printf("\n\n\n\t\t\t\t\t\tYou:Rock\n\t\t\t\t\t\tcomputer:Paper\n\n\n\t\t\t\t\t\t\tYou lose!");
		c++;
		printf("\n_____________________________________");
		printf("\n|                                   |");
		printf("\n| Current Score: computer->%d you->%d |",c,y);
		printf("\n|___________________________________|");
	}
	else if(a==1&&b==3){
		printf("\n\n\n\t\t\t\t\t\tYou:Scissors\n\t\t\t\t\t\tcomputer:Paper\n\n\n\t\t\t\t\t\tYou won!");
		y++;
		printf("\n_____________________________________");
		printf("\n|                                   |");
		printf("\n| Current Score: computer->%d you->%d |",c,y);
		printf("\n|___________________________________|");
	}
	else if(a==2&&b==1){
		printf("\n\n\n\t\t\t\t\t\tYou:Rock\n\t\t\t\t\t\tcomputer:Scissors\n\n\n\t\t\t\t\t\t\tYou won!");
		y++;
		printf("\n_____________________________________");
		printf("\n|                                   |");
		printf("\n| Current Score: computer->%d you->%d |",c,y);
		printf("\n|___________________________________|");
	}
	else if(a==2&&b==2){
		printf("\n\n\n\t\t\t\t\t\tYou:Paper\n\t\t\t\t\t\tcomputer:scissors\n\n\n\t\t\t\t\t\t\tYou lose!");
		c++;
		printf("\n_____________________________________");
		printf("\n|                                   |");
		printf("\n| Current Score: computer->%d you->%d |",c,y);
		printf("\n|___________________________________|");
	}
}
	if(y>c){
		printf("\n\n\n\n\n\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n\t\t\t\t\t\t\t\t  You won the series by %d",y-c);
		printf("\n\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	}
	else if(c>y){
		printf("\n\n\n\n\n\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
		printf("\n\t\t\t\t\t\t\t\t  You lose the series by %d",c-y);
		printf("\n\t\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	}
	printf("\n\n\n\n\n\tEnter '1' to play again or any other key to go back to app menu...");
	int x;
	scanf("%d",&x);
	if(x==1){
		continue;
	}
	else{
		break;
	}
}
}

void applist(){
	system("cls");
	printf("\n\n\tWelcome, login successfull!\n");
	while(1){
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\t\t\t\t\t|\t         Choose the app you want to open from the list...          |");
	printf("\n\t\t\t\t\t|                                                                          |");
	printf("\n\t\t\t\t\t|                                                                          |");
	printf("\n\t\t\t\t\t|  1. Rock Paper Scissors                                                  |");
	printf("\n\t\t\t\t\t|                                                                          |");
	printf("\n\t\t\t\t\t|  2. Coin Toss                                                            |");
	printf("\n\t\t\t\t\t|                                                                          |");
	printf("\n\t\t\t\t\t|  3. Snake Game                                                           |");
	printf("\n\t\t\t\t\t|                                                                          |");
	printf("\n\t\t\t\t\t|  4. TIC-TAC-TOE                                                          |");
	printf("\n\t\t\t\t\t|                                                                          |");
	printf("\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~");
	printf("\n\n\n\n\n\t\t\tEnter your choice...(press any no. other than that in the list to exit)...  ");
	int x;
	scanf("%d",&x);
	for(int i=0;i<150;i++)
	printf("-");
	if(x==1){
		rock();
		system("cls");
		continue;
	}
	else if(x==2){
		toss();
		system("cls");
		continue;
	}
	else if(x==3){
		snake();
		counttail=0;
		system("cls");
		continue;
	}
	else if(x==4)
	{
		tictactoe();
		system("cls");
		continue;
	}
	else{
		break;
	}
}
}

void check(){
	system("cls");
	FILE *fptr;
	int t=3;
	fptr=fopen("users.txt","r");
	char usert[10],user[10],pass[10];
	while(t--){
	system("cls");
	rewind(fptr);
	int c=1;
	printf("\n\n\n\t\t\t\t\t\t\t\t\t  No. of tries left: %d",t+1);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your registered username: ");
	scanf("%s",usert);
	if(strlen(usert)!=8){
		printf("\n\n\n\t\t----username should be 8 characters long----");
		getch();
		continue;
	}
	strlwr(usert);
	system("cls");
	printf("\n\n\n\t\t\t\t\t\t\t\t\t  No. of tries left: %d",t+1);
	printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your registered username: %s",usert);
	printf("\n\n\n\n\t\t\tEnter your registered password: ");
	start1:
	int i=0;
	char p;
	do{
		p=getch();
		if(p=='\b')
		{
			system("cls");
		    printf("\n\n\n\t\t\t\t\t\t\t\t\t  No. of tries left: %d",t+1);
			printf("\n\n\n\n\n\n\n\n\n\n\t\t\tEnter your registered username: %s",usert);
			printf("\n\n\n\n\t\t\tEnter your registered password: ");
			for(int j=0;j<i-1;j++)
			printf("*");
			i--;
			if(i<=0)
			{
				i=0;
				goto start1;
			}
			continue;
		}
		if(p==' ')
		{
			continue;
		}
		if(p!='\r'){
			passt[i]=p;
			printf("*");
		}
		else{
			passt[i]='\0';
		}
		i++;
	}while(passt[i-1]!='\0');
	if(strlen(passt)!=8){
		printf("\n\n\n\t\t\t----Password should be 8 characters long----");
		getch();
		continue;
	}
	char ch;
	if(fptr==NULL){
		printf("\nNot Found!\n");
		return;
	}
	while(ch=getc(fptr)!=EOF){
		fseek(fptr,-1,1);
		fgets(user,9,fptr);
		if(!strcmp(user,usert)){
			c=0;
			break;
		}
		else{
			fseek(fptr,8,1);
			continue;
		}
	}
	if(c==0){
		  for(ie= 0; passt[ie] != NULL; ie++)
    me[ie] = passt[ie];
 ne= xe* ye;
 te = (xe-1) * (ye-1);
 encryption_key();
 for(ie = 0; ie < je-1; ie++)
 encrypt1();
		fgets(pass,9,fptr);
		if(!strcmp(pass,passt)){
			applist();
			break;
		}
		else{
			printf("\n\n\n\n\n\n\t\t\t\t\tWrong Password!!");
			getch();
			continue;
		}
	}
	if(c==1){
		printf("\n\n\n\n\n\n\t\t\t\t\tNot Found!");
		getch();
	}
}
}

void newuser(){
	system("cls");
	int c=0,x=0;
	FILE *fptr;
	char passr[]="garv1582";
	printf("\n\n\n\n\n\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t\t|                                                                                       |\n\t\t\t\t\t|  Please authenticate yourself..(Enter the password given by creator of this program)  |\n\t\t\t\t\t|                                                                                       |\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
	start1:
	char p;
	char pass[25];
	int i=0;
	do{
		p=getch();
		if(p=='\b')
		{
			system("cls");
		   	printf("\n\n\n\n\n\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\t\t\t\t\t|                                                                                       |\n\t\t\t\t\t|  Please authenticate yourself..(Enter the password given by creator of this program)  |\n\t\t\t\t\t|                                                                                       |\n\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
			for(int j=0;j<i-1;j++)
			printf("*");
			i--;
			if(i<=0)
			{
				i=0;
				goto start1;
			}
			continue;
		}
		if(p==' ')
		{
			continue;
		}
		if(p!='\r'){
			pass[i]=p;
			printf("*");
		}
		else{
			pass[i]='\0';
		}
		i++;
	}while(pass[i-1]!='\0');
	if(!strcmp(pass,passr)){
		printf("\n\n\n\n\n\n\tExcellent! Now you can register yourself...(press ENTER to continue)\n\n\n\n\t\t\t\t\t\t\t\t\t\t");
		getch();
	}
	else{
		printf("\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tWrong password!!\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t");
		return;
	}
	char username[10];
	while(1){
	c=0;
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\tEnter the username that you want to register(it should be exactly 8 characters): ");
	scanf("%s",username);
	if(strlen(username)!=8){
		printf("\n\n\n\tInvalid username , should be 8 characters long...");
		getch();
		continue;
	}
	else
	x=1;
	strlwr(username);
	fptr=fopen("users.txt","r");
	char ch,user[10];
	while(ch=getc(fptr)!=EOF){
		fseek(fptr,-1,1);
		fgets(user,9,fptr);
		if(!strcmp(user,username)){
			c=1;
			break;
		}
		else{
			fseek(fptr,8,1);
			continue;
		}
	}
	if(c==1){
		printf("\n\n\n\tUsername already exists!\n");
		getch();
		continue;
	}
	fclose(fptr);
	while(1){
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\tEnter the Username that you want to Register(it should be exactly 8 characters): %s",username);
	printf("\n\n\n\n\t\tEnter the password(it should be exacty 8 characters): ");
	char p1;
	start2:
	int j=0;
	do{
		p1=getch();
		if(p1=='\b')
		{
			system("cls");
		   	printf("\n\n\n\n\n\n\n\n\n\t\tEnter the Username that you want to Register(it should be exactly 8 characters): %s",username);
			printf("\n\n\n\n\t\tEnter the password(it should be exacty 8 characters): ");
			for(int i=0;i<j-1;i++)
			printf("*");
			j--;
			if(j<=0)
			{
				j=0;
				goto start2;
			}
			continue;
		}
		if(p1==' ')
		{
			continue;
		}
		if(p1!='\r'){
			password[j]=p1;
			printf("*");
		}
		else{
			password[j]='\0';
		}
		j++;
	}while(password[j-1]!='\0');
	if(strlen(password)!=8){
		printf("\n\n\n\n\t\t\tInvalid password, should be 8 characters long...");
		getch();
		continue;
	}
	else{
		break;
	}
	}
	char password2[10];
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\tEnter the username that you want to register(it should be exactly 8 characters): %s",username);
	printf("\n\n\n\n\t\tEnter the password(it should be exacty 8 characters): ********");
	printf("\n\n\n\n\t\tConfirm Password: ");
	start3:
	int k=0;
	char p1;
	do{
		p1=getch();
		if(p1=='\b')
		{
			system("cls");
			printf("\n\n\n\n\n\n\n\n\n\t\tEnter the username that you want to register(it should be exactly 8 characters): %s",username);
			printf("\n\n\n\n\t\tEnter the password(it should be exacty 8 characters): ********");
		    printf("\n\n\n\n\t\tConfirm Password: ");
			for(int j=0;j<k-1;j++)
			printf("*");
			k--;
			if(k<=0)
			{
				k=0;
				goto start3;
			}
			continue;
		}
		if(p1==' ')
		{
			continue;
		}
		if(p1!='\r'){
			password2[k]=p1;
			printf("*");
		}
		else{
			password2[k]='\0';
		}
		k++;
	}while(password2[k-1]!='\0');
	if(strcmp(password2,password)){
		printf("\n\n\n\n\t\t\tPasswords do not match...");
		getch();
		continue;	
	}
	if(x==1)
	break;
}
	fptr=fopen("users.txt","a");
	fputs(username,fptr);
	fclose(fptr);
	 for(ie= 0; password[ie] != NULL; ie++)
    me[ie] = password[ie];
 ne= xe* ye;
 te = (xe-1) * (ye-1);
 encryption_key();
 for(ie = 0; ie < je-1; ie++)
 encrypt();
	applist();
}

int main(){
	srand(time(NULL));
	system("cls");
    printf("\n\n\t\t\t\t\t\t\t**************************************************\n\t\t\t\t\t\t\t||                                              ||\n\t\t\t\t\t\t\t||                   WELCOME                    ||\n\t\t\t\t\t\t\t||                                              ||\n\t\t\t\t\t\t\t||          THIS PROJECT IS CREATED BY          ||\n\t\t\t\t\t\t\t||                                              ||\n\t\t\t\t\t\t\t||                                              ||\n\t\t\t\t\t\t\t||                   GARVIT                     ||\n\t\t\t\t\t\t\t||                                              ||");
	printf("\n\t\t\t\t\t\t\t||                                              ||\n\t\t\t\t\t\t\t||                                              ||\n\t\t\t\t\t\t\t**************************************************\n\n\n\n\t Welcome! Please authenticate yourself first...\n\n\t 1.Registered user\n\t 2.New User\n");
	int n;
	while(1){
	printf("\n\n\n\n\t\t\t\t\tEnter your choice...\t");
	scanf("%d",&n);
	if(n==1){
		check();
		break;
	}
	else if(n==2){
		newuser();
		break;
	}
	else{
		printf("\n\nInvalid Input");
		printf("\nPress '1' to try again and any other key to exit program...\t");
		int a;
		scanf("%d",&a);
		if(a==1){
			continue;
		}
		else{
			break;
		}
    }
}
	system("PAUSE");
	return 0;
}
