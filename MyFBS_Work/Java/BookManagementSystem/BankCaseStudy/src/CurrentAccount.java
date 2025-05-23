
public class CurrentAccount extends Account {
	private static double INTEREST_RATE = 6.0;
	private double overdraftLimit;
	

public CurrentAccount() {
	this.overdraftLimit = 20000;
}


public CurrentAccount(String accountHolderName, String accountNumber, double balance, double overdraftLimit) {
	super(accountHolderName, accountNumber, balance);
	this.overdraftLimit = 20000;
}


public double getOverdraftLimit() {
	return overdraftLimit;
}


public void setOverdraftLimit(double overdraftLimit) {
	this.overdraftLimit = overdraftLimit;
}

public void calculateInterest() {
double interest;
interest = (balance * INTEREST_RATE ) / 100;
balance =balance + interest;  

System.out.println("Interest calculated: " + interest);
System.out.println("New balance after interest: " + balance);

}


public void withdraw(double amount) {
    if (balance + overdraftLimit >= amount) {
        balance = balance - amount;
        System.out.println("Withdrawal successful!");
    }
    else {
    System.out.println(" Overdraft limit exceeded.");
    }
}


public String toString() {
	return "CurrentAccount [overdraftLimit=" + overdraftLimit + ", accountHolderName=" + accountHolderName
			+ ", accountNumber=" + accountNumber + ", balance=" + balance + "]";
}
}
