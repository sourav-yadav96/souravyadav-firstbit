
public class XYZBankMain {
	public static void main(String[] args) {
		SavingsAccount savingsAccount = new SavingsAccount("SA123", "John Doe", 15000);
        SalaryAccount salaryAccount = new SalaryAccount("SA124", "Jane Doe", 20000, 4);
        CurrentAccount currentAccount = new CurrentAccount("CA123", "Mark Smith", 5000, 2000);
        LoanAccount loanAccount = new LoanAccount("LA123", "Sara Lee", -50000);
  
        savingsAccount.deposit(5000);
        savingsAccount.withdraw(2000);
        salaryAccount.deposit(2000);
        salaryAccount.withdraw(1000);
        currentAccount.deposit(1000);
        currentAccount.withdraw(7000);
        loanAccount.repayLoan(5000);
        
        savingsAccount.calculateInterest();
        salaryAccount.calculateInterest();
        currentAccount.calculateInterest();
        loanAccount.calculateInterest();

     
          System.out.println(savingsAccount.toString());
        System.out.println(salaryAccount.toString());
        System.out.println(currentAccount.toString());
        System.out.println(loanAccount.toString());


	}
}
