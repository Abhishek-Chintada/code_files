#include <stdio.h>

int main(void) {
    FILE *gp = popen("gnuplot -persistent", "w");
    if(gp == NULL) {
        printf("Error with gnuplot.\n");
        return -1; // primary dependency error
    }
    fprintf(gp, "set title 'simple sine wave.'\n");
    fprintf(gp, "set xlabel 'X'\n");
    fprintf(gp, "set ylabel 'sin(x)'\n");
    fprintf(gp, "plot sin(x) with lines title 'sin(x)'\n");

    pclose(gp);
    return 0;
}
