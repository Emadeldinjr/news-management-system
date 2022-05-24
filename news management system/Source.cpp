#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include"Header.h"
using namespace std;
string f, l, e, u, p;
int id1, id2, a, ph, mainmenu;
admin arrayOfAdmins[100];
user arrayOfUsers[100];
int Acounter = 0;
int Ucounter = 0;
int user_LoggedIn_Id;
int Psize, Esize, Ssize, Asize, SUcounter, SAcounter;
linkedlist Political_news = linkedlist();
linkedlist Economic_news = linkedlist();
linkedlist Sports_news = linkedlist();
linkedlist Art_Entertainment_news = linkedlist();
void post_news()
{
	int choice;
	cout << "Choose the Category:" << endl;
	cout << "1)Political News." << endl;
	cout << "2)Economic News." << endl;
	cout << "3)Sports News." << endl;
	cout << "4)Art and Entertainment News." << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		news newNews = news();
		cout << "Enter the Date of Today:-" << endl;
		cout << "Day:" << endl;
		cin >> newNews.date1.day;
		cout << "Month:" << endl;
		cin >> newNews.date1.month;
		cout << "Year:" << endl;
		cin >> newNews.date1.year;
		cout << "Enter the News' Title:" << endl;
		cin >> newNews.title;
		cout << "Enter the Description:" << endl;
		cin >> newNews.description;
		Political_news.insertAt(newNews, 0);
		break;
	}
	case 2:
	{
		news newNews = news();
		cout << "Enter the Date of Today:-" << endl;
		cout << "Day:" << endl;
		cin >> newNews.date1.day;
		cout << "Month:" << endl;
		cin >> newNews.date1.month;
		cout << "Year:" << endl;
		cin >> newNews.date1.year;
		cout << "Enter the News' Title:" << endl;
		cin >> newNews.title;
		cout << "Enter the Description:" << endl;
		cin >> newNews.description;
		Economic_news.insertAt(newNews, 0);
		break;
	}
	case 3:
	{
		news newNews = news();
		cout << "Enter the Date of Today:-" << endl;
		cout << "Day:" << endl;
		cin >> newNews.date1.day;
		cout << "Month:" << endl;
		cin >> newNews.date1.month;
		cout << "Year:" << endl;
		cin >> newNews.date1.year;
		cout << "Enter the News' Title:" << endl;
		cin >> newNews.title;
		cout << "Enter the Description:" << endl;
		cin >> newNews.description;
		Sports_news.insertAt(newNews, 0);
		break;
	}
	case 4:
	{
		news newNews = news();
		cout << "Enter the Date of Today:-" << endl;
		cout << "Day:" << endl;
		cin >> newNews.date1.day;
		cout << "Month:" << endl;
		cin >> newNews.date1.month;
		cout << "Year:" << endl;
		cin >> newNews.date1.year;
		cout << "Enter the News' Title:" << endl;
		cin >> newNews.title;
		cout << "Enter the Description:" << endl;
		cin >> newNews.description;
		Art_Entertainment_news.insertAt(newNews, 0);
		break;
	}
	default:
		break;
	}
}
void delete_news()
{
	int choice;
	cout << "Choose the Category:" << endl;
	cout << "1)Political News." << endl;
	cout << "2)Economic News." << endl;
	cout << "3)Sports News." << endl;
	cout << "4)Art and Entertainment News." << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		int position;
		cout << "Choose the News to Be Deleted:" << endl;
		Political_news.Show();
		cin >> position;
		Political_news.deleteAt(position - 1);
		break;
	}
	case 2:
	{
		int position;
		cout << "Choose the News to Be Deleted:" << endl;
		Economic_news.Show();
		cin >> position;
		Economic_news.deleteAt(position - 1);
		break;
	}
	case 3:
	{
		int position;
		cout << "Choose the News to Be Deleted:" << endl;
		Sports_news.Show();
		cin >> position;
		Sports_news.deleteAt(position - 1);
		break;
	}
	case 4:
	{
		int position;
		cout << "Choose the News to Be Deleted:" << endl;
		Art_Entertainment_news.Show();
		cin >> position;
		Art_Entertainment_news.deleteAt(position - 1);
		break;
	}
	default:
		break;
	}
}
void update_news()
{
	int choice;
	cout << "Choose the Category:" << endl;
	cout << "1)Political News." << endl;
	cout << "2)Economic News." << endl;
	cout << "3)Sports News." << endl;
	cout << "4)Art and Entertainment News." << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		string title_check;
		cout << "Enter the Title of News to Be Updated:" << endl;
		cin >> title_check;
		node* temp = Political_news.head;
		for (int i = 0; i < Political_news.size; i++)
		{
			if (temp->value.title == title_check)
			{
				cout << "The News You Want to Update:" << endl;
				cout << temp->value.description << endl;
				cout << "Enter the Updated News:" << endl;
				cin >> temp->value.description;
				cout << "Enter the Date of Today:-" << endl;
				cout << "Day:" << endl;
				cin >> temp->value.date1.day;
				cout << "Month:" << endl;
				cin >> temp->value.date1.month;
				cout << "Year:" << endl;
				cin >> temp->value.date1.year;
				Political_news.moveNode(temp->value, 0);
				i = Political_news.size;
			}
			temp = temp->next;
		}
		break;
	}
	case 2:
	{
		string title_check;
		cout << "Enter the Title of News to Be Updated:" << endl;
		cin >> title_check;
		node* temp = Economic_news.head;
		for (int i = 0; i < Economic_news.size; i++)
		{
			if (temp->value.title == title_check)
			{
				cout << "The News You Want to Update:" << endl;
				cout << temp->value.description << endl;
				cout << "Enter the Updated News:" << endl;
				cin >> temp->value.description;
				cout << "Enter the Date of Today:-" << endl;
				cout << "Day:" << endl;
				cin >> temp->value.date1.day;
				cout << "Month:" << endl;
				cin >> temp->value.date1.month;
				cout << "Year:" << endl;
				cin >> temp->value.date1.year;
				Economic_news.moveNode(temp->value, 0);
				i = Economic_news.size;
			}
			temp = temp->next;
		}
		break;
	}
	case 3:
	{
		string title_check;
		cout << "Enter the Title of News to Be Updated:" << endl;
		cin >> title_check;
		node* temp = Sports_news.head;
		for (int i = 0; i < Sports_news.size; i++)
		{
			if (temp->value.title == title_check)
			{
				cout << "The News You Want to Update:" << endl;
				cout << temp->value.description << endl;
				cout << "Enter the Updated News:" << endl;
				cin >> temp->value.description;
				cout << "Enter the Date of Today:-" << endl;
				cout << "Day:" << endl;
				cin >> temp->value.date1.day;
				cout << "Month:" << endl;
				cin >> temp->value.date1.month;
				cout << "Year:" << endl;
				cin >> temp->value.date1.year;
				Sports_news.moveNode(temp->value, 0);
				i = Sports_news.size;
			}
			temp = temp->next;
		}
		break;
	}
	case 4:
	{
		string title_check;
		cout << "Enter the Title of News to Be Updated:" << endl;
		cin >> title_check;
		node* temp = Art_Entertainment_news.head;
		for (int i = 0; i < Art_Entertainment_news.size; i++)
		{
			if (temp->value.title == title_check)
			{
				cout << "The News You Want to Update:" << endl;
				cout << temp->value.description << endl;
				cout << "Enter the Updated News:" << endl;
				cin >> temp->value.description;
				cout << "Enter the Date of Today:-" << endl;
				cout << "Day:" << endl;
				cin >> temp->value.date1.day;
				cout << "Month:" << endl;
				cin >> temp->value.date1.month;
				cout << "Year:" << endl;
				cin >> temp->value.date1.year;
				Art_Entertainment_news.moveNode(temp->value, 0);
				i = Art_Entertainment_news.size;
			}
			temp = temp->next;
		}
		break;
	}
	default:
	{
		break;
	}
	}
}
void display_latest_news()
{
	cout << "Political News:" << endl;
	Political_news.display(0);
	cout << "Economic News:" << endl;
	Economic_news.display(0);
	cout << "Sports News:" << endl;
	Sports_news.display(0);
	cout << "Art and Entertainment News:" << endl;
	Art_Entertainment_news.display(0);
}
void show_news()
{
	int choice;
	cout << "Choose the Category:" << endl;
	cout << "1)Political News." << endl;
	cout << "2)Economic News." << endl;
	cout << "3)Sports News." << endl;
	cout << "4)Art and Entertainment News." << endl;
	cin >> choice;
	switch (choice)
	{
	case 1:
	{
		linkedlist v = linkedlist();
		char choice;
		node* tmp1 = Political_news.head;
		node* tmp2;
		bool check = true;
		for (int i = 0; i < Political_news.size; i++)
		{
			v.append(tmp1->value);
			tmp1 = tmp1->next;
		}
		for (int i = 0; i < Political_news.size; i++)
		{
			node* tmp = v.head;
			for (int i = 0; i < v.highest_rating(); i++)
			{
				tmp = tmp->next;
			}
			for (int i = 0; i < tmp->value.ssize; i++)
			{
				if (tmp->value.spam[i] == user_LoggedIn_Id)
				{
					check = false;
				}
			}
			if (check)
			{
				v.display(v.highest_rating());
			}
			tmp2 = v.head;
			for (int j = 0; j < v.highest_rating(); j++)
			{
				tmp2 = tmp2->next;
			}
			tmp2->value.rating = 0;
			for (int j = 0; j < 326;)
			{
				cout << "1)Press R to Rate the News. " << endl;
				cout << "2)Press C to Comment on the News." << endl;
				cout << "3)Press N to Go to Next News." << endl;
				cout << "4)Press S to Spam This News." << endl;
				cout << "5)Press M to Go Back to User Menu." << endl;
				cin >> choice;
				switch (choice)
				{
				case 'r':
				case 'R':
				{

					double rating;
					cout << "Please Rate the News Out of 5:" << endl;
					cin >> rating;
					Political_news.Rate(rating, v.highest_rating(), user_LoggedIn_Id);
					break;
				}
				case 'c':
				case 'C':
				{
					string comnt;
					cout << "Please Enter Your Comment :" << endl;
					cin >> comnt;
					Political_news.comment(comnt, v.highest_rating());
					break;
				}
				case 's':
				case 'S':
				{
					Political_news.spam(v.highest_rating(), user_LoggedIn_Id);
				}
				case 'm':
				case 'M':
				{
					j = 326;
					i = Political_news.size;
					break;
				}
				case 'n':
				case 'N':
				{
					j = 326;
					break;
				}
				default:
				{
					cout << "Invalid Entry!" << endl;
					break;
				}
				}
			}
		}
		break;
	}
	case 2:
	{
		linkedlist v = linkedlist();
		char choice;
		node* tmp1 = Economic_news.head;
		node* tmp2;
		bool check = true;
		for (int i = 0; i < Economic_news.size; i++)
		{
			v.append(tmp1->value);
			tmp1 = tmp1->next;
		}
		for (int i = 0; i < Economic_news.size; i++)
		{
			node* tmp = v.head;
			for (int i = 0; i < v.highest_rating(); i++)
			{
				tmp = tmp->next;
			}
			for (int i = 0; i < tmp->value.ssize; i++)
			{
				if (tmp->value.spam[i] == user_LoggedIn_Id)
				{
					check = false;
				}
			}
			if (check)
			{
				v.display(v.highest_rating());
			}
			tmp2 = v.head;
			for (int j = 0; j < v.highest_rating(); j++)
			{
				tmp2 = tmp2->next;
			}
			tmp2->value.rating = 0;
			for (int j = 0; j < 326;)
			{
				cout << "1)Press R to Rate the News. " << endl;
				cout << "2)Press C to Comment on the News." << endl;
				cout << "3)Press N to Go to Next News." << endl;
				cout << "4)Press S to Spam This News." << endl;
				cout << "5)Press M to Go Back to User Menu." << endl;
				cin >> choice;
				switch (choice)
				{
				case 'r':
				case 'R':
				{

					double rating;
					cout << "Please Rate the News Out of 5:" << endl;
					cin >> rating;
					Economic_news.Rate(rating, v.highest_rating(), user_LoggedIn_Id);
					break;
				}
				case 'c':
				case 'C':
				{
					string comnt;
					cout << "Please Enter Your Comment :" << endl;
					cin >> comnt;
					Economic_news.comment(comnt, v.highest_rating());
					break;
				}
				case 's':
				case 'S':
				{
					Economic_news.spam(v.highest_rating(), user_LoggedIn_Id);
				}
				case 'm':
				case 'M':
				{
					j = 326;
					i = Economic_news.size;
					break;
				}
				case 'n':
				case 'N':
				{
					j = 326;
					break;
				}
				default:
				{
					cout << "Invalid Entry!" << endl;
					break;
				}
				}
			}
		}
		break;
	}
	case 3:
	{
		linkedlist v = linkedlist();
		char choice;
		node* tmp1 = Sports_news.head;
		node* tmp2;
		bool check = true;
		for (int i = 0; i < Sports_news.size; i++)
		{
			v.append(tmp1->value);
			tmp1 = tmp1->next;
		}
		for (int i = 0; i < Sports_news.size; i++)
		{
			node* tmp = v.head;
			for (int i = 0; i < v.highest_rating(); i++)
			{
				tmp = tmp->next;
			}
			for (int i = 0; i < tmp->value.ssize; i++)
			{
				if (tmp->value.spam[i] == user_LoggedIn_Id)
				{
					check = false;
				}
			}
			if (check)
			{
				v.display(v.highest_rating());
			}
			tmp2 = v.head;
			for (int j = 0; j < v.highest_rating(); j++)
			{
				tmp2 = tmp2->next;
			}
			tmp2->value.rating = 0;
			for (int j = 0; j < 326;)
			{
				cout << "1)Press R to Rate the News. " << endl;
				cout << "2)Press C to Comment on the News." << endl;
				cout << "3)Press N to Go to Next News." << endl;
				cout << "4)Press S to Spam This News." << endl;
				cout << "5)Press M to Go Back to User Menu." << endl;
				cin >> choice;
				switch (choice)
				{
				case 'r':
				case 'R':
				{

					double rating;
					cout << "Please Rate the News Out of 5:" << endl;
					cin >> rating;
					Sports_news.Rate(rating, v.highest_rating(), user_LoggedIn_Id);
					break;
				}
				case 'c':
				case 'C':
				{
					string comnt;
					cout << "Please Enter Your Comment :" << endl;
					cin >> comnt;
					Sports_news.comment(comnt, v.highest_rating());
					break;
				}
				case 's':
				case 'S':
				{
					Sports_news.spam(v.highest_rating(), user_LoggedIn_Id);
				}
				case 'm':
				case 'M':
				{
					j = 326;
					i = Sports_news.size;
					break;
				}
				case 'n':
				case 'N':
				{
					j = 326;
					break;
				}
				default:
				{
					cout << "Invalid Entry!" << endl;
					break;
				}
				}
			}
		}
		break;
	}
	case 4:
	{
		linkedlist v = linkedlist();
		char choice;
		node* tmp1 = Art_Entertainment_news.head;
		node* tmp2;
		bool check = true;
		for (int i = 0; i < Art_Entertainment_news.size; i++)
		{
			v.append(tmp1->value);
			tmp1 = tmp1->next;
		}
		for (int i = 0; i < Art_Entertainment_news.size; i++)
		{
			node* tmp = v.head;
			for (int i = 0; i < v.highest_rating(); i++)
			{
				tmp = tmp->next;
			}
			for (int i = 0; i < tmp->value.ssize; i++)
			{
				if (tmp->value.spam[i] == user_LoggedIn_Id)
				{
					check = false;
				}
			}
			if (check)
			{
				v.display(v.highest_rating());
			}
			tmp2 = v.head;
			for (int j = 0; j < v.highest_rating(); j++)
			{
				tmp2 = tmp2->next;
			}
			tmp2->value.rating = 0;
			for (int j = 0; j < 326;)
			{
				cout << "1)Press R to Rate the News. " << endl;
				cout << "2)Press C to Comment on the News." << endl;
				cout << "3)Press N to Go to Next News." << endl;
				cout << "4)Press S to Spam This News." << endl;
				cout << "5)Press M to Go Back to User Menu." << endl;
				cin >> choice;
				switch (choice)
				{
				case 'r':
				case 'R':
				{

					double rating;
					cout << "Please Rate the News Out of 5:" << endl;
					cin >> rating;
					Art_Entertainment_news.Rate(rating, v.highest_rating(), user_LoggedIn_Id);
					break;
				}
				case 'c':
				case 'C':
				{
					string comnt;
					cout << "Please Enter Your Comment :" << endl;
					cin >> comnt;
					Art_Entertainment_news.comment(comnt, v.highest_rating());
					break;
				}
				case 's':
				case 'S':
				{
					Art_Entertainment_news.spam(v.highest_rating(), user_LoggedIn_Id);
				}
				case 'm':
				case 'M':
				{
					j = 326;
					i = Art_Entertainment_news.size;
					break;
				}
				case 'n':
				case 'N':
				{
					j = 326;
					break;
				}
				default:
				{
					cout << "Invalid Entry!" << endl;
					break;
				}
				}
			}
		}
		break;
	}
	default:
	{
		break;
	}
	}
}
void Admin_Menu()
{
	for (int i = 0; i < 326;)
	{
		int Achoice;
		cout << "# Admin Menu #" << endl;
		cout << "Press The Number Beside Your Choice :" << endl;
		cout << "1)Post News to a Specific Category." << endl;
		cout << "2)Delete News from a Specific Category." << endl;
		cout << "3)Update Existing News." << endl;
		cout << "0)Main Menu." << endl;
		cin >> Achoice;
		switch (Achoice)
		{
		case 1:
		{
			post_news();
			break;
		}
		case 2:
		{
			delete_news();
			break;
		}
		case 3:
		{
			update_news();
			break;
		}
		case 0:
		{
			i = 326;
			break;
		}
		}
	}
}
void User_Menu()
{
	for (int i = 0; i < 326;)
	{
		int Uchoice;
		cout << "# User Menu #" << endl;
		cout << "Press The Number Beside Your Choice :" << endl;
		cout << "1)Display Latest News." << endl;
		cout << "2)Show News Depending on Specific Category." << endl;
		cout << "0)Main Menu." << endl;
		cin >> Uchoice;
		switch (Uchoice)
		{
		case 1:
		{
			display_latest_news();
			break;
		}
		case 2:
		{
			show_news();
			break;
		}
		case 0:
		{
			i = 326;
			break;
		}
		}
	}
}
void Admin_Registration()
{
	cout << "Please Enter Your First Name :" << endl;
	cin >> f;
	cout << "Please Enter Your Last Name :" << endl;
	cin >> l;
	cout << "Please Enter Your Age :" << endl;
	cin >> a;
	cout << "Please Enter Your Phone Number :" << endl;
	cin >> ph;
	cout << "Please Enter Your E_mail :" << endl;
	cin >> e;
	cout << "Please Enter Your Username :" << endl;
	cin >> u;
	cout << "Please Enter Your Password :" << endl;
	cin >> p;
	admin a1 = admin(f, l, a, ph, e, u, p);
	arrayOfAdmins[Acounter] = a1;
	Acounter++;
}
void User_Registration()
{
	cout << "Please Enter Your First Name :" << endl;
	cin >> f;
	cout << "Please Enter Your Last Name :" << endl;
	cin >> l;
	cout << "Please Enter Your Age :" << endl;
	cin >> a;
	cout << "Please Enter Your Phone Number :" << endl;
	cin >> ph;
	cout << "Please Enter Your E_mail :" << endl;
	cin >> e;
	cout << "Please Enter Your Username :" << endl;
	cin >> u;
	cout << "Please Enter Your Password :" << endl;
	cin >> p;
	user u1 = user((Ucounter+1),f, l, a, ph, e, u, p);
	arrayOfUsers[Ucounter] = u1;
	Ucounter++;
}
void login()
{
	bool login_check = true;
	do
	{
		char identity;
		string usercheck, passcheck;
		cout << "For Admins Press A" << endl;
		cout << "For Users Press U" << endl;
		cout << "For Main Menu Press 0" << endl;
		cin >> identity;
		if (identity == 'a' || identity == 'A')
		{
			cout << "Please Enter Your Username :" << endl;
			cin >> usercheck;
			cout << "Please Enter Your Password :" << endl;
			cin >> passcheck;
			for (int i = 0; i < Acounter; i++)
			{
				if (arrayOfAdmins[i].username == usercheck)
				{
					if (arrayOfAdmins[i].password == passcheck)
					{
						login_check = false;
						Admin_Menu();
						i = Acounter + 1;
					}
				}
			}
			if (login_check)
			{
				cout << "Incorrect Username or Password!" << endl;
				cout << "Please Try Again." << endl;
			}
		}
		else if (identity == 'u' || identity == 'U')
		{
			cout << "Please Enter Your Username :" << endl;
			cin >> usercheck;
			cout << "Please Enter Your Password :" << endl;
			cin >> passcheck;
			for (int i = 0; i < Ucounter; i++)
			{
				if (arrayOfUsers[i].username == usercheck)
				{
					if (arrayOfUsers[i].password == passcheck)
					{
						login_check = false;
						user_LoggedIn_Id = arrayOfUsers[i].id;
						User_Menu();
						i = Ucounter + 1;
					}
				}
			}
			if (login_check)
			{
				cout << "Incorrect Username or Password!" << endl;
				cout << "Please Try Again." << endl;
			}
		}
		else if (identity == '0')
		{
			login_check = false;
		}
		else
		{
			cout << "Invalid Entry!" << endl;
		}
	} while (login_check);
}
void return_saved_data()
{
	fstream file1, file2, file3, file4, file5, file6;
	file1.open("saved_data_admins.txt", ios::out | ios::in);
	file2.open("saved_data_users.txt", ios::out | ios::in);
	file3.open("saved_data_political_news.txt", ios::out | ios::in);
	file4.open("saved_data_economic_news.txt", ios::out | ios::in);
	file5.open("saved_data_sports_news.txt", ios::out | ios::in);
	file6.open("saved_data_art&entertainment_news.txt", ios::out | ios::in);
	file1 >> SAcounter;
	for (int i = 0; i < SAcounter; i++)
	{
		file1 >> f;
		file1 >> l;
		file1 >> a;
		file1 >> ph;
		file1 >> e;
		file1 >> u;
		file1 >> p;
		admin a1 = admin(f, l, a, ph, e, u, p);
		arrayOfAdmins[Acounter] = a1;
		Acounter++;
	}
	file2 >> SUcounter;
	for (int i = 0; i < SUcounter; i++)
	{
		file2 >> id2;
		file2 >> f;
		file2 >> l;
		file2 >> a;
		file2 >> ph;
		file2 >> e;
		file2 >> u;
		file2 >> p;
		user U1 = user(id2, f, l, a, ph, e, u, p);
		arrayOfUsers[Ucounter] = U1;
		Ucounter++;
	}
	file3 >> Psize;
	for (int i = 0; i < Psize; i++)
	{
		news oldNews = news();
		file3 >> oldNews.date1.day;
		file3 >> oldNews.date1.month;
		file3 >> oldNews.date1.year;
		file3 >> oldNews.title;
		file3 >> oldNews.description;
		file3 >> oldNews.rating;
		file3 >> oldNews.csize;
		file3 >> oldNews.rsize;
		for (int i = 0; i < oldNews.csize; i++)
		{
			file3 >> oldNews.comments[i];
		}
		for (int i = 0; i < oldNews.rsize; i++)
		{
			file3 >> oldNews.array_of_users_rated_it[i];
		}
		Political_news.append(oldNews);
	}
	file4 >> Esize;
	for (int i = 0; i < Esize; i++)
	{
		news oldNews = news();
		file4 >> oldNews.date1.day;
		file4 >> oldNews.date1.month;
		file4 >> oldNews.date1.year;
		file4 >> oldNews.title;
		file4 >> oldNews.description;
		file4 >> oldNews.rating;
		file4 >> oldNews.csize;
		file4 >> oldNews.rsize;
		for (int i = 0; i < oldNews.csize; i++)
		{
			file4 >> oldNews.comments[i];
		}
		for (int i = 0; i < oldNews.rsize; i++)
		{
			file4 >> oldNews.array_of_users_rated_it[i];
		}
		Economic_news.append(oldNews);
	}
	file5 >> Ssize;
	for (int i = 0; i < Ssize; i++)
	{
		news oldNews = news();
		file5 >> oldNews.date1.day;
		file5 >> oldNews.date1.month;
		file5 >> oldNews.date1.year;
		file5 >> oldNews.title;
		file5 >> oldNews.description;
		file5 >> oldNews.rating;
		file5 >> oldNews.csize;
		file5 >> oldNews.rsize;
		for (int i = 0; i < oldNews.csize; i++)
		{
			file5 >> oldNews.comments[i];
		}
		for (int i = 0; i < oldNews.rsize; i++)
		{
			file5 >> oldNews.array_of_users_rated_it[i];
		}
		Sports_news.append(oldNews);
	}
	file6 >> Asize;
	for (int i = 0; i < Asize; i++)
	{
		news oldNews = news();
		file6 >> oldNews.date1.day;
		file6 >> oldNews.date1.month;
		file6 >> oldNews.date1.year;
		file6 >> oldNews.title;
		file6 >> oldNews.description;
		file6 >> oldNews.rating;
		file6 >> oldNews.csize;
		file6 >> oldNews.rsize;
		for (int i = 0; i < oldNews.csize; i++)
		{
			file6 >> oldNews.comments[i];
		}
		for (int i = 0; i < oldNews.rsize; i++)
		{
			file6 >> oldNews.array_of_users_rated_it[i];
		}
		Art_Entertainment_news.append(oldNews);
	}
	file1.close();
	file2.close();
	file3.close();
	file4.close();
	file5.close();
	file6.close();
}
void save_data()
{
	fstream file1, file2, file3, file4, file5, file6;
	file1.open("saved_data_admins.txt", ios::out | ios::in);
	file2.open("saved_data_users.txt", ios::out | ios::in);
	file3.open("saved_data_political_news.txt", ios::out | ios::in);
	file4.open("saved_data_economic_news.txt", ios::out | ios::in);
	file5.open("saved_data_sports_news.txt", ios::out | ios::in);
	file6.open("saved_data_art&entertainment_news.txt", ios::out | ios::in);
	file1 << Acounter << endl;
	for (int i = 0; i < Acounter; i++)
	{
		file1 << arrayOfAdmins[i].firstname << endl;
		file1 << arrayOfAdmins[i].lastname << endl;
		file1 << arrayOfAdmins[i].age << endl;
		file1 << arrayOfAdmins[i].phonenumber << endl;
		file1 << arrayOfAdmins[i].e_mail << endl;
		file1 << arrayOfAdmins[i].username << endl;
		file1 << arrayOfAdmins[i].password << endl;
	}
	file2 << Ucounter << endl;
	for (int i = 0; i < Ucounter; i++)
	{
		file2 << arrayOfUsers[i].id << endl;
		file2 << arrayOfUsers[i].firstname << endl;
		file2 << arrayOfUsers[i].lastname << endl;
		file2 << arrayOfUsers[i].age << endl;
		file2 << arrayOfUsers[i].phonenumber << endl;
		file2 << arrayOfUsers[i].e_mail << endl;
		file2 << arrayOfUsers[i].username << endl;
		file2 << arrayOfUsers[i].password << endl;
	}
	file3 << Political_news.size << endl;
	node* tmp1 = Political_news.head;
	for (int i = 0; i < Political_news.size; i++)
	{
		file3 << tmp1->value.date1.day << endl;
		file3 << tmp1->value.date1.month << endl;
		file3 << tmp1->value.date1.year << endl;
		file3 << tmp1->value.title << endl;
		file3 << tmp1->value.description << endl;
		file3 << tmp1->value.rating << endl;
		file3 << tmp1->value.csize << endl;
		file3 << tmp1->value.rsize << endl;
		file3 << tmp1->value.ssize << endl;
		for (int i = 0; i < tmp1->value.csize; i++)
		{
			file3 << tmp1->value.comments[i] << endl;
		}
		for (int i = 0; i < tmp1->value.rsize; i++)
		{
			file3 << tmp1->value.array_of_users_rated_it[i] << endl;
		}
		for (int i = 0; i < tmp1->value.ssize; i++)
		{
			file3 << tmp1->value.spam[i] << endl;
		}
		tmp1 = tmp1->next;
	}
	file4 << Economic_news.size << endl;
	node* tmp2 = Economic_news.head;
	for (int i = 0; i < Economic_news.size; i++)
	{
		file4 << tmp2->value.date1.day << endl;
		file4 << tmp2->value.date1.month << endl;
		file4 << tmp2->value.date1.year << endl;
		file4 << tmp2->value.title << endl;
		file4 << tmp2->value.description << endl;
		file4 << tmp2->value.rating << endl;
		file4 << tmp2->value.csize << endl;
		file4 << tmp2->value.rsize << endl;
		file4 << tmp2->value.ssize << endl;
		for (int i = 0; i < tmp2->value.csize; i++)
		{
			file4 << tmp2->value.comments[i] << endl;
		}
		for (int i = 0; i < tmp2->value.rsize; i++)
		{
			file4 << tmp2->value.array_of_users_rated_it[i] << endl;
		}
		for (int i = 0; i < tmp2->value.rsize; i++)
		{
			file4 << tmp2->value.spam[i] << endl;
		}
		tmp2 = tmp2->next;
	}
	file5 << Sports_news.size << endl;
	node* tmp3 = Sports_news.head;
	for (int i = 0; i < Sports_news.size; i++)
	{
		file5 << tmp3->value.date1.day << endl;
		file5 << tmp3->value.date1.month << endl;
		file5 << tmp3->value.date1.year << endl;
		file5 << tmp3->value.title << endl;
		file5 << tmp3->value.description << endl;
		file5 << tmp3->value.rating << endl;
		file5 << tmp3->value.csize << endl;
		file5 << tmp3->value.rsize << endl;
		file5 << tmp3->value.ssize << endl;
		for (int i = 0; i < tmp3->value.csize; i++)
		{
			file5 << tmp3->value.comments[i] << endl;
		}
		for (int i = 0; i < tmp3->value.rsize; i++)
		{
			file5 << tmp3->value.array_of_users_rated_it[i] << endl;
		}
		for (int i = 0; i < tmp3->value.ssize; i++)
		{
			file5 << tmp3->value.spam[i] << endl;
		}
		tmp3 = tmp3->next;
	}
	file6 << Art_Entertainment_news.size << endl;
	node* tmp4 = Art_Entertainment_news.head;
	for (int i = 0; i < Art_Entertainment_news.size; i++)
	{
		file6 << tmp4->value.date1.day << endl;
		file6 << tmp4->value.date1.month << endl;
		file6 << tmp4->value.date1.year << endl;
		file6 << tmp4->value.title << endl;
		file6 << tmp4->value.description << endl;
		file6 << tmp4->value.rating << endl;
		file6 << tmp4->value.csize << endl;
		file6 << tmp4->value.rsize << endl;
		file6 << tmp4->value.ssize << endl;
		for (int i = 0; i < tmp4->value.csize; i++)
		{
			file6 << tmp4->value.comments[i] << endl;
		}
		for (int i = 0; i < tmp4->value.rsize; i++)
		{
			file6 << tmp4->value.array_of_users_rated_it[i] << endl;
		}
		for (int i = 0; i < tmp4->value.ssize; i++)
		{
			file6 << tmp4->value.spam[i] << endl;
		}
		tmp4 = tmp4->next;
	}
	file1.close();
	file2.close();
	file3.close();
	file4.close();
	file5.close();
	file6.close();
}
int main()
{
	return_saved_data();
	for (int i = 0; i < 326;)
	{
		Political_news.check_trivial_news();
		Economic_news.check_trivial_news();
		Sports_news.check_trivial_news();
		Art_Entertainment_news.check_trivial_news();
		cout << "" "Welcome to FCIS News Management System" "" << endl;
		cout << "Press The Number Beside Your Choice :" << endl;
		cout << "1) Registration " << endl;
		cout << "2) Login " << endl;
		cout << "3) Exit " << endl;
		int x;
		cin >> x;
		switch (x)
		{
		case 1:
		{
			bool admin_code_check = true;
			char id;
			cout << "Press A if Admin." << endl;
			cout << "Press U if User." << endl;
			cin >> id;
			if (id == 'a' || id == 'A')
			{
				do
				{
					int code;
					cout << "Please Enter Admins Code :" << endl;
					cout << "For Main Menu Press 0" << endl;
					cin >> code;
					if (code == 1234)
					{
						Admin_Registration();
						admin_code_check = false;
					}
					else if (code == 0)
					{
						break;
					}
					else if (code != 1234)
					{
						cout << "Incorrect Code!" << endl;
					}
				} while (admin_code_check);
				{

				}
			}
			else if (id == 'u' || id == 'U')
			{
				User_Registration();
			}
			break;
		}
		case 2:
		{
			login();

			break;
		}
		case 3:
		{
			save_data();
			i = 326;
			break;
		}
		}
	}
	return(0);
}
