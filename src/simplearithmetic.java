import java.util.*;
import java.math.*;

public class simplearithmetic {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int a, b, c;
        
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();

        sc.close();
        
        BigDecimal _a = new BigDecimal(a);
        BigDecimal _b = new BigDecimal(b);
        BigDecimal _c = new BigDecimal(c);
        
        System.out.println(_a.multiply(_b.divide(_c, 15, RoundingMode.DOWN)));
    }
}