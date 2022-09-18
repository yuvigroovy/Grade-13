public class Connector {
    private Account account;
    private Customer customer;

    public Connector(String fn, String ln, double amt){
        customer = new Customer(fn,ln);
        account = new Account(amt);
    }

    public String getFirstName(){
        return this.customer.getFirstName();
    }

    public String getLastName(){
        return this.customer.getLastName();
    }

    public Account getAccount(){
        return this.account;
    }

    public String toString(){
        return customer.toString() + " \n"+ account.toString();
    }

    void deposit(double amt){
        account.deposit(amt);
    }

    void withdraw(double amt){
        account.withdraw(amt);
    }

    void setAccount(Account acc){
        this.account = acc;
    }

}
