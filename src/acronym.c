#include "acronym.h"

#include <stdio.h>

#include <string.h>
void main()
{
int k=1,i;
char st[100],st2[10];
printf("\n\nEnter The String : ");
scanf("%[^\n]", st);
st2[0] = st[0];
for(i=1;i<strlen(st);i++)
{
    if(st[i]==' ')
    {
    st2[k]= st[i+1];
    k++;
    }
}
printf("\n\nThe ACRONYM Is : ");
for(i=0;i<k;i++)
    printf("%c",st2[i]);
}
