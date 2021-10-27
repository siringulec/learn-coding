import java.util.Scanner;

public class Exercise1 {
       public static void main(String[] arg) {
              Scanner in = new Scanner(System.in);

              System.out.print("Input a  number: ");
              int num1 = in.nextInt();

              System.out.print("Input a  number: ");
              int num2 = in.nextInt();

              System.out.println( "\n" +  num1 + " x " + num2 + " = " + num1 * num2 + "\n" );

              for (int i = 0; i < 10; i++) {
              System.out.println(num1 + " x " + (i+1) + " = " + num1 * (i+1) );
              }
              System.out.println(0%2);
              in.close();
       }
}
