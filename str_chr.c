#include<stdio.h>
#include<string.h>

struct student{
  char name[100];
  int roll;
  float cgpa;
};

int main()
{
    struct student s1;
    strcpy(s1.name,"Mehedi");
    s1.roll = 1234;
    s1.cgpa = 3.89;

    printf("Your name %s\n",s1.name);
    printf("Your roll %d\n",s1.roll);
    printf("Your cgpa %f\n",s1.cgpa);

    return 0;
}
