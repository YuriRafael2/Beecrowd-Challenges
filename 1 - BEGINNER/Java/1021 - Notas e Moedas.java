import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
        
        Scanner input = new Scanner(System.in);
        
        double valor = input.nextDouble();
        int notas = (int) valor;
        int moedas = (int) ((valor - notas) * 100);
        
        System.out.println("NOTAS:");
        System.out.printf("%d nota(s) de R$ 100.00\n", notas / 100);
        notas = notas % 100;
        System.out.printf("%d nota(s) de R$ 50.00\n", notas / 50);
        notas = notas % 50;
        System.out.printf("%d nota(s) de R$ 20.00\n", notas / 20);
        notas = notas % 20;
        System.out.printf("%d nota(s) de R$ 10.00\n", notas / 10);
        notas = notas % 10;
        System.out.printf("%d nota(s) de R$ 5.00\n", notas / 5);
        notas = notas % 5;
        System.out.printf("%d nota(s) de R$ 2.00\n", notas / 2);
        notas = notas % 2;
        System.out.println("MOEDAS:");
        System.out.printf("%d moeda(s) de R$ 1.00\n", notas);
        System.out.printf("%d moeda(s) de R$ 0.50\n", moedas / 50);
        moedas = moedas % 50;
        System.out.printf("%d moeda(s) de R$ 0.25\n", moedas / 25);
        moedas = moedas % 25;
        System.out.printf("%d moeda(s) de R$ 0.10\n", moedas / 10);
        moedas = moedas % 10;
        System.out.printf("%d moeda(s) de R$ 0.05\n", moedas / 5);
        moedas = moedas % 5;
        System.out.printf("%d moeda(s) de R$ 0.01\n", moedas);
        
        input.close();
        
    }
 
}