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
while (fgets(line, sizeof(line), file)) {
printf("%d",atoi(line));
}
fclose(file);
return 0;
}
