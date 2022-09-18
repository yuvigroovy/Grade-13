public class Customer {
    private String firstName;
    private String lastName;

    public Customer(String firstName, String lastName){
        this.firstName = firstName;
        this.lastName = lastName;
    }

    public String getFirstName() {
        return this.firstName;
    }

    public String getLastName() {
        return this.lastName;
    }

    public String toString(){
        return "First Name: " + this.firstName + " Last name: " + this.lastName;
    }
}
