import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    public static final double PI = 3.14159;
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        double R = input.nextDouble();
        double volume = PI * R * R * R * 4/3;
        
        System.out.printf("VOLUME = %.3f\n", volume);
 
    }
 
}