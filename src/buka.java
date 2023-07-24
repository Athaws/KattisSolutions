import java.util.*;
import java.math.*;

public class buka {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        BigInteger a, b;
        char operand;
        
        a = new BigInteger(sc.nextLine());
        operand = sc.next().charAt(0);
        sc.nextLine();
        b = new BigInteger(sc.nextLine());

        if (operand == '+')
            System.out.println(a.add(b));
        else if (operand == '*')
            System.out.println(a.multiply(b));

        sc.close();
    }
}