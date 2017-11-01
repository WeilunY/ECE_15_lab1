/******************************************************************************
*
* File name: digits.c
*
* Author:  Weilun Yao
*          A15017352
*          wey098@ucsd.edu
*
*
*     Lab #: 1
* Problem #: 2
*
* Submission Date: 10/12/2017
*
******************************************************************************/

/*-----------------------------------------------------------------------------
   Include files: stdio.h, stdlib.h
-----------------------------------------------------------------------------*/

#include <stdio.h>
#include <stdlib.h>

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function prompts the user to enter an integer, and then prints out
  its decimal digits, each one on a separate line, starting with the least
  significant (rightmost) digit.

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
  int i; // User's input
  int count = 1; // Output count

  printf("Enter an integer: ");

  scanf("%d", &i);

  i = abs(i);

  while (i > 0)
  {
    printf("Digit (%d): %d\n", count, i%10);

    i /= 10;
    count++;

  }

  return 0;

}

/******************************************************************************
                                End of file
******************************************************************************/
