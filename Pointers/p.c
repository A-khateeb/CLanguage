/*
 * p.c
 *
 *  Created on: Oct 7, 2017
 *      Author: devsec
 */
#include <stdio.h>
#include <stdlib.h>
main(){
	int x = 1, y = 2, z[10];
	int *ip;

	ip = &x;
	y = *ip;
	*ip = 0;
	ip = &z[0];
	printf(x,z,y);
	return 0;
}



