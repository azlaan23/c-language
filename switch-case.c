#include<stdio.h>

int main(){
int age, marks ;
printf("Enter the age \n");
scanf("%d" ,&age);

printf("Enter the marks \n");
scanf("%d" ,&marks);

switch (age)
{
    case 3:
    printf("the age is 3\n");
    // break;
        switch(marks)
case 45:
    printf(" your marks is 45");
    break;
default:
    printf("your marks are not 45");
case 23:
    printf(" the age 23\n");
    // break;

case 34:
    printf(" the is 34\n");
    break;
default:
    printf(" Age is 3,23 and 34\n");
// break;
}  
return 0;
}