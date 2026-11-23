#include <plplot/plplot.h> // arch_linux
// #include <plplot.h> // mac_m4

int main(void) {
    PLFLT x[101], y[101];
    for(int i = 0; i <= 100; i++) {
        x[i] = i/100.0;
        y[i] = 100.0 * x[i] * x[i];
    }

    // initialize plplot
    plinit();

    // setting axis limits : xmin, xmax, ymin, ymax, scale (0 = independent), box (0 = standard)
    plenv(0.0, 1.0, 0.0, 100.0, 0, 0);

    // adding the axis labels
    pllab("x", "y = 100x^2", "A Parabola !");

    // drawing the line
    plline(101, x, y);

    // clean up and close
    plend();
    return 0;
}
