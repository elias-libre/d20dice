#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    srand(time(NULL));

    int dice = (rand() % 20) + 1;
    printf("you rolled %d!", dice);

    return 0;
}