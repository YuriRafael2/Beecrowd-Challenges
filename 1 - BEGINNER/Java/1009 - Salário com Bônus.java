import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        String nome = input.nextLine();
        double salario_fixo = input.nextDouble();
        double vendas = input.nextDouble();
        double salario_total = vendas * 15.0 / 100.0 + salario_fixo;
        
        System.out.printf("TOTAL = R$ %.2f\n", salario_total);

        input.close();
 
    }
 
}