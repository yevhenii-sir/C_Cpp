#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 

 struct Drib
 {
  int Ch;
  int Zn;
 }; Drib a;
 
Drib f_inpDrib(Drib a)
{
	printf("Дрiб: \n\t%d\n\t-\n\t%d", a.Ch, a.Zn);
}

int main()
{
// setlocale(LC_ALL, "Ukrainian");
 Drib ch1, zn1, scorochDrib;
 printf("Введiть чисельник i знаменник: ");
 scanf("%d%d",&a.Ch,&a.Zn);
 f_inpDrib(a);
 return 0;
}