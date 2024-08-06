import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        int N = input.nextInt();
        
        System.out.printf("%d\n", N);
        System.out.printf("%d nota(s) de R$ 100,00\n", N / 100);
        N = N % 100;
        System.out.printf("%d nota(s) de R$ 50,00\n", N / 50);
        N = N % 50;
        System.out.printf("%d nota(s) de R$ 20,00\n", N / 20);
        N = N % 20;
        System.out.printf("%d nota(s) de R$ 10,00\n", N / 10);
        N = N % 10;
        System.out.printf("%d nota(s) de R$ 5,00\n", N / 5);
        N = N % 5;
        System.out.printf("%d nota(s) de R$ 2,00\n", N / 2);
        N = N % 2;
        System.out.printf("%d nota(s) de R$ 1,00\n", N);
        
        input.close();
        
    }
 
}