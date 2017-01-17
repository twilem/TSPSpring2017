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

  printf ("%02d: Marissa Walther\n", ++i);

  printf ("%02d: Collin Walker\n", ++i);

  printf ("%02d: Alejandro-Jeronimo Ayala-Perez\n",++i);

  printf ("%02d: Kavan Ferguson\n",++i);

  printf ("%02d: Nic Fosdick\n",++i);

  printf ("%02d: Brett Kurzawa\n", ++i);

  printf ("%02d: Adam Reichanadter\n", ++i);

  printf ("%02d: Piper Dougherty\n", ++i);

  printf ("%02d: Josh Fosdick\n", ++i);

  printf ("%02d: James Straw\n", ++i);

  printf ("%02d: Eamonn Daley\n", ++i);

  printf ("%02d: Dylan Brosseau\n", ++i);

  printf ("%02d: Jay Honnold\n", ++i);

  printf ("%02d: Nicholas Schweikart\n", ++i);

  printf ("%02d: Nicholas Waara\n", ++i);
  
  printf ("%02d: James Giannunzio\n", ++i);

  printf ("%02d: Brandon Johnson\n", ++i);

  printf ("There are %i participants.\n", i);
  return 0;
} // main
