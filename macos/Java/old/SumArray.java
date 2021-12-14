public class SumArray {
    public static void main(String[] args) {
        int array[] = {87,68,94,100,83,78,85,91,76,87};
        int total = 0, i;

        System.out.printf("%s%20s\n", "Index", "Value");
        for (i = 0; i <  array.length; i++) {
            System.out.printf("%5d%8d + %d = %d\n", i, array[i],total, total += array[i]);
        }
    }
}
