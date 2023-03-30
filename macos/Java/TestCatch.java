public class TestCatch {
    public static void main(String[] args) {
        Cat cat1 = new Cat();
        cat1.prey();
        cat1.hide();
        System.out.println("------------");
        Tiger tiger1 = new Tiger();
        tiger1.getLegs();
        tiger1.hide();
        System.out.println("------------");
        Lion lion1 = new Lion();
        lion1.hide();
    }
}
