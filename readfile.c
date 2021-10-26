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
unsigned long strtoint,result;
while (fgets(line, 1024, file)) {
result = strtoul(line, &eptr, 10);
printf("%lu\n",result);
/*for(int i=2; i< strtoint/2; i++)
{
if(strtoint % i == 0)
{
printf("%d=%d*%d\n", strtoint, i, strtoint/i);
break;
}
}*/
}
fclose(file);
return 0;
}
