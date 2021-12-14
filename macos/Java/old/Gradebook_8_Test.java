public class Gradebook_8_Test{

    public static void main(String[] args){

        Gradebook_8 gradebook8 = new Gradebook_8 ("Java Programming");
        System.out.println("The course name is " + gradebook8.getCourseName() + ".\n");

        gradebook8.setCourseName("Programming with C#");
        System.out.println("The course name is " + gradebook8.getCourseName() + ".\n");

        gradebook8.inputGrades();
        gradebook8.displayGradeReport();
    }
}
