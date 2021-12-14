import java.util.Scanner;
public class lob_no_1 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int number1, number2;
        System.out.println("Enter the first number: ");
        number1 = input.nextInt();
        System.out.println("Enter the second number: ");
        number2 = input.nextInt();

        if (number2 % (number1 * 3) == 0)
            System.out.println(number1 + " tripled is a multiple of " + number2 + ".");
        else
           System.out.println(number1 + " tripled is not a multiple of " + number2 + ".");

    }
}
/*import java.util.Random;
public class pattern_draw {
    public static void main(String[] args) {

        Random random = new Random();
        int n, i, j, space, half1, half2;
        n = random.nextInt(15) + 10;
        if (n % 2 == 0)
            n++;
        System.out.println("n: " + n);
        space = n/2;

        for(i = 0; i <= n/2; i++){
            for (j = 0; j < space; j++) {
                System.out.print(" ");
            }
            half1 = (2*i)+1;
            for (j = 0; j < half1; j++) {
                System.out.print("*");
            }
            System.out.print("\n");
            space--;
        }
        space =+1;
        for (i = 0; i < (n/2); i++) {
            for (j = 0; j < space; j++) {
                System.out.print(" ");
            }
            half2 =  n-space*2;
            for (j = 0; j < half2; j++) {
                System.out.print("*");
            }
            System.out.print("\n");
            space++;
        }
    }
} */
