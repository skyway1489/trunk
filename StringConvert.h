#ifndef _H_STRINGCONVERT_H
#define _H_STRINGCONVERT_H
#include <string>

class CStringConvert
{
public:
	CStringConvert();
	~CStringConvert();
	static std::string ConvertUtf8ToGbk(const std::string in);
	static std::string ConvertGbkToUtf8(const std::string in);
	
protected:
private:
};



#endif