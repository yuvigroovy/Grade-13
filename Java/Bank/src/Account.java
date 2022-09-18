public class Account {

    private double balance;

    /**
     *
     * @param initBalance
     */

    public Account(double initBalance){
        this.balance = initBalance;
    }

    double getBalance(){
        return this.balance;
    }

    public void deposit(double amt) {
        this.balance += amt;
    }

    public void withdraw(double amt) {
        this.balance -= amt;
    }

    public String toString(){
        return "balance is: " + this.balance;
    }
}
