import java.util.Scanner;

public class Menu {
    Scanner sc = new Scanner(System.in);
    public Menu(){
        System.out.println("Welcome to the train station system.");
    }
    public void detect(){
        System.out.print("Please press\n'S' for staff\n'P' for passanger: \n");
        char response = sc.next().charAt(0);
        if (response == 'S')
            staff_menu();
        else if(response == 'P')
            passenger_menu();
        else{
            System.out.println("Invalid! Please enter again.");
            detect();
        }
    }
    public void staff_menu(){
        System.out.println("Welcome please enter identification number for confirmation.");
    }
    public void passenger_menu(){
        System.out.println("Welcome please enter identification number.");
    }
}
