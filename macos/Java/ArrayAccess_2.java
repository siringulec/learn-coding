public class ArrayAccess_2 {
    public void work() throws Exception{
        int numbers[] = {31, 41, 51, 61};
        for (int i = 0; i <= numbers.length; i++)
            System.out.println(i+1 + "----> " + numbers[i]);
    }
    public static void main(String[] args) {
        try{
            System.out.println("Beginning of the program.");
            ArrayAccess_2 obj = new ArrayAccess_2();
            obj.work();
        }
        catch (Exception ex){
            ex.printStackTrace();
        }
        System.out.println("End of the program.");
    }
}
