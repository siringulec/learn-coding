public class Toast {
    public Toast(){
        this(6);
        System.out.println("Constarcted with no parameters.");
        System.out.println("White Cheese Toast");
    }
    public Toast(int number){
        this(10, "sucuk toast");
        System.out.println("Constarcted with one parameter.");
        System.out.println("Number of toast: " + number);
    }
    public Toast(int number, String kind){
        System.out.println("Constarcted with two parameters.");
        System.out.println("Number of toast of the kind " + kind + " : "+ number);
    }
}
