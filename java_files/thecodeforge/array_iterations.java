import java.util.*;
public class array_iterations {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] monthlyRainfall = {45, 30, 55, 80, 120, 95, 110, 105, 70, 40, 25, 50};
        System.out.println("||| Monthly Rainfall Report |||");
        String[] monthNames = {"Jan","Feb","Mar","Apr","May","Jun",
                               "Jul","Aug","Sep","Oct","Nov","Dec"};

        // Pattern - I i.e the classic for loop
        for(int i = 0; i < monthlyRainfall.length; i++) {
            System.out.println("Month : " + monthNames[i] + " -> " + monthlyRainfall[i] + "mm");
        }

        // Pattern - II i.e the for-each loop
        int totalRainfall = 0;
        for(int rainfall : monthlyRainfall) {
            totalRainfall += rainfall;
        }
        System.out.println("Total Average Annual Rainfall : " + totalRainfall);
        System.out.printf("Monthly Average : %.1f \n", (double)totalRainfall/monthlyRainfall.length);

        System.out.println("<console> EOP");
    }
}
