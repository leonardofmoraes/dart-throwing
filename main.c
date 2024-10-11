#include <stdio.h>
#include <stdlib.h>

int main() {
    int throw1, throw2, throw3, throw4, throw5, distance1, distance2, distance3, distance4, distance5, winner;

    printf("Distance of throw 1:\n");
    scanf("%i", &distance1);
    printf("Distance of throw 2:\n");
    scanf("%i", &distance2);
    printf("Distance of throw 3:\n");
    scanf("%i", &distance3);
    printf("Distance of throw 4:\n");
    scanf("%i", &distance4);
    printf("Distance of throw 5:\n");
    scanf("%i", &distance5);

    // You need to add logic here to determine the winner based on the distances.
    // The following 'if' statement is incorrect and needs to be replaced with 
    // a proper comparison of distances. 

    if(distance1 > distance2 && distance1 > distance3 && distance1 > distance4 && distance1 > distance5) {
        printf("Throw 1 has the most points\n");
    } 
    // Add more 'else if' statements to check for other throws being the winner.

    return 0;