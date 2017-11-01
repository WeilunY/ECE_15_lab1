/******************************************************************************
*
* File name: logic_abc.c
*
* Author:  Weilun Yao
*          A15017352
*          wey098@ucsd.edu
*
*
*     Lab #: 1
* Problem #: 1
*
* Submission Date: 10/12/2017
*
******************************************************************************/

/*-----------------------------------------------------------------------------
   Include files: stdio.h
-----------------------------------------------------------------------------*/

#include <stdio.h>

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function prompts the user to enter three integers a, b, c,
  and then computes the results of the following logical operations

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
  int a, b, c; //user's inputs

  // Test 1
  printf("Enter integers a, b, c: ");
  scanf("%d %d %d", &a, &b, &c);
  printf("       !a || !b++ && c: %s\n", (!a||!b++) && c ? "True" : "False");

  //Test 2
  printf("(a-1 || b/2) && (c*=2): %s\n", (a-1 || b/2) && (c*=2) ? "True" : "False");

  //Test 3
  printf("(a-- || --b) && (c+=2): %s\n", (a-- || --b) && (c+=2) ? "True" : "False");

  //Test 4
  printf("      a || !(b && --c): %s\n", a || !(b && --c) ? "True" : "False");

  return 0;
}

/******************************************************************************
                                End of file
******************************************************************************/
