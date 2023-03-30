public class CommissionEmployeeTest {

    public static void main (String[] args){
        CommisionEmployee employee = new CommisionEmployee ( "sue", "jones ", "222-22-2222",10000, .06);
        System.out.println("Employee information obtained by get methods : \n");
        System.out.printf( "%s %s\n" , "First name is " , employee.getFirstName());
        System.out.printf( "%s %s\n" , "Last name is " , employee.getLastName());
        System.out.printf( "%s %s\n" , "Social Security Number  is " , employee.getSocialSecurityNumber());
        System.out.printf( "%s %s\n" , "Gross Sales  is " , employee.getGrossSales());
        System.out.printf( "%s %.2f\n" , "Commission rate  is " , employee.getCommissionRate());

        System.out.println("Earnings:" + employee.earnings());

        employee.setGrossSales(500);
        employee.setCommissionRate(0.1);

        System.out.printf( "\n%s: \n\n%s\n", " Uptated employee information obtained by toString " , employee);

        System.out.println("Earnings:" + employee.earnings());
    }

}
