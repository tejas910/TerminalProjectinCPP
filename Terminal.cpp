#include<iostream>
#include<string>
#include<windows.h>

using namespace std;

class color{
	
	public:
	void colo(){
	system("color 02");
	}
	
		void helpcolo()
	{
	
		system("help color");
}
	void ipconfig()
	{
	
		system("ipconfig");
}
	void netview()
	{
	
		system("net view");
}
	void color01()
	{
	
		system("color 01");
}
	void color03()
	{
	
		system("color 03");
}
	void color04()
	{
	
		system("color 04");
}
	void color05()
	{
	
		system("color 05");
}
	void color06()
	{
	
		system("color 06");
}
	void color07()
	{
	
		system("color 07");
}
	void color08()
	{
	
		system("color 08");
}
	void color09()
	{
	
		system("color 09");
}
	void colora()
	{
	
		system("color a");
}
	void colorb()
	{
	
		system("color b");
}
	void colorc()
	{
	
		system("color c");
}
	void colord()
	{
	
		system("color d");
}
	void colore()
	{
	
		system("color e");
}
	void colorf()
	{
	
		system("color f");
}
	void tree()
	{
	
		system("tree");
}
	void help()
	{
	
		system("help");
}
	void netstat()
	{
	
		system("netstat");
}
	void arp()
	{
	
		system("arp");
}
	void ping()
	{
	
		system("ping");
}
	void systeminfo()
	{
	
		system("systeminfo");
}
	void cls()
	{
	
		system("cls");
}
	void exit()
	{
	
		system("exit");
}
	void date()
	{
	
		system("date");
}
		void notepad()
		{
			STARTUPINFO startInfo ={0};
			
			PROCESS_INFORMATION processInfo ={0};
			
			BOOL bsucess =CreateProcess(TEXT("C:\\Windows\\notepad.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
}
void sublime()
		{
			STARTUPINFO startInfo ={0};
			
			PROCESS_INFORMATION processInfo ={0};
			
			BOOL bsucess =CreateProcess(TEXT("C:\\Windows\\Sublime Text 3.exe"),NULL,NULL,NULL,FALSE,NULL,NULL,NULL,&startInfo,&processInfo);
}
void cd()
{
	system(" cd");
}
void dir()
{
	
	system("dir");
}
void c()
{
	system("C:");
}

void a0()
{
	system("color a0");
}
};


int main()
{
	color c;
    string str1="color02";	
    string str2="helpcolor";
    string str3="ipconfig";
    string str4="netview";
    string str5="color01";
    string str6="color03";
    string str7="color04";
    string str8="color05";
    string str9="color06";
    string str10="color07";
    string str11="color08";
    string str12="color09";
    string str13="colora";
    string str14="colorb";
    string str15="colorc";
    string str16="colord";
    string str17="colore";
    string str18="colorf";
    string str19="tree";
    string str20="help";
    string str21="netstat";
    string str22="arp";
    string str23="ping";
    string str24="systeminfo";
    string str25="cls";
    string str26="exit";
    string str27="date";
    string str28="notepad";
    string str29="sublime";
    string str30="cd";
    string str31="dir";
    string str32="C:";
    string str33="colora0";
	string ch;
	
while(1)
{

	cout<<"CPP:\Tejas>";
	cin>>ch;

		
if(str1==ch)
{
	c.colo();
}
else if(str2==ch)
{
	c.helpcolo();
}
else if(str3==ch)
{
   c.ipconfig();
}
else if(str4==ch)
{
	c.netview();
}
else if(str5==ch)
{
	c.color01();
}
else if(str6==ch)
{
	c.color03();
}
else if(str7==ch)
{
	c.color04();
}
else if(str8==ch)
{
	c.color05();
}
else if(str9==ch)
{
	c.color06();
}
else if(str10==ch)
{
	c.color07();
}
else if(str11==ch)
{
	c.color08();
}
else if(str12==ch)
{
	c.color09();
}
else if(str13==ch)
{
	c.colora();
}
else if(str14==ch)
{
	c.colorb();
}
else if(str15==ch)
{
	c.colorc();
}
else if(str16==ch)
{
	c.colord();
}
else if(str17==ch)
{
	c.colore();
}
else if(str18==ch)
{
	c.colorf();
}
else if(str19==ch)
{
	c.tree();
}
else if(str20==ch)
{
	c.help();
}
else if(str21==ch)
{
	c.netstat();
}
else if(str22==ch)
{
	c.arp();
}
else if(str23==ch)
{
	c.ping();
}
else if(str24==ch)
{
	c.systeminfo();
}
else if(str25==ch)
{
	c.cls();
}
else if(str26==ch)
{
	c.exit();
}
else if(str27==ch)
{
	c.date();
}
else if(str28==ch)
{
	c.notepad();
}
else if(str29==ch)
{
	c.sublime();
}
else if(str30==ch)
{
	c.cd();
}
else if(str31==ch)
{
	c.dir();
}

else if(str32==ch)
{
	c.c();
}
else if(str33==ch)
{
	c.a0();
}
else{
	cout<<"it is not recognized as an internal or external command operable program or batch file\n";
}
}
return 0;
}
