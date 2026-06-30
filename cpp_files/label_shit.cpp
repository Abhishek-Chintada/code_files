#include <cstdio>
#include <chrono>
#include <random>
// Infinite loop banjayega!
int main(void) {
    auto start = std::chrono::high_resolution_clock::now();
    std::random_device rd; // gets random var from hardware
    std::mt19937 seed_gen(rd());
    std::uniform_real_distribution<double>distrib_double(-100, 100);
    auto sp_y = distrib_double(seed_gen);
    auto sp_x = distrib_double(seed_gen);
    auto sp_res0 = sp_x;
    la:
        auto la_x = distrib_double(seed_gen);
        auto la_y = distrib_double(seed_gen);
        printf("<la_x, la_y> : %lf , %lf\n", la_x, la_y);
        la_x = 100*la_y;
        auto la_res0 = la_x;
        printf("<la_res0> : %lf\n", la_res0);
        goto gdb;
    sp:
        printf("<sp_x, sp_y> : %lf , %lf\n", sp_x, sp_y);
        sp_x = 100*sp_y;
        printf("<sp_res0> : %lf\n", sp_res0);
        sp_res0 = sp_x;
        goto la;
    gdb:
        auto gdb_x = distrib_double(seed_gen);
        auto gdb_y = distrib_double(seed_gen);
        printf("<gdb_x, gdb_y> : %lf , %lf\n", gdb_x, gdb_y);
        gdb_x = 100*gdb_y;
        auto gdb_res0 = gdb_x;
        printf("<gdb_res0> : %lf\n", gdb_res0);
        goto sp;
    printf("--result(s)--<la, sp, gdb> : %lf , %lf, %lf\n", la_res0, sp_res0, gdb_res0);
    auto end = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> time_taken = end - start;
    printf("<time taken> : %lf\n", time_taken.count());
    return 0;
}