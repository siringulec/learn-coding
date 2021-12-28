public class TestCar_3 {
    public static void main(String[] args) {
        Car[] car = new Car[3];

        car[0] = new Sedan(230, 10000.00, "Black", 20);
        car[1] = new Ford(260, 30000.00, "Orange", 2017);
        car[2] = new Truck(300, 600000.00, "Grey", 2500);
        display(car[0]);
        display(car[1]);
        display(car[2]);
    }
    public static void display (Car car){
        System.out.println("\n" +car.getNameOfCar());
        System.out.println("\nSpeed: "+ car.getSpeed());
        System.out.println("Regular price: "+ car.getRegularPrice());
        System.out.println("Colour: "+ car.getColour());
    }
}
