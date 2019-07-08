/* Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Demonstration program of what pointers are in C and how to use them.
 */


#include <stdio.h>


int
main (int argc, char *argv[]) {

    /* An int and its pointer */
    int x = 42;
    /*   *xp is an int    */
    int* xp = &x;
    printf("%d\n", x); 
    printf("%p\n", xp); 

    
    /* Can make a pointer to a pointer */ 
    int** xpp = &xp;
    printf("%p\n", xpp); 


    /* The built-in sizeof() function */
    int sx = sizeof(x);
    printf("%d\n", sx); 


    /* How big is a pointer? */
    printf("%lu\n", sizeof(xp)); 


    /* Accessing data from a pointer */


    /* Acquiring the address from data */


    return 0;
}
