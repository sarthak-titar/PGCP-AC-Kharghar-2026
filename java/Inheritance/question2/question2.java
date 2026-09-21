package inheritance2;
//2. Create a class named 'Member' having the following members:
//Data members
//1 - Name
//2 - Age
//3 - Phone number
//4 - Address
//5 - Salary
//It also has a method named 'printSalary' which prints the salary of the members.
//Create an object of the above class and take input from the console for each of the
//fields and finally display the data.
//Now create a class inherited from Members called PrimeMembers and add the
//properties
//1. JoiningYear
//2. JoiningFees
//3. isActive
//To the PrimeMembers add a method called display and display all the fields from 
//the parent class and derived class. Each of the above classes should have their 
//respective accessors and mutators.
 class Empl{
	 String Name;
	int Age;
	long Phone_number;
	String Address;
	double Salary;
	void printsalary() {
		System.out.println("Salary is :"+getSalary());
	}
	public double getSalary() {
		return Salary;
	}
	public void setSalary(double salary) {
		Salary = salary;
	}
	
	public String getName() {
		return Name;
	}
	public void setName(String name) {
		Name = name;
	}
	public int getAge() {
		return Age;
	}
	public void setAge(int age) {
		Age = age;
	}
	public long getPhone_number() {
		return Phone_number;
	}
	public void setPhone_number(long phone_number) {
		Phone_number = phone_number;
	}
	public String getAddress() {
		return Address;
	}
	public void setAddress(String address) {
		Address = address;
	}

}
 class PrimeMembers extends Empl{
	 int JoiningYear;
	double JoiningFees;
	public int getJoiningYear() {
		return JoiningYear;
	}
	public void setJoiningYear(int joiningYear) {
		JoiningYear = joiningYear;
	}
	public double getJoiningFees() {
		return JoiningFees;
	}
	public void setJoiningFees(double joiningFees) {
		JoiningFees = joiningFees;
	}
	//3. isActive;
	void displayall() {
		
			System.out.println("name :"+getName());
			System.out.println("Age:"+getAge());
			System.out.println("phone number :"+getPhone_number());
			System.out.println("Address :"+getAddress());
			
		System.out.println("joining yesr :"+getJoiningYear());
		System.out.println("joining fee :"+getJoiningFees());
		printsalary();
	}
	
	
	 
 }

public class question2 {
	public static void main(String[] args) {
		PrimeMembers p =new PrimeMembers();
	
	 
	  System.out.println("Enter name:");
	  String name = input.stringputg();
	  System.out.println("Enter Salary:");
	  double n = input.intputg();
	  System.out.println("Enter Address:");
	  String address = input.stringputg();
	  System.out.println("Enter age:");
	  int age = input.intputg();
	  System.out.println("Enter phonenumber:");
	  long num = input.intputg();
	  System.out.println("ENter joing year:");
	  int year = input.intputg();
	  System.out.println("Enter joining fee:");
	  double fee = input.intputg();
	 
	  
	  p.setSalary(n);
	  p.setName(name);
	 p.setAge(age);
	 p.setAddress(address);
	 p.setPhone_number(num);
	p.displayall();
	
	
	 p.setJoiningYear(year);
	 p.setJoiningFees(fee);
	 p.displayall();
	
	  
	  
	
	}

}
