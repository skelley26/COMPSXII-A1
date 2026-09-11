/*
 * Memory Detective Assignment
 * Computer Science XII - Computer Systems
 * 
 * This program investigates how C organizes program memory by exploring
 * different memory segments: stack, heap, data, and text.
 * 
 * Complete all TODO sections to reveal where your variables live in memory.
 */

#include <stdio.h>
#include <stdlib.h>

// =============================================================================
// PART 1: DATA TYPES AND SIZES
// =============================================================================

void investigate_data_types() {
    printf("\n=== DATA TYPES AND MEMORY SIZES ===\n");
    
    // TODO: Declare variables of different types:
    // - int called 'my_int' with value 42
    // - float called 'my_float' with value 3.14
    // - double called 'my_double' with value 2.71828
    // - char called 'my_char' with value 'C'
    
    
    
    
    
    // TODO: For each variable, print:
    // 1. Its value
    // 2. Its memory address using %p format specifier and (void*)&variable
    // 3. Its size in bytes using sizeof() operator
    //
    // Example format:
    // printf("int: value = %d, address = %p, size = %zu bytes\n", 
    //        my_int, (void*)&my_int, sizeof(my_int));
    
    
    
    
}

// =============================================================================
// PART 2: STACK ALLOCATION - Function Local Variables
// =============================================================================
// Local variables live on the stack - they're created when a function is called
// and destroyed when it returns.

void investigate_stack() {
    // TODO: Declare three local variables:
    // - An integer called 'stack_int' with value 42
    // - A float called 'stack_float' with value 3.14
    // - A char called 'stack_char' with value 'A'
    
    
    
    
    printf("\n=== STACK ALLOCATION ===\n");
    // TODO: Print the address and value of each stack variable
    // Use format specifier %p for addresses and appropriate specifiers for values
    // Example: printf("stack_int: address = %p, value = %d\n", (void*)&stack_int, stack_int);
    
    
    
}

void nested_function_call() {
    // TODO: Declare a local integer called 'nested_var' with value 999
    
    
    printf("\n=== NESTED FUNCTION STACK ===\n");
    // TODO: Print the address and value of nested_var
    // Observe: Is this address higher or lower than variables in investigate_stack()?
    
}

// =============================================================================
// PART 3: DATA SEGMENT - Global and Static Variables
// =============================================================================
// Global variables must be declared outside of any function.
// They live in the data segment - they exist for the entire program lifetime
// and have fixed memory addresses.

// TODO: Declare a global integer variable called 'global_counter' and initialize it to 100


// TODO: Declare a static integer variable called 'static_value' and initialize it to 200


void investigate_data_segment() {
    printf("\n=== DATA SEGMENT (Global and Static Variables) ===\n");
    
    // TODO: Print the addresses and values of global_counter and static_value
    // Example: printf("global_counter: address = %p, value = %d\n", 
    //                 (void*)&global_counter, global_counter);
    
    
}


// =============================================================================
// PART 4: HEAP ALLOCATION
// =============================================================================
// Heap memory is dynamically allocated during program execution using malloc().
// Unlike stack variables, heap memory persists until you explicitly free() it.

void investigate_heap() {
    printf("\n=== HEAP ALLOCATION ===\n");
    
    // TODO: Use malloc() to allocate memory for an integer on the heap
    // Store the returned pointer in a variable called 'heap_int'
    // Hint: int *heap_int = (int*)malloc(sizeof(int));
    
    
    // TODO: Check if malloc succeeded (heap_int should not be NULL)
    // If successful:
    // - Assign the value 777 to the allocated memory using *heap_int = 777
    // - Print the address of heap_int and its value
    // - Print the size of the allocated memory
    //
    // Example: printf("heap_int: address = %p, value = %d, size = %zu bytes\n",
    //                 (void*)heap_int, *heap_int, sizeof(int));
    
    
    
    
    
    // TODO: Free the allocated memory using free(heap_int)
    // Note: After free(), the pointer still holds the address, but the memory
    // is no longer yours to use (we'll explore this more in Unit 3)
    
}

// =============================================================================
// MAIN FUNCTION
// =============================================================================

int main() {
    printf("=============================================================\n");
    printf("         MEMORY DETECTIVE: Investigating Program Memory\n");
    printf("=============================================================\n");
    
    // Part 1: Explore data types and their memory requirements
    investigate_data_types();
    
    // Part 2: Examine stack allocation for local variables
    investigate_stack();
    nested_function_call();
    
    // Part 3: Examine data segment (global and static variables)
    investigate_data_segment();
    
    
    
    // Part 4: Investigate heap allocation
    investigate_heap();
    
    printf("\n=============================================================\n");
    printf("Memory investigation complete! Now analyze the addresses:\n");
    printf("- Which addresses are highest? Lowest?\n");
    printf("- Do stack addresses increase or decrease in nested calls?\n");
    printf("- Are heap addresses near stack or data segment addresses?\n");
    printf("=============================================================\n");
    
    return 0;
}