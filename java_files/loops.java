public class loops {
    public static void main(String[] args) {
        int count = 0;
        while(count < 10) {
            if(count == 5) {
                count++;
                break;
            }
            System.out.print((count+1) + "\t");
            count++;
        }
        System.out.println();
    } // end main
}