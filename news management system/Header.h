

#include<iostream>
#include<string>
using namespace std;
struct date
{
	int day, month, year;
};
class news
{
public:
	int csize = 0;
	int rsize = 0;
	int ssize = 0;
	string title;
	string description;
	date date1;
	double rating;
	int array_of_users_rated_it[100];
	int spam[100];
	string comments[100];
	news()
	{
		title = "";
		description = "";
		date1.day = 0;
		date1.month = 0;
		date1.year = 0;
		rating = 0;
		for (int i = 0; i < 100; i++)
		{
			array_of_users_rated_it[i] = 0;
		}
	}
};
class admin
{
public:
	string firstname;
	string lastname;
	int age = 0;
	int phonenumber = 0;
	string e_mail;
	string username;
	string password;
	admin() {}
	admin(string firstname, string lastname, int age, int phonenumber, string e_mail, string username, string password)
	{
		this->firstname = firstname;
		this->lastname = lastname;
		this->age = age;
		this->phonenumber = phonenumber;
		this->e_mail = e_mail;
		this->username = username;
		this->password = password;
	}
};
class user
{
public:
	int id = 0;
	string firstname;
	string lastname;
	int age = 0;
	int phonenumber = 0;
	string e_mail;
	string username;
	string password;
	user() {}
	user(int id, string firstname, string lastname, int age, int phonenumber, string e_mail, string username, string password)
	{
		this->id = id;
		this->firstname = firstname;
		this->lastname = lastname;
		this->age = age;
		this->phonenumber = phonenumber;
		this->e_mail = e_mail;
		this->username = username;
		this->password = password;
	}
};
class node
{
public:
	news value = news();
	node* next;
	node()
	{
		value.date1.day = 0;
		value.date1.month = 0;
		value.date1.year = 0;
		value.description = "";
		value.title = "";
		value.rating = 0;
		next = NULL;
	}
	node(news value)
	{
		this->value = value;
		next = NULL;
	}
};
class linkedlist
{
public:
	node* head;
	node* tail;
	int size;
	linkedlist()
	{
		head = tail = NULL;
		size = 0;
	}
	void comment(string comment , int position)
	{
		node* temp = head;
		for (int i = 0; i < position; i++)
		{
			temp = temp->next;
		}
		temp->value.comments[temp->value.csize] = comment; 
		temp->value.csize++;
	}
	void append(news value)
	{
		node* newNode = new node(value);
		if (head == NULL)
		{
			head = tail = newNode;
		}
		else
		{
			tail->next = newNode;
			tail = newNode;
		}
		size++;
	}
	void insertAt(news value, int position)
	{
		if (position >= 0 && position <= size)
		{
			node* tmp = head;
			node* newNode = new node(value);
			if (position == 0)
			{
				newNode->next = head;
				head = newNode;
			}
			else
			{
				for (int i = 0; i < position - 1; i++)
				{
					tmp = tmp->next;
				}
				newNode->next = tmp->next;
				tmp->next = newNode;
			}
			size++;
		}
	}
	void deleteAt(int position)
	{
		if (position >= 0 && position < size)
		{
			node* tmp = head;
			if (position == 0)
			{
				head = head->next;
				delete tmp;
			}
			else
			{
				for (int i = 0; i < position - 1; i++)
				{
					tmp = tmp->next;
				}
				node* del = tmp->next;
				tmp->next = del->next;
				delete del;
				if (position == size - 1)
				{
					tail = tmp;
				}
			}
			size--;
		}
	}
	void moveNode(news value, int position)
	{
		node* tmp = head;
		int c = 0;
		while (tmp != NULL && tmp->value.title != value.title)
		{
			tmp = tmp->next;
			c++;
		}
		deleteAt(c);
		insertAt(value, position);
	}
	void Show()
	{
		int i = 0;
		node* temp = head;
		while (temp != NULL)
		{
			cout << i + 1 << ")" << endl;
			cout << "Date:" << endl;
			cout << temp->value.date1.day << "_" << temp->value.date1.month << "_" << temp->value.date1.year << endl;
			cout << "Title:" << endl;
			cout << temp->value.title << endl;
			cout << "Description:" << endl;
			cout << temp->value.description << endl;
			cout << "Rating:" << endl;
			cout << temp->value.rating << endl;
			temp = temp->next;
			i++;
		}
	}
	void display(int position)
	{
		if (position >= 0 && position < size)
		{
			node* temp = head;
			for (int i = 0; i < position; i++)
			{
				temp = temp->next;
			}
			cout << "Date:" << endl;
			cout << temp->value.date1.day << "_" << temp->value.date1.month << "_" << temp->value.date1.year << endl;
			cout << "Title:" << endl;
			cout << temp->value.title << endl;
			cout << "Description:" << endl;
			cout << temp->value.description << endl;
			cout << "Rating:" << endl;
			cout << temp->value.rating << endl;
			cout << "Comments:" << endl;
			for (int i = 0; i < temp->value.csize; i++)
			{
				cout << temp->value.comments[i] << endl;
			}
		}
	}
	void Rate(double Urating, int position, int id)
	{
		bool check = true;
		node* temp = head;
		for (int i = 0; i < position; i++)
		{
			temp = temp->next;
		}
		for (int i = 0; i < temp->value.rsize; i++)
		{
			if (temp->value.array_of_users_rated_it[i] == id)
			{
				cout << "You Cannot Rate One News Twice" << endl;
				check = false;
			}
		}
		if (check)
		{
			if (temp->value.rating == 0)
			{
				temp->value.rating = Urating;
			}
			else
			{
				temp->value.rating = (temp->value.rating + Urating) / 2;
			}
			temp->value.array_of_users_rated_it[temp->value.rsize] = id;
			temp->value.rsize++;
		}
	}
	void spam(int position , int id)
	{
		node* temp = head;
		for (int i = 0; i < position; i++)
		{
			temp = temp->next;
		}
		temp->value.spam[temp->value.ssize] = id;
		temp->value.ssize++;
	}
	int highest_rating()
	{
		double compare_rating = -1;
		int highest = 0;
		node* tmp2 = head;
		for (int k = 0; k < size; k++)
		{
			if (tmp2->value.rating > compare_rating)
			{
				compare_rating = tmp2->value.rating;
				highest = k;
			}
			tmp2 = tmp2->next;
		}
		return(highest);
	}
	void check_trivial_news()
	{
		node* tmp = head;
		for (int i = 0; i < size; i++)
		{
			if (tmp->value.rating != 0 && tmp->value.rating < 2)
			{
				deleteAt(i);
			}
			tmp = tmp->next;
		}
	}
};

