import java.util.Scanner;

public class Petrol {
    public static void main(String[] args) {

        Scanner input  = new Scanner(System.in);

        System.out.print("Enter station's locatoin: ");
        String location = input.nextLine();

        System.out.print("Enter type of petrol: ");
        String petrolType = input.nextLine();

        System.out.print("Enter quantity in litres: ");
        int quantity = input.nextInt();

        System.out.print("Enter price per litre: ");
        double price = input.nextDouble();

        System.out.print("Enter Discount: ");
        double discount = input.nextDouble();

        System.out.println("\n----------------------------\n");

        PetrolPurchase petrol = new PetrolPurchase(location, petrolType, quantity, price, discount);
        System.out.println(location + " Station");
        System.out.println("Purchasced " + quantity +" liters of " + petrolType);
        System.out.println("Price per liter is " + price + " liras.");
        System.out.println("Discount of " + discount + " liras.");
        System.out.println("Net  purchase  amount is "+ petrol.getPurchaseAmount() + " liras.");
    }
}
