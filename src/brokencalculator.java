import java.util.*;
import java.math.*;

public class brokencalculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cases = sc.nextInt();
        BigDecimal prevAnswer = new BigDecimal(1), answer = new BigDecimal(0);

        for (int i = 0; i < cases; i++){
            int a, b;
            char operand;
        
            a = sc.nextInt();
            operand = sc.next().charAt(0);
            b = sc.nextInt();

            switch(operand){
                case('+'):
                    answer =  BigDecimal.valueOf(a + b).subtract(prevAnswer);
                    prevAnswer = answer;
                    break;
        
                case('-'):
                    answer = BigDecimal.valueOf(a - b).multiply(prevAnswer);
                    prevAnswer = answer;
                    break;
        
                case('*'):
                    answer = BigDecimal.valueOf(a * b).pow(2);
                    prevAnswer = answer;
                    break;
        
                case('/'):
                    if (a % 2 == 0)
                        answer = BigDecimal.valueOf(a / 2);
                    else
                        answer = BigDecimal.valueOf((a + 1) / 2);
                    prevAnswer = answer;
                    break;
            }
            System.out.println(answer);
        }
        sc.close();
    }
}