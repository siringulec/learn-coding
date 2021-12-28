public class ArrayAccess_1 {
    public static void main(String[] args) {
        int numbers[] = {31, 41, 51, 61};
        System.out.println("Beginning of the program.");
        try{
            for (int i = 0; i <= numbers.length; i++)
                System.out.println(i+1 + "----> " + numbers[i]);
            for (int x : numbers)
                System.out.print(x + " ");
        }
        catch(ArrayIndexOutOfBoundsException ex){
            System.out.println("Exception: " + ex.getMessage());
            System.out.println("Exception: " + ex.toString());
        }
        System.out.println("End of the program!");
    }
}
