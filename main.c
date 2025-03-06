#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{

char name[12]; 
printf("Who`s birthday is it: "); 
scanf("%s", &name); 

if(strcmp(name, "") == 0)
{
printf("No input detected, exiting ...\n"); 
}
else
{
printf("Happy Birthday %s", name); 
}

}
