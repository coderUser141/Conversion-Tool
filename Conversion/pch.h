// pch.h: This is a precompiled header file.
// Files listed below are compiled only once, improving build performance for future builds.
// This also affects IntelliSense performance, including code completion and many code browsing features.
// However, files listed here are ALL re-compiled if any one of them is updated between builds.
// Do not add files here that you will be updating frequently as this negates the performance advantage.
#pragma once

#ifndef PCH_H
#define PCH_H

#define CVTLOAD 1

// add headers that you want to pre-compile here
#ifndef LEAN
#include "framework.h"
#endif

#include <iostream>
#include <string>

//wide character libraries
#include <wchar.h>
#include <cwchar>

//vector library
#include <vector>

//windows cancer library
#include <Windows.h>

//limit libraries
#include <limits>
#include <limits.h>

//utility libraries
#include <stdlib.h>
#include <cstdlib>

#include <codecvt>
#include <locale>
#include <cerrno>
#include <errno.h>

#ifndef ex
#define ex __declspec(dllexport)
#endif

//string -> other types: done
//wstring -> other types: done
//int -> other types: currently in development
//long -> other types: pending
//long long - > other types
#endif //PCH_H
