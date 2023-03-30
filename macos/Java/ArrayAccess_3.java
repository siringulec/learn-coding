public class ArrayAccess_3 {
    public void firstMethod(){
        try{
            int numbers[] = {31, 41, 51, 61};
            for (int i = 0; i <= numbers.length; i++)
                System.out.println(i+1 + "----> " + numbers[i]);
        }
        finally{
            System.out.println("Go back to the second method.");
        }
    }
    public void secondMethod(){
        try{
            System.out.println("Continue");
            firstMethod();
        }
        finally{
            System.out.println("Go back to the main method.");
        }
    }
    public static void main(String[] args) {
        System.out.println("Begin");
        ArrayAccess_3 obj = new ArrayAccess_3();
        try{
         obj.secondMethod();
        }
        catch (Exception ex){
            ex.printStackTrace();
        }
        System.out.println("End of the program.");
    }
}
