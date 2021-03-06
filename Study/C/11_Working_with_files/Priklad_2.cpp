#include<stdio.h>
#include<string.h>
#define maxline 80

main()
{
	int count  = 0;
	FILE *out, *in = fopen("SirenkoEvg.txt","r");
	char name[maxline], inname[10];
	if (in != NULL)
	{
		while(fgets(name,maxline,in) != NULL)
		{
			//puts(name);
			fputs(name, stdout);
			++count;
            //printf("1\n");
		}
	out = fopen("Sirenko_Rezult.txt","w");
	fprintf(out,"\nVstgo %d strok\n",count);
	fclose(in);
    fclose(out);
	}
	else
	printf("File %s is absent!!!\n",inname);
}