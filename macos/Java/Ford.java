public class Ford extends Car{
    private int year;
    public Ford(int speed, double regularPrice, String colour, int year){
        super(speed, regularPrice, colour);
        this.year = year;
    }
    public int getYear(){
        return year;
    }
    public void setYear(int year){
        this.year = year;
    }
    public double getRegularPrice(){
        if (year <= 2018 && super.getColour().equals("Orange")){
            return super.getRegularPrice() - super.getRegularPrice()*0.60;
        }
        else if(year > 2018 && year < 2020){
            return super.getRegularPrice() - super.getRegularPrice()*0.10;
        }
        else{
            return super.getRegularPrice() - super.getRegularPrice()*0.05;
        }
    }
     public String getNameOfCar(){
        return "Ford";
    }
}
