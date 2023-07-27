import java.util.*;

public class powersof2easy {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, e, count = 0;
        String nString, e2String;

        n = sc.nextInt();
        e = sc.nextInt(); 
        e2String = String.valueOf((int)Math.pow(2, e));

        for (int i = 0; i <= n; i++){
            nString = String.valueOf(i);
            if (nString.contains(e2String))
                count++;
        }

        sc.close();

        System.out.println(count);
    }
}