import java.util.*;

class count {
    public static int counter(int a) {
        int count = 0;
        count = (int)Math.log10(a) + 1;
        return count;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); 
            int a = 0;
            System.out.println("Enter the number here : ");
            a = in.nextInt();
            int a_test = a;
            int count = 0;
            while(a != 0) {
                count++;
                a = a/10;
            }
            System.out.println("This is the count of the digits in the entered number : " + count);
            // This is the implementation of the counter function.
            int result = counter(a_test);
            System.out.println("This is the result of counter function : " + result);
            in.close();
    }
}