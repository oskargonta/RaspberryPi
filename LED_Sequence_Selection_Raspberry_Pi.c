/*zmiana*/
#include <wiringPi.h>
int main ()
{
  wiringPiSetup () ;
  pinMode (0, OUTPUT) ;
int z,i,l,wybor;

 printf ("****** PROJEKT DIODA ****** \n\n");
 printf ("******1-Mrugniecia z czestotliwoscia 50*******\n");
 printf ("******2-Mrugniecia z czestotliwoscia 100******\n");
 printf ("******3-Mrugniecia z czestotliwoscia 500******\n");
 printf ("******4-Zakoncz program*************\n");
 printf ("Wybierz opcje ktora cie interesuje\n");
  scanf ("%d", &wybor);
 printf ("\nwybrales opcje nr: %d", wybor);
 printf ("\n\n");
 printf ("Podaj liczbe mrugniec diody\n");
  scanf ("%d", &l);
 printf ("Liczba Mrugniec diody: %d", l);
 printf ("\n\n");
 
  switch (wybor)
{
  case 1: printf ("1-Mrugniecia z czestotliwoscia 50\n");
     for (i=1;i<=l;i++)
  {

    digitalWrite (0, HIGH); delay (50);
    digitalWrite (0, LOW); delay (50);
 }
  return 0 ;
   break;
  case 2: printf ("2-Mrugniecia z czestotliwoscia 100\n");
       for (i=1;i<=l;i++)
  {

    digitalWrite (0, HIGH); delay (100);
    digitalWrite (0, LOW); delay (100);
 }
  return 0 ;

 break;
  case 3: printf ("3-Mrugniecia z czestotliwoscia 500\n");
        for (i=1;i<=l;i++)
  {

    digitalWrite (0, HIGH); delay (500);
    digitalWrite (0, LOW); delay (500);
 }
break;
return 0;
} 
return 0 ;
} 