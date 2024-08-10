#include <stdio.h>
#include <string.h>

struct Engine {
    char name[50];
};

int main() {
    struct Engine Engine1, Engine2;

    strcpy(Engine1.name, "DDis 190 engine");
    strcpy(Engine2.name, "1.2 L Kappa engine");

    printf("Engine 1: %s\n", Engine1.name);
    printf("Engine 2: %s\n", Engine2.name);

    return 0;
}

