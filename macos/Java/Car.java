public abstract class Car {
    private int speed;
    private double regularPrice;
    private String colour;

    public Car(int speed, double regularPrice, String colour){
        super();
        this.speed = speed;
        this.regularPrice = regularPrice;
        this.colour = colour;
    }
    public int getSpeed(){
        return speed;
    }
    public void setSpeed(int speed){
        this.speed = speed;
    }
    public double getRegularPrice(){
        return regularPrice;
    }
    public void setRegularPrice(double regularPrice){
        this.regularPrice = regularPrice;
    }
    public String getColour(){
        return colour;
    }
    public void setColour(String colour){
        this.colour = colour;
    }
    public abstract String getNameOfCar();

}
