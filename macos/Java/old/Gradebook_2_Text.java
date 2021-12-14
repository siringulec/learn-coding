import java.util.Scanner;

public class Gradebook_2_Text {
    public static void main (String[] agr) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter course name:");
        String courseName = input.nextLine();
        Gradebook_2 gradebook2 = new Gradebook_2();
        gradebook2.displayMessage(courseName);

        Gradebook_2 gradebook2_1 = new Gradebook_2();
        System.out.println("Enter course name:");
        courseName = input.nextLine();
        gradebook2_1.displayMessage(courseName);
        input.close();
    }
}
