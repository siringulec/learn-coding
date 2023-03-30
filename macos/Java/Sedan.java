public class Sedan extends Car{
    private int length;
    public Sedan(int speed, double regularPrice, String colour, int length){
        super(speed, regularPrice, colour);
        this.length = length;
    }
    public int getLength(){
        return length;
    }
    public void setLength(int length){
        this.length = length;
    }
    public double getRegularPrice (){
        if (length > 20)
            return super.getRegularPrice() - super.getRegularPrice()*0.50;
        else
            return super.getRegularPrice() - super.getRegularPrice()*0.10;
    }
    public String getNameOfCar(){
        return "Sedan";
    }
}
