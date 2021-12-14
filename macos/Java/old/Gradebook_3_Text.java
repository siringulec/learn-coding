import java.util.Scanner;

public class gradebook_3_Text {
    public static void main (String[] agr) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter course name:");
        String courseName = input.nextLine();
        Gradebook_3 gradebook3 = new Gradebook_3();
        gradebook3.setCourseName(courseName);
        System.out.println("The course name for uour gradebook 3 is " + grdebook3.getCourseName() + ".");
        gradebook3.displayMessage(courseName);
    }
}
