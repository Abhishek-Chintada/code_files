import java.util.*;
public class recursivename {
    static int n = 0;
    public static void name(String x) {
        if(n != 0) {
            System.out.println(x);
            n--;
            name(x);
        }
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String x = "";
        System.out.println("Enter the name to print : ");
        x = in.nextLine();
        System.out.println("Enter the number of times to print "+ x + " : ");
        n = in.nextInt();
        name(x);
        in.close();
    }
}
