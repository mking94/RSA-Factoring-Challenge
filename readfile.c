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
char line[500];
int strtoint;
while (fgets(line, sizeof(line), file)) {
strtoint = atoi(line);
for(int i=2; i< strtoint/2; i++)
{
if(strtoint % i == 0)
{
char buffer[50];
sprintf(buffer, "%d=%d*%d", strtoint, i, strtoint/i);
puts(buffer);
break;
}
}
}
fclose(file);
return 0;
}
