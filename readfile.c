#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long double mod(long double x, long double y) {
    return ((x/y) - truncl(x/y));
}
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
printf("%s=>%.0lld\n",line,todouble);
/*for(long double i=2; i< todouble/2; i++)
{
if(mod(todouble, i) == 0)
{
printf("%.0Lf=%.0Lf*%.0Lf\n", todouble, i, todouble/i);
break;
}
}*/
}
fclose(file);
return 0;
}
