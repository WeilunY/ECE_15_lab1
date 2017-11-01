/******************************************************************************
*
* File name: integer_sum.c
*
* Author:  Weilun Yao
*          A15017352
*          wey098@ucsd.edu
*
*
*     Lab #: 1
* Problem #: 4
*
* Submission Date: 10/12/2017
*
******************************************************************************/

/*-----------------------------------------------------------------------------
   Include files: stdio.h
-----------------------------------------------------------------------------*/

#include <stdio.h>

/*@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@

  The main function computes the sum of integers interactively provided by the
  user. At each iteration, the program should print the number of integers that
  the user has entered so far, along with a menu describing three possible
  actions from which the user could choose.

@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@*/

int main()
{
  int num; //User's input
  int sum = 0; // Sum of the inputs
  int choice = 0; // User's choice
  int count = 0; // Total numbers entered

  printf("Welcome to the integer sum program!\n\n");

  while(choice != 3)
  {
    printf("So far you have enter %d numbers. You may: \n", count);
    printf("1. Enter a new integer\n");
    printf("2. Display the current sum\n");
    printf("3. Exit\n");
    printf("Please enter your choice: ");
    scanf("%d", &choice);

    if (choice == 1)
    {
      printf("Enter the new integer: ");
      scanf("%d", &num);
      sum += num;
      count ++;
    }
    else if (choice == 2)
    {
      printf("The current sum is: %d\n", sum);
    }

  }

  return 0;

}

/******************************************************************************
                                End of file
******************************************************************************/
