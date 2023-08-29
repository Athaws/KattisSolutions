import java.util.*;

public class oddmanout {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cases = sc.nextInt();
        
        for(int i = 0; i < cases; i++){
            ArrayList<Integer> guestList = new ArrayList<Integer>();
            int guests = sc.nextInt(), odd = -1;

            for(int j = 0; j < guests; j++){
                guestList.add(j, sc.nextInt());
            }
                
            for (int j = 0; j < guestList.size(); j++){
                if (Collections.frequency(guestList, guestList.get(j)) == 1){
                    odd = guestList.get(j);
                }
            }
            System.out.println("Case #" + (i+1) + ": " + odd);
        }
        sc.close();
    }
}