public class Gradebook_7_Test {

    public static void main(String[] args){
        Gradebook_7 gradebook_7_1 = new Gradebook_7("Java Programming");
        System.out.println("The course name is " + gradebook_7_1.getCourseName());
        gradebook_7_1.setCourseName(" programming with c# ");
        System.out.println("The course name is " + gradebook_7_1.getCourseName());
    }
}
