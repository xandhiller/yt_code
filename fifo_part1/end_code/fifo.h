/* Libraries */
#include <stdint.h>  /* standard uint vals. */
#include <stdio.h>   /* print */


#define FIFO_SIZE   10
#define FALSE       0 
#define TRUE        1


struct fifo {
    uint16_t put;
    uint16_t grab;
    uint16_t nb_elements;
    uint64_t buffer[FIFO_SIZE];
};
typedef struct fifo fifo_t;


/*
 *  Sets up all the variables for the fifo.
 */
void fifo_init(fifo_t* f);



/*
 *  Pops the front of the queue back to the caller by putting the value in 
 *  'storage'.
 */
int fifo_pop(fifo_t* f, uint64_t* storage);



/*
 *  Pushes a value to the back of the queue.
 */
int fifo_push(fifo_t* f, uint64_t val);


/*
 *  Debug function for printing out the fifo buffer and params.
 */ 
void fifo_print(fifo_t* fifo);
