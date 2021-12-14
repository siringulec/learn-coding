public class InitArray {
    public static void main(String[] args) {
        int i;
        final int ARRAY_LENGTH = 10;
        int array[] = new int[ARRAY_LENGTH];
        for (i = 0; i < 10; i++) {
            array[i] = 2 + 2 * i;
        }
        System.out.printf("%s%8s\n", "Index", "Value");
        for (i = 0; i < 10; i++) {
            System.out.printf("%5d%8d\n", i, array[i]);
        }

    }
}
