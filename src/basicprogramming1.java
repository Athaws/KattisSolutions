import java.util.*;

public class basicprogramming1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int action = sc.nextInt();

        ArrayList<Integer> arr = new ArrayList<Integer>(N);
        for (int i = 0; i < N; i++)
            arr.add(sc.nextInt());
        
        switch(action){
            case 1:
                action1();
                break;
            case 2:
                action2(arr.get(0), arr.get(1));
                break;
            case 3:
                action3(arr.get(0), arr.get(1), arr.get(2));
                break;
            case 4:
                action4(arr);
                break;
            case 5:
                action5(arr);
                break;
            case 6:
                action6(arr);
                break;
            case 7:
                action7(arr);
                break;
        }

        sc.close();
    }

    static void action1(){
        System.out.println(7);
    }
    static void action2(int a, int b){
        if (a > b)
            System.out.println("Bigger");
        else if (a == b)
            System.out.println("Equal");
        else
            System.out.println("Smaller");
    }
    static void action3(int a, int b, int c){
        ArrayList<Integer> smallList = new ArrayList<Integer>();
        smallList.add(a); smallList.add(b); smallList.add(c);
        Collections.sort(smallList);
        System.out.println(smallList.get(1));
    }
    static void action4(ArrayList<Integer> arr){
        double sum = 0;
        for (Integer i : arr)
            sum += i;
        System.out.printf("%.0f", sum);
    }
    static void action5(ArrayList<Integer> arr){
        double sum = 0;
        for (Integer i : arr){
            if (i % 2 == 0)
                sum += i;
        }
        System.out.printf("%.0f", sum);
    }
    static void action6(ArrayList<Integer> arr){
        StringBuffer outBuffer = new StringBuffer(arr.size());
        for (Integer i : arr){
            outBuffer.append((char)((i.intValue() % 26) + 97));
        }
        System.out.println(outBuffer);
    }
    static void action7(ArrayList<Integer> arr){
        Boolean[] visited = new Boolean[arr.size()];
        Arrays.fill(visited, 0, arr.size(), false);

        int i = 0;
        while (true){
            if (i >= arr.size()){
                System.out.println("Out");
                break;
            }
            if (visited[i]){
                System.out.println("Cyclic");
                break;
            }
            if (i == arr.size()-1){
                System.out.println("Done");
                break;
            }
            visited[i] = true;
            i = arr.get(i);
        }
    }
}