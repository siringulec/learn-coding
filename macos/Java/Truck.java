public class Truck extends Car{
    private int weight;
    public Truck(int speed, double regularPrice, String colour, int weight){
        super(speed, regularPrice, colour);
        this.weight = weight;
    }
    public int getWeight(){
        return weight;
    }
    public void setWeight(int weight){
        this.weight = weight;
    }
    public double getRegularPrice (){
        if (weight > 2000)
            return super.getRegularPrice() - super.getRegularPrice()*0.20;
        else
            return super.getRegularPrice() - super.getRegularPrice()*0.10;
    }
     public String getNameOfCar(){
        return "Truck";
    }
}
