import java.util.Scanner;

public class Max_finder {
    public void determine_max() {
        double num1, num2, num3, result;
        Scanner input = new Scanner(System.in);
        System.out.println("Enter three double variables: ");
        num1 = input.nextDouble();
        num2 = input.nextDouble();
        num3 = input.nextDouble();
        result = max(num1, num2, num3);
        System.out.printf("The greatest number from %f, %f and %f is %f.", num1, num2, num3, result);
    }
    public double max(double x, double y, double z) {
        double max = x;
        if (max < y)
            max = y;
        if (max < z)
            max = z;
        return max;
    }
}
