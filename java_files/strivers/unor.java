import java.util.*;
// The reverse function also deletes the trailing zeroes.
public class unor {
    public static int reverse(int x) {
        int rev = 0;
        while(x != 0) {
            int digit = x % 10;
            rev = (rev*10) + digit;
            x = x/10;
        }
        return rev;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int og = 0;
        System.out.println("Enter the number to be reversed : ");
        og = in.nextInt();
        int rev = reverse(og);
        System.out.println("This is the rev number : " + rev);
        in.close();
    }
}
