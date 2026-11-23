#include <mgl2/mgl.h>

int main(void) {
    mglGraph gr(0, 1920, 1080);
    gr.Clf("w");
    gr.Title("A parabola");
    gr.SetRanges(-10, 10, 0, 100);
    gr.Axis();
    gr.FPlot("x^2", "r2");
    gr.WriteJPEG("graph.png");
    return 0;
}
