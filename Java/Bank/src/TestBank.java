import java.util.Scanner;

public class TestBank {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        boolean flag = true;
        System.out.println("enter first name");
        String first = in.nextLine();
        System.out.println("enter last name");
        String last = in.nextLine();
        System.out.println("enter balance");
        double balance = in.nextDouble();

        Connector cn = new Connector(first,last,balance);
        System.out.println(cn.toString());
        while(flag){
            System.out.println("Select task: \n 1.deposit \n 2.withdraw \n 3.close terminal");
            int task = in.nextInt();
            switch (task){
                case 1:
                    System.out.println("enter ammount");
                    cn.deposit(in.nextDouble());
                     break;
                case 2:
                    System.out.println("enter ammount");
                    cn.withdraw(in.nextDouble());
                    break;
                case 3:
                    System.out.println("closing terminal....");
                    flag = false;
                    break;
            }
            System.out.println(cn.toString());
        }
    }
}
