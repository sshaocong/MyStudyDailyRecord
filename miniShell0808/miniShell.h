#ifndef _MINISHELL_H
#define _MINISHELL_H

extern void showpwd();
extern void cpFile(char* src,char* dest);
extern void catFile(char* p1);
extern void cd(char* p1);
extern void lsDir(char* p1);
extern void llFile(char* p1);
extern void lnsFile(char* p2, char* p3);
extern void lnYFile(char* p1,char* p2);
extern void rmFile(char* p1);
extern void touchFile(char* p1);
extern void mvFile(char* p1,char* p2);

#endif
