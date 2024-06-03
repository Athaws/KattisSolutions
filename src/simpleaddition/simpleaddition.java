import java.util.*;
import java.math.*;

public class simpleaddition {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a, b;
        
        a = new BigInteger(sc.nextLine());
        b = new BigInteger(sc.nextLine());

        System.out.println(a.add(b));

        sc.close();
    }
}