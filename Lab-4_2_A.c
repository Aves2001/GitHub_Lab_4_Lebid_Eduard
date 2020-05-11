#include <stdio.h>
#include <conio.h>
#include <windows.h>
				// діапазон:
double a = 0;   //	Від 
double b = 30;	//	До

double sum = 0;
double f = 0;

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


double c1 = a;
double c2 = b;
double i = 0;

for (c1; c1 <= c2; c1++)
{
	i++;
	sum+= c1;
}

double f = sum/i;

printf("\r\nСереднє арифметичне всіх чисел у діапазоні [%g;%g] = %g\r\n", a, b, f);




// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}