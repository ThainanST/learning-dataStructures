#include <stdio.h>
#include <malloc.h>

#define MAXIMUMHEIGHT 225

typedef struct {
    int weight;
    int height;
} WeightHeight;

int main() {
    // inform struct size and cast variable type, 'pearson1' stores a memory address
    WeightHeight* pearson1 = (WeightHeight*) malloc(sizeof(WeightHeight));
    
    // go to that memory and store this data
    pearson1->weight = 80;  // it stores, by reference, the weight value
    pearson1->height = 185; // it stores, by reference, the height value
    
    printf("Weight: %i, Height: %i. \n", pearson1->weight, pearson1->height);
    
    if(pearson1->height > MAXIMUMHEIGHT) {
        printf("Height above maximum height.\n");
    } else {
        printf("Height below maximum height.\n");
    }
    
    return 0;
}