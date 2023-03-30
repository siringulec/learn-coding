public class TestCar_2 {
    public static void main(String[] args) {
        Car car = new Sedan(230, 10000.00, "Black", 20);
        System.out.println("\nCar\nSpeed: "+ car.getSpeed());
        System.out.println("Regular price: "+ car.getRegularPrice());
        System.out.println("Colour: "+ car.getColour());

        car = new Ford(260, 30000.00, "Orange", 2017);
        System.out.println("\nCar\nSpeed: "+ car.getSpeed());
        System.out.println("Regular price: "+ car.getRegularPrice());
        System.out.println("Colour: "+ car.getColour());

        car = new Truck(300, 600000.00, "Grey", 2500);
        System.out.println("\nCar\nSpeed: "+ car.getSpeed());
        System.out.println("Regular price: "+ car.getRegularPrice());
        System.out.println("Colour: "+ car.getColour());
    }
}
