#include <stdio.h>
#include <malloc.h> // endereço de memória

/**
 * This program shows how deal with malloc and sizeof.
 * Objective: modifying value of variable in memory using its address.
 * 
 * malloc: function that allocates memory: return the adress *void: it is necessary to cast  
 * sizeof: function that return bits of variable/struct
*/
int main(){
    int* y = (int*) malloc( sizeof(int) ); // inform integer size and cast variable type, 'y' stores a memory address
    /**
     *              MEMORY ALLOCATION
     * | __Adress__ | __Variable__ | __Data__ |
     * | ---------- | ------------ |--------- |
     * |    0940    |     y        | [2200]   |
     * |    2200    |              | []       |
     * 
    */

    *y = 20; // goes to ADRESS stored in 'y' and modifies the DATA to 20
    /**
     *              MEMORY ALLOCATION
     * | __Adress__ | __Variable__ | __Data__ |
     * | ---------- | ------------ |--------- |
     * |    0940    |     y        | [2200]   |
     * |    2200    |              | [20]     |
     * 
    */

    int z = sizeof(int); // store size of integers in new 'z' variable
    /**
     *              MEMORY ALLOCATION
     * | __Adress__ | __Variable__ | __Data__ |
     * | ---------- | ------------ |--------- |
     * |    0940    |     y        | [2200]   |
     * |    2200    |              | [20]     |
     * |    0936    |     z        | [4]      |
     * 
    */

    printf("data(*y) = %i, data(z) = %i \n", *y, z);
    printf("adress(&y) = %p \n", &y);


}