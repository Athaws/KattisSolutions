import java.util.*;

public class internationaldates {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        sc.useDelimiter("/");
        int inp1, inp2;
        inp1 = sc.nextInt();
        inp2 = sc.nextInt();
        sc.close();

        if (inp1 > 12)
            System.out.println("EU");
        else if (inp2 > 12)
            System.out.println("US");
        else
            System.out.println("either");
    }
}