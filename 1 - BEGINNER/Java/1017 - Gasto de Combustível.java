import java.io.IOException;
import java.util.Scanner;

public class Main {
    
    public static final int KM_L = 12;
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        int horas_viagem = input.nextInt();
        int velocidade_media = input.nextInt();
        double combustivel_litros = (double) velocidade_media * horas_viagem / KM_L;
        
        System.out.printf("%.3f\n", combustivel_litros);
 
    }
 
}