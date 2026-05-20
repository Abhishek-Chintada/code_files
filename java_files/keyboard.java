import java.util.*;
import java.io.*;
public class keyboard {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        System.out.println("What is your name?");
        String name = in.nextLine();
        System.out.println("Enter a number: ");
        int num = in.nextInt();
        in.nextLine(); // to make the stream ready to take any strings further. i.e, consumes the new line.
        System.out.println("Enter the city you live in ...");
        String city = in.nextLine();
        System.out.println("Your name is : " + name);
        System.out.println("The double of the input number is " + 2*num);
        System.out.println("The city you live in is " + city);
    } // end main
}