#include <stdio.h>
#include <stdlib.h>
int main(int argc, char* argv[])
{
char * fileName = argv[1];
FILE* file = fopen(fileName, "r"); 
if(!file){
printf("\n Check the path of %s", fileName);
return -1;
}
char line[1024];
char *eptr;
long double todouble;
while (fgets(line, 1024, file)) {
todouble = strtold(line, &eptr);
for(long double i=2; i< todouble/2; i++)
{
if(todouble % i == 0)
{
printf("%.0Lf=%.0Lf*%.0Lf\n", todouble, i, todouble/i);
break;
}
}
}
fclose(file);
return 0;
}
