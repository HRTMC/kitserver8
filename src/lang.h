
void readLang(wchar_t* langName, HMODULE hMod);
void readLangFile(wchar_t* langFile, HMODULE hMod);
const wchar_t* _getTransl(char* section, char* key);

using namespace std;
#if _CPPLIB_VER >= 503
#ifndef _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#define _SILENCE_STDEXT_HASH_DEPRECATION_WARNINGS
#endif
#include <hash_map>
using namespace stdext;
#endif

#define MAP_FIND(map,key) (((*(map)).find(key) != (*(map)).end()) ? (*(map))[key] : NULL)
#define MAP_CONTAINS(map,key) (map.find(key)!=map.end())

#define BUFLEN 4096
#define SW sizeof(wchar_t)
#define WBUFLEN (SW * BUFLEN)
