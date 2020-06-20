#include<iostream.h>
#include<conio.h>
#include<ctype.h>
char chc[][4][2]={{{'A',(char)1},{'B',(char)2},{'C',(char)3},{'D',(char)4}},{{'E',(char)5},{'F',(char)3},{'G',(char)6},{'H',(char)14}},{{'I',(char)6},{'J',(char)15},{'K',(char)1},{'L',(char)4}},{{'M',(char)15},{'N',(char)2},{'O',(char)14},{'P', 
(char)5}}},c[2];
char ch[][6][2]={{{'A',(char)1},{'B',(char)2},{'C',(char)4},{'D',(char)5},{'E',(char)6},{'F',(char)11}},{{'G',(char)12},{'H',(char)14},{'I',(char)1},{'J',(char)11},{'K',(char)14},{'L',(char)12}},{{'M',(char)5},{'N',(char)2},{'O',(char)6},{'P',(char)3}, 
{'Q',(char)4},{'R',(char)2}},{{'S',(char)12},{'T',(char)1},{'U',(char)11},{'V',(char)3},{'W',(char)12},{'X',(char)5}},{{'Y',(char)4},{'Z',(char)6},{'0',(char)5},{'1',(char)3},{'2',(char)11},{'3',(char)6}},{{'4',(char)3},{'5',(char)14},{'6',(char)2},{'7', 
(char)4},{'8',(char)14},{'9',(char)1}}};
char ch1[4][4][2]={{{'A',(char)1},{'B',(char)2},{'C',(char)3},{'D',(char)4}},{{'E',(char)5},{'F',(char)3},{'G',(char)6},{'H',(char)14}},{{'I',(char)6},{'J',(char)15},{'K',(char)1},{'L',(char)4}},{{'M',(char)15},{'N',(char)2},{'O',(char)14},{'P', 
(char)5}}};
char ch2[6][6][2]={{{'A',(char)1},{'B',(char)2},{'C',(char)4},{'D',(char)5},{'E',(char)6},{'F',(char)11}},{{'G',(char)12},{'H',(char)14},{'I',(char)1},{'J',(char)11},{'K',(char)14},{'L',(char)12}},{{'M',(char)5},{'N',(char)2},{'O',(char)6},{'P', 
(char)3},{'Q',(char)4},{'R',(char)2}},{{'S',(char)12},{'T',(char)1},{'U',(char)11},{'V',(char)3},{'W',(char)12},{'X',(char)5}},{{'Y',(char)4},{'Z',(char)6},{'0',(char)5},{'1',(char)3},{'2',(char)11},{'3',(char)6}},{{'4',(char)3},{'5',(char)14},{'6', 
(char)2},{'7',(char)4},{'8',(char)14},{'9',(char)1}}};
int a[2],b[2],number=2,i=0,j=0,m=0,k=0,v=0,g=1,i1,j1,num;
long x=1;
char chose,chose1;
 char square[10]={'o','1','2','3','4','5','6','7','8','9'};
 char square1[10]={'o','1','2','3','4','5','6','7','8','9'};
    int pts_1=0,pts_2=0,player=1;

    int result();
    int check();
    void board();
    void win();
    void change();

void declare1()
{
for(i=0;i<10;i++)
{
square[i]=square1[i];
 }
 j=0;m=0;pts_1=0;pts_2=0;player=1;
}
void declare()
{
number=2;i=0;j=0;m=0;k=0;v=0;g=1;
for(i=0;i<4;i++)
for(j=0;j<4;j++)
{
chc[i][j][0]=ch1[i][j][0];
chc[i][j][1]=ch1[i][j][1];
}
for(i=0;i<6;i++)
for(j=0;j<6;j++)
{
ch[i][j][0]=ch2[i][j][0];
ch[i][j][1]=ch2[i][j][1];
}
}

int result()

   {

    if (square[1] == square[2] && square[2] == square[3])
     return 1;

    else if (square[4] == square[5] && square[5] == square[6])
     return 1;

    else if (square[7] == square[8] && square[8] == square[9])
     return 1;

    else if (square[1] == square[4] && square[4] == square[7])
     return 1;

    else if (square[2] == square[5] && square[5] == square[8])
     return 1;

    else if (square[3] == square[6] && square[6] == square[9])
     return 1;

    else if (square[1] == square[5] && square[5] == square[9])
     return 1;

    else if (square[3] == square[5] && square[5] == square[7])
     return 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
	     square[4] != '4' && square[5] != '5' && square[6] != '6' &&
	     square[7] != '7' && square[8] != '8' && square[9] != '9'  )
     return (0);

    else
     return (2);

   }


/*
     FUNCTION TO DRAW BOARD OF TIC TAC TOE WITH PLAYERS MARK*/

 void board()

  {

   clrscr();

   cout << "\n\n\t\t\t\t   Tic Tac Toe\n\n";
   cout << "\t\t\t  Player 1 (X)  -  Player 2 (O)" << endl << endl << endl ;
   cout << "\t\t\t\t     |     |     " << endl;
   cout << "\t\t\t\t  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
   cout << "\t\t\t\t_____|_____|_____" << endl;
   cout << "\t\t\t\t     |     |     " << endl;
   cout << "\t\t\t\t  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
   cout << "\t\t\t\t_____|_____|_____" << endl;
   cout << "\t\t\t\t     |     |     " << endl;
   cout << "\t\t\t\t  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
   cout << "\t\t\t\t     |     |     " << endl << endl;

  }


 void change()

  {

    square[1]='1';
    square[2]='2';
    square[3]='3';
    square[4]='4';
    square[5]='5';
    square[6]='6';
    square[7]='7';
    square[8]='8';
    square[9]='9';

  }


 void win()

  {

    if(pts_1>pts_2)

     {

	cout<<"\n\tLOADING THE RESULTS OF THE SERIES";
	for(int m=0;m<1000;m++);
	 cout<<"\n\n\tTHE WINNER OF THE SERIES IS : "<<"\tPLAYER  1"<<" WITH "<<pts_1<<" POINTS!!!";
     }

    else if(pts_1<pts_2)

     {

	cout<<"\n\n\tLOADING THE RESULTS OF THE SERIES";
	for(int m=0;m<1000;m++);
	 cout<<"\n\tTHE WINNER OF THE SERIES IS : "<<"\tPLAYER  2"<<" WITH "<<pts_2<<" POINTS!!!";
     }

    else

     {
	cout<<"\n\tLOADING THE RESULTS OF THE SERIES";
	for(int m=0;m<1000;m++);
	 cout<<"\n\tTHE SERIES IS A DRAW FOR PLAYER 1 AND PLAYER 2 EQUALLY WITH "<<pts_1<<" POINTS";
     }

  }

 int check()

  {

    if(pts_1==2)

     {
	cout<<"\n\tLOADING THE RESULTS OF THE SERIES";
	for(int m=0;m<1000;m++);
	 cout<<"\n\n\tTHE WINNER OF THE SERIES IS : "<<"\tPLAYER  1"<<" WITH "<<pts_1<<" POINTS!!!";
	return(1);
     }

    else if(pts_2==2)

     {
	cout<<"\n\n\tLOADING THE RESULTS OF THE SERIES";
	for(int m=0;m<1000;m++);
	 cout<<"\n\tTHE WINNER OF THE SERIES IS : "<<"\tPLAYER  2"<<" WITH "<<pts_2<<" POINTS!!!";
	return(2);
     }
     else
     return(3);

  }


void input()
{
m=0;
number=(number==1)?2:1;
cout<<"\n\n\t\tEnter "<<number<<" character :";
while(m!=1)
{
cin>>c[number-1];
c[number-1]=toupper(c[number-1]);
if(((int)c[number-1]-64)%4==0)
{
a[number-1]=(((int)c[number-1]-64)/4)-1;
b[number-1]=3;
}
else
{
a[number-1]=((int)c[number-1]-64)/4;
b[number-1]=(((int)c[number-1]-64)%4)-1;
}
if(number==2 && (c[number-2]==c[number-1]))
cout<<"\n\n\t\tAlready entered..Please enter another valid block..\n";

else if(chc[a[number-1]][b[number-1]][0]==' ')
{
cout<<"\n\n\t\tThe enter block is empty. Please enter a unempty block.";
m=0;
}
else if(c[number-1]>'P' || isalpha(c[number-1])==0)
{
 cout<<"\n\n\t\tInvalid Input. Please enter a valid Input.";
 m=0;
}

 else
 m=1;
 }
}

void compute()
{

if(((int)c[number-1]-64)%4==0)
{
a[number-1]=(((int)c[number-1]-64)/4)-1;
b[number-1]=3;
}
else
{
a[number-1]=((int)c[number-1]-64)/4;
b[number-1]=(((int)c[number-1]-64)%4)-1;
}

  if(number==2)
  {
  if(chc[a[0]][b[0]][1]==chc[a[1]][b[1]][1])
  {
  k=1;
  }
  else
  {
  k=0;
  }
  }
}
void display()
{

if(number==1)
{
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - EASY ******";
cout<<"\n\n\n";
for(i=0;i<4;i++)
{
cout<<"\t\t\t\t";
for(j=0;j<4;j++)
if(i==a[0] && j==b[0])
cout<<chc[i][j][1]<<"  ";
else
cout<<chc[i][j][0]<<"  ";
cout<<"\n\n";
}
}
else
{
if(k==0)
{
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - EASY ******";
cout<<"\n\n\n";
for(i=0;i<4;i++)
{
cout<<"\t\t\t\t";
for(j=0;j<4;j++)
if((i==a[0] && j==b[0]) || (i==a[1] && j==b[1]))
cout<<chc[i][j][1]<<"  ";
else
cout<<chc[i][j][0]<<"  ";
cout<<"\n\n";
}
cout<<"\n\n\t\tSorry..Not Correct..Try again..\n\n";
for(x=1;x<=5050000;x++);
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - EASY ******";
cout<<"\n\n\n";
for(i=0;i<4;i++)
{
cout<<"\t\t\t\t";
for(j=0;j<4;j++)
cout<<chc[i][j][0]<<"  ";
cout<<"\n\n";
}
}
else
{
v++;
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - EASY ******";
cout<<"\n\n\n";
for(i=0;i<4;i++)
{
cout<<"\t\t\t\t";
for(j=0;j<4;j++)
if((i==a[0] && j==b[0]) || (i==a[1] && j==b[1]))
{
cout<<chc[i][j][1]<<"  ";
chc[i][j][0]=' ';
}
else
cout<<chc[i][j][0]<<"  ";
cout<<"\n\n";
}
cout<<"\n\n\t\tYes..It is correct..\n\n";
for(x=1;x<=5050000;x++);
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - EASY ******";
cout<<"\n\n\n";
for(i=0;i<4;i++)
{
cout<<"\t\t\t\t";
for(j=0;j<4;j++)
cout<<chc[i][j][0]<<"  ";
cout<<"\n\n";
}
}
}
}

void input1()
{
m=0;
number=(number==1)?2:1;
cout<<"\n\n\t\t\tEnter "<<number<<" character :";
while(m!=1)
{
cin>>c[number-1];
c[number-1]=toupper(c[number-1]);
if(isalpha(c[number-1]))
num=(int)c[number-1]-64;
else if(isdigit(c[number-1]))
num=(int)c[number-1]-21;

if(num%6==0)
{
a[number-1]=(num/6)-1;
b[number-1]=5;
}
else
{
a[number-1]=num/6;
b[number-1]=(num%6)-1;
}
if(number==2 && (c[number-2]==c[number-1]))
cout<<"\n\n\t\tAlready entered..Please enter another valid block..\n";

else if(ch[a[number-1]][b[number-1]][0]==' ')
{
cout<<"\n\n\t\tThe enter block is empty. Please enter a unempty block.";
m=0;
}
else if(isalpha(c[number-1])==0 && isalpha(c[number-1]==0))
{
 cout<<"\n\n\t\tInvalid Input. Please enter a valid Input.";
 m=0;
}

 else
 m=1;
 }
}

void compute1()
{

if(isalpha(c[number-1]))
num=(int)c[number-1]-64;
else if(isdigit(c[number-1]))
num=(int)c[number-1]-21;

if(num%6==0)
{
a[number-1]=(num/6)-1;
b[number-1]=5;
}
else
{
a[number-1]=num/6;
b[number-1]=(num%6)-1;
}

  if(number==2)
  {
  if(ch[a[0]][b[0]][1]==ch[a[1]][b[1]][1])
  {
  k=1;
  }
  else
  {
  k=0;
  }
  }
}
void display1()
{
if(number==1)
{
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - HARD ******";
cout<<"\n\n\n";
for(i=0;i<6;i++)
{
cout<<"\t\t\t";
for(j=0;j<6;j++)
if(i==a[0] && j==b[0])
cout<<ch[i][j][1]<<"   ";
else
cout<<ch[i][j][0]<<"   ";
cout<<"\n\n";
}
}
else
{
if(k==0)
{
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - HARD ******";
cout<<"\n\n\n";
for(i=0;i<6;i++)
{
cout<<"\t\t\t";
for(j=0;j<6;j++)
if((i==a[0] && j==b[0]) || (i==a[1] && j==b[1]))
cout<<ch[i][j][1]<<"   ";
else
cout<<ch[i][j][0]<<"   ";
cout<<"\n\n";
}
cout<<"\n\n\t\tSorry..Not Correct..Try again..\n\n";
for(x=1;x<=5050000;x++);
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - HARD ******";
cout<<"\n\n\n";
for(i=0;i<6;i++)
{
cout<<"\t\t\t";
for(j=0;j<6;j++)
cout<<ch[i][j][0]<<"   ";
cout<<"\n\n";
}
}
else
{
v++;
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - HARD ******";
cout<<"\n\n\n";
for(i=0;i<6;i++)
{
cout<<"\t\t\t";
for(j=0;j<6;j++)
if((i==a[0] && j==b[0]) || (i==a[1] && j==b[1]))
{
cout<<ch[i][j][1]<<"   ";
ch[i][j][0]=' ';
}
else
cout<<ch[i][j][0]<<"   ";
cout<<"\n\n";
}
cout<<"\n\n\t\tYes..It is correct..\n\n";
for(x=1;x<=5050000;x++);
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - HARD ******";
cout<<"\n\n\n";
for(i=0;i<6;i++)
{
cout<<"\t\t\t";
for(j=0;j<6;j++)
cout<<ch[i][j][0]<<"   ";
cout<<"\n\n";
}
}
}
}


void main()
{ clrscr();

int choose;
cout<<"pg1 \n\n";
cout<<"\n\t\t*****************  GAMES *****************";
cout<<"\n\t\t1. DOUBLE CLICK";
cout<<"\n\t\t2. TIC TAC TOE";
cout<<"\n\nEnter your choice :";
cin>>choose;

while(choose!=0)
{
clrscr();

switch(choose)
{
case 1:
{
clrscr();
int choose1;
cout<<"pg2\n\n\t\t\t*******  DOUBLE CLICK  ********";
cout<<"\n\n\t\t 1.Easy";
cout<<"\n\n\t\t 2.Hard";
cout<<"\n\nEnter your choice :";
cin>>choose1;
while(choose1!=0)
{

switch(choose1)
{
case 1:
{
clrscr();
declare();
cout<<"\n\t\t\t****** DOUBLE CLICK - EASY ******";
cout<<"\n\n\n";
for(i=0;i<4;i++)
{   cout<<"\t\t\t\t";
for(j=0;j<4;j++)
cout<<chc[i][j][0]<<"  ";
cout<<"\n\n";
}
int p=16;
for(int i=1;i<=32;i++)
{
g=1;
input();
compute();
display();
for(i1=0;i1<4;i1++)
for(j1=0;j1<4;j1++)
if(chc[i1][j1][0]!=' ')
{
g=0;
break;
}
if(g==1)
{
cout<<"\n\n\t\t\t\tYOU WIN!!!!\n\n";
cout<<"\n\nenter any key to continue:";
cin>>chose;
break;
}
if(i%2==0)
{
p--;
cout<<"\n\n\t\tChance remaining "<<p;
}
if(p==0 && v!=16)
{
cout<<"\n\n\t\tSORRY..YOU LOOSE..\n";
 cout<<"\n\nenter any key to continue:";
 cin>>chose;
 }
}
}
break;
case 2:
{
declare();
clrscr();
cout<<"\n\t\t\t****** DOUBLE CLICK - HARD ******";
cout<<"\n\n\n";
for(i=0;i<6;i++)
{
cout<<"\t\t\t";
for(j=0;j<6;j++)
cout<<ch[i][j][0]<<"   ";
cout<<"\n\n";
}
int p=25;
for(int i=1;i<=50;i++)
{
g=1;
input1();
compute1();
display1();
for(i1=0;i1<6;i1++)
for(j1=0;j1<6;j1++)
if(ch[i1][j1][0]!=' ')
{
g=0;
break;
}
if(g==1)
{
cout<<"\n\n\t\t\tYOU WIN!!!!\n\n";
cout<<"\n\nenter any key to continue:";
cin>>chose;
break;
}
if(i%2==0)
{
p--;
cout<<"\n\n\t\t\tChance remaining "<<p;
}
if(p==0 && v!=25)
{
cout<<"\n\n\t\t\tSORRY..YOU LOOSE..\n";
cout<<"\n\nenter any key to continue:";
cin>>chose;
}
}
}
break;
default:
cout<<"\nInvalid Input..";
}
clrscr();
cout<<"pg2\n\n\t\t\t*******  DOUBLE CLICK  ********";
cout<<"\n\n\t\t 1.Easy";
cout<<"\n\n\t\t 2.Hard";
cout<<"\n\nEnter your choice or zero(0) to exit:";
cin>>choose1;
}
}
break;
case 2:
{
declare1();
textbackground(20);

      for(k=0;k<3;k++)
       {

	 textbackground(20);
	 clrscr();
	 int i,choice;
	 char ch;
	 char symbol;

	    do

	     {

	       board();
	       player = (player%2) ? 1 : 2 ;

	       cout << "\t\tPlayer " << player << ", enter a number:  ";
	       cin >> choice;

	       symbol = (player == 1) ? 'X' : 'O';



		if (choice == 1 && square[1] == '1')
		square[1] = symbol;

		else if (choice == 2 && square[2] == '2')
		square[2] = symbol;

		else if (choice == 3 && square[3] == '3')
		square[3] = symbol;

		else if (choice == 4 && square[4] == '4')
		square[4] = symbol;

		else if (choice == 5 && square[5] == '5')
		square[5] = symbol;

		else if (choice == 6 && square[6] == '6')
		square[6] = symbol;

		else if (choice == 7 && square[7] == '7')
		square[7] = symbol;

		else if (choice == 8 && square[8] == '8')
		square[8] = symbol;

		else if (choice == 9 && square[9] == '9')
		square[9] = symbol;


	       else

		 {

		   cout << "\t\tInvalid move " ;
		   player--;
		   getch();

		 }

	       i=result();
	       player++;

	     } while(i == 2);


      board();

       if(k == 0)

	{

	   if(i == 1)


	    {

		j++;

		cout << "\t\t==>player " << --player << " win round " << j << "\n\t\t press any key to proceed to next round " ;
		 cin>>ch;

		if(player == 1)
		 pts_1++;

		else
		 pts_2++;
	    }

	   else

	    {

		j++;

		cout<<"\t\t==>Game draw \n\t\t Press any key to proceed to next round";
		 cin>>ch;

	    }

	}

       else if(k == 1)


	{

	  if(i == 1)

	    {

		j++;

		cout << "\t\t==>player " << --player << " win round " << j << "\n\t\t press any key to proceed to next round " ;
		 cin>>ch;

		if(player == 1)
		 pts_1++;

		else
		 pts_2++;

		m=check();
	    }

	   else

	    {
		j++;

		cout << "\t\t==>Game draw \n\t\t Press any key to proceed to next round" ;
		 cin>>ch;
	    }

	}

       else

	{

	  if(i == 1)

	    {
		j++;

		cout << "\t\t==>player " << --player<< " win round " << j << "\n\t\t press any key to proceed to result:  " ;
		 cin>>ch;

		if(player == 1)
		 pts_1++;

		else
		 pts_2++;

		win();

	    }

	  else

	    {

		j++;

		cout<<"\t\t==>Game draw \n\t\t Press any key to proceed to the results";
		 cin>>ch;

		win();

	    }
       }

     if( m==1 || m == 2)
       break;

     else
       change();

   }

  cout << "\n\n\tENTER ANY KEY TO EXIT: " ;
  cin>>chose;
  }
  break;
  default:
  cout<<"\nInvalid Input..";
    }
  clrscr();
 cout<<"pg1\n\t\t*****************  GAMES *****************";
 cout<<"\n\n\t\t\t1. DOUBLE CLICK";
 cout<<"\n\t\t\t2. TIC TAC TOE";
 cout<<"\n\nEnter your choice or zero(0) to exit:";
 cin>>choose;
 }
 getch();
 }

