/**
 * participants.c
 *   A simple C program to print the participants from the class.
 *   Intended as an example of updating code on GitHub.
 */

// +---------+---------------------------------------------------------
// | Headers |
// +---------+

#include <stdio.h>

// +------+------------------------------------------------------------
// | Main |
// +------+

int 
main (int argc, char *argv[])
{
  int i = 0;

  printf ("%02d: Brendan Hansknecht\n",++i);
  
  printf ("%02d: Stephane Zuckerman\n", ++i);
    
  printf ("%02d: Alex Stanage\n", ++i);

  printf ("%02d: Darren Wiltse\n", ++i);  
    
  printf ("%02d: Jo Taylor\n", ++i);

  printf ("%02d: Alejandro-Jeronimo Ayala-Perez\n",++i);
  
  printf ("%02d: Kavan Ferguson\n",++i);

  printf ("%02d: Brett Kurzawa\n", ++i);

  printf ("%02d: Adam Reichanadter\n", ++i);

  printf ("There are %i participants.\n", i);
  return 0;
} // main
