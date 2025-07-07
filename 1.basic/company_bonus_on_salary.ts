/* 
A company  decides to give bonus to all its employees on new year. A 5% bonus on salary is given to male workers and 10% bonus on salary is given to female workers.  write a  program to enter the salary and gender of the employees.  If the salary of the employee is less than 10000, then the employee gets an extra 2% bonus on salary.  Calculate the bonus that has to be given to the employee and display the salary that the employee will get?
*/

class CompanyBonus {
  static getIncrement(currentSalary: number, gender: string): void {
    if (gender == "M") {
      currentSalary += currentSalary * 0.05;
    } else {
      currentSalary += currentSalary * 0.1;
    }
    if (currentSalary < 10000) {
      currentSalary += currentSalary * 0.02;
    }
    console.log(currentSalary);
  }
}
