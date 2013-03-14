/* $Id: Pattern.h 15091 2005-05-07 21:24:31Z sedwards $ */

// Pattern.h: decalration for pattern functions

#if !defined(PATTERN_H__INCLUDED_)
#define PATTERN_H__INCLUDED_

#define PATTERN_MATCH_ALL  _T("*")

BOOL PatternMatch(const TCHAR *pszPattern, const TCHAR *pszTry);

#endif
