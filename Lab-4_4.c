#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

float y=0;
float x=1.25; 		//a=
float b = 6.75;		//b=
float dx = 0.25;	//крок


int chcp, chcpOut = 0;
int main(void)
{
// память chcp
	chcp = GetConsoleCP();
	chcpOut = GetConsoleOutputCP();

// UTF-8
	SetConsoleCP(65001);                
	SetConsoleOutputCP(65001);
//


printf("\n******************\n");
printf("*X\t\tY*\n");
printf("******************\n");
while (x<=b)
{
y=pow(x,1/4.0);
printf(" %d\t%9.2lf\n", x, y);
x+=dx;
}

// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}