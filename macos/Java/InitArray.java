public class InitArray {
    public static void main(String[] args) {
        int array1[][] = {{1,2,3}, {4,5,6}};
        int array2[][] = {{1,2}, {3}, {4,5,6}};
        System.out.println( "Values in array1 by row are" );
        outputArray( array1 );
        System.out.println( "\nValues in array2 by row are" );
        outputArray( array2 );
    }
    public static void outputArray(int arr[][]){
        for (int i = 0; i < arr.length; i++) {
            for (int j = 0; j < arr[i].length; j++) {
                System.out.printf("%d ", arr[i][j]);
            }
            System.out.println();
        }
    }
}
