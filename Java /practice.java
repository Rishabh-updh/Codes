import java.util.*;
public class practice{
public static int printExponent(int x, int n){
int e =x^(n);
return e;
}


  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter x : ");
    int x =sc.nextInt();
    System.out.println("Enter n ; ");
    int n =sc.nextInt();
    System.out.println("Your answer is : "+printExponent(x, n));
    
  }

}