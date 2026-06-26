import java.util.*;
 


class count {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in); 
            int a = 0;
            System.out.println("Enter the number here : ");
            a = in.nextInt();
            int count = 0;
            while(a != 0) {
                count++;
                a = a/10;
            }
            System.out.println("This is the count of the digits in the entered number : " + count);
    }
}