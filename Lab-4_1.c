#include <stdio.h>
#include <conio.h>
#include <math.h>
#include <windows.h>

int x = 0;
int y = 0;
unsigned char zz = 0;

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

do{
printf ("\r\nx = ");
scanf ("%d", &x);
printf ("y = ");
scanf ("%d", &y);

double a1 = x * y;		//3*4		//v
double a2 = 2 * x;		//2*3		//v
double a3 = pow(y,x);	//4^3		//v
double a4 = y * y;		//3*4	+4	//n
double a5 = a2;			//2*3		//n
double b1 = a1 + a2 - a3;//12-6-64	//v //-46
double b2 = a4;			//4*4		//n
double c1 = b2 - a5;	//16-6		//n //+10
//double d1 = b1 - b1 - b1; // - -	//

double f1 = sin(x) + c1;
double f2 = b1 / f1;
//double f3 = d1 / f1;

if (x < 0 && y == 0)
	{
		system("cls");
		printf("\r\nУ обчислюваному виразі: ноль у відємному степені\r\n");
		printf("\r\nВведіть дані заново:\r\n");
	} 

		else if (f1 == 0)
			{
				system("cls");
				printf("\r\nУ обчислюваному виразі: виконується ділення на 0\r\n");
				printf("\r\nВведіть дані заново:\r\n");
			} 
				else {
						zz = 1;
						printf ("\r\na = %g\r\n", f2);
					 }



}
while (zz == 0);


// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}