import java.util.*;
public class array_ops {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] arr = {10, 20, 30, 40, 50};
        // Access by index pos - O(1) 
        System.out.println("The element at the pos arr[2] is " + arr[2]);
        System.out.println("This is the arr staus : " + Arrays.toString(arr));

        // Update by the index - O(1)
        arr[2] = 25;
        System.out.println("This is the element at the pos arr[2] after the update : " + arr[2]);
        System.out.println("This is the arr status now : " + Arrays.toString(arr));

        // Inserting a new element at the index 2.
        int[] new_expanded = new int[arr.length + 1];
        System.arraycopy(arr, 0, new_expanded, 0, 2);
        new_expanded[2] = 24;
        System.arraycopy(arr, 2, new_expanded, 3, arr.length - 2);
        System.out.println("This is the status of arr : " + Arrays.toString(arr));
        System.out.println("This is the status of new_expanded : " + Arrays.toString(new_expanded));

        // Deleting the element at the index 3;
        int[] new_contracted = new int[arr.length - 1];
        System.arraycopy(arr, 0, new_contracted, 0, 3);
        System.arraycopy(arr, 4, new_contracted, 3, arr.length-4);
        System.out.println("Status of the new_contracted : " + Arrays.toString(new_contracted));

        // Linear Search
        int search = 40;
        int found_index = -1;
        for(int i = 0; i < arr.length; i++) {
            if(arr[i] == search) {
                System.out.println("Element is found.");
                found_index = i;
                break;
            }
        }
        if(found_index != -1) {
            System.out.println("The element " + search + " is found at the index " + found_index + " in the arr.");
        } else {
            System.out.println("The element is not found in the given arr.");
        }

        // Binary Search Implementation
        Arrays.sort(arr);
        int bsResult = Arrays.binarySearch(arr, 40); // the index returned will be negative if the element isnt present.
        System.out.println("The index found at Binary Search is : " + bsResult);

        System.out.println("This is the end of the program.");
    }
}
