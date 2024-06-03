import java.util.*;

public class yinyangstones {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int black = 0, white = 0;
        String input;

        input = sc.nextLine();

        for (int i = 0; i < input.length(); i++)
            if (input.charAt(i) == 'W')
                white++;
            else if (input.charAt(i) == 'B')
                black++;

        if (black == white)
            System.out.println("1");
        else
            System.out.println("0");

        sc.close();
    }
}