public class Staff extends Person{
    private String firstName;
    private String lastName;
    private int id;

    public Staff (String firstName, Staring lastName, int id){
       super();
    }

    public void setFirstName(String firstName) {
        this.firstName = firstName;
    }

    public String getFirstName() {
        return firstName;
    }
     public void setLastName(String lastName) {
        this.lastName = lastName;
    }

    public String getLastName() {
        return lastName;
    }
     public void setID(String id) {
        this.id = id;
    }

    public String getID() {
        return id;
    }
}
