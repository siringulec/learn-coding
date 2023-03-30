import java.util.Scanner;

public class Test {
    public static void main(String[] args) {
        int[] arr = new int[5];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            System.out.printf("Please enter element %d: ", i+1);
            arr[i] = sc.nextInt();
        }
        display(arr);
        min(arr);
        max(arr);
        // System.out.println("For loop");
        // for (i = 0; i < 5; i++) {
        //     System.out.printf("Element %d: %d%n", i+1, arr[i]);
        // }
        // System.out.println("Enhanced for loop");
        // i = 1;
        // for (int num : arr) {
        //     System.out.printf("Element %d: %d%n", i++, num);
        // }

    }
    public static void min(int array[]){
        int min = array[0];
        int index = 0;
        for (int i = 0; i < 5; i++) {
            if (min > array[i]){
                min = array[i];
                index = i;
            }
        }
        System.out.printf("Minumun element %d found at index %d.%n", min, index);
    }
    public static void max(int array[]){
        int max = array[0];
        int index = 0, count = 0;
        for (int num : array) {
            if (max < num){
                max = num;
                index = count;
            }
            count +=1;
        }
        System.out.printf("Maximum element %d found at index %d.%n", max, index);
    }
    public static vOid display(int arr[]){
        for (int i = 0; i < 5; i++) {
            System.out.printf("Element %d: %d%n", i+1, arr[i]);
        }
    }
}
