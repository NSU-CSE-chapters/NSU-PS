#include<stdio.h>
#include<string.h>

int main()
{

    char s[20];
    char a[20];
    int cn=0;

    gets(s);
    int ln;
    ln = strlen(s);
    int i;

    for ( i=0; i<ln; i++)
        if( s[i]=='4' || s[i]=='7')
            cn++;

     if ( cn==4 || cn==7) printf("YES\n");
     else printf("NO\n");

}