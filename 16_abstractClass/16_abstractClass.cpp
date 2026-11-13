#include <iostream>
using namespace std;

//class Animal {
//protected:
//	string name;
//	string place;
//	float weight;
//public:
//	Animal():name("-"),place("-"),weight(0){}
//	Animal(string n,string p,float w):name(n), place(p)  {weight=(w > 0) ? w : 0;}
//	
//	void print()const {
//		cout << "name: " << name << endl;
//		cout << "place: " << place<<endl;
//		cout << "weight: " << weight<<endl;
//		cout << endl;
//	}
//
//	virtual void makeSound() = 0;
//
//	virtual void move() {
//		cout << "moving" << endl;
//	}
//};
//
// class Dog:public Animal{
//	 string breed;
// public:
//	 Dog():Animal(),breed("-"){}
//	 Dog(string n,string p,float w,string b):Animal(n,p,w),breed(b){}
//	
//	 void makeSound()override  {
//		 cout << "bark" << endl;
//	 }
//
//	 void move()override {
//		 cout << "running and jumping" << endl;
//	 }
//
//	 void print() {
//		 Animal::print();
//		 cout << "breed: " << breed << endl;
//	 }
//};
//
// class Parrot:public Animal{
//	 float flyHeight;
//	 bool canSpeak;
// public:
//	 Parrot():Animal(),flyHeight(0),canSpeak(0){}
//	 Parrot(string n, string p, float w, float fh, bool cs) :Animal(n, p, w), flyHeight(fh), canSpeak(cs) {}
//	 
//	 void makeSound()override {
//		 cout << "kar kar" << endl;
//	 }
//
//	 void move()override {
//		 cout << "flying" << endl;
//	 }
//
//	 void print() {
//		 Animal::print();
//		 cout << "flyHeight: " << flyHeight << endl;
//		 cout << "canSpeak: " << canSpeak << endl;
//	 }
//
// };
//
// class Reptile :public Animal {
//	 float swimDepth;
// public:
//	 Reptile() :Animal(), swimDepth(0){}
//	 Reptile(string n, string p, float w, float sd) :Animal(n, p, w),swimDepth(sd){}
//	
//	 //void makeSound()override 
//
//	 void move()override{
//		 cout << "swimming" << endl;
//	 }
//
//	 void print() {
//		 Animal::print();
//		 cout << "swimDepth: " << swimDepth << endl;
//	 }
//	 
// };
// class Frog : public Reptile {
//
// public:
//	 Frog():Reptile(){}
//	 Frog(string n, string p, float w, float sd):Reptile(n,p,w,sd){}
//	
//	 void makeSound()override {
//		 cout << "kva kva" << endl;
//	 }
//
//	 void move()override {
//		 cout << "swimming" << endl;
//	 }
//
//	 void print() {
//		 Animal::print();
//		 //cout << "swimDepth: " << swimDepth << endl;
//	 }
// };
//
// void rollCall(Animal& a) {
//	 a.makeSound();
//	 a.move();
// }


//1
// 
//class Employer {
//protected:
//	int salary;
//	string name;
//public:
//	Employer():salary(0),name("-"){}
//	Employer(int s,string n):salary(s),name(n){}
//	
//	virtual void print() = 0;
//};
//
//class President :public Employer {
//	string coolness;
//public:
//	President():Employer(),coolness(0){}
//	President(int s,string n,string c):Employer(s,n),coolness(c){}
//	
//	void print()override {
//		cout << "salary: " << salary << endl;
//		cout << "name: " << name << endl;
//		cout << "coolness: " << coolness << endl;
//	}
//};
//
//class Manager :public Employer {
//	int employeAmount;
//public:
//	Manager():Employer(), employeAmount(0) {}
//	Manager(int s, string n, int e) :Employer(s, n), employeAmount(e) {}
//
//	void print() {
//		cout << "salary: " << salary << endl;
//		cout << "name: " << name << endl;
//		cout << "employeAmount: " << employeAmount << endl;
//	}
//};
//
//class Worker :public Employer {
//	int experience;
//public:
//	Worker() :Employer(), experience(0) {}
//	Worker(int s, string n, int e) :Employer(s, n), experience(e) {}
//
//	void print() {
//		cout << "salary: " << salary << endl;
//		cout << "name: " << name << endl;
//		cout << "experience: " << experience << endl;
//	}
//};

//2
class Transport {
protected:
	int price;
	int time;
	int distance;
public:
	Transport():price(0),time(0){}
	Transport(int p,int t):price(p),time(t){}
	
		virtual void print() = 0;
};

class Auto :public Transport {
	int fuelPrice;
	public:
		Auto():Transport(),fuelPrice(0){}
		Auto(int p,int t,int f):Transport(p,t), fuelPrice(f) {}
		
		int countPrice() {
			return  price = (distance * fuelPrice) / 100;
		}

		void print() override {
			cout << "price: " << price << endl;
			cout << "time: " << time << endl;
			cout << "distance: " << distance << endl;
			cout << "fuelPrice: " << fuelPrice << endl;
			cout << endl;
		}
};

class Bicycle :public Transport {
	int speed;
	public:
		Bicycle():Transport(), speed(0) {}
		Bicycle(int p, int t, int s) :Transport(p, t), speed(s) {}

		int countPrice() {
			return  price = (distance * speed) / 100;
		}

		void print()override {
			cout << "price: " << price << endl;
			cout << "time: " << time << endl;
			cout << "distance: " << distance << endl;
			cout << "speed: " << speed << endl;
			cout << endl;
		}
};

class Cart :public Transport {
	int foodForHorses;
public:
	Cart() :Transport(), foodForHorses(0) {}
	Cart(int p, int t, int f) :Transport(p, t), foodForHorses(f) {}
	
	int countPrice() {
		return  price = (distance * foodForHorses) / 100;
	}

	void print()override {
		cout << "price: " << price << endl;
		cout << "time: " << time << endl;
		cout << "distance: " << distance << endl;
		cout << "foodForHorses: " << foodForHorses << endl;
		cout << endl;
	}
};

int main()
{
	Auto a()






	//1
	/*President p(20,"ioh","not cool");
	p.print();

	Manager m(90, "poi", 23);
	m.print();

	Worker w(67, "oyf", 7);
	w.print();*/




	///*Animal a("cat", "sarai", 5);
	//a.move();
	//a.print();*/
	//Dog d("efw", "bursa", 13, "aut");
	//d.makeSound();
	//d.move();
	//d.print();


	//Parrot p("misha", "horih", 1, 20, 1);
	//p.makeSound();
	//p.move();
	//p.print();

	//Frog f("tyoscha", "stavok", 2, 4);
	//f.makeSound();
	//f.move();
	//f.print();

	//rollCall(d);
	//rollCall(p);
	//rollCall(f);
}


