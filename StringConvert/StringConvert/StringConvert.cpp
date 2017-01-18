#include <iostream>
#include <atlstr.h>

int main(void)
{
	CString cstring1 = _T("CString");
	std::string string1 = _T("string");
	TCHAR* char1 = _T("char1");
	//CString to string、char*
	string1 = cstring1;
	char1 = cstring1.GetBuffer();
	printf("CString to string、char*:string1=%s,char1=%s \n",string1.data(),char1);
	//string to CString、char*
	string1 = _T("string");
	cstring1 = string1.data();
	char1=new TCHAR[string1.length()+1];
	strcpy_s(char1, (string1.length() + 1), string1.data());
	printf("string to CString、char*:cstring1=%s,char1=%s \n", cstring1.GetBuffer(), char1);
	//char* to CString、string
	char1 = _T("char1");
	string1 = char1;
	cstring1 = char1;
	printf("char* to CString、string:cstring1=%s,string=%s \n", cstring1.GetBuffer(), string1.data());
	getchar();
}