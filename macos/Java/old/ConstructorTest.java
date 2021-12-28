public class ConstructorTest {
    public static void main(String[] args) {
        CommisionEmployee employee1 = new CommisionEmployee("Bob", "Lewis", "333-33-3333", 5000, .04 );
        System.out.println();
        BasePlusCommisionEmployee employee2 = new BasePlusCommisionEmployee("Lisa", "Jones", "555-55-5555", 2000, .06, 800 );
        System.out.println("\n" +employee2.earnings());
        BasePlusCommisionEmployee employee3 = new BasePlusCommisionEmployee("Mark", "Sands", "888-88-8888", 8000, .15, 2000 );
        System.out.println("\n" +employee3.earnings());
    }
}
