#include"mwdefines.h"
#include<stdio.h>
#include"mwproduct.h"

int main (int argc, char** argv)
{
printf(PRODUCT);
printf("\n");
printf("Version: %.2f",VERSION);
if(ISALPHA)
printf("%c",'a');
else if(ISBETA)
printf("%c",'b');
printf("\n");

return 0;
}

