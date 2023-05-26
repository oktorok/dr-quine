#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
/*
** Wow please not
** more cool comments
** this should be ilegal
** (╬ ಠ益ಠ)
*/
#define S1 "#include <stdio.h>%c#include <stdlib.h>%c#include <string.h>%c#include <unistd.h>%c/*%c** Wow please not%c** more cool comments%c** this should be ilegal%c** (╬ ಠ益ಠ)%c*/%c#define S1 %c%s%c%c%c#define S2 %c%s%c%c%c"

#define S2 "int main(void)%c{%c%cchar a = %c%cn%c;%c%cchar b = %c%c%c%c;%c%cchar c = %c%c%c%c;%c%cchar d = %c%c%c%c;%c%cchar e = %c%ct%c;%c%cint num = %d;%c%cif (num <= 0)%c%c%creturn 0;%c%cchar name[20];%c%cchar command[100];%c%csprintf(name, %cSully_%%d.c%c, num);%c%cif (access(name, F_OK) != 0)%c%c%cnum = num + 1;%c%csprintf(name, %cSully_%%d.c%c, num-1);%c%cFILE *file = fopen(name, %cw%c);%c%cname[strlen(name)-2]=0;%c%cfprintf(file,S1,a,a,a,a,a,a,a,a,a,a,d,S1,d,a,a,d,S2,d,a,a);%c%cfprintf(file,S2,a,a,e,b,c,b,a,e,b,c,b,b,a,e,b,c,c,b,a,e,b,c,d,b,a,e,b,c,b,a,e,num-1,a,e,a,e,e,a,e,a,e,a,e,d,d,a,e,a,e,e,a,e,d,d,a,e,d,d,a,e,a,e,a,e,a,e,a,e,d,d,a,e,a,e,a,a);%c%cfclose(file);%c%csprintf(command, %cgcc -o %%s %%s.c && ./%%s%c, name, name, name);%c%csystem(command);%c%creturn 0;%c}%c"

int main(void)
{
	char a = '\n';
	char b = '\'';
	char c = '\\';
	char d = '\"';
	char e = '\t';
	int num = 5;
	if (num <= 0)
		return 0;
	char name[20];
	char command[100];
	sprintf(name, "Sully_%d.c", num);
	if (access(name, F_OK) != 0)
		num = num + 1;
	sprintf(name, "Sully_%d.c", num-1);
	FILE *file = fopen(name, "w");
	name[strlen(name)-2]=0;
	fprintf(file,S1,a,a,a,a,a,a,a,a,a,a,d,S1,d,a,a,d,S2,d,a,a);
	fprintf(file,S2,a,a,e,b,c,b,a,e,b,c,b,b,a,e,b,c,c,b,a,e,b,c,d,b,a,e,b,c,b,a,e,num-1,a,e,a,e,e,a,e,a,e,a,e,d,d,a,e,a,e,e,a,e,d,d,a,e,d,d,a,e,a,e,a,e,a,e,a,e,d,d,a,e,a,e,a,a);
	fclose(file);
	sprintf(command, "gcc -o %s %s.c && ./%s", name, name, name);
	system(command);
	return 0;
}
