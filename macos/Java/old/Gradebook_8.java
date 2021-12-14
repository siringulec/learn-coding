import java.util.Scanner;


public class Gradebook_8 { //start of class

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

    public Gradebook_8(String courseName){ // constructor
        this.courseName = courseName;
    }


    public String getCourseName(){
        return courseName;
    }

    public void setCourseName(String courseName){
        this.courseName = courseName;
    }

    public void inputGrades(){

        Scanner input = new Scanner(System.in); // defines scaner variable input
        System.out.println("Enter -1 if you want to terminate input of grade.\n");
        System.out.println("Enter grade for every student: ");
        grade = input.nextInt(); // takes an integer as input

        while(grade != -1){
            total += grade; // adds all entered grades together
            gradeCounter++; // adds +1 to nuber of students
            incrementgradeCounter(grade); // calls method
            System.out.println("Enter -1 if you want to terminate input of grade.\n");
            System.out.println("Enter grade for every student: ");
            grade = input.nextInt(); // takes an integer as input
        }

        if (gradeCounter != 0){ // if any gardes were entered
            average = (double)total/gradeCounter; // takes the average of all grades total
            System.out.println("The total grades of all students is " + total + ".");
            System.out.println("Averageof the total grade of all students is " + average + ".");
            System.out.println("The number of all students in the class is " + gradeCounter + ".");
        }
        else { // if nuber of students is zero
            System.out.println("No grades were entered.");
        }
    }


    private void incrementgradeCounter(int grade){
        switch(grade/10){ // takes all grades and checks if they are A, B, C, D of F
        case 9:
        case 10: ++aCount; break; // counts A
        case 8: ++bCount; break; // counts B
        case 7: ++cCount; break;  // counts C
        case 6: ++dCount; break;  // counts D
        default: ++fCount; break;  // counts F
        }
    }


    public void displayGradeReport(){ // outputs colleted data

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
            System.out.println("No grades were entered."); // if nuber of students is zero
        }
    }
} // end of class
