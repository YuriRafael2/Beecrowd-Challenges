import java.io.IOException;
import java.util.Scanner;
import java.text.DecimalFormat;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        DecimalFormat df = new DecimalFormat("0.0");
        
        double n1 = input.nextDouble();
        double n2 = input.nextDouble();
        double n3 = input.nextDouble();
        double n4 = input.nextDouble();
        double media = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
        
        System.out.print("Media: " + df.format(media) + "\n");
        if(media < 5.0){
            System.out.print("Aluno reprovado.\n");
        } else if(media >= 7.0){
            System.out.print("Aluno aprovado.\n");
        } else if(media >= 5.0 && media < 7.0){
            System.out.print("Aluno em exame.\n");
            double n5 = input.nextDouble();
            System.out.print("Nota do exame: " + df.format(n5) + "\n");
            double mediaNova = (media + n5) / 2;
            if(mediaNova >= 5.0){
                System.out.print("Aluno aprovado.\n");
            } else{
                System.out.print("Aluno reprovado.\n");
            }
            System.out.print("Media final: " + df.format(mediaNova) + "\n");
        }
        
        input.close();
 
    }
 
}