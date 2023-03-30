public class PassArray {
    public static void main(String[] args) {
        int array[] = { 1, 2, 3, 4, 5 };
        int i;

        System.out.println("Effects of passing reference to entire array:\n" + "The values of the original array are:" );

        for ( int value : array )
            System.out.printf( " %d", value );

        modifyArray(array);
        System.out.println( "\nThe modified array:" );
        for  (i = 0; i < array.length; i++) {
            System.out.printf( " %d", array[i] );
        }

        System.out.printf("\nThird element before modifing: %d\n", array[ 3 ] );
        modifyElement(array[3]);
        System.out.printf("Third element after modifing: %d\n", array[ 3 ] );
    }
    public static void modifyArray( int arr[] ){
        for ( int i = 0; i < arr.length; i++ )
            arr[i] *= 2;
    }
    public static void modifyElement(int element){
        element *= 2;
        System.out.printf("Value of element in modify: %d\n", element );
    }
}
