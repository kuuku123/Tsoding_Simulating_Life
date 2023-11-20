#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 10
#define HEIGHT 10

char level[] = 
"' ', '.', '-', '=', 'c', 'o', 'A', '@', '#', "
#define level_count sizeof(level)/sizeof(level[0]-1) // because string in c comes with 0 at last , making size bigger

float grid[HEIGHT][WIDTH] = {0};

float rand_float(void) 
{
    return (float)rand() /(float)RAND_MAX;
}

int main(void)
{

    srand(time(0));
    for (size_t y = 0; y < HEIGHT; ++y) {
        for (size_t x = 0; x < WIDTH; ++x) {
            grid[y][x] = rand_float();
        }
    }

    for (size_t y = 0; y < HEIGHT; ++y) {
        for (size_t x = 0; x < WIDTH; ++x) {
            char x = level[(int)grid[y][x] *(level_count-1)];

            grid[y][x];
            printf("%f ", grid[y][x]);
        }
    }
    return 0;
}
