
public class SalaryAccount extends SavingsAccount {
	private static double INTEREST_RATE = 5.0;
	private final int inactiveMonths=2;
	private int lastTransactionMonth;
	protected int currentMonth=5;

public SalaryAccount() {
	
}


public SalaryAccount(String accountHolderName, String accountNumber, double balance, int lastTransactionMonth) {
	super(accountHolderName, accountNumber, balance);
	this.lastTransactionMonth = lastTransactionMonth;
	
}


public int getLastTransactionMonth() {
	return lastTransactionMonth;
}


public void setLastTransactionMonth(int lastTransactionMonth) {
	this.lastTransactionMonth = lastTransactionMonth;
}

public boolean isFrozen(int currentMonth) {
    if (currentMonth - lastTransactionMonth >= inactiveMonths ) {
        System.out.println("Account is frozen due to inactivity.");
        return true;
    }
    return false;
}


public void calculateInterest() {
    if (isFrozen(currentMonth)) {
        System.out.println("Account is frozen. Cannot calculate interest.");
        return;
    }
    else {
    double interest;
    interest = (balance * INTEREST_RATE ) / 100;
    balance =balance + interest;  
    
    System.out.println("Interest calculated: " + interest);
    System.out.println("New balance after interest: " + balance);

}
}

public void deposit(double amount) {
	if (isFrozen(currentMonth)) {
        System.out.println("Account is frozen. Cannot Deposit Amount.");
        return;
    }
    else {
    super.deposit(amount);
    this.lastTransactionMonth = currentMonth;
}
}

public void withdraw(double amount) {
	if (isFrozen(currentMonth)) {
        System.out.println("Account is frozen. Cannot Withdraw Amount.");
        return;
    }
    else {
    super.withdraw(amount);
    this.lastTransactionMonth = currentMonth;
}
}


public String toString() {
	return "SalaryAccount [inactiveMonths=" + inactiveMonths + ", lastTransactionMonth=" + lastTransactionMonth
			+ ", currentMonth=" + currentMonth + ", accountHolderName=" + accountHolderName + ", accountNumber="
			+ accountNumber + ", balance=" + balance + "]";
}


}
