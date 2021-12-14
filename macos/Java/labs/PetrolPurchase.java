class PetrolPurchase{

    private String location;
    private String petrolType;
    private int quantity;
    private double price;
    private double discount;

    PetrolPurchase(String location, String petrolType, int quantity, double price, double discount) {
        this.location = location;
        this.petrolType = petrolType;
        this.quantity = quantity;
        this.price = price;
        this.discount = discount;
    }
    public void setLocation(String location) {
        this.location = location;
    }
    public void setPetrolType(String petrolType) {
        this.petrolType = petrolType;
    }
    public void setQuantity(int quantity) {
        this.quantity = quantity;
    }
    public void setPrice(double price) {
        this.price = price;
    }
    public void setDiscount(double discount) {
        this.discount = discount;
    }
    public String getLocation() {
        return location;
    }
    public String getPetrolType() {
        return petrolType;
    }
    public int getQuantity() {
        return quantity;
    }
    public double getPrice() {
        return price;
    }
    public double getDiscount() {
        return discount;
    }
    public double getPurchaseAmount() {
        double amount;
        amount = (quantity * price) - discount;
        return amount;
    }
}
