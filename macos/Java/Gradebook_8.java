import java.util.Scanner;


public class Gradebook_8 {

    private String courseName;
    int aCount = 0;
    int bCount = 0;
    int cCount = 0;
    int dCount = 0;
    int fCount = 0;
    int gradeCounter = 0;
    int total = 0;
    int grade;
    double average;

    public Gradebook_8(String courseName){
        this.courseName = courseName;
    }


    public String getCourseName(){
        return courseName;
    }

    public void setCourseName(String courseName){
        this.courseName = courseName;
    }

    public void inputGrades(){

        Scanner input = new Scanner(System.in);
        System.out.println("Enter -1 if you want to terminate input of grade.\n" + "Enter grade for every student: ");
        grade = input.nextInt();

        while(grade != -1){
            total += grade;
            gradeCounter++;
            incrementgradeCounter(grade);
            System.out.println("Enter -1 if you want to terminate input of grade.\n" + "Enter grade for every student: ");
            grade = input.nextInt();
        }

        if (gradeCounter != 0){
            average = (double)total/gradeCounter;
            System.out.println("The total grades of all students is " + total + ".");
            System.out.println("Averageof the total grade of all students is " + average + ".");
            System.out.println("The number of all students in the class is " + gradeCounter + ".");
        }
        else {
            System.out.println("No grades were entered.");
        }
    }


    private void incrementgradeCounter(int grade){
        switch(grade/10){
        case 9:
        case 10: ++aCount; break;
        case 8: ++bCount; break;
        case 7: ++cCount; break;
        case 6: ++dCount; break;
        default: ++fCount; break;
        }
    }


    public void displayGradeReport(){

        System.out.println("Grade Report\n");

        if (gradeCounter != 0){
            average = (double)total/gradeCounter;
            System.out.println("The total grades of all students is " + total + ".");
            System.out.println("Averageof the total grade of all students is " + average + ".");
            System.out.println("The number of all students in the class is " + gradeCounter + ".");
            System.out.println("The amount of students that got an A: " + aCount);
            System.out.println("The amount of students that got an B: " + bCount);
            System.out.println("The amount of students that got an C: " + cCount);
            System.out.println("The amount of students that got an D: " + dCount);
            System.out.println("The amount of students that got an F: " + fCount);
        }
        else {
            System.out.println("No grades were entered.");
        }
    }
}
