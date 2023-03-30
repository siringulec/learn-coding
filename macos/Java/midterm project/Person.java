public abstract class Person {
    private String firstName;
    private String lastName;
    private int id;

    public Person (String firstName, Staring lastName, int id){
        this.firstName = firstName;
        this.lastName = lastName;
        this.id = id;
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
