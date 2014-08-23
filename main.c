#include"mwdefines.h"
#include<stdio.h>
#include"mwproduct.h"

int main (int argc, char** argv)
{
int i;
printf(PRODUCT);
printf("\n");
printf("Version: %.2f",VERSION);
if(ISALPHA)
printf("%c",'a');
else if(ISBETA)
printf("%c",'b');
printf("\n");

printf("Number of Arguments: %d\n",argc);
for(i=0;i<argc;i++)
printf("Argument %d: %s\n",i,argv[i]);


//printf("Received by STDIN: %x\n",stdin);




return 0;
}

