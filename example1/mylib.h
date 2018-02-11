//
// (c) Joris Remmers
//

#ifndef _MYLIB
#define _MYLIB

#include <stdio.h>
#include <stdlib.h>


#define MAX_GRADES  1000
#define HIST_ITEMS  20

int read_grades

	( char*            filename ,
      float*           grades   ,
      int*             studID   );

void print_grades  

	( float*           grades ,
      int*             studID ,
      int              count  );

float calc_average

	( float*           grades ,
      int              count  );

float calc_std_deviation

	( float*           grades ,
      int              count, float average );

void clear_histogram

    ( int*             hist);

void get_hist_item

    (float* 	grades,
	int 		count,
	int* 		hist );

void fill_histogram

    ( float*           grades,int* 		hist  );

#endif
