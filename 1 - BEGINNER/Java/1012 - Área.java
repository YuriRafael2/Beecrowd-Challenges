import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    public static final double PI = 3.14159;
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        double A = input.nextDouble();
        double B = input.nextDouble();
        double C = input.nextDouble();
        double triangulo = A * C / 2.0;
        double circulo = PI * C * C;
        double trapezio = (A + B) * C / 2.0;
        double quadrado = B * B;
        double retangulo =  A * B;
        
        System.out.printf("TRIANGULO: %.3f\n", triangulo);
        System.out.printf("CIRCULO: %.3f\n", circulo);
        System.out.printf("TRAPEZIO: %.3f\n", trapezio);
        System.out.printf("QUADRADO: %.3f\n", quadrado);
        System.out.printf("RETANGULO: %.3f\n", retangulo);
    
    }
 
}