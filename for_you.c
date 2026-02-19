
/*
    heart.c
    Compile with love.
*/

#include <stdio.h>
#include <math.h>

int main() {
    float x, y;

    for (y = 1.5f; y > -1.5f; y -= 0.1f) {
        for (x = -1.5f; x < 1.5f; x += 0.05f) {
            float eq = x*x + y*y - 1;
            if (eq*eq*eq - x*x*y*y*y <= 0.0f)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}
