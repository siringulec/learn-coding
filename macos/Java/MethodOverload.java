public class MethodOverload {
    public void testOverloadMethods () {
        System.out.println("Square of 7 is equal to " + square(7));
        System.out.println("Square of 7.79 is equal to " + square(7.79));
    }
    public int square (int intValue) {
        return intValue * intValue;
    }
    public double square (double doubleValue) {
        return doubleValue * doubleValue;
    }
    public static void main(String[] args) {
        MethodOverload methodover = new MethodOverload();
        methodover.testOverloadMethods();
    }
}
