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


/* Structures */
struct data {
    int value;
};
typedef struct data data_t;
struct fifo {
    int data;
    struct fifo next;
};
typedef struct fifo fifo_t;

/* Prototypes */
fifo_t fifo_init(data_t info);
fifo_pop()
fifo_push()


int
main (int argc, char *argv[]) {
    printf("Hello world\n");

    return 0;
}
