// File modes, fgets, fputs, fgetc, fputc & more on C file handling

#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("myfile.txt", "w");
    // char c = fgetc(ptr);
    // printf("the character i read was %c\n", c);

    // c = fgetc(ptr);
    // printf("the character i read was %c\n", c);

    //char str[4];
     //fgets(str, 3, ptr);
//printf("the string is %d\n", str);
  //  fclose(ptr);


fputc('o', ptr);
fputs("this is harry ", ptr);
    return 0;
}