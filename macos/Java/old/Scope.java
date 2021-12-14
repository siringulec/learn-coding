public class Scope {
    private int x = 1;
    public void begin() {
        int x = 5;
        System.out.printf("x = %d\n", x);
        useGlobalVariable();
        useGlobalVariable();
        useLocalVariable();
    }
    public void useGlobalVariable() {
        System.out.println("Global variable value before multiplication is " + x + ".");
        x *= 10;
        System.out.println("Global variable value after multiplication is " + x + ".");
    }
    public void useLocalVariable () {
        int x = 25;
        System.out.println("x with preincrement action is " + (++x) + ".");
        System.out.println("x with postincrement action is " + (x++) + ".");
        System.out.println("Curent value of x is " + (++x) + ".");
    }
    public static void main(String[] args) {
        Scope scope = new Scope();
        scope.begin();
    }
}
