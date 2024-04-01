#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define POPULATION_SIZE 100000
#define LIFESPAN 70
#define TRUE 1
#define FALSE 0


int birthAndSurvival() {
    return rand() % 2; 
}

int main() {
    srand(time(NULL));

    int boys = 0;
    int girls = 0;

    
    for (int i = 0; i < POPULATION_SIZE; i++) {
        int motherSurvived = birthAndSurvival();

        if (motherSurvived) {
           
            if (rand() % 2 == 0) {
                boys++;
            } else {
                girls++;
            }
        } else {
          
            girls++; 
        }
    }

    printf("Simulation Results:\n");
    printf("Number of boys: %d\n", boys);
    printf("Number of girls: %d\n", girls);
    printf("Boy/Girl Ratio: %.2f\n", (float)boys / (float)girls);
    printf("Expected Boy/Girl Ratio (without mother's death): 0.5\n");

    return 0;
}
