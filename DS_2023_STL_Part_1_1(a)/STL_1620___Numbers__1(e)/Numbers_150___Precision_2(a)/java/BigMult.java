/*
> javac BD.java
> java BD
*/
import java.math.BigDecimal;

public class BigMult {
    public static void main(String[] args) {
        BigDecimal x = new BigDecimal(100);
        BigDecimal y = new BigDecimal(41);
        BigDecimal a = new BigDecimal(1);
        BigDecimal b = new BigDecimal(1);

        int n = 100;
        int m = 2;

        for (int i = 1; i < n ; i++ ) {
            System.out.println(i);
            a = a.multiply(x);
            x = x.subtract(new BigDecimal(1));
        }

        System.out.println(a);
    }
}