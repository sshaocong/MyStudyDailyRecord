#include<stdio.h>
#include<string.h>
#include"miniShell.h"
int main(int argc, const char *argv[])
{
	printf("WELCOME MINISHELL!\n");
	while(1)
	{
		showpwd();
		char ord[100] = { 0 };
		gets(ord);
		char* p = strtok(ord," ");
		char* p1 = strtok(NULL," ");
		char* p2 = strtok(NULL,"\n");
		if(strcmp(ord,"quit") == 0)
		{
			printf("QUIT MINISHELL!\n");
			return 0;
		}
		if(strcmp(p,"cp") == 0)
		{
			cpFile(p1,p2);
			continue;
		}
		if(strcmp(p,"cat") == 0)
		{
			catFile(p1);
			continue;
		}
		if(strcmp(p,"cd") == 0)
		{
			cd(p1);
			continue;
		}
		if(strcmp(p,"ls") == 0)
		{
			lsDir(p1);
			continue;
		}
		if(strcmp(p,"ll") == 0)
		{
			llFile(p1);
			continue;
		}
	}
	
	return 0;
}
