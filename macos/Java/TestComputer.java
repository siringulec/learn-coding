import java.util.Scanner;
public class TestComputer {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter request: ");
        String request = sc.nextLine();
        Computer computer = Factory.create(request);
        System.out.println(computer.getType());
    }
}
