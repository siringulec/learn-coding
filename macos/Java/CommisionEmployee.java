public class CommisionEmployee {
    private String firstName;
    private String lastName;
    private String socialSecurityNumber;
    private double grossSales;
    private double commissionRate;

    public CommisionEmployee( String first, String last, String ssn, double sales, double rate ){
        firstName = first;
        lastName = last;
        socialSecurityNumber = ssn;
        setGrossSales( sales );
        setCommissionRate( rate );
        System.out.printf("\nCommissionEmployee constructor:\n%s\n", this );
    }
    public void setFirstName( String first ){
        firstName = first;
    }
    public String getFirstName(){
        return firstName;
    }
    public void setLastName( String last ) {
        lastName = last;
    }
    public String getLastName()
    {
        return lastName;
    }
    public void setSocialSecurityNumber( String ssn )
    {
        socialSecurityNumber = ssn;
    }
    public String getSocialSecurityNumber()
    {
        return socialSecurityNumber;
    }
    public void setGrossSales( double sales )
    {
        grossSales = ( sales < 0.0 ) ? 0.0 : sales;
    }
    public double getGrossSales()
    {
        return grossSales;
    }
    public void setCommissionRate( double rate )
    {
        commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;
    }
    public double getCommissionRate()
    {
        return commissionRate;
    }
    public double earnings()
    {
        return getCommissionRate() * getGrossSales();
    }
    public String toString()
    {
        return String.format( "%s: %s %s\n%s: %s\n%s: %.2f\n%s: %.2f","commission employee",getFirstName(), getLastName() ,"social security number", getSocialSecurityNumber(),"gross sales", getGrossSales(), "commission rate",getCommissionRate());
    }
}
