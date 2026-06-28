import java.util.*;

public class euclid {
    public static int GCD(int a, int b) {
        int gcd = 1;
        while(a != 0 && b != 0) {
            if(a > b) {
                a = a - b;
            } else if(b > a) {
                b = b - a;
            } else {
                gcd = a;
                break;
            }
        }
        if(a != 0) gcd = a;
        else if(b != 0) gcd = b;
        return gcd;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b;
        System.out.println("Enter the two numbers : ");
        a = in.nextInt();
        b = in.nextInt();
        int gcd = GCD(a, b);
        System.out.println("This is the GCD of the numbers : " + gcd);
        in.close();
    }
}
