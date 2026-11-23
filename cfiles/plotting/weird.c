#include <plplot.h>

int main(void) {
    int n = 1000;
    PLFLT x[n], y[n];
    PLFLT xmin = -10.0, xmax = 10.0;
    for(int i = 0; i < n; i++) {
        x[i] = xmin + (i*(xmax - xmin))/(n-1);
        y[i] = x[i]*x[i];
    }
    plinit();
    plenv(xmin, xmax, -10, 100, 0, 0);
    pllab("x", "y = x^2", "Labbe !");
    plline(n, x, y);
    plend();
    return 0;
}
