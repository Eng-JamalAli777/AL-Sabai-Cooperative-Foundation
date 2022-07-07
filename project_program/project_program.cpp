#include<iostream>
#include<string>
using namespace std;
#include "training_and_eduction.h"
#include"employees.h"
#include"sales.h"
#include"purchasing.h"
double sumationsales = 0, sumationpurchasing = 0,sumfeerstudent=0;
void curren_students(training_and_eduction  tra[]) {
	tra[0].SetName(" Ali");
	tra[1].SetName(" Ahmed");
	tra[2].SetName(" Omer");
	tra[3].SetName(" Mohammed");
	tra[4].SetName(" Mahiop");
	tra[0].SetSSn_ID(2345977);
	tra[1].SetSSn_ID(13564686);
	tra[2].SetSSn_ID(124679);
	tra[3].SetSSn_ID(987654321);
	tra[4].SetSSn_ID(74195157);
	tra[0].SetFees(10000);
	tra[1].SetFees(10000);
	tra[2].SetFees(10000);
	tra[3].SetFees(10000);
	tra[4].SetFees(10000);
	for (int i = 0; i < 4; i++) {
		sumfeerstudent = tra[i].GetFees();
		cout << "\n\n\t\t\t\t\t ++++++++++++++++++++++++++++++++++++";
		cout << " \n\n\t\t\t\t   The  Student  Name   " << i + 1 << "   is  :   " << tra[i].GetName() << endl;
		cout << " \n\n\t\t\t\t   The  Student SSN_ID   " << i + 1 << "   is  :   " << tra[i].GetSSn_ID()<< endl;
		cout << " \n\n\t\t\t\t   The  Student  Name   " << i + 1 << "   is  :   " << tra[i].GetFees() << endl;


	}



}
void official_employees(employees empl[]) {
	empl[0].SetName("Ahmes ");
	empl[1].SetName("Ahmes ");
	empl[2].SetName("Ahmes ");
	empl[3].SetName("Ahmes ");
	empl[4].SetName("Ahmes ");
	/*empl[5].SetName("Ahmes ");
	empl[6].SetName("Ahmes ");
	empl[7].SetName("Ahmes ");*/
	empl[0].SetSSn_ID(3848585);
	empl[1].SetSSn_ID(98664836);
	empl[2].SetSSn_ID(87465818);
	empl[3].SetSSn_ID(1332545);
	empl[4].SetSSn_ID(96385274);
	empl[0].SetSalary(1000);
	empl[1].SetSalary(1200);
	empl[2].SetSalary(1400);
	empl[3].SetSalary(1600);
	empl[4].SetSalary(2200);
	for (int i = 0; i < 4; i++) {
		cout << "\n\n\\t\t\t\t\t===============================";
		cout << " \n\n\t\t\t\t\t The Employee  Name  :  " << i + 1 << "  is  :  " << empl[i].GetName() << endl;
		cout << " \n\n\t\t\t\t\t The Employee  SSN ID   :  " << i + 1 << "  is  :  " << empl[i].GetSSn_ID() << endl;
		cout << " \n\n\t\t\t\t\t The Employee  Salary   :  " << i + 1 << "  is  :  " << empl[i].GetSalary() << endl;

	}




}
void new_students(training_and_eduction   traing[], int size) {
	
	for (int i = 0; i <size; i++) {
		string name; int  ssn; float fee;
		cout << "\n\n\t\t\t\t\t  Enter  The  Student Name   : ";
		cin >> name;
		traing[i].SetName(name);
		cout << "\n\n\t\t\t\t\t  Enter  The  Student ssn id    : ";
		cin >> ssn;
		traing[i].SetSSn_ID(ssn);
		cout << "\n\n\t\t\t\t\t  Enter  The  Student fees    : ";
		traing[i].SetFees(fee);


	}
	for (int i = 0; i < size; i++) {
		cout << "\n\n\t\t\t\t\t ++++++++++++++++++++++++++++++++++++";
		cout << " \n\n\t\t\t\t   The  Student  Name   " << i + 1 << "   is  :   " << traing[i].GetName() << endl;
		cout << " \n\n\t\t\t\t   The  Student SSN_ID   " << i + 1 << "   is  :   " << traing[i].GetSSn_ID() << endl;
		cout << " \n\n\t\t\t\t   The  Student  Name   " << i + 1 << "   is  :   " << traing[i].GetFees() << endl;

	 }
 }
void  salesMangement(sales  sale[], int size);
void purchasingMangement(purchasing  purch[], int size);
int main() {
	training_and_eduction trae[5];
	//curren_students(trae);
	//new_students(trae, 5);
	employees emp[5];
	//official_employees(emp);

	sales  sa[3];
	purchasing purch[3];
	purchasingMangement(purch, 3);

	salesMangement(sa, 3);
}

void  salesMangement(sales  sale[], int size) {
	for (int i = 0; i < size; i++) {
		string name, projtype;
		float  proj_number, sall_price;
		cout << "\n\n\t\t\t\t  Enter The Name  project   :   ";
		cin >> name;
		sale[i].SetNameProject(name);
		cout << "\n\n\t\t\t\t\t Enter The  Project  type    :   ";
		cin >> projtype;
		sale[i].SetProjectType(projtype);

		do {
			cout << " \n\n\t\t\t\t\t Enter  The Project Number     :   ";
			cin.exceptions(cin.failbit);
			try {
				cin >> proj_number;
				if (proj_number > 0)
					sale[i].SetProjectNumber(proj_number);
				else {
					throw "can not  accept theis  number   ";
				}
			}
			catch (string* Error) {
				cerr << Error << endl;
			}
			catch (...) {
				cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct  number   :";
				cin.clear();
				char   x[3];
				cin >> x;
				i--;
			}

		} while (proj_number <= 0);


		do {
			cout << "\n\n\t\t\t\t\t   Enter  The    Sallaing   price       :    ";
			cin.exceptions(cin.failbit);
			try {
				cin >> sall_price;
				if (sall_price > 0)
					sale[i].SetSellingPrice(sall_price);
				else {
					throw "can not  accept theis  number   ";
				}
			}
			catch (string* Error) {
				cerr << Error << endl;
			}
			catch (...) {
				cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct  number   :";
				cin.clear();
				char x[3];
				cin >> x;
				i--;
			}


		} while (sall_price <= 0);
		sumationsales = sale[i].GetSellingPrice();
	} system("cls");
	for (int i = 0; i < size; i++) {
		cout << "\n\n\t\t\t\t\t===========================================\n  ";
		cout << " \n\n\t\t\t\t\t  The Name  Project   is   :" << i + 1 << "  :" << sale[i].GetNameProject() << endl;
		cout << " \n\n\t\t\t\t\t  The  Project  Type   is   :" << i + 1 << "  :" << sale[i].GetProjectType() << endl;
		cout << " \n\n\t\t\t\t\t  The Project  number   is   :" << i + 1 << "  :" << sale[i].GetProjectNumber() << endl;
		cout << " \n\n\t\t\t\t\t  The  Sallaing  price    is   :" << i + 1 << "  :" << sale[i].GetSellingPrice() << endl;
	}
}
void purchasingMangement(purchasing  purch[], int size) {
	for (int i = 0; i < size; i++) {
		string name, proj_type;
		float  proj_num, purche_price;
		cout << "\n\n\t\t\t\t  Enter The Name  project   :   ";
		cin >> name;
		purch[i].SetNameProject(name);
		cout << "\n\n\t\t\t\t\t Enter The  Project  type    :   ";
		cin >> proj_type;
		purch[i].SetProjectType(proj_type);

		do {
			cout << " \n\n\t\t\t\t\t Enter  The Project Number     :   ";
			cin.exceptions(cin.failbit);
			try {
				cin >> proj_num;
				if (proj_num > 0)
					purch[i].SetProjectNumber(proj_num);
				else {
					throw "can not  accept theis  number   ";
				}
			}
			catch (string* Error) {
				cerr << Error << endl;
			}
			catch (...) {
				cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct  number   :";
				cin.clear();
				char   x[3];
				cin >> x;
				i--;
			}
		} while (proj_num <= 0);
		do {
			cout << "\n\n\t\t\t\t\t   Enter  The     purchasing    price       :    ";
			cin.exceptions(cin.failbit);
			try {
				cin >> purche_price;
				if (purche_price > 0)
					purch[i].SetpurchasePrice(purche_price);
				else {
					throw "can not  accept theis  number   ";
				}
			}
			catch (string* Error) {
				cerr << Error << endl;
			}
			catch (...) {
				cerr << " \n\n\t\t\t\t\t  wrong Entry enter correct  number   :";
				cin.clear();
				char x[3];
				cin >> x;
				i--;
			}


		} while (purche_price <= 0);

		sumationpurchasing = purch[i].GetPurchasePrice();
	}
	for (int i = 0; i < size; i++) {
		cout << "\n\n\t\t\t\t\t===========================================\n  ";
		cout << " \n\n\t\t\t\t\t  The Name  Project   is   :" << i + 1 << "  :" << purch[i].GetNameProject() << endl;
		cout << " \n\n\t\t\t\t\t  The  Project  Type   is   :" << i + 1 << "  :" << purch[i].GetProjectType() << endl;
		cout << " \n\n\t\t\t\t\t  The Project  number   is   :" << i + 1 << "  :" << purch[i].GetProjectNumber() << endl;
		cout << " \n\n\t\t\t\t\t  The  Sallaing  price    is   :" << i + 1 << "  :" << purch[i].GetPurchasePrice() << endl;
	}
}