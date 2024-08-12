import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        double n = input.nextDouble();
        
        if(n >= 0 && n <= 25){
            System.out.print("Intervalo [0,25]\n");
        } else if(n > 25 && n <= 50){
            System.out.print("Intervalo (25,50]\n");
        } else if(n > 50 && n <= 75){
            System.out.print("Intervalo (50,75]\n");
        } else if(n > 75 && n <= 100){
            System.out.print("Intervalo (75,100]\n");
        } else{
            System.out.print("Fora de intervalo\n");
        }
        
        input.close();
 
    }
 
}