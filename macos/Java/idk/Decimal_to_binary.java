import java.util.Scanner;

public class Decimal_to_binary {
       public static void main(String[]arg) {
              int binary[] = new int[100];
              Scanner scan = new Scanner(System.in);
              int i = 1, j, quotient, decimal;

              System.out.print("Enter decimal number:");
              decimal = scan.nextInt();

              quotient = decimal;

              while (quotient != 0) {
                     binary[i++]  = quotient%2;
                     quotient = quotient/2;
              }

             System.out.print ("Binary of " + decimal + " is:\n");

             for (j = i-1; j > 0; j--) {
                    System.out.print (binary[j] + "\t");
             }
             System.out.print("\n");
             scan.close();
       }
}
