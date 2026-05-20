import java.util.Random;
public class randomfun {
    public static void main(String[] args) {
        Random random = new Random();
        int myrandomnumber;
        myrandomnumber = random.nextInt();
        System.out.println(myrandomnumber);
        myrandomnumber = random.nextInt(1000); // 0 - 999
        System.out.println(myrandomnumber);
        //shifting !
        myrandomnumber = random.nextInt(1000) + 1;
        System.out.println(myrandomnumber); // 1 - 1000
    } // end main
}