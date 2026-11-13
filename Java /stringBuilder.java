import java.util.*;
public class stringBuilder {
    public static void main(String[] args) {
        StringBuilder sb = new StringBuilder("Tonny");
        System.out.println(sb);
        System.out.println(sb.charAt(0));
       // sb.setCharAt(0, 'P');
       //sb.insert(0,'S');
       sb.delete(2, 4);

        System.out.println(sb);

    }
    
}
