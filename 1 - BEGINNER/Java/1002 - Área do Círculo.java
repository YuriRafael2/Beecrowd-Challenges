import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    public static final double PI = 3.14159;
    
    public static void main(String[] args) throws IOException {

        Scanner input = new Scanner(System.in);
        
        double raio = input.nextDouble();
        double area = PI * raio * raio;
        
        System.out.printf("A=%.4f\n", area);

        input.close();
 
    }
 
}