#include <stdio.h>

/**
 * This program shows how deal with pointers.
 * Objective: modifying value of variable in memory using its address.
*/
int main() {
    int x = 25; // In this syntax, the compiler chose an adress memory (e.g. 65423) and store the variable value (e.g. 25)
    /**
     *              MEMORY ALLOCATION
     * | __Adress__ | __Variable__ | __Data__ |
     * | ---------- | ------------ |--------- |
     * |    0940    |     x        |    [25]  |
    */
    printf("Current value of x: %i \n", x);

    int* y = &x;  //int* y: store address of an integer (pointer)   |--------- |   &x    : address of a variable
    /**
     *              MEMORY ALLOCATION
     * | __Adress__ | __Variable__ | __Data__ |
     * | ---------- | ------------ |--------- |
     * |    0940    |     x        |    [25]  | 
     * |    0936    |     y        |  [0940]  |
    */

    *y = 30; // modifying value of x using its address
        /**
     *              MEMORY ALLOCATION
     * | __Adress__ | __Variable__ | __Data__ |
     * | ---------- | ------------ |--------- |
     * |    0940    |     x        |    [30]  | 
     * |    0936    |     y        |  [0940]  |
    */
    
    printf("Current value of x: %i \n", x);
    
    return 0;
}