#include <iostream>
using namespace std;
class Employee{
    private:
    int empId ;
    string name ;
    string department;
    char grade;
    double basicSalary;
     bool isActive ;
    static int EmployeeCount ;

public :
                                                                        

void acceptDetails();


// name 
    string   getName()  const{
        return  name;
    }
    void  setName(const string& n){
        name = n;
    }
// department
    string  getDepartment()  const{
        return department;
    }
    void setDepartment(const string& dept){
        // Engineering, HR, Finance, Operations
        if(dept == "Engineering" || dept == "HR" || dept == "finance" || dept == "Operations"){
            department = dept;
        }
        else{
            cout<<"ERROR: "<<dept<<" is not a registered department."<<endl;
        }
        
    }
// grade
    char   getGrade()   const{
        return grade;
    }
    void setGrade(char g){
        if(g == 'A'|| g == 'B' || g == 'C' || g == 'D'){
            grade = g;
        }
        else{
            cout<<"ERROR: Invalid grade "<<g<<". Accepted values: A, B, C, D."<<endl;

        }
       
        
    }
// salary
    double getBasicSalary() const{
        return basicSalary;
    }
    void setBasicSalary(double salary){
        if(salary >= 10000 && salary <= 500000){
            basicSalary  = salary;
        }
        else{
            cout<<"ERROR: Salary must be between Rs.10,000 and Rs.5,00,000. Value rejected."<<endl;

        }
       
    }

    int    getEmpId()   const{
        return empId ;
    }
     void setEmpId(){
        empId = 1000 ;
    }
// isactive
  
    Employee(){
    EmployeeCount++;
    empId = 1000 + EmployeeCount;
    isActive = true;
}
   
   bool getIsActive() const{
		return isActive;
	}
     static int    getEmployeeCount()   {
        return EmployeeCount ;
    }
    void deactivate(){
		isActive = false;
		EmployeeCount--;
	}
 // void setName(const string& n);
                                                      // void setDepartment(const string& dept);
                                                      // void setGrade(char g);
                                                      // void setBasicSalary(double salary); 
                                                      // void deactivate();
                                                      
                                                      // int    getEmpId()      const;
                                                      // string getName()        const; 
                                                      // string getDepartment()  const; 
                                                      // char   getGrade()       const;
                                                      // double getBasicSalary() const; 
                                                      // bool   getIsActive()    const;

  
    // void deactivate() {
    //     isActive = false;  
    // }

    // bool getIsActive() const {
    //     return isActive;  
    // }
    double computeAllowances() const;
    double computeGrossSalary() const;
    double computeTax() const;
    double computeNetSalary() const;
    void printPayslip() const;
};
double Allowances ;
double gross;
 double tax;
 double net;

            void Employee :: acceptDetails(){
             
   
                    string name ;
                    string department;
                    char grade;
                    double basicSalary;
                    
                    cout<<"Enter Name:"<<endl;
                    cin>>name;
                    setName(name);

                    cout<<"Enter department:"<<endl;
                    cin>>department;
                    setDepartment(department);

                    cout<<"Enter grade:"<<endl;
                    cin>>grade;
                    setGrade(grade);

                    cout<<"Enter basic salary: "<<endl;
                    cin>>basicSalary;
                    setBasicSalary(basicSalary);
                }

 double Employee :: computeAllowances() const{
    if(grade == 'A'){
       Allowances = basicSalary *(40.0/100.0);
        return Allowances;
         
    }
    else if(grade == 'B'){
        Allowances= basicSalary *(30.0/100.0);
        return Allowances;
    }
    else if(grade == 'C'){
        Allowances=basicSalary *(20.0/100.0);
        return Allowances;
    }
    else {
        Allowances = basicSalary *(10.0/100.0);
        return Allowances;
    }

          }
            
          double Employee::computeGrossSalary() const{
             gross=basicSalary + Allowances;
             return gross;
          }
              
                
              double Employee:: computeTax() const{
                if(gross<=50000){
                    tax = 0;
                    return tax;
                }
                
                else if(gross > 50000 && gross <= 100000){
                     tax = (gross - 50000)  * (10.0 / 100.0);
                     return tax;
                    }
                else{
                    tax =  5000 + (gross) *(20.0/100.0);
                    return tax;

                }
              }


                
                 double Employee:: computeNetSalary() const{
                   net = gross - tax;
                        return net;
                 }



            void Employee ::printPayslip() const{
                computeAllowances();
                 computeGrossSalary();
                 computeTax();
                  computeNetSalary();
                cout<<"============================================"<<endl;
                cout<<"            EMPLOYEE PAYSLIP AUG 2026      "<<endl;
                cout<<"============================================"<<endl;
                cout<<"Emp ID          :"<<empId<<endl;
                cout<<"Name             :"<<name <<endl;
                cout<<"Department       :"<<department<<endl;
                cout<<" Grade             :"<<grade <<endl;
                cout<<"Status: "<<((isActive) ? "Active" : "Inactive")<<endl;
                cout<<"-------------------------------------------"<<endl;
                cout<<"Basic Salary         :"<<basicSalary <<endl;
                cout<<"Allowances (30%)      :"<<Allowances<<endl;
                cout<<"Gross Salary          :"<<gross<<endl;
                cout<<"-------------------------------------------"<<endl;
                cout<<"Tax Deduction           :"<< tax<<endl;
                cout<<"Net Salary           :"<<net<<endl;

                //    cout<<employeeCount<<endl;
                //      cout << "Status        : "<< (isActive ? "Active" : "Inactive")<< endl;
                   
                   

            }
          int  Employee ::EmployeeCount = 0 ;

         


int main(){
    Employee e1;
    e1.acceptDetails();
    e1.printPayslip();
      Employee* e2 = new Employee();
      e2->acceptDetails();
    e2->printPayslip();
//    cout<< e1.name;  we cannot access the  varibale (it is private thats whay we use getter and setter)
    // Employee* e2 = new Employee();
    Employee* e3 = new Employee();
   
    e3->acceptDetails();
    e3->printPayslip();
    
    //  e3.deactivate();

    // cout << e3.getIsActive() << endl;
    // e3->deactivate();
    //  if (!e3->getIsActive()) 
    //  cout << e3->getName() << " is no longer active. Payroll skipped." << endl;
    
  e3->deactivate();
	 if (!e3->getIsActive())
	 cout << e3->getName() << " is no longer active. Payroll skipped." << endl;
	 cout << "Total Employees : " << Employee::getEmployeeCount() << endl;
     

delete e2; 
delete e3;
    return 0 ;
}
