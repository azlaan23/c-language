#include <stdio.h>
#include <string.h>
struct student
{
     int id;
     int marks;
     char fav_char;
     char name[34];
}; // harry , ravi, shubham;
 struct student harry , ravi, shubham;

 void print(){
    
     printf("%s", harry.name);
 };
 int main()
 {
//  struct student harry , ravi, shubham;                     //sruct is a global variable 

harry.id = 1;
ravi.id = 2;
shubham.id = 3;

ravi.marks = 456; 
harry.marks = 324;
shubham.marks = 456;

harry.fav_char = 'i';
ravi.fav_char = 'p';
shubham.fav_char = 'p';

strcpy(harry.name, "Harry Potter student of the  year");


  //printf(" Harry got %d makrs\n", harry.marks );
// printf("harry  name is %s\n", harry.name);


//printf("shubham got %d marks\n", shubham.marks);
//printf("shubham name is  %s\n ", shubham.name);

 print();
// printf("Harry got %d %d %d marks\n", harry.marks, ravi.marks, shubham.marks);

// Quck quiz
// print all the information to a given studet
     return 0;
}