import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        int numero_funcionario = input.nextInt();
        int horas_trabalhadas = input.nextInt();
        double salario_hora = input.nextDouble();
        double salario_total = salario_hora * horas_trabalhadas;
        
        System.out.printf("NUMBER = %d\n", numero_funcionario);
        System.out.printf("SALARY = U$ %.2f\n", salario_total);

        input.close();
        
    }
 
}