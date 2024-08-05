import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        int X = input.nextInt();
        double Y = input.nextDouble();
        double consumo_medio = X / Y;
        
        System.out.printf("%.3f km/l\n", consumo_medio);

        input.close();
 
    }
 
}