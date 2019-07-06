/* Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    <++>
 */


/* Libraries */
#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

enum {
    FIRST=1,
    SECOND,
    THIRD
};

int
main (int argc, char *argv[]) {
    int choice;
    scanf("%d", &choice);
    switch(choice) {
        case(FIRST):
            printf("This is menu option 1\n"); 
            break;
        case(SECOND):
            printf("This is menu option 2\n"); 
            break;
        case(THIRD):
            printf("This is menu option 3\n"); 
            break;
        default:
            printf("This is the default option. No valid choice.\n"); 
            break;
    }

    return 0;
}
