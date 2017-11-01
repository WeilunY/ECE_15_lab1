/******************************************************************************
*
* File name: power_of_three.c
*
* Author:  Weilun Yao
*          A15017352
*          wey098@ucsd.edu
*
*
*     Lab #: 1
* Problem #: 3
*
* Submission Date: 10/12/2017
*
******************************************************************************/

/*-----------------------------------------------------------------------------
   Include files: stdio.h
-----------------------------------------------------------------------------*/

#include <stdio.h>

/*=============================================================================
  Constants and definitions: The root BASE is 3
=============================================================================*/

#define BASE 3

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function prompts the user to input a positive integer, and then
  checks whether this integer is a power of 3.

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
  int i; // User's input
  int r; // Reminder
  int e = 0; // exponent
  int copy; // Copy of user input

  printf("Enter a positive integer: ");
  scanf("%d", &i);

  copy = i;

  if (i <= 0)
  {
    printf("Error: invalid integer entered!\n");
    return 1;
  }
  else
  {

    while(i > 1)
    {
      r = i % BASE;
      i /= BASE;
      e++;
    }

    if (r == 0)
    {
      printf("%d is a power of %d, exponent = %d\n", copy, BASE, e);
    }
    else if (copy == 1)
    {
      printf("%d is a power of %d, exponent = %d\n", copy, BASE, e);
    }
    else
    {
      printf("%d is not a power of %d!\n", copy, BASE);
    }

  }

  return 0;

}

/******************************************************************************
                                End of file
******************************************************************************/
