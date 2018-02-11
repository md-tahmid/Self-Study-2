/****************************************************************************
 *                                                                          *
 * File    : main.c  part of: example1                                      *
 *                                                                          *
 * Purpose : Program that evaluates the scores of an exam                   *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/01/09  Created by Joris Remmers                             *
 *                                                                          *
 ****************************************************************************/

#include "mylib.h"

int main( void )
{
	float grades[MAX_GRADES];
	int   studID[MAX_GRADES];
	int   count;
	int   hist[HIST_ITEMS];
	double average;

	float stdDev;

	count = read_grades( "Grades.dat" , grades , studID );
	
	printf("%d\n",count);

	print_grades( grades , studID , count );

	average = calc_average( grades , count );

	printf("The average grade is : %.4f\n",average);

	stdDev   = calc_std_deviation( grades , count, average );

	printf("The standard deviation is : %.4f\n",stdDev);
	
	clear_histogram(hist);

	fill_histogram( grades,hist);

	return 0;
}

