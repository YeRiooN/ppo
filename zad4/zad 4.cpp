//  Mateusz Felter
//  Zaleg³e zadanie z listy nr4.

#include <iostream>
#include <cstdlib>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

class Student {
	
	private:	string studentNo;
	private:	string Name;
    private:    string SurName;	
    private:    string Address;
    private:    int Year;
    private:    string Pesel;
       
		public:void setStudentNo(string studentNo) {
			        this->studentNo = studentNo;
		}	
		    void setName(string Name) {
			     this->Name = Name;
		}	
	    	void setSurName(string SurName) {
			     this->SurName = SurName;
		}	
		    void setAddress(string Address){
			     this->Address = Address;
		}	
		    void setYear(int Year){
			     this->Year = Year;
		}
            void setPesel(string Pesel){
			     this->Pesel = Pesel;
		}		
           string getStudentNo() {
                  return this->studentNo;
		}
           string getName(){
		          return this->Name;	
		}	
 	       string getSurName(){
        	      return this->SurName;	
		}
           string getAddress(){
	         	  return this->Address;
		}
           int getYear(){
	    	      return this->Year;
		}
           string getPesel(){
                  return this->Pesel;
		}
		long validationyear(string pesel){
			
		       	string yearstring;
		           	yearstring.insert( 0, pesel, 0, 2 );
    
                string monthstring;
                   	monthstring.insert( 0, pesel, 2, 2 );
   
                int yearcount;
                    istringstream iss(yearstring);
                    iss >> yearcount;
    
                int monthcount;
                    istringstream isss(monthstring);
                    isss >> monthcount;
    
                    if (monthcount > 80 && monthcount < 93) {yearcount += 1800;}                                                                                                    
                    else if (monthcount > 0 && monthcount < 13) {yearcount += 1900;}                                                                                                                            
                    else if (monthcount > 20 && monthcount < 33) {yearcount += 2000;}                                                                                                                                                    
                    else if (monthcount > 40 && monthcount < 53) {yearcount += 2100;}
                    else if (monthcount > 60 && monthcount < 73) {yearcount += 2200;}
                                                                        
                 return yearcount;
		}
		int validationmonth(string pesel) {

                string monthstring;
                     monthstring.insert( 0, pesel, 2, 2 );
              
                int monthcount;
                     istringstream isss(monthstring);
                     isss >> monthcount;
              
                     if (monthcount > 80 && monthcount < 93) {monthcount -= 80;}                                        
                     else if (monthcount > 60 && monthcount < 73) {monthcount -= 60;}
                     else if (monthcount > 40 && monthcount < 53) {monthcount -= 40;}                                        
                     else if (monthcount > 20 && monthcount < 33) {monthcount -= 20;}
                                                                                                                                                                                                                                                                                       
                 return monthcount;
         }   
         string validationday(string pesel){
			
		    	string daystring;
                       daystring.insert( 0, pesel, 4, 2 );
			
		    	return daystring;
		}     
		string validationsex(string pesel) {

                string sexstring;
                       sexstring.insert( 0, pesel, 9, 1 );
			 
			    int sexnumber;
                istringstream is(sexstring);
                is >>sexnumber;
             
                if (sexnumber % 2 == 1) {return "Mezczyzna";}
                else {return "Kobieta";}
        }
};


int main() {
system("chcp 1250");
system("cls");
Student tab[12];
bool end=1;
int options,a=0,year;
string name,surname,studentnumber,pesel,address;

Student s=Student();
	do {
	cout << "[1] Wypisz liste studentow, [2] Dodaj studenta, [3] Wyjscie z programu"<<endl;
    cin >> options;
	 if (options==1) { if (a==0) cout<<"\nLista studentow jest pusta\n"<<endl; else {
	 	 cout << setw(10) << "\nNumer Indeksu:" << setw(20) << "Numer Pesel:"<< setw(18) << " Nazwisko:" << setw(10) << " Imie:" << setw(10) << " Rok:" << setw(10) << " Adres:" << setw(15) << " Urodzony;" << setw(12) << " Plec;"<< endl;
	     for (int i=0; i<a;i++){
	     if ((tab[i].getAddress())=="0") cout<<"Nie podano numeru Indeksu"<< endl; else cout << setw(13) << tab[i].getStudentNo();
	     if ((tab[i].getPesel())=="0") cout<<"Nie podano numeru Pesel"<< endl; else cout << setw(20) << tab[i].getPesel();
	     if ((tab[i].getSurName())=="0") cout<<"Nie podano Nazwiska"<< endl; else cout << setw(18) << tab[i].getSurName();
	     if ((tab[i].getName())=="0") cout<<"Nie podano Imienia"<< endl; else cout << setw(15) << tab[i].getName();  
		 if ((tab[i].getYear())==0) cout<<"Nie podano Roku"<< endl; else if ((tab[i].getYear())==1) { cout << setw(10) <<"I";}
			 else if ((tab[i].getYear())==2) { cout << setw(10) <<"II";}
			 else if ((tab[i].getYear())==3) { cout << setw(10) <<"III";}
			 else if ((tab[i].getYear())==4) { cout << setw(10) <<"IV";} 
			 else if ((tab[i].getYear())==5) { cout << setw(10) <<"V";}
																      
		 if ((tab[i].getAddress())=="0") cout<<"Nie podano Adresu"; else cout << setw(30) << tab[i].getAddress();  
			 cout << setw(6) << tab[i].validationday(pesel)<<"."<<tab[i].validationmonth(pesel)<<"."<<tab[i].validationyear(pesel)<<".r";
			 cout << setw(13) << tab[i].validationsex(pesel)<<endl;
			 }															     
	         }  
	         cout<<"\n";
			 }
			   
	 if (options==2) {
         cout<<"By pozostawic puste pole wpisz '0'"<<endl;
         for (int i=a; i<=a;i++){   cout<<"\nPodaj Imie studenta :"<<endl;
	        cin>>name;
	        cout<<"Podaj Nazwisko studenta :"<<endl;
	        cin>>surname;
	        cout<<"Podaj numer Pesel studenta :"<<endl;
	        cin>>pesel;
	        cout<<"Podaj numer Indeksu studenta :"<<endl;
	        cin>>studentnumber;
	        cout<<"Podaj Adres studenta :"<<endl;
	        cin>>address;
	        cout<<"Podaj Numer roku :"<<endl;
	        cin>>year;
	        cout<< endl;
	        tab[i].setName(name);
	        tab[i].setSurName(surname);
            tab[i].setPesel(pesel);
	        tab[i].setStudentNo(studentnumber);	
            tab[i].setAddress(address);
	        tab[i].setYear(year);
             }
              a++;                   
            if(pesel.size()==11)  cout<<"Pomyslnie dodano studenta\n"<<endl; else {
			cout <<"Zly numer Pesel, student nie zostal dodany"<<endl;
	         a--;
			 }
    }
	 
	 if (options==3) end=0;	 
	}while(end);
	
	return 0;
}
