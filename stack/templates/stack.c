/* 
 * Author: Alex Hiller
 * Year: 2019
 *
 * Program Description: 
 *    Simple implementation of a stack data structure.
 */


#include "stack.h"
#define DEBUG


int
main (int argc, char *argv[]) {
    /* Init vars */
    stack_t s;
    uint32_t x = 0;

    /* Test cases for stack */
    stack_init(&s);
    while(stack_push(&s, x)) {
        printf("\nPushed %d to the stack.\n", x); 
        stack_print(&s); 
        x++;
    }
    printf("\n");  /* Formatting */
    while(stack_pop(&s, &x)) printf("%u\n", x); 

    return 0;
}



void 
stack_init(stack_t* s) {

}


int 
stack_pop(stack_t* s, uint32_t* storage){

}


int 
stack_push(stack_t* s, uint32_t value) {

}


void 
stack_print(stack_t* s) {
#ifdef DEBUG
    printf("top index: %d\n", s->top); 
    printf("nb_elements: %d\n", s->nb_elements); 
#endif
}
