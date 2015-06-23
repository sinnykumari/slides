#include <stdio.h>
#include "test.h"

int add (float a, float b)
{
   return  a+b;
}

void print (const struct Student s)
{
  printf ("Usn = %d \t Name = %s\t Percentage = %f\n", s.usn, s.name, s.percentage);
}
