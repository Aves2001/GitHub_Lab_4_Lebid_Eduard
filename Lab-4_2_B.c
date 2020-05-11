#include <stdio.h>
#include <conio.h>
#include <windows.h>
				// діапазон:
double a = 0;   //	Від 
double b = 30;	//	До

double s2 = 0;
double s1 = 0;
double s = 0;

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

while (c1 <= c2)
{
s += c1;
s2++;
c1++;
}

double s1 = s/s2;

printf("\r\nСереднє арифметичне всіх чисел у діапазоні [%g;%g] = %g\r\n", a, b, s1);


// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}