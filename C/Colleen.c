#include <stdio.h>


#define NL '\n'
#define TAB '\t'
#define S1 "#include <stdio.h>%c%c%c#define NL %c%cn%c%c#define TAB %c%ct%c%c#define S1 %c%s%c%c#define S11 %c%s%c%c#define S2 %c%s%c%c/*%c** As Far as i know this%c** is a cool comment%c*/%c"
#define S11 "char backlash_func(char b)%c{%c%creturn (b);%c}%c"
#define S2 "int main (void)%c{%c%cchar b = backlash_func(%c%c%c%c);%c%cchar q = %c%c%c%c;%c%cchar q2 = %c%c%c%c;%c%c/*%c%c** However%c%c** This is real deal%c%c** of a comment%c%c**%c%c*/%c%cprintf(S1,NL,NL,NL,q,b,q,NL,q,b,q,NL,q2,S1,q2,NL,q2,S11,q2,NL,q2,S2,q2,NL, NL,NL,NL,NL);%c%cprintf(S11,NL,NL,TAB,NL,NL);%c%cprintf(S2,NL,NL,TAB,q,b,b,q,NL,TAB,q,b,q,q,NL,TAB,q,b,q2,q,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,NL,NL);%c%c}%c"
/*
** As Far as i know this
** is a cool comment
*/
char backlash_func(char b)
{
	return (b);
}
int main (void)
{
	char b = backlash_func('\\');
	char q = '\'';
	char q2 = '\"';
	/*
	** However
	** This is real deal
	** of a comment
	**
	*/
	printf(S1,NL,NL,NL,q,b,q,NL,q,b,q,NL,q2,S1,q2,NL,q2,S11,q2,NL,q2,S2,q2,NL, NL,NL,NL,NL);
	printf(S11,NL,NL,TAB,NL,NL);
	printf(S2,NL,NL,TAB,q,b,b,q,NL,TAB,q,b,q,q,NL,TAB,q,b,q2,q,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,TAB,NL,NL,NL);

}
