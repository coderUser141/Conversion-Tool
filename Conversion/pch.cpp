// pch.cpp: source file corresponding to the pre-compiled header

#include "pch.h"

// When you are using pre-compiled headers, this source file is necessary for compilation to succeed.


namespace cvt {

	///
	///		STRINGS
	///

	ex inline bool convert(std::string str, int& out, unsigned int base = 10) {
		try {

			if (base < 0)throw false; //catch invalid base integer

			//conversion blah blah
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			int check = out; //check for later
			out = std::strtol(constr, &pEnd, base);
			char success[50];
			delete[] constr; //clear DAM

			if (errno == ERANGE) { //checks errno int

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) { //checks if the input is unchanged

				throw false;

			} else {

				return true;

			}

		} catch (bool state) {

			out = 0; //reset out to prevent data usage when it fails
			return state;

		}

	}

	ex inline bool convert(std::wstring str, int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			int check = out;
			out = std::wcstol(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				return true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::string str, long int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			long int check = out;
			out = std::strtol(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				return true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::wstring str, long int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			long int check = out;
			out = std::wcstol(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				return true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::string str, long long int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			long long int check = out;
			out = std::strtol(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				return true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::wstring str, long long int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			long long int check = out;
			out = std::wcstoll(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				return true;

			}

		} catch (bool state) {
			return state;
		}
	}

	///DEBUG THE DECIMALS!

	ex inline bool convert(std::string str, double& out) {
		try {
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			double check = out;
			out = std::strtod(constr, &pEnd);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::wstring str, double& out) {
		try {
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			double check = out;
			out = std::wcstod(constr, &pEnd);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::string str, long double& out) {
		try {
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			long double check = out;
			out = std::strtold(constr, &pEnd);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::wstring str, long double& out) {
		try {
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			long double check = out;
			out = std::wcstold(constr, &pEnd);
			char success[50];

			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}
		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::string str, float& out) {
		try {
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			float check = out;
			out = std::strtof(constr, &pEnd);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}
		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::wstring str, float& out) {
		try {
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			float check = out;
			out = std::wcstof(constr, &pEnd);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::string str, std::wstring& out) {
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
		std::wstring wide = converter.from_bytes(str);
		out = wide;
		return true;
	}

	ex inline bool convert(std::wstring str, std::string& out) {
		std::wstring_convert<std::codecvt_utf8_utf16<wchar_t>> converter;
		std::string narrow = converter.to_bytes(str);
		out = narrow;
		return true;
	}

	///
	///		STRINGS (UNSIGNED)
	///

	ex inline bool convert(std::string str, unsigned int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false; //catch invalid base integer
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			unsigned int check = out;
			out = std::strtoul(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::wstring str, unsigned int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			unsigned int check = out;
			out = std::wcstoul(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::string str, unsigned long int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			unsigned long int check = out;
			out = std::strtoul(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::wstring str, unsigned long int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			unsigned long int check = out;
			out = std::wcstoul(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::string str, unsigned long long int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			char* constr = new char[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			char* pEnd;
			unsigned long long int check = out;
			out = std::strtoull(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

		} catch (bool state) {
			return state;
		}
	}

	ex inline bool convert(std::wstring str, unsigned long long int& out, unsigned int base = 10) {
		try {
			if (base < 0)throw false;
			wchar_t* constr = new wchar_t[str.size() + 1];
			str.copy(constr, str.size() + 1);
			constr[str.size()] = '\0';
			wchar_t* pEnd;
			unsigned long long int check = out;
			out = std::wcstoull(constr, &pEnd, base);
			char success[50];
			delete[] constr;

			if (errno == ERANGE) {

				strerror_s(success, errno);
				std::cout << success << '\n';
				throw false;

			} else if (check == out) {

				throw false;

			} else {

				throw true;

			}

			return true;
		} catch (bool state) {
			return state;
		}
	}


	///
	///		STRINGS (EXTENDED)
	///

	//debug this

	ex inline void convert(std::string str, LPSTR& out) {
		size_t len = str.length();
		LPSTR constr = new char[len + 1];
		str._Copy_s(constr, len, len);
		constr[len] = '\0';
		out = constr;

		delete[] constr;
	}

	ex inline void convert(std::wstring str, LPSTR& out) {
		std::string output;
		convert(str, output);
		convert(output, out);
	}

	ex inline void convert(std::string str, LPCSTR& out) {
		char* constr = new char[str.size() + 1];
		str.copy(constr, str.size() + 1);
		constr[str.size()] = '\0';
		out = constr;

		delete[] constr;
	}

	ex inline void convert(std::wstring str, LPCSTR& out) {
		std::string output;
		convert(str, output);
		convert(output, out);
	}

	ex inline void convert(std::string str, LPWSTR& out) {
		int length1;
		int length2 = (int)str.length() + 1;
		length1 = MultiByteToWideChar(CP_ACP, 0, str.c_str(), length2, 0, 0);
		std::vector<wchar_t> buffer1(length1);
		size_t buffer1len = buffer1.size() + 1;
		wchar_t* buffer2 = new wchar_t[buffer1len];
		MultiByteToWideChar(CP_ACP, 0, str.c_str(), length2, buffer2, (int)buffer1len);
		out = buffer2;
		delete[] buffer2;

	}

	ex inline void convert(std::wstring str, LPWSTR& out) {
		std::string output;
		convert(str, output);
		convert(output, out);
	}

	ex inline void convert(std::string str, LPCWSTR& out) {
		int length1;
		int length2 = (int)str.length() + 1;
		length1 = MultiByteToWideChar(CP_ACP, 0, str.c_str(), length2, 0, 0);
		std::vector<wchar_t> buffer1(length1);
		size_t buffer1len = buffer1.size() + 1;
		wchar_t* buffer2 = new wchar_t[buffer1len];
		MultiByteToWideChar(CP_ACP, 0, str.c_str(), length2, buffer2, (int)buffer1len);
		out = buffer2;
		delete[] buffer2;

	}

	ex inline void convert(std::wstring str, LPCWSTR& out) {
		out = str.c_str();
	}

	///
	///		INTEGERS
	///

	ex inline bool convert(int into, long int& out) {
		out = into;
		return true;
	}

	ex inline bool convert(int into, long long int& out) {
		out = into;
		return true;
	}

	ex inline bool convert(int into, float& out) {
		out = into;
		return true;
	}

	ex inline bool convert(int into, double& out) {
		out = into;
		return true;
	}

	ex inline bool convert(int into, long double& out) {
		out = into;
		return true;
	}

	ex inline bool convert(int into, unsigned int& out) {
		if (into < 0) {
			return false;
		} else {
			out = into;
			return true;
		}
	}

	ex inline bool convert(int into, unsigned long int& out) {
		if (into < 0) {
			return false;
		} else {
			out = into;
			return true;
		}
	}

	ex inline bool convert(int into, unsigned long long int& out) {
		if (into < 0) {
			return false;
		} else {
			out = into;
			return true;
		}
	}

	ex inline bool convert(int into, std::string& out) {
		out = std::to_string(into);
		return true;
	}

	ex inline bool convert(int into, std::wstring& out) {
		out = std::to_wstring(into);
		return true;
	}

	ex inline void convert(char into[], unsigned long long& out) {

		char* pNext;
		out = strtoull(into, &pNext, 10);

	}

	ex inline void convert(char into[], long long& out) {

		char* pNext;
		out = strtoll(into, &pNext, 10);

	}

	ex inline void convert(char into[], unsigned long& out) {

		char* pNext;
		out = strtoul(into, &pNext, 10);

	}
	
	ex inline void convert(char into[], long& out) {

		char* pNext;
		out = strtol(into, &pNext, 10);

	}

	ex inline void convert(wchar_t into[], unsigned long long& out) {

		wchar_t* pNext;
		out = wcstoull(into, &pNext, 10);

	}

	ex inline void convert(wchar_t into[], long long& out) {

		wchar_t* pNext;
		out = wcstoll(into, &pNext, 10);

	}

	ex inline void convert(wchar_t into[], unsigned long& out) {

		wchar_t* pNext;
		out = wcstoul(into, &pNext, 10);

	}

	ex inline void convert(wchar_t into[], long& out) {

		wchar_t* pNext;
		out = wcstol(into, &pNext, 10);

	}

}

int main() {
	float out;
	cvt::convert(45343, out);
	std::cout << out;
	return 0;
}