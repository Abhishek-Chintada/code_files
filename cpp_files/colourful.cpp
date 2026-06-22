#include <cstdio>
#include <cstdint>
#include <chrono>

// Utility functions.
constexpr uint8_t min(uint8_t a, uint8_t b) {
    return a<b?a:b;
}
constexpr uint8_t max(uint8_t a, uint8_t b) {
    return a>b?a:b;
}
constexpr uint8_t min(uint8_t a, uint8_t b, uint8_t c) {
    return min(min(a, b), min(b, c));
}
constexpr uint8_t max(uint8_t a, uint8_t b, uint8_t c) {
    return max(max(a, b), max(b, c));
}
constexpr float modulo(float dividend, float divisor) {
    const auto quotient = dividend/divisor;
    return divisor*(quotient - static_cast<uint8_t>(quotient));
} 

struct Colour { // POD
    float H, S, V;
    // H -> Hue - Family of Colours
    // S -> Saturation - Intensity or colourfullness.
    // V -> Value - Brightness of the colour.
};

constexpr Colour rgb_hsv(uint8_t r, uint8_t g, uint8_t b) {
    Colour c{};
    // Defining the Value of the color.
    const auto c_max = max(r, g, b);
    c.V = c_max/255.0f;

    // Defining the Saturation of the Colour.
    const auto c_min = min(r, g, b);
    const auto delta = c.V - c_min/255.0f;
    c.S = c.V==0 ? 0 : delta/c.V;
    
    //Defining the Hue of the colour
    if(c_max == c_min) {
        c.H = 0;
        return c;
    }
    if(c_max == r) {
        c.H = (g/255.0f - b/255.0f)/delta + 0.0f;
    } else if(c_max == g) {
        c.H = (r/255.0f - b/255.0f)/delta+ 2.0f;
    } else if(c_max == b) {
        c.H = (r/255.0f - g/255.0f)/delta + 4.0f;
    }
    c.H = c.H*60.0f;
    c.H = c.H >= 0 ? c.H : c.H + 360.0f;
    c.H = modulo(c.H, 360.0f);

    // Finally end of misery.
    return c;
}


int main(void) {
    auto start = std::chrono::high_resolution_clock::now();
    auto black = rgb_hsv(0, 0, 0);
    auto white = rgb_hsv(255, 255, 255);
    auto red = rgb_hsv(255, 0, 0);
    auto green = rgb_hsv(0, 255, 0);
    auto blue = rgb_hsv(0, 0, 255);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double, std::milli> ms_double = end - start;
    printf("This is the time taken for the code to run : %lf\n", ms_double.count());
    printf("The program ran successfully.\n");
    return 0;
}