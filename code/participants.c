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

  printf ("%02d: Stephane Zuckerman\n", ++i);

  printf ("%02d: Jo Taylor\n", ++i);

  printf ("There are %i participants.\n", i);
  return 0;
} // main
