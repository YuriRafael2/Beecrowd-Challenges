import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        int dias = input.nextInt();
        int anos = dias / 365;
        dias = dias % 365;
        int meses = dias / 30;
        dias = dias % 30;
        
        System.out.printf("%d ano(s)\n", anos);
        System.out.printf("%d mes(es)\n", meses);
        System.out.printf("%d dia(s)\n", dias);
        
        input.close();
 
    }
 
}