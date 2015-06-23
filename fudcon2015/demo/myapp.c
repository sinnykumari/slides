#include <stdio.h>
#include "test.h"

int main()
{
   struct Student s = {7, "foo"};
   float a = 3.5, b = 2.0;
   printf ("Addition of a and b = %f\n",add(a,b));
   print(s);
 
   return 0; 
}

