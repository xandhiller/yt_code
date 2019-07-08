#include <stdint.h>
#include <stdio.h>

#define STACK_SIZE  10
#define TRUE        1
#define FALSE       0

struct stack {
    uint16_t top;
    uint16_t nb_elements;
    uint64_t buffer[STACK_SIZE];
};
typedef struct stack stack_t;


void stack_init(stack_t* s);
int stack_pop(stack_t* s, uint64_t* storage);
int stack_push(stack_t* s, uint64_t value);
