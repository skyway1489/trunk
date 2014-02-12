#include "StringConvert.h"
//#include <tchar.h> 
#include <locale> 
#include <codecvt> 

CStringConvert::CStringConvert()
{

}
CStringConvert::~CStringConvert()
{

}

std::string CStringConvert::ConvertUtf8ToGbk(const std::string in)
{
	std::wstring_convert<std::codecvt_utf8<wchar_t>> cvt_utf8; // UTF-8 <-> Unicode转换器 
	std::wstring_convert<std::codecvt<wchar_t, char, std::mbstate_t>> cvt_ansi(new std::codecvt<wchar_t, char, std::mbstate_t>("CHS")); // GBK <-> Unicode转换器 
	std::wstring ws = cvt_utf8.from_bytes(in); // UTF-8转换为Unicode 
	std::string gbkstr = cvt_ansi.to_bytes(ws); 
	return gbkstr;
}

std::string CStringConvert::ConvertGbkToUtf8(const std::string in)
{
	std::wstring_convert<std::codecvt_utf8<wchar_t>> cvt_utf8; // UTF-8 <-> Unicode转换器 
	std::wstring_convert<std::codecvt<wchar_t, char, std::mbstate_t>> cvt_ansi(new std::codecvt<wchar_t, char, std::mbstate_t>("CHS")); // GBK <-> Unicode转换器 
	std::wstring ws = cvt_ansi.from_bytes(in); 
   	std::string utf8str = cvt_utf8.to_bytes(ws); 
	return utf8str;
}

