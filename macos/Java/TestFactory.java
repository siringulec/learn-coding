public class TestFactory {
    public static void main(String[] args) {
        Factory factory = new Factory1();
        Pepper pepper = factory.getPepper();
        Apple apple = factory.getApple();
        System.out.println("Factory 1");
        System.out.println("The name of pepper: " + pepper.getName());
        System.out.println("The name of apple: " + apple.getName());
        System.out.println("_______________________________");
        factory = new Factory2();
        System.out.println("Factory 2");
        System.out.println("The name of pepper: " + factory.getPepper().getName());
        System.out.println("The name of apple: " + factory.getApple().getName());
    }
}
