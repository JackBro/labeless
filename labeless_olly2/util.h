/* Labeless
 * by Aliaksandr Trafimchuk
 *
 * Source code released under
 * Creative Commons BY-NC 4.0
 * http://creativecommons.org/licenses/by-nc/4.0
 */

#pragma once

#include <string>

#include "types.h"

struct sockaddr_in;

namespace util {

xstring getOllyDir();
xstring getPluginDir(HINSTANCE hPlugin);
xstring inetAddrToString(sockaddr_in* sin);

std::string sformat(const char* fmt, ...);

std::wstring mb2w(const std::string& v);
std::string w2mb(const std::wstring& v);


inline xstring to_xstr(const char* v)
{
	if (!v)
		return {};
	return mb2w(v);
}

inline xstring to_xstr(const wchar_t* v)
{
	if (!v)
		return {};
	return xstring(v);
}

/*#ifdef _UNICODE
#	define to_xstr(X) mb2w((X))
#else // _UNICODE
#	define to_xstr(X) xstring((X))
#endif // _UNICODE*/

} // util
