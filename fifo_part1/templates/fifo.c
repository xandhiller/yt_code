/* Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Simple implementation of a statically allocated buffer accessed via queue.
 */


#include "fifo.h"

#define DEBUG

int
main (int argc, char *argv[]) {
    /* Setup */ 
    fifo_t f;
    uint64_t x = 0;

    /* Test */
    fifo_init(&f);
    while(fifo_push(&f, x)) {
        x++; 
    }
    fifo_print(&f);
    while(fifo_pop(&f, &x))  {
        printf("%lu\n", x);  
    }
    fifo_print(&f);

    /* Exit */
    return 0;
}

/******************************************************************************/

void 
fifo_init(fifo_t* f) {

}


/* Subtracting data */ 
int 
fifo_pop(fifo_t* f, uint64_t* storage) {

}



/* Adding data */
int 
fifo_push(fifo_t* f, uint64_t val) {

}

/******************************************************************************/
void fifo_print(fifo_t* fifo) {
#ifdef DEBUG
    printf("fifo put:\t%d\n",       fifo->put); 
    printf("fifo grab:\t%d\n",      fifo->grab); 
    printf("fifo nb_elements:\t%d\n",  fifo->nb_elements); 
#endif 
}
