#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <iostream>

struct Student
{
 char PIB[20];
 int ser_bal;
 };
Student s[10];

main()
{
 FILE *f1;
 int i = 0;
  printf("\n Vvedit PIB studenta ta seredniiy bal - ");
 
  do
   {
    printf("\n PIB - ");
    scanf("%s", s[i].PIB);
    printf("\n Seredniy bal - ");
    scanf("%d",&s[i++].ser_bal);
    printf("\n Repeat? y/n \n");
   } while (getch() != 'n');
   
  f1 = fopen("student.txt","w"); 
  
   if(f1 != NULL)
    {
     printf("File yspechno sozdan! \n");
     for (int n = 0; n < i; n++) {
        fprintf(f1,"%s %d\n", s[n].PIB, s[n].ser_bal);	
    }
	  
	}
	else
	 {
	  fprintf(stderr,"Pomilka, pererevirte file! \n");
	  return 1;
	 }

     
 
   /**while (!feof(f1))
    {
     fprintf(f1,"%s%d\n",s[i].PIB,s[i].ser_bal); 
	 i++;
    }**/
 fclose(f1);
 getch();
}