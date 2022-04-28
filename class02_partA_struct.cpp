#include <stdio.h>
#define MAXIMUMHEIGHT 225

/**
 * Structure storing data 
*/
typedef struct {
    int weight;
    int height;
} WeightHeight;

int main() {
    WeightHeight pearson1;    // allocate data in memory
    pearson1.weight = 80;
    pearson1.height = 225;
    
    printf("Weight: %i, Height: %i. \n", pearson1.weight, pearson1.height);
    
    if(pearson1.height > MAXIMUMHEIGHT) {
        printf("Height above maximum height.\n");
    } else {
        printf("Height below maximum height.\n");
    }
    
    return 0;
}