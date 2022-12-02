#include <stdio.h>

typedef struct student {
    int id ;
    int marks;
    char fav_char;
    // char_name[34];
} std ;


 int main() 
{
// int *a,b;
typedef int* intPointer;
intPointer a,b;
int c = 78;
a = &c;
b = &c;

// std s1,s2;
// s1.id = 43;
// s2.id= 54;
// printf("Value of s1 's id of %d\n", s1.id);
// printf("value of s2's id id %d\n", s2.id ); 


// typedef <previous_name <alias_name>;
// typedef unsigned long  ul;
// ul l1,l2,l3;
// typedef int integer ;
// integer a = 4;
// printf("value of a is %d", a);
//      return 0;
}
// typedep is a keyword in c language to use of alternative name