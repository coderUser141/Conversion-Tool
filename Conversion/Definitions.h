#pragma once
#include "pch.h"
//Conversion namespace
namespace cvt {

	ex inline bool convert(std::string str, int& out, unsigned int base);

	ex inline bool convert(std::wstring str, int& out, unsigned int base);

	ex inline bool convert(std::string str, long int& out, unsigned int base);

	ex inline bool convert(std::wstring str, long int& out, unsigned int base);

	ex inline bool convert(std::string str, long long int& out, unsigned int base);

	ex inline bool convert(std::wstring str, long long int& out, unsigned int base);

	///DEBUG THE DECIMALS!

	ex inline bool convert(std::string str, double& out);

	ex inline bool convert(std::wstring str, double& out);

	ex inline bool convert(std::string str, long double& out);

	ex inline bool convert(std::wstring str, long double& out);

	ex inline bool convert(std::string str, float& out);

	ex inline bool convert(std::wstring str, float& out);

	ex inline bool convert(std::string str, std::wstring& out);

	ex inline bool convert(std::wstring str, std::string& out);

	///
	///		STRINGS (UNSIGNED)
	///

	ex inline bool convert(std::string str, unsigned int& out, unsigned int base);

	ex inline bool convert(std::wstring str, unsigned int& out, unsigned int base);

	ex inline bool convert(std::string str, unsigned long int& out, unsigned int base);

	ex inline bool convert(std::wstring str, unsigned long int& out, unsigned int base);

	ex inline bool convert(std::string str, unsigned long long int& out, unsigned int base);

	ex inline bool convert(std::wstring str, unsigned long long int& out, unsigned int base);

	ex inline void convert(std::string str, LPSTR& out);

	ex inline void convert(std::wstring str, LPSTR& out);

	ex inline void convert(std::string str, LPCSTR& out);

	ex inline void convert(std::wstring str, LPCSTR& out);

	ex inline void convert(std::string str, LPWSTR& out);

	ex inline void convert(std::wstring str, LPWSTR& out);

	ex inline void convert(std::string str, LPCWSTR& out);

	ex inline void convert(std::wstring str, LPCWSTR& out);




	ex inline bool convert(int into, long int& out);

	ex inline bool convert(int into, long long int& out);

	ex inline bool convert(int into, float& out);

	ex inline bool convert(int into, double& out);

	ex inline bool convert(int into, long double& out);

	ex inline bool convert(int into, unsigned int& out);

	ex inline bool convert(int into, unsigned long int& out);

	ex inline bool convert(int into, unsigned long long int& out);

	ex inline bool convert(int into, std::string& out);

	ex inline bool convert(int into, std::wstring& out);

	ex inline void convert(char into[], unsigned long long& out);

	ex inline void convert(wchar_t into[], unsigned long long& out);

	ex inline void convert(char into[], long long& out);

	ex inline void convert(wchar_t into[], long long& out);

	ex inline void convert(char into[], unsigned long& out);

	ex inline void convert(wchar_t into[], unsigned long& out);

	ex inline void convert(char into[], long& out);

	ex inline void convert(wchar_t into[], long& out);

	

}