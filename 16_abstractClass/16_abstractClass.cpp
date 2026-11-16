#include <iostream>
using namespace std;







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
//class Transport {
//protected:
//	int price;
//	int time;
//	int distance;
//public:
//	Transport() : price(0), time(0), distance(0) {}
//	Transport(int t, int d) : price(0), time(t), distance(d) {}
//	
//		virtual void print() = 0;
//};
//
//class Auto :public Transport {
//	int fuelPrice;
//	public:
//		Auto():Transport(),fuelPrice(0){}
//		Auto(int t,int d,int f):Transport(t,d), fuelPrice(f) {}
//		
//		float countPrice() {
//			return  price = (distance * fuelPrice) / 100;
//		}
//
//		void print() override {
//			cout << "price: " << price << endl;
//			cout << "time: " << time << endl;
//			cout << "distance: " << distance << endl;
//			cout << "fuelPrice: " << fuelPrice << endl;
//			cout << endl;
//		}
//};
//
//class Bicycle :public Transport {
//	int speed;
//	public:
//		Bicycle():Transport(), speed(0) {}
//		Bicycle( int t,int d, int s) :Transport( t,d), speed(s) {}
//
//		float countPrice() {
//			return  price = (distance * speed) / 100;
//		}
//
//		void print()override {
//			cout << "price: " << price << endl;
//			cout << "time: " << time << endl;
//			cout << "distance: " << distance << endl;
//			cout << "speed: " << speed << endl;
//			cout << endl;
//		}
//};
//
//class Cart :public Transport {
//	int foodForHorses;
//public:
//	Cart() :Transport(), foodForHorses(0) {}
//	Cart( int t,int d, int f) :Transport( t,d), foodForHorses(f) {}
//	
//	float countPrice() {
//		return  price = (distance * foodForHorses) / 100;
//	}
//
//	void print()override {
//		cout << "price: " << price << endl;
//		cout << "time: " << time << endl;
//		cout << "distance: " << distance << endl;
//		cout << "foodForHorses: " << foodForHorses << endl;
//		cout << endl;
//	}
//};





//3
class Animal {
protected:
	string name;
	string place;
	float weight;
public:
	Animal():name("-"),place("-"),weight(0){}
	Animal(string n,string p,float w):name(n), place(p)  {weight=(w > 0) ? w : 0;}
	
	void print()const {
		cout << "name: " << name << endl;
		cout << "place: " << place<<endl;
		cout << "weight: " << weight<<endl;
		cout << endl;
	}

	virtual void makeSound() = 0;

	virtual void move() {
		cout << "moving" << endl;
	}
};

 class Dog:public Animal{
	 string breed;
 public:
	 Dog():Animal(),breed("-"){}
	 Dog(string n,string p,float w,string b):Animal(n,p,w),breed(b){}
	
	 void makeSound()override  {
		 cout << "bark" << endl;
	 }

	 void move()override {
		 cout << "running and jumping" << endl;
	 }

	 void print() {
		 Animal::print();
		 cout << "breed: " << breed << endl;
	 }
};

 class Parrot:public Animal{
	 float flyHeight;
	 bool canSpeak;
 public:
	 Parrot():Animal(),flyHeight(0),canSpeak(0){}
	 Parrot(string n, string p, float w, float fh, bool cs) :Animal(n, p, w), flyHeight(fh), canSpeak(cs) {}
	 
	 void makeSound()override {
		 cout << "kar kar" << endl;
	 }

	 void move()override {
		 cout << "flying" << endl;
	 }

	 void print() {
		 Animal::print();
		 cout << "flyHeight: " << flyHeight << endl;
		 cout << "canSpeak: " << canSpeak << endl;
	 }

 };

 class Reptile :public Animal {
	 float swimDepth;
 public:
	 Reptile() :Animal(), swimDepth(0){}
	 Reptile(string n, string p, float w, float sd) :Animal(n, p, w),swimDepth(sd){}
	
	 //void makeSound()override 

	 void move()override{
		 cout << "swimming" << endl;
	 }

	 void print() {
		 Animal::print();
		 cout << "swimDepth: " << swimDepth << endl;
	 }
	 
 };
 class Frog : public Reptile {

 public:
	 Frog():Reptile(){}
	 Frog(string n, string p, float w, float sd):Reptile(n,p,w,sd){}
	
	 void makeSound()override {
		 cout << "kva kva" << endl;
	 }

	 void move()override {
		 cout << "swimming" << endl;
	 }

	 void print() {
		 Animal::print();
		 //cout << "swimDepth: " << swimDepth << endl;
	 }
 };

 void rollCall(Animal& a) {
	 a.makeSound();
	 a.move();
 }



 //===========================================================================================

 class Fox :public Animal {
	 int age;
	 int amount;
 public:
	 Fox():age(0),amount(0),Animal(){}
	 Fox(string n, string p, float w, int a,int am):Animal(n, p, w), age(a),amount(am) {}

	 void makeSound() override {
		 cout << "yip yip" << endl;
	 }
	 
	 int print() {
		 Animal::print();
		 cout << "age: " << age << endl;
		 cout << "amount: " << amount << endl;

		 return amount;
	 }
	 int getFoxAge() {
		 return age;
	 }

	 void setFoxAmount(int a) {
		 amount = a;
	 }
 };

 

 class Bunny :public Animal {
	 int age;
	 int amount;
 public:
	 Bunny():age(0),amount(0),Animal(){}
	 Bunny(string n, string p, float w, int a,int am):Animal(n, p, w), age(a),amount(am) {}
	 
	 void makeSound() override {
		 cout << "qie qie" << endl;
	 }

	 int print() {
		 Animal::print();
		 cout << "age: " << age << endl;
		 cout << "amount: " << amount << endl;

		 return amount;
	 }

	 int getBunnyAge() {
		 return age;
	 }

	 void setBunnyAmount(int a) {
		 amount = a;
	 }
 };

 class Plant {//<------------------------------------------plant
	 int amount;
 public:
	 Plant() : amount(0){}
	 Plant( int a) :amount(a) {}

	 int print() {
		 cout << "amount: " << amount << endl;

		 return amount;

	 }
 };

 class Grass :public Plant {
 public:
	 Grass() : Plant() {}
	 Grass(int a) :Plant(a) {}

	 int print() {
		 return Plant::print();
	 }
 };


 class Life {
	 Fox* fox;
	 Bunny* bunny;
	 Grass* grass;

	 int checkFoxAmount() {
		 return fox->print();
	 }

	 int checkFoxAge() {
		 return fox->getFoxAge();
	 }

	 int checkBunnyAmount() {
		 return bunny->print();
	 }

	 int checkBunnyAge() {
		 return bunny->getBunnyAge();
	 }

	 int checkGrassAmount() {
		 return grass->print();
	 }
 public:
	 Life(Fox f,Bunny b,Grass g):fox(new Fox(f)),bunny(new Bunny(b)),grass(new Grass(g)){}
	
	 void foxDeath() {
		 if (fox != nullptr and fox->getFoxAge() > 7)
		 {
			 cout << "fox is too old,it died" << endl;

			 delete fox;
			 fox = nullptr;
		 }
		 else
			 cout << "fox is still young " << endl;
	 }

	 void bunnyDeath() {
		 if (bunny != nullptr and bunny->getBunnyAge() > 3)
		 {
			 cout << "bunny is too old,it died" << endl;

			 delete bunny;
			 bunny = nullptr;
		 }
		 else
			 cout << "bunny is still young " << endl;
	 }

	 void grassVSbunny() {
		 if (grass != nullptr and bunny!=nullptr and checkGrassAmount() < checkBunnyAmount())
		 {
			 cout << "not enough grass,bunnies ate it all" << endl;

			 delete grass;
			 grass = nullptr;
		 }
		 else 
			 cout << "there is enough grass for bunnies" << endl;
	 }

	 void foxVsbunny() {
		 if (fox != nullptr and bunny != nullptr  and checkFoxAmount() > checkBunnyAmount())
		 {
			 cout << "there are more foxes than bunnyies,all bunnies have been eaten" << endl;
			 bunny->setBunnyAmount(0);
		 }
		 else
			 cout << "there are less foxes than bunnies,they survive" << endl;
	 }
	 

	 void limitFox() {
		 if (fox != nullptr and checkFoxAmount() > 5)
		 {
			 cout << "too many foxes,can be 5 at a time" << endl;
			 fox->setFoxAmount(5);
		 }
		 else
			 cout << "there are less than 5 foxes" << endl;
	 }

	 void generalCheck() {
		 foxDeath();
		 bunnyDeath();

		 limitFox();

		 grassVSbunny();
		 foxVsbunny();
	 }

	 ~Life(){
		 delete[] fox;
		 delete[] bunny;
		 delete[] grass;
	 }
 };


int main()
{
	//3                   waga vik amount
    Fox f("fox1", "forest", 3, 4, 4);
    Bunny b("bunny1", "hata", 2, 2, 11);
	Grass g(10);

	Life l(f,b, g);
	l.generalCheck();



	//practice
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





	//2
	//Auto a(4000,1500,100);
	//a.countPrice();
	//a.print();

	//Bicycle b(5000,700,90);
	//b.countPrice();
	//b.print();

	//Cart c(9000, 3000, 110);
	//c.countPrice();
	//c.print();

	//1
	/*President p(20,"ioh","not cool");
	p.print();

	Manager m(90, "poi", 23);
	m.print();

	Worker w(67, "oyf", 7);
	w.print();*/



	
}


