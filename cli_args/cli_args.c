/*
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Demonstrate how to use command line arguments
 *
 */


/* Defines */
/* <++> */


/* Libraries */
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

/* Structs */
/* <++> */


int
main (int argc, char* argv[]) {
    int i;
    for (i = 1; i < argc; i++) {
        printf("%s ", argv[i]); 
    }
    printf("\n"); 

    return 0;
}
