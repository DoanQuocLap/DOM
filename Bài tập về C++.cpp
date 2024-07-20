// -------------------------WEEEkk 1---------------------------------

#include <iostream>
#include <iomanip> 
using namespace std;
void taomang(int a[],int n){
	for (int i = 0; i < n; i++){
		cout << "nhap so thu " << i+1 <<": ";
		cin >> a[i];
	}	
}

void xuatmang(int a[],int n){
	for (int i = 0; i < n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}

bool check_so_mang(int a[], int n , int c){
	for(int i = 0;i < n; i++){
		if(c == a[i]){
			return 1;
		}
	}
	return -1;
}

void check_so_lon_nhat(int a[],int n){
	int max = 0;
	for(int i = 1; i < n;i++){
		if(max < a[i]){
			max = a[i];
		}
	}
	cout << "so lon nhat la: " << max << endl;
}

void sap_xep_nho_den_lon(int a[], int n){    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) 
                swap(a[j], a[j + 1]); 
		}
	}
	cout << "sau khi sap xep: ";
	for (int i = 0;i < n; i++) 
        cout << a[i] << " "; 
    cout << endl;
}

void in_hinh_chu_nhat(int length,int width){
	cout << "chieu dai: " << length <<endl;
	cout << "chieu rong: " << width <<endl;
}

int dien_tich_hinh_chu_nhat(int length,int width){
	int s = 0;
	s = length*width;
	cout << "dien tich cua hinh chu nhat la: " << s << endl;
	return s;
}

int main(){
	int c ;
 	int n ;
	int a[100];
	int length;
	int width;
	
	cout <<"nhap so mang can nhap: ";
	cin >> n;
	taomang(a,n);
	xuatmang(a,n);
	cout << "\n------------------------------------------------------\n";
	cout << "nhap so can kiem tra: ";
	cin >> c;
	cout << check_so_mang(a,n,c);
	cout << "\n------------------------------------------------------\n";
	check_so_lon_nhat(a,n);
	
	cout << "\n------------------------------------------------------\n";
	sap_xep_nho_den_lon(a,n);
	
	cout << "\n------------------------------------------------------\n";
	cout << "nhap chieu dai cua hinh chu nhat: "; cin >> length; 
	cout << "nhap chieu rong cua hinh chu nhat: "; cin >> width;
	in_hinh_chu_nhat(length,width);
	dien_tich_hinh_chu_nhat(length,width);
}

// -------------------------WEEEkk 2---------------------------------

#include<iostream>
#include<string>
#include<stdio.h>
#include <algorithm>
#include <cstring>

using namespace std;

struct Student{
	string ten;
	string id;
	int cgpa ;



void input(struct Student *dt){
		fflush(stdin);
		cout << "\nnhap ho ten sinh vien: ";
		getline(cin,dt->ten);
		cout << "\nnhap id: ";
		getline(cin,dt->id);
		cout << "\nnhap diem cgpa: ";
		cin >> dt->cgpa;
		cout << endl;
	}

void display(struct Student *dt){

		cout << "ho ten: " << dt->ten << endl;
		cout << "id: " << dt->id <<endl;
		cout << "cgpa: " << dt->cgpa <<endl;
}
};
void update(struct Student *dt){
	fflush(stdin);
	cout << "\nthay doi ho ten: ";
	getline(cin,dt->ten);
	cout << "\nthay doi id: ";
	getline(cin,dt->id);
	cout << "\nthay doi cgpa: ";
	cin >> dt->cgpa;
	cout << endl;
	
}

struct Student_Arr{
	string ten;
	string id;
	int cgpa ;
	
	
	void input(){
		fflush(stdin);
		cout << "\nnhap ho ten sinh vien: ";
		getline(cin,ten);
		cout << "\nnhap id: ";
		getline(cin,id);
		cout << "\nnhap diem cgpa: ";
		cin >> cgpa;
		cout << endl;
	}
	void display(){

		cout << "\nho ten: " << ten << "\tid: " << id <<"\tcgpa: " << cgpa <<endl;
	}
};

void input_students(Student_Arr students[],int n){
	for(int i = 0; i < n; i++ ){
		students[i].input();
	}
}

void display_students(Student_Arr students[],int n){
	for(int i = 0; i < n;i++){
		students[i].display();
	}
}

void sort(Student_Arr students[],int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (students[j].id > students[j + 1].id) {
                Student_Arr temp = students[j];
                students[j] = students[j + 1];
                students[j + 1] = temp;
            }
        }
    }
}

bool search_student(Student_Arr students[], int n, string id) {
    for (int i = 0; i < n; ++i) {
        if (students[i].id == id) {
        	students[i].display();
            return 1;   
        }
    }
    return -1; 
}

//--------------------------------------------------------------------------------------
int string_length(const string &str) {
    int length = 0;
    while (str[length] != '\0') {
        ++length;
    }
    return length;
}

string concat_strings(const string &str1, const string &str2) {
    string result = str1;
 
    for (char ch : str2) {
        result += ch;
    }
    
    return result;
}

int compare_strings(const string &str1, const string &str2) {
    for (size_t i = 0; i < str1.size() && i < str2.size(); ++i) {
        if (str1[i] < str2[i]) {
            return -1;
        } else if (str1[i] > str2[i]) {
            return 1; 
        }
    }
	if (str1.size() < str2.size()) {
        return -1; 
    } else if (str1.size() > str2.size()) {
        return 1; 
    }
    return 0; 
}

void swap_with_references(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

double computeArea(double base, double height) {
    return 0.5 * base * height;
}

//double computeArea(double length, double width) {
//    return length * width;
//}
//double computeArea(double radius) {
//    return M_PI * pow(radius, 2);
//}


int main(){
	string ID;
	int n = 0;
	cout << "\nnhap so luong sinh vien muon nhap vao: ";
	cin >> n;
	
	Student_Arr Sinhvien[n];
	input_students(Sinhvien,n);
	display_students(Sinhvien,n);
	
	cout<<"\nDu lieu mang sau khi sap xep la: "<<endl;
	sort(Sinhvien,n);
	display_students(Sinhvien,n);
	
	cout<<"\nnhap ID ban muon tim: ";
	cin.ignore();
	getline(cin,ID);
	if(search_student(Sinhvien,n,ID) == -1){
		cout<< "khong co sinh vien can tim";
	}
	cout << "-------------------------------------------------------------\n\n\n";
	string input;
    cout << "nhap chuoi: ";
    getline(cin, input);

    int length = string_length(input);
    cout << "do dai cua chuoi la: " << length << endl;
    
    string str1, str2;

    cout << "nhap chuoi thu nhat: ";
    getline(cin, str1);

    cout << "nhap chuoi thu hai: ";
    getline(cin, str2);

    string concatenated_string = concat_strings(str1, str2);

    cout << "sau khi noi chuoi: " << concatenated_string << endl;
    //---------------------------------------------------------------------------------
//    string str1, str2;

    cout << "nhap chuoi thu nhat: ";
    getline(cin, str1);

    cout << "nhap chuoi thu hai: : ";
    getline(cin, str2);

    int result = compare_strings(str1, str2);

    if (result == 0) {
        cout << "hai chuoi bang nhau." << endl;
    } else if (result == 1) {
        cout << "chuoi 1 dai hon" << endl;
    } else {
        cout << "chuoi 1 ngan hon" << endl;
    }
//----------------------------------------------------------------------------------
 	char string1[100], string2[100];

    cout << "nhap chuoi thu nhat ";
    cin.getline(string1, 100);

    cout << "nhap chuoi thu hai ";
    cin.getline(string2, 100);

    int length1 = strlen(string1);
    cout << "chieu dai cua chuoi 1 " << length1 << endl;
   
    int length2 = strlen(string2);
    cout << "chieu dai cua chuoi 2 " << length2 << endl;
 
    int comparisonResult = strcmp(string1, string2);
    if (comparisonResult == 0) {
        cout << "ca hai bang nhau" << endl;
    } else if (comparisonResult > 0) {
        cout << "chuoi 1 dai hon" << endl;
    } else {
        cout << "chuoi 1 ngan hon" << endl;
    }

    strcat(string1, string2);
    cout << "sau khi noi string la: " << string1 << endl;

//--------------------------------------------------------------------------------
	int num1 = 5, num2 = 10;

    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;

    
    swap_with_references(num1, num2);

    cout << "sau khi doi:" << endl;
    cout << "num1 = " << num1 << ", num2 = " << num2 << endl;
//-----------------------------------------------------------------------------------
	double base, height, lengthh, width, radius;
	
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    double triangleArea = computeArea(base, height);
    cout << "Area of the triangle: " << triangleArea << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> lengthh >> width;
    double rectangleArea = computeArea(lengthh, width);
    cout << "Area of the rectangle: " << rectangleArea << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double circleArea = computeArea(radius);
    cout << "Area of the circle: " << circleArea << endl;
}

// -------------------------WEEEkk 3---------------------------------

#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

class Complex{
	int phanphuc;
	int phanao;
	public:
	Complex(){
		cout << "vui long nhap so phuc vao day a+bi: "<<endl;
		cout << "nhap a: ";
		cin >> phanphuc;
		cout << "nhap b: ";
		cin >> phanao;  
	}
	int Sum_complex(const Complex &a, const Complex &b){
		int tongphuc = a.phanphuc + b.phanphuc;
		int tongao = a.phanao + b.phanao;
		cout << "tong 2 so phuc la: "<< tongphuc <<"+"<<tongao<<"i"<<endl; 
		return 0;
	}
	Complex Minus_complex(const Complex &a, const Complex &b){
		int hieuphuc = a.phanphuc - b.phanphuc;
		int hieuao = a.phanao - b.phanao;
		cout << "tong 2 so phuc la: "<< hieuphuc << "-" << hieuao << "i" << endl; 
	}
	void display(){
		cout << phanphuc<<"+"<<phanao<<"i";
	}
};
class Time{
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	
	void Time_set(){
		minutes += seconds / 60;
        seconds %= 60;
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24;
	}	
	public:
	Time(){
		cout << "nhap thong tin thoi gian (hh/mm/ss): " << endl;
		cout << "\n hours: ";
		cin >> hours;
		cout << "\n minutes: ";
		cin >> minutes;
		cout << "\n seconds: ";
		cin >> seconds;
		Time_set();
 	}
 	void display(){
 		cout << "\n Time is: " ;
 		cout << setw(2) << setfill('0') << hours << ":" 
			 << setw(2) << setfill('0') << minutes << ":" 
			 << setw(2) << setfill('0') << seconds << endl;
	}
	Time add(const Time& T){
		hours += T.hours;
		minutes += T.minutes;
		seconds += T.seconds;
		Time_set();
	}
	Time minus(const Time& T){
		int seconds1 = hours * 3600 + minutes * 60 + seconds;
		int seconds2 = T.hours * 3600 + minutes * 60 + seconds;
		seconds = seconds - T.seconds;
		
		if(seconds < 0){
			seconds += 24 *3600;
		}
		Time_set();
	}
	bool compare(const Time &t) {
        if (hours == t.hours && minutes == t.minutes && seconds == t.seconds) {
            cout << "\ntime = nhau";
			return 0; // Equal
        } else if (hours > t.hours || (hours == t.hours && minutes > t.minutes) || 
                   (hours == t.hours && minutes == t.minutes && seconds > t.seconds)) {
            cout << "\ntime mot lon hon";
			return 1; // Greater
        } else {
        	cout << "\nbe hon";
            return -1; // Smaller
        }
    }

};

class Movie{
	string title;
	string nameofdirector;
	int year;
	public:
	Movie setTitle(string t){
		this->title = t;
	}
	Movie setYear(int y){
		this->year = y ;
	}
	Movie setdirector(string nm){
		this->nameofdirector = nm;
	}
	void display() {
		cout << "\nTitle: " << title << endl;
		cout << "\nYear: " << year << endl;
		cout << "\nName of director: " << nameofdirector << endl;
	}
	compare(const Movie &M ){
		if (this->title == title){
			cout << "its same!!" << endl;
		}
		else{
			cout << "not same!!" << endl;
		}
		if(this->year == year){
			cout << "years same!! " << endl;
		}
		else{
			cout << "not same!!" << endl;
		}
		if(this->nameofdirector == nameofdirector){
			cout << "its same!!" << endl;
		}
		else{
			cout << "not same!!" << endl;
		}
	}
};
int main(){
	Complex cp;
	Complex cp2;
	cp.display();
	cp.Sum_complex(cp,cp2);
	cp.Minus_complex(cp,cp2);

	Time T1;
	Time T2;
	T1.display();
	T2.display();
	T1.minus(T2);
	T1.display();
	T1.compare(T2);

	Movie m1;
	Movie m2;
	m1.setTitle("acaca");
	m1.setYear(2022);
	m1.setdirector("haha");
	m1.display();
	
}
// -------------------------WEEEkk 4---------------------------------

#include<iostream>
#include<math.h>
using namespace std;
class Circle; 
class Rectangle{
	public:
		double length;
		double width;
		double area;
		void nhap(){
			cout<<"nhap length: "<<endl;
			cin>>length;
			cout<<"nhap width: "<<endl;
			cin>>width;
			area = length * width;
		}
		void xuat(){
			cout<<" Rectangle: length: "<<length<<",  width: "<<width<<",   Area = "<<area<<endl;
		}
		friend void large(const Rectangle&,const Circle&);
};
class Circle{
	public:
		double radius;
		double area;
		void nhap(){
			cout<<"nhap radius: "<<endl;
			cin>>radius;
			area = radius * radius;
		}
		void xuat(){
			cout<<"Circle:  Radius = "<<radius<<",   Area = "<<area<<endl;
		}
		friend void large(const Rectangle&,const Circle&);
};
void large(const Rectangle& r,const Circle& c){
	if(r.area > c.area){
		cout<<"rectangle > circle";
	}
	else if(r.area<c.area)
			cout<<"circle > rectangle";
		else
			cout<<"rectangle = circle";
}
int main(){
	Rectangle r;
	Circle c;
	r.nhap();
	r.xuat();
	c.nhap();
	c.xuat();
	large(r,c);
}


#include<iostream>
#include<math.h>
using namespace std;
class Circle; 
class Rectangle{
	public:
		double length;
		double width;
		double area;
		void nhap(){
			cout<<"nhap length: "<<endl;
			cin>>length;
			cout<<"nhap width: "<<endl;
			cin>>width;
			area = length * width;
		}
		void xuat(){
			cout<<" Rectangle: length: "<<length<<",  width: "<<width<<",   Area = "<<area<<endl;
		}
		friend class Circle;
};
class Circle{
	public:
		double radius;
		double area;
		void nhap(){
			cout<<"nhap radius: "<<endl;
			cin>>radius;
			area = radius * radius;
		}
		void xuat(){
			cout<<"Circle:  Radius = "<<radius<<",   Area = "<<area<<endl;
		}
		void large(const Rectangle& r)const{
	if(r.area > area){
		cout<<"rectangle > circle";
	}
	else if(r.area<area)
			cout<<"circle > rectangle";
		else
			cout<<"rectangle = circle";
}
};
int main(){
	Rectangle r;
	Circle c;
	r.nhap();
	r.xuat();
	c.nhap();
	c.xuat();
	c.large(r);
}

#include <iostream>
using namespace std;
class Counter {
    static int count;
public:
    Counter() {
        count++;
    }
    static void showCount() {
        cout << "So object duoc tao: " << count << endl;
    }
};
int Counter::count = 0;
int main() {
    Counter c1;
    Counter::showCount();
    Counter c2;
    Counter::showCount();
    Counter c3;
    Counter::showCount();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;
class Customer {
public:
	int id;
    string name;
    double gioihan;
    void display(){
    	for (int i = 0; i < 5; ++i) {
	        cout << "nhap thong tin: " << i + 1 << endl;
	        cout << "ID: ";
	        cin>>id;
	        cout << "Name: ";
	        cin.ignore();  
	        getline(cin, name);
	        cout << "gioi han: ";
	        cin >> gioihan;
	        cout << "Customer ID: " << id << ", Name: " << name << ", Gioi han: " << gioihan << endl;
	    }
    }
};
int main() {
    Customer c;
    c.display();
    return 0;
}

// -------------------------WEEEkk 5---------------------------------
#include<iostream>
#include<string>
#include<iomanip>

using namespace std;

class Complex{
	double sophuc;
	double soao;
	public:
		Complex(){
			cout << "\nnhap so phuc: ";
			cin >> sophuc;
			cout << "\nnhap so ao: ";
			cin >> soao;
		}
		Complex(double sophuc, double soao){
			this->sophuc = sophuc;
			this->soao = soao;
		}
		Complex(const Complex &C){
			this->sophuc = sophuc;
			this->soao = soao;
		}
		void display(){
			cout << "\nComplex (a+bi) : " << sophuc << "<<" << soao << "i" << endl; 
		}
};

class Time{
	int seconds = 0;
	int minutes = 0;
	int hours = 0;
	
	void Time_set(){
		minutes += seconds / 60;
        seconds %= 60;
        hours += minutes / 60;
        minutes %= 60;
        hours %= 24;
	}	
	public:
	Time(){
		cout << "nhap thong tin thoi gian (hh/mm/ss): " << endl;
		cout << "\n hours: ";
		cin >> hours;
		cout << "\n minutes: ";
		cin >> minutes;
		cout << "\n seconds: ";
		cin >> seconds;
		Time_set();
 	}
 	void display(){
 		cout << "\n Time is: " ;
 		cout << setw(2) << setfill('0') << hours << ":" 
			 << setw(2) << setfill('0') << minutes << ":" 
			 << setw(2) << setfill('0') << seconds << endl;
	}
};

class Bank {
	string Name;
	int Account_number;
	int Type_of_Account;
	int Balance_amount_in_the_account = 0;
	double Rate_of_interest = 5;
	
	public:
		Bank(){
			cin.ignore();
			cout << "\n nhap ten nguoi dung: ";
			getline(cin,Name);
			cout << "\n nhap so tai khoan: ";
			cin >> Account_number;
			cout << "\n nhap loai tai khoan: ";
			cin >> Type_of_Account;
		}
		Bank(string Name,int Account_number,int Type_of_Account){
			this->Name = Name;
			this->Account_number = Account_number;
			this->Type_of_Account = Type_of_Account;
		}
		Bank(const Bank &B){
			this->Name = Name;
			this->Account_number = Account_number;
			this->Type_of_Account = Type_of_Account;
		}
		
		~Bank(){}
		
		int Send_Money(){
			int Send_Money;
			cout << "\n nhap so tien cua ban vao` day: ";
			cin >> Send_Money;
			Balance_amount_in_the_account += Send_Money;
			cout << "\n so tien da duoc chuyen khoan vao tai khoan: " << Name << endl;
			cout << "\n so tien hien tai: " << Balance_amount_in_the_account << endl; 
			return Balance_amount_in_the_account;
		}
		
		bool withdraw(){
			int Get_Money;
			cout << "\n nhap so tien muon rut: ";
			cin >> Get_Money;
			if(Balance_amount_in_the_account >=	 Get_Money){
				Balance_amount_in_the_account -= Get_Money;
				return true;
			}
			else{
				cout << "so du khong du!" << endl;
            	return false;
			}
		}
		
		
		void display(){
			cout << "\n ten tai khoa: " << Name;
			cout << "\n so tien : " << Balance_amount_in_the_account;
			cout << "\n so tai khoan: " << Account_number;
			cout << "\n loai tai khoan: " << Type_of_Account;
		}
		
		void displayRateOfInterest() {
       		cout << "Rate of Interest: " << Rate_of_interest << "%" << endl;
    	}
};


class IntArr {
private:
    int *arr;
    int size;
public:
	IntArr(){
		cout << " size: ";
		cin >> size;
		for (int i = 0; i < size; ++i) {
            this->arr[i] = arr[i];
        }
	}
	IntArr(int arr[], int size) {
        this->size = size;
        this->arr = new int[size];
        for (int i = 0; i < size; ++i) {
            this->arr[i] = arr[i];
        }
    }
    IntArr(const IntArr &other) {
        size = other.size;
        arr = new int[size];
        for (int i = 0; i < size; ++i) {
            arr[i] = other.arr[i];
        }
    }
    
    ~IntArr() {
        delete[] arr;
    }
    
    void display() const {
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
    bool search(int element) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == element) {
                return true;
            }
        }
        return false;
    }
   
    bool compare(const IntArr &other) const {
        if (size != other.size) {
            return false;
        }
        for (int i = 0; i < size; ++i) {
            if (arr[i] != other.arr[i]) {
                return false;
            }
        }
        return true;
    }
  
 // -------------------------WEEEkk 6--------------------------------- 
    IntArr operator+(const IntArr &other) const {
        int newSize = size + other.size;
        IntArr result;
        result.size = newSize;
        result.arr = new int[newSize];
        for (int i = 0; i < size; ++i) {
            result.arr[i] = arr[i];
        }
        for (int i = 0; i < other.size; ++i) {
            result.arr[size + i] = other.arr[i];
        }
        return result;
    }


    bool operator==(const IntArr &other) const {
        return compare(other);
    }


    int& operator[](int index) {
        if (index >= 0 && index < size) {
            return arr[index];
        } else {
            throw out_of_range("Index out of range");
        }
    }


    friend ostream& operator<<(ostream &out, const IntArr &obj) {
        for (int i = 0; i < obj.size; ++i) {
            out << obj.arr[i] << " ";
        }
        return out;
    }


    friend istream& operator>>(istream &in, IntArr &obj) {
        cout << "Enter size of array: ";
        in >> obj.size;
        obj.arr = new int[obj.size];
        cout << "Enter elements of array: ";
        for (int i = 0; i < obj.size; ++i) {
            in >> obj.arr[i];
        }
        return in;
    }
    // ----------------------------------------------------------
};

class String {
private:
    char *str;

public:

    String() {
    	
	}

    String(const char *inputStr) {
        str = new char[strlen(inputStr) + 1];
        strcpy(str, inputStr);
    }

    String(const String &other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }

    ~String() {
        delete[] str;
    }

    void display() const {
        cout << str << endl;
    }
};


int main(){
	//============================
	String str1("Hello, World!");
    String str2(str1); 

    str1.display();
    str2.display();

    return 0;
	
	//-----------------------
	int array1[] = {1, 2, 3, 4, 5};
    IntArr intArr1(array1, 5); 

    intArr1.display(); 

    IntArr intArr2(intArr1); 
    intArr2.display(); 
	cout << "Element 3 found: " << intArr1.search(3) << endl; 
    cout << "Array comparison: " << intArr1.compare(intArr2) << endl; 

    int array2[] = {1, 2, 3, 4, 6};
    IntArr intArr3(array2, 5); 
    cout << "Array comparison with different array: " << intArr1.compare(intArr3) << endl; 

    return 0;
}
