#include <stdio.h>
#include "test.h"

float add (float a, float b)
{
   return  a+b;
}

void print (const struct Student s)
{
  printf ("Usn = %d \t Name = %s\n", s.usn, s.name);
}
