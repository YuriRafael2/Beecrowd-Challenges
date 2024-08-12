import java.io.IOException;
import java.util.Scanner;

public class Main {
 
    public static void main(String[] args) throws IOException {
 
        Scanner input = new Scanner(System.in);
        
        double x = input.nextDouble();
        double y = input.nextDouble();
        
        if(x == 0 && y == 0){
            System.out.print("Origem\n");
        } else if(x > 0 && y > 0){
            System.out.print("Q1\n");
        } else if(x > 0 && y < 0){
            System.out.print("Q4\n");
        } else if(x < 0 && y > 0){
            System.out.print("Q2\n");
        } else if(x < 0 && y < 0){
            System.out.print("Q3\n");
        } else if(x == 0 && y != 0){
            System.out.print("Eixo Y\n");
        } else if(y == 0 && x != 0){
            System.out.print("Eixo X\n");
        }
        
        input.close();
 
    }
 
}