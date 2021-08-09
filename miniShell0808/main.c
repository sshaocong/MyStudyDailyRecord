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
		fgets(ord,sizeof(ord),stdin);
//		int i = 0;
//		while(ord[i] != '\n')
//		{
//			i++;
//		}
//		ord[i] = ' ';
 		ord[strlen(ord) - 1] = '\0';
		char* p = strtok(ord," ");
		char* p1 = strtok(NULL," ");
		char* p2 = strtok(NULL," ");
		char* p3 = strtok(NULL," ");
		if(strcmp(ord,"quit") == 0)
		{
			printf("QUIT MINISHELL!\n");
			return 0;
		}
		else if(strcmp(p,"cp") == 0)
		{
			cpFile(p1,p2);
			continue;
		}
		else if(strcmp(p,"cat") == 0)
		{
			catFile(p1);
			continue;
		}
		else if(strcmp(p,"cd") == 0)
		{
			cd(p1);
			continue;
		}
		else if(strcmp(p,"ls") == 0)
		{
			lsDir(p1);
			continue;
		}
		else if(strcmp(p,"ll") == 0)
		{
			llFile(p1);
			continue;
		}
		else if(strcmp(p,"ln") == 0 
				&&strcmp(p1,"-s") == 0)
		{
			lnsFile(p2,p3);
			continue;
		}
		else if(strcmp(p,"ln") == 0)
		{
			lnYFile(p1,p2);
			continue;
		}
		else if(strcmp(p,"rm") == 0)
		{
			rmFile(p1);
			continue;
		}
		else if(strcmp(p,"touch") == 0)
		{
			touchFile(p1);
			continue;
		}
		else if(strcmp(p,"mv") == 0)
		{
			mvFile(p1,p2);
			continue;
		}
		else if(strcmp(p,"help") == 0)
		{
			printf("ORDER:cp / cat / cd / ls / ll / ln -s / ln / rm / touch / mv / quit\n");
			continue;
		}
		else
		{
			printf("input error, Please try again!\n");
			continue;
		}
	}
	
	return 0;
}
