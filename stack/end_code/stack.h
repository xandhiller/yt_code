#include <stdint.h>
#include <stdio.h>

#define STACK_SIZE  4
#define TRUE        1
#define FALSE       0

struct stack {
    uint16_t top;
    uint16_t nb_elements;
    uint32_t buffer[STACK_SIZE];
};
typedef struct stack stack_t;



/*
 * Initalises the stack
 */
void stack_init(stack_t* s);


/*
 * Pops an element off the top of the stack
 */
int stack_pop(stack_t* s, uint32_t* storage);


/*
 * Pushes an element into (on top of) the stack.
 */
int stack_push(stack_t* s, uint32_t value);



/*
 *  Stack printing function for debugging.
 */
void stack_print(stack_t* s);
