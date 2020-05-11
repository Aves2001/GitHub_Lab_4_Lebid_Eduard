#include <stdio.h>
#include <conio.h>
#include <windows.h>

int x = 0;
double i = 1;
double sum_i = 0;
double sum_j = 0;
int zz = 0;

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
printf ("\r\nВведіть ціле число\r\n\nx = ");
scanf ("%d", &x);

if (x == 0)
{
	system("cls");
	printf("X не може бути нулем\r\n");
}else zz = 1;

}while(zz == 0);

while (i <= 10)
{
sum_i += i;
i++;}

double j = sum_i;
while (j <= 10)
{
sum_j += j;
j++;}

double a1 = sum_i + 2;
double a2 = sum_j + x;
double a3 = a1/a2;

printf ("\r\nВідповідь: [%g]\r\n", a3);


// Вертаєм chcp
    SetConsoleCP(chcp);                
	SetConsoleOutputCP(chcpOut);
//
    getch();
    return 0;
}