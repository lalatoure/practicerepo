#include <stdio.h>

void main(){
	char pwd[1024];
	FILE *f = fopen("pwd-log.log",'w');
	getcwd(pwd, sizeof(pwd));
	printf("working dir %s\n",pwd);
	printf("%s\n",pwd);
	fputs("%s\n",f);
	fclose(f);
	
}
