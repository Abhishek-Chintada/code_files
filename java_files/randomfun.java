import java.util.*;

public class randomfun {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        double[][] a;
        a = new double[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                System.out.printf(
                    "This is the %dth row and %dth column element : %f\n", i, j, a[i][j]);
            }
        }
    }
}
