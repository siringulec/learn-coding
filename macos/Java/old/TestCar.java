public class TestCar {
    public static void main(String[] args) {
        // Car car = new Car(200, 9000.00, "White");
        // System.out.println("Car\nSpeed: "+ car.getSpeed());
        // System.out.println("Regular price: "+ car.getRegularPrice());
        // System.out.println("Colour: "+ car.getColour());

        Sedan sedan = new Sedan(230, 10000.00, "Black", 20);
        System.out.println("\nSedan\nSpeed: "+ sedan.getSpeed());
        System.out.println("Regular price: "+ sedan.getRegularPrice());
        System.out.println("Colour: "+ sedan.getColour());
        System.out.println("Length: "+ sedan.getLength());

        Ford ford = new Ford(260, 30000.00, "Orange", 2017);
        System.out.println("\nFord\nSpeed: "+ ford.getSpeed());
        System.out.println("Regular price: "+ ford.getRegularPrice());
        System.out.println("Colour: "+ ford.getColour());
        System.out.println("Year: "+ ford.getYear());
    }
}
