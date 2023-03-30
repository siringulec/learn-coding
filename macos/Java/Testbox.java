public class Testbox {
    public static void main(String[] args) {
        box box1 = new box();
        display(box1);
        box box2 = new box(45.0, 50.2, 13.0);
        display(box2);
    }
    public void display(box box){
        System.out.println("Width: " + box.getWidth());
        System.out.println("Height" + box.getHeight());
        System.out.println("Depth" + box.getDepth());
    }
}
