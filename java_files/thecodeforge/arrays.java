import java.io.*;
import java.util.*;
class arrays
{
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] studentList = new int[5];
        studentList[0] = 23;
        studentList[1] = 45;
        studentList[2] = 37;
        studentList[3] = 30;
        studentList[4] = 42;

        System.out.println("This is the second element of the array : " + studentList[1]);
        System.out.println("Total slots reserved : " + studentList.length); // .length is used for finding the length of arr.


        System.out.println("This is the end of the program.");
    }
}