#include <stdio.h>
#define S0() int main(void) { char a = '\n';char b = '\''; char c = '\\'; char d = '\"'; FILE *file = fopen("Grace_kid.c", "w"); fprintf(file, S2,a,b,c,b,b,c,b,b,b,c,c,b,b,c,d,b,d,d,d,d); fprintf(file,S1,a,a,a,a,a,a,a,a,d,S1,d,a,a,d,S2,d,a,a,a); fclose(file); return 0; }

/*
** Wow please not
** more cool comments
** this should be ilegal
** (╬ ಠ益ಠ)
*/
#define S1 "%c%c/*%c** Wow please not%c** more cool comments%c** this should be ilegal%c** (╬ ಠ益ಠ)%c*/%c#define S1 %c%s%c%c%c#define S2 %c%s%c%c%cS0()%c"

#define S2 "#include <stdio.h>%c#define S0() int main(void) { char a = %c%cn%c;char b = %c%c%c%c; char c = %c%c%c%c; char d = %c%c%c%c; FILE *file = fopen(%cGrace_kid.c%c, %cw%c); fprintf(file, S2,a,b,c,b,b,c,b,b,b,c,c,b,b,c,d,b,d,d,d,d); fprintf(file,S1,a,a,a,a,a,a,a,a,d,S1,d,a,a,d,S2,d,a,a,a); fclose(file); return 0; }"

S0()
