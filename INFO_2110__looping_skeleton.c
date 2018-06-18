//INFO.2110  Week 5
//Heading
//Name:
//Date Assigned:  10/10/2017	Due:10/17/2017

/*Program Description:
Write a program using a menu to execute the following:
Menu
1 – Gas Mileage
2 – Sales Commission
3 - Quit
Verify the menu choice is 1, 2, or 3
The program should continue to loop until the user selects 3 to quit.
  
  Gas Mileage
  Drivers are concerned with the mileage obtained by their automobiles.  One driver has kept track of 
  several tanks of gasoline by recording miles driven and gallons used for each tank.  Develop a program 
  using a while loop that will input the miles driven and the gallons used for each tank.  The program 
  should calculate and display the miles per gallon obtained for each tank.  After processing all input 
  information, the program should calculate and print the overall miles per gallon obtained for all tanks.  
  
  Sales
  People in sales frequently earn a base salary and commission on their sales.  A company has asked you 
  to write a program to estimate the payroll for the week given a person’s sales.  The sales force earns 
  a base salary of $300 per week plus 12% of their total sales for the week.  Since each department has 
  a different number of employees, use a while loop to allow the user to exit the program by entering an 
  integer less than 100 when they have completed.

  Grading
	70 pts 2 programs without menu
	80 pts Menu program with 1 menu option completed    
             with input verification

	90 pts  Menu program with 2 menu option completed

	100 pts  On Time  - Source code & sample output

  
*/

#include "stdafx.h"
#include<stdio.h>

void Menu(void)
{	// menu options
	
	
}

void Option1(void)
{
	/*   Gas Mileage
  Drivers are concerned with the mileage obtained by their automobiles.  One driver has kept track of 
  several tanks of gasoline by recording miles driven and gallons used for each tank.  Develop a program 
  using a while loop that will input the miles driven and the gallons used for each tank.  The program 
  should calculate and display the miles per gallon obtained for each tank.  After processing all input 
  information, the program should calculate and print the overall miles per gallon obtained for all tanks.  */
	
	
}

void Option2(void)
{
	/* Sales
  People in sales frequently earn a base salary and commission on their sales.  A company has asked you 
  to write a program to estimate the payroll for the week given a person’s sales.  The sales force earns 
  a base salary of $300 per week plus 12% of their total sales for the week.  Since each department has 
  a different number of employees, use a while loop to allow the user to exit the program by entering an 
  integer less than 100 when they have completed. */
  
  
  
}
void Welcome(void)
{
	
	
}

int main(void)
{
	//declare variables
	int choice;
	do
	{
		//welcome - title
		Welcome();
		//print Menu options
		Menu();
	
		//Get user's choice
	
	
		switch(choice)
		{
			case 1: Option1();  break;
			case 2: Option2();  break;
			case 3: //Quit
		       
					break;
			default:
		
					break;
		}
	}while(choice != 3);
	
	return 0;
}