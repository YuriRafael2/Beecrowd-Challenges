import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        int x = input.nextInt();
        int y = input.nextInt();
        int PROD = x * y;
        
        System.out.printf("PROD = %d\n", PROD);

        input.close();
 
    }
 
}