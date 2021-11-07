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
