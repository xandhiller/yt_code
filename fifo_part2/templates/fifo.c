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

    /****************************************
    * Circular testing 
    ****************************************/
    fifo_init(&f);
    /* Half fill fifo and then empty it */
    for (x = 0; x < FIFO_SIZE/2; x++) { 
        fifo_push(&f, x); 
    }
    while(fifo_pop(&f, &x));
    fifo_print(&f);
    /* Completely fill the fifo and empty it */
    for (x = 0; x < FIFO_SIZE; x++) { 
        fifo_push(&f, x); 
    }
    fifo_print(&f);
    while(fifo_pop(&f, &x)) { 
        printf("%lu\n", x); 
    }
    /****************************************/


    /* Exit */
    return 0;
}

/******************************************************************************/

void 
fifo_init(fifo_t* f) {
    f->put         = 0;
    f->grab        = 0;
    f->nb_elements = 0;
}


/* Subtracting data */ 
int 
fifo_pop(fifo_t* f, uint64_t* storage) {
    if (f->nb_elements == 0) {
        /* No data to pop out */
        return FALSE;
    }
    *storage = f->buffer[f->grab];
    /* FIXME */
    f->grab++;
    f->nb_elements--;
    return TRUE;
}



/* Adding data */
int 
fifo_push(fifo_t* f, uint64_t val) {
    if (f->nb_elements == FIFO_SIZE) {
        /* FIFO/queue is full */
        return FALSE;
    }
    f->buffer[f->put] = val;
    /* FIXME */
    f->put++;
    f->nb_elements++;

    return TRUE;
}

/******************************************************************************/
void fifo_print(fifo_t* fifo) {
#ifdef DEBUG
    printf("fifo put:\t%d\n",       fifo->put); 
    printf("fifo grab:\t%d\n",      fifo->grab); 
    printf("fifo nb_elements:\t%d\n",  fifo->nb_elements); 
#endif 
}
