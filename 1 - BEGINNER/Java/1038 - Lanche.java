import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        int codigo = input.nextInt();
        int quantidade = input.nextInt();
        double valor = 0;
        
        switch(codigo){
            case 1:
                valor = 4.0 * quantidade;
                break;
            case 2:
                valor = 4.5 * quantidade;
                break;
            case 3:
                valor = 5.0 * quantidade;
                break;
            case 4:
                valor = 2 * quantidade;
                break;
            case 5:
                valor = 1.5 * quantidade;
                break;
            default:
                break;
        }
        
        System.out.printf("Total: R$ %.2f\n", valor);
        
        input.close();
 
    }
 
}