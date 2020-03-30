#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define CLRSCR system("cls");
inline void foo() {CLRSCR}
char a[9]= {'1','2','3','4','5','6','7','8','9'};
void gamename()
{
	printf("\t\t\tTIC TAC TOE GAME");
}
void show()
{
	printf("\n\n\n\t\t\t___________\n");
	printf("\t\t\t %c | %c | %c\n",a[0],a[1],a[2]);
	printf("\t\t\t___|___|___\n");
	printf("\t\t\t %c | %c | %c\n",a[3],a[4],a[5]);
	printf("\t\t\t___|___|___\n");
	printf("\t\t\t %c | %c | %c\n",a[6],a[7],a[8]);
	printf("\t\t\t___|___|___");
}
void symbol()
{
	printf("\n\n\nPlayer 1 symbol is : X\n");
	printf("Player 2 symbol is : O");
} 
void play()
{
	char p,s;
	int i;
	printf("\n\nEnter the position and symbol\n");
	fflush(stdin);
	scanf("%c %c",&p,&s);
	for(i=0;i<9;i++)
	{
		if(a[i]==p)
		a[i]=s;
		
	}
	
}
int end()
{
	if((a[0]=='x'&&a[1]=='x'&&a[2]=='x')||(a[0]=='x'&&a[3]=='x'&&a[6]=='x')||(a[0]=='x'&&a[4]=='x'&&a[8]=='x'))
	return 1;
	else if ((a[0]=='0'&&a[1]=='0'&&a[2]=='0')||(a[0]=='0'&&a[3]=='0'&&a[6]=='0')||(a[0]=='0'&&a[4]=='0'&&a[8]=='0'))
	return 2;
	else if (a[1]=='x'&&a[4]=='x'&&a[7]=='x')
	return 1;
	else if (a[1]=='0'&&a[4]=='0'&&a[7]=='0')
	return 2;
	else if ((a[2]=='x'&&a[5]=='x'&&a[8]=='x')||(a[2]=='x'&&a[4]=='x'&&a[6]=='x'))
	return 1;
	else if ((a[2]=='0'&&a[5]=='0'&&a[8]=='0')||(a[2]=='0'&&a[4]=='0'&&a[6]=='0'))
	return 2;
	else if (a[3]=='x'&&a[4]=='x'&&a[5]=='x')
	return 1;
	else if (a[3]=='0'&&a[4]=='0'&&a[5]=='0')
	return 2;
	else if (a[6]=='x'&&a[7]=='x'&&a[8]=='x')
	return 1;
	else if (a[6]=='0'&&a[7]=='0'&&a[8]=='0')
	return 2;
	else if (a[2]=='x'&&a[5]=='x'&&a[8]=='x')
	return 1;
	else if (a[2]=='0'&&a[5]=='0'&&a[8]=='0')
	return 2;
	
	
	
	
}
int main()
{  getch();
int k;
    int c=1;
    
	gamename();
	show();
	symbol();
	play();
	
	lebel :
	foo();
	gamename();
	show();
	play();
	k=end();
	c++;
	while (c!=9)
	{ 
			if(k==1)
	{ foo();
	gamename();
		show();
			printf("\nplayer 1 won");
	}

	else if(k==2)
	{	foo();
	gamename();
			show();
			printf("\nplayer 2 won");
	}

	else 
	goto lebel;
	}
	foo();
	gamename();
		show();
	printf("\n\nGame Draw");

	return 0;
}
