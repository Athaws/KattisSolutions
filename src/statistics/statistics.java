import java.util.*;

public class statistics {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int casenumber = 1;

        while (sc.hasNext()) {
            int min = Integer.MAX_VALUE, max = Integer.MIN_VALUE, datapts = sc.nextInt();
            for (int i = 0; i < datapts; i++) {
                int data = sc.nextInt();
                if (data > max)
                    max = data;
                if (data < min)
                    min = data;
            }
            System.out.println("Case " + casenumber++ + ": " + min + " " + max + " " + (max-min));
        }

        sc.close();
    }
}