#include<fstream.h>
#include<conio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
class data
{
	char word[15],mean[50],syn[15],ant[15];
	public:
		void input()
		{
		gotoxy(4,13);
		cout<<"Enter Word:";
		cin>>word;
		gotoxy(4,14);
		cout<<"Enter meaning:";	
		cin>>mean;
		gotoxy(4,15);
		cout<<"Enter synonym:";
		cin>>syn;
		gotoxy(4,16);
		cout<<"Enter antonym:";
		cin>>ant;
		}
		void outword()	{ cprintf(word); }
		void outmean()  { cprintf(mean); }
		void outsyn() { cprintf(syn); }
		void outant() { cprintf(ant);  }
		char* retch() { return word; }
};
void border()
{
	int i;
	textcolor(14);
	gotoxy(1,1);cprintf("###############################################################################");cout<<endl;
	cprintf("###############################################################################");cout<<endl;
	gotoxy(1,23);
	cprintf("###############################################################################");cout<<endl;
	cprintf("###############################################################################");cout<<endl;
	for(i=1;i<23;i++)
	{
	  gotoxy(1,i);cprintf("##");
	  gotoxy(78,i);cprintf("##");
	}
	gotoxy(1,3);
	textcolor(WHITE);
}
void pageend()
{
	int i;
	long j;
	gotoxy(1,1);
	textcolor(BLUE);
	for(i=1;i<24;i++)
	{
		for(j=0;j<120000;j++);	for(j=0;j<120000;j++);	for(j=0;j<120000;j++);	for(j=0;j<120000;j++);
		gotoxy(1,i);
		cprintf("                                                                               ");cout<<endl;
		cprintf("_______________________________________________________________________________");cout<<endl;
		cprintf("_______________________________________________________________________________");cout<<endl;
		cprintf("                                                                               ");cout<<endl;
	}
	textcolor(WHITE);

}
void question()
{
	int v=2,u=62;
	gotoxy(u,v);cout<<"   .-''''-..      "<<endl;
	gotoxy(u,v+1);cout<<" .' .'''.   '.  "<<endl;
	gotoxy(u,v+2);cout<<"/    \\   \\    `."<<endl;
	gotoxy(u,v+3);cout<<"\     '    |     |"<<endl;
	gotoxy(u,v+4);cout<<" `--'   /     /  "<<endl;
	gotoxy(u,v+5);cout<<"     .'  ,-''    "<<endl;
	gotoxy(u,v+6);cout<<"      |  /       "<<endl;
	gotoxy(u,v+7);cout<<"      | '        "<<endl;
	gotoxy(u,v+8);cout<<"      '-'        "<<endl;
	gotoxy(u,v+9);cout<<"     .--.        "<<endl;
	gotoxy(u,v+10);cout<<"    /    \\      "<<endl;
	gotoxy(u,v+11);cout<<"    \\    /      "<<endl;
	gotoxy(u,v+12);cout<<"     `--'       "<<endl;
}
int noofwords()
{
	fstream file("dict.dat",ios::in|ios::binary);
	data s;
	int pend,psize,prec;
	file.seekg(0,ios::end);
	pend=file.tellg();
	psize=sizeof(s);
	prec=pend/psize;
	file.close();
	return prec;
}
int pass()
{
	char pass[25]="Hello",user[25]="";
	char ch;
	clrscr();
	border();
	int p=0,q;
	gotoxy(25,13);cout<<"Enter Password ";
	int col=40;
	while(ch!=13)
	{
		ch=getch();
		gotoxy(col,13);cout<<"*";
		user[p]=ch;
		p++;
		col++;
	}
	user[p-1]='\0';          //checks for last entry so p-1

	if(strcmp(pass,user)==0)
	{
		gotoxy(25,15);cout<<"Permission Granted ";
		gotoxy(25,15);cout<<"                   ";
		q=1;
	}
	else
	{
		gotoxy(25,15);cout<<"Access Denied ";getch();
		gotoxy(25,15);cout<<"              ";
		q=0;
	}
	return q;
}
void book()
{
gotoxy(42,11);cout<<"     _.--._  _.--._          "<<endl;
gotoxy(42,12);cout<<",-=.-`      \\`      `-._     "<<endl;
gotoxy(42,13);cout<<"\\\\\\          \\          \\    "<<endl;
gotoxy(42,14);cout<<" \\\\\\          \\          \\   "<<endl;
gotoxy(42,15);cout<<"  \\\\\\          \\          \\  "<<endl;
gotoxy(42,16);cout<<"   \\\\\\          \\          \\ "<<endl;
gotoxy(42,17);cout<<"    \\\\\\          \\          \\ "<<endl;
gotoxy(42,18);cout<<"     \\\\\\     _:--:\\:_:--:_   \\ "<<endl;
gotoxy(42,19);cout<<"      \\\\\\\_.-`      :      `-._\\ "<<endl;
gotoxy(42,20);cout<<"       \\`_..--``--.;.--``--.._=> "<<endl;
gotoxy(42,21);cout<<"        `                       "<<endl;
}

void smartpattern()
{
border();
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"      ____                       _     ____                      _             "<<endl;
cout<<"     / ___| _ __ ___   __ _ _ __| |_  / ___|  ___  __ _ _ __ ___| |__          "<<endl;
cout<<"     \\___ \\| '_ ` _ \\ / _` | '__| __| \\___ \\ / _ \\/ _` | '__/ __| '_ \\         "<<endl;
cout<<"      ___) | | | | | | (_| | |  | |_   ___) |  __/ (_| | | | (__| | | |        "<<endl;
cout<<"     |____/|_| |_| |_|\\__,_|_|   \\__| |____/ \\___|\\__,_|_|  \\___|_| |_|        "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
gotoxy(45,21);textcolor(RED);cprintf("use /|\\ and \\|/ to navigate");textcolor(WHITE);
}
void create()
{
	int c;
	c=pass();
	if(c==1)
	{
		clrscr();
		border();
		textcolor(WHITE);
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"   ____                _   _              ____                        _        "<<endl;
		cout<<"  / ___|_ __ ___  __ _| |_(_)_ __   __ _  |  _ \\ ___  ___ ___  _ __ __| |___   "<<endl;
		cout<<" | |   | '__/ _ \\/ _` | __| | '_ \\ / _` | | |_) / _ \\/ __/ _ \\| '__/ _` / __|  "<<endl;
		cout<<" | |___| | |  __/ (_| | |_| | | | | (_| | |  _ <  __/ (_| (_) | | | (_| \\__ \\  "   <<endl;
		cout<<"  \\____|_|  \\___|\\__,_|\\__|_|_| |_|\\__, | |_| \\_\\___|\\___\\___/|_|  \\__,_|___   "<<endl;
		cout<<"                                   |___/                                       "<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
		fstream f("dict.dat",ios::out|ios::binary);
		int i;
		char m;
		data d;
		while(1)
		{
			d.input();
			f.write((char*)&d,sizeof(d));
			gotoxy(4,17);cout<<"Do you want to continue adding words (Y/N)? :";
			cin>>m;
			gotoxy(4,13);cout<<"                                                                  ";
			gotoxy(4,14);cout<<"                                                                  ";
			gotoxy(4,15);cout<<"                                                                  ";
			gotoxy(4,16);cout<<"                                                                  ";
			gotoxy(4,17);cout<<"                                                                  ";
		if(toupper(m)=='N')
				break;
		}
		f.close();
	}
}
void move(char c,int  a)
{
	long i;
	int x,y,j=0;
	gotoxy(35,19);cout<<"      __...--~~~~~-._   _.-~~~~~--...__  "<<endl;
	gotoxy(35,20);cout<<"    //               `|'               \\\\ "<<endl;
	gotoxy(35,21);cout<<"   //                 |                 \\\\ "<<endl;
	gotoxy(35,22);cout<<"  //__...--~~~~~~-._  |  _.-~~~~~~--...__\\\\ "<<endl;
	gotoxy(35,23);cout<<" //__.....----~~~~._\\ | /_.~~~~----.....__\\\\ "<<endl;
	gotoxy(35,24);cout<<"====================\\\\|//===================="<<
endl;
	for(x=22;x>4;x=x-1)
	{
		gotoxy(1,1);
		y=(x*x)/10;
		gotoxy((y+a),x);
		cout<<c;
		for(i=0;i<500000;i++);
		if(x!=5)
		{
		gotoxy(y+a,x);
		cout<<" ";
		}
	}
	j++;

}
void add()
{
	clrscr();
	border();
	textcolor(WHITE);
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"     _       _     _ _               ____                        _             "<<endl;
cout<<"    / \\   __| | __| (_)_ __   __ _  |  _ \\ ___  ___ ___  _ __ __| |___         "<<endl;
cout<<"   / _ \\ / _` |/ _` | | '_ \\ / _` | | |_) / _ \\/ __/ _ \\| '__/ _` / __|        "<<endl;
cout<<"  / ___ \\ (_| | (_| | | | | | (_| | |  _ <  __/ (_| (_) | | | (_| \\__ \\        "<<endl;
cout<<" /_/   \\_\\__,_|\\__,_|_|_| |_|\\__, | |_| \\_\\___|\\___\\___/|_|  \\__,_|___/        "<<endl;
cout<<"                             |___/                                             "<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
	fstream f("dict.dat",ios::app|ios::binary);
	int i;
	char m;
	data d;
	while(1)
	{
		d.input();
		f.write((char*)&d,sizeof(d));
		gotoxy(4,17);  cout<<"Do you want to continue adding words (Y/N)? :";
		cin>>m;
		gotoxy(4,13);cout<<"                                                                  ";
		gotoxy(4,14);cout<<"                                                                  ";
		gotoxy(4,15);cout<<"                                                                  ";
		gotoxy(4,16);cout<<"                                                                  ";
		gotoxy(4,17);cout<<"                                                                  ";
		if(toupper(m)=='N')
			break;
	}
	textcolor(WHITE);
	f.close();
}
void smart()
{
	clrscr();
	fstream f;
	int i=0,a=32,j,k,pos=-1,b=10,z=0,g,l,m=0,n;   //b is the ctr
	data s;
	char tword[15],ch,tch,temp[15];
	tword[0]='\0';
	smartpattern();
	gotoxy(5,b);cout<<"Enter word to be searched: ";
	while(1)            //repeat the process inside the loop
	{
		z=0;
		b=10;
		g=0;
		gotoxy(a,b);
		ch=getch();
		if(ch==0)
		{
			ch=getch();	       //special keys
			if(ch=='P'|| ch=='H')        //1 down //2 up
			{
			n=1;
			clrscr();
			if(ch=='P')
				m++;            //down
			else
				m--;            //up
			smartpattern();
			gotoxy(5,b);cout<<"Enter word to be searched: "<<tword;

			f.open("dict.dat",ios::in|ios::binary);
			l=0;
			while(f)
			{
				f.read((char*)&s,sizeof(s));
				if(f.eof())
					break;
				j=-1;      //found or not found
				for(i=0;i<=pos;i++)
				{
					if(s.retch()[i]!=tword[i])
						j=1;  //no
				}
				if(j==-1)  //yes show the word with mean
				{
					l++;
					if(g==0)
					{
						gotoxy(15,b+4);
						cout<<"WORD";
						gotoxy(60,b+4);
						cout<<"MEANING";
						g=1;
					}
					if(m==l)
					{
						textcolor(YELLOW);
						gotoxy(10,b+6);
						cprintf(">>");
						gotoxy(15,b+6);
						s.outword();
						gotoxy(35,b+6);
						cout<<"------";
						gotoxy(60,b+6);
						s.outmean();
						b=b+1;  //row increase
						z++;
					}
					else
					{
						gotoxy(10,b+6);
						textbackground(BLACK);
						cprintf("  ");
						textcolor(WHITE);
						gotoxy(15,b+6);
						s.outword();
						gotoxy(35,b+6);
						cout<<"------";
						gotoxy(60,b+6);
						s.outmean();
						b=b+1;  //row increase
						z++;
					}
				}
			}
			f.close();
			}
		} //for special char up and down
		else if(ch==13)
		{
			if(n==2)
				break;
			else
			{
				f.open("dict.dat",ios::in|ios::binary);
				l=0;
				while(f)
				{

					f.read((char*)&s,sizeof(s));
					if(f.eof())
						break;
					j=-1;      //found or not found
					for(i=0;i<=pos;i++)
					{
						if(s.retch()[i]!=tword[i])
							j=1;  //no
					}
					if(j==-1)
					{
						l++;
						if(l==m)
						{
							pageend();
							clrscr();
							border();
							cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
							cout<<"__        __            _   ____                      _       _   _            "<<endl;
							cout<<"\\ \\      / /__  _ __ __| | |  _ \\  ___  ___  ___ _ __(_)_ __ | |_(_) ___  _ __ "<<endl;
							cout<<" \\ \\ /\\ / / _ \\| '__/ _` | | | | |/ _ \\/ __|/ __| '__| | '_ \\| __| |/ _ \\| '_  "<<endl;
							cout<<"  \\ V  V / (_) | | | (_| | | |_| |  __/\\__ \\ (__| |  | | |_) | |_| | (_) | | ||"<<endl;
							cout<<"   \\_/\\_/ \\___/|_|  \\__,_| |____/ \\___||___/\\___|_|  |_| .__/ \\__|_|\\___/|_| ||"<<endl;
							cout<<"					               |_|                     "<<endl;
							cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
							gotoxy(15,13);cout<<"WORD: ";s.outword();
							gotoxy(15,15);cout<<"MEANING: ";s.outmean();
							gotoxy(15,17);cout<<"SYNONYMS: ";s.outsyn();
							gotoxy(15,19);cout<<"ANTONYMS: ";s.outant();
							book();
							break;
						}
					}
				}
				f.close();
				getch();
				break;
			}
		}
		else
		{
			n=2;
			textcolor(WHITE);
			m=0;
			a++;
			ch=tolower(ch); //lower case
			pos++;
			tword[pos]=ch;
			tword[pos+1]='\0'; //terminate the new temp word
			clrscr();
			smartpattern();
			gotoxy(5,b);cout<<"Enter word to be searched: "<<tword;
			f.open("dict.dat",ios::in|ios::binary);
			while(f)
			{
				f.read((char*)&s,sizeof(s));
				if(f.eof())
					break;
				j=-1;      //found or not found
					for(i=0;i<=pos;i++)
				{
					if(s.retch()[i]!=tword[i])
						j=1;  //no
				}
				if(j==-1)  //yes show the word with mean
				{
					if(g==0)
					{
						gotoxy(15,b+4);
						cout<<"WORD";
						gotoxy(60,b+4);
						cout<<"MEANING";
						g=1;
					}
					gotoxy(15,b+6);
					s.outword();
					gotoxy(35,b+6);
					cout<<"------";
					gotoxy(60,b+6);
					s.outmean();
					b=b+1;  //row increase
					z++;
				}
			}
			f.close();
			if(z==0)
			{
				gotoxy(17,b+3);cout<<"Word not found. ";
			}
		}
	}
}
void random()
{
	clrscr();
	border();
	unsigned int seedval;
	time_t t;
	seedval=(unsigned)time(&t);
	srand(seedval);
	fstream f;
	data s;
	int i,j,k;
	k=noofwords();
	i=(rand()%k);
	f.open("dict.dat",ios::in|ios::binary);
	for(j=0;j<=i;j++)
		f.read((char*)&s,sizeof(s));
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	cout<<"       ____                 _                  __        __            _       "<<endl;
	cout<<"      |  _ \\ __ _ _ __   __| | ___  _ __ ___   \\ \\      / /__  _ __ __| |      "<<endl;
	cout<<"      | |_) / _` | '_ \\ / _` |/ _ \\| '_ ` _ \\   \\ \\ /\\ / / _ \\| '__/ _` |      "<<endl;
	cout<<"      |  _ < (_| | | | | (_| | (_) | | | | | |   \\ V  V / (_) | | | (_| |      "<<endl;
	cout<<"      |_| \\_\\__,_|_| |_|\\__,_|\\___/|_| |_| |_|    \\_/\\_/ \\___/|_|  \\__,_|      "<<endl;
	cout<<"                                                                               "<<endl;
	cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
	gotoxy(15,13);cout<<"RANDOM WORD: ";
	s.outword();
	gotoxy(15,15);cout<<"MEANING: ";
	s.outmean();
	gotoxy(15,17);cout<<"SYNONYMS: ";s.outsyn();
	gotoxy(15,19);cout<<"ANTONYMS: ";s.outant();
	book();
	f.close();
	getch();
}
void all()
{
	fstream f;
	int i,j=0;
	char ch;
	data s;
	f.open("dict.dat",ios::in|ios::binary);
	while(j>=0)
	{
		f.seekg(0);
		for(i=0;i<=j;i++)
			f.read((char*)&s,sizeof(s));
		if(f.eof())
			break;
		clrscr();
		border();
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"               _    _ _   ____                        _                        "<<endl;
		cout<<"              / \\  | | | |  _ \\ ___  ___ ___  _ __ __| |___                    "<<endl;
		cout<<"             / _ \\ | | | | |_) / _ \\/ __/ _ \\| '__/ _` / __|                   "<<endl;
		cout<<"            / ___ \\| | | |  _ <  __/ (_| (_) | | | (_| \\__ \\                   "<<endl;
		cout<<"           /_/   \\_\\_|_| |_| \\_\\___|\\___\\___/|_|  \\__,_|___/                   "<<endl;
		cout<<"                                                                               "<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		gotoxy(15,13);cout<<"WORD NO "<<j+1<<": ";
		s.outword();
		gotoxy(15,15);cout<<"MEANING: ";
		s.outmean();
		gotoxy(15,17);cout<<"SYNONYMS: ";s.outsyn();
		gotoxy(15,19);cout<<"ANTONYMS: ";s.outant();
		book();
		gotoxy(50,22);textcolor(RED);cprintf("use --> and <-- to navigate");textcolor(WHITE);
		ch=getch();
		if(ch==0)
		{
			ch=getch();	       //special keys
			if(ch=='M')
				j++;
			else if(ch=='K')
				j--;
			else
				break;
				 //1 down //2 up
		}
		else
			break;
	}
	f.close();

}

void pattern()
{
	clrscr();
cout<<" _____             _ _     _     "<<endl;
cout<<"| ____|_ __   __ _| (_)___| |__  "<<endl;
cout<<"|  _| | '_ \\ / _` | | / __| '_ \\ "<<endl;
cout<<"| |___| | | | (_| | | \\__ \\ | | |"<<endl;
cout<<"|_____|_| |_|\\__, |_|_|___/_| |_|"<<endl;
cout<<" 	     |___/               "<<endl;
cout<<" ____  _      _   _ "<<endl;
cout<<"|  _ \\(_) ___| |_(_) ___  _ __   __ _ _ __ _   _"<<endl;
cout<<"| | | | |/ __| __| |/ _ \\| '_ \\ / _` | '__| | | |"<<endl;
cout<<"| |_| | | (__| |_| | (_) | | | | (_| | |  | |_| |"<<endl;
cout<<"|____/|_|\\___|\\__|_|\\___/|_| |_|\\__,_|_|   \\__, |"<<endl;
cout<<"                                           |___/"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
cout<<endl;
cout<<"                .-~~~~~~~~~-._       _.-~~~~~~~~~-.     "<<endl;
cout<<"            __.'              ~.   .~              `.__ "<<endl;
cout<<"          .'//                  \./                   \\`. "<<endl;
cout<<"        .'//                     |                      \\`. "<<endl;
cout<<"      .'// .-~~~~~~~~~~~~-._     |     _,-~~~~~~~~~~~~-.  \\`. "<<endl;
cout<<"    .'//.-!                 !-.  |  .-!                 !-. \\`."<<endl;
cout<<"  .'//______.============-..   \\ | /   ..-============._______\\`."<<endl;
cout<<".'______________________________\\|/______________________________`."<<endl;
question();
getch();
}
void main()
{
	int a=6;
	textcolor(WHITE);
	clrscr();
	pattern();
	pageend();
	clrscr();
	int ch=0;
	while(ch<=5)
	{
		textcolor(WHITE);
		clrscr();
		border();
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		cout<<"           ____  _      _   _                                                  "<<endl;
		cout<<"          |  _ \\(_) ___| |_(_) ___  _ __   __ _ _ __ _   _                     "<<endl;
		cout<<"          | | | | |/ __| __| |/ _ \\| '_ \\ / _` | '__| | | |                    "<<endl;
		cout<<"          | |_| | | (__| |_| | (_) | | | | (_| | |  | |_| |                    "<<endl;
		cout<<"          |____/|_|\\___|\\__|_|\\___/|_| |_|\\__,_|_|   \\__, |                    "<<endl;
		cout<<"                                                     |___/                     "<<endl;
		cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
		gotoxy(6,12);cout<<"1.Create new record";
		gotoxy(6,13);cout<<"2.Add records";
		gotoxy(6,14);cout<<"3.Smart search";
		gotoxy(6,15);cout<<"4.Random Word";
		gotoxy(6,16);cout<<"5.View all records";
		gotoxy(6,17);cout<<"6.Exit";
		gotoxy(6,18);cout<<"________________________________________________";
		gotoxy(6,20);cout<<"________________________________________________";
		gotoxy(6,19);cout<<"Enter Choice: ";
		cin>>ch;
		pageend();
		switch(ch)
		{
			case 1: create(); pageend(); break;
			case 2: add(); pageend(); break;
			case 3: smart(); pageend();break;
			case 4: random();pageend();break;
			case 5: all();pageend();
		}
		clrscr();
	}
	clrscr();
	move('T',0);
	move('H',2);
	move('A',4);
	move('N',6);
	move('K',8);
	move('Y',12);
	move('O',14);
	move('U',16);
	gotoxy(5,10);
	cout<<"MADE BY-ANKUR DCRUZ";
	getch();
}
