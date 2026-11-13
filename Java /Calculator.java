import java.util.*;
public class Calculator {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int x = sc.nextInt();
        int y = sc.nextInt();
        int button = sc.nextInt();
        switch(button){
            case 1 : int sum = x + y;
            System.out.println(sum);
            break;
            case 2 : int diff = x - y;
            System.out.println(diff);
            break;
            case 3 : int multi = x * y;
            System.out.println(multi);
            break;
            case 4 : int div = x / y;
            System.out.println(div); 
            default : System.out.println("Invalid input");
        }
    }
    
}