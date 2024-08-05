import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        int peca1 = input.nextInt();
        int peca1_quantidade = input.nextInt();
        double peca1_valor = input.nextDouble();
        int peca2 = input.nextInt();
        int peca2_quantidade = input.nextInt();
        double peca2_valor = input.nextDouble();
        double valor_total = peca1_quantidade * peca1_valor + peca2_quantidade * peca2_valor;
        
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", valor_total);
 
    }
 
}