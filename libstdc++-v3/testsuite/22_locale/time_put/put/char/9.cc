// 2001-09-17 Benjamin Kosnik  <bkoz@redhat.com>

// Copyright (C) 2001, 2002, 2003, 2004, 2005, 2006 Free Software Foundation
//
// This file is part of the GNU ISO C++ Library.  This library is free
// software; you can redistribute it and/or modify it under the
// terms of the GNU General Public License as published by the
// Free Software Foundation; either version 2, or (at your option)
// any later version.

// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License along
// with this library; see the file COPYING.  If not, write to the Free
// Software Foundation, 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301,
// USA.

// 22.2.5.3.1 time_put members

#include <locale>
#include <sstream>
#include <testsuite_hooks.h>

void test09()
{
  using namespace std;
  bool test __attribute__((unused)) = true;

  // Check time_put works with other iterators besides streambuf
  // output iterators. (As long as output_iterator requirements are met.)
  typedef string::iterator iter_type;
  typedef char_traits<char> traits;
  typedef time_put<char, iter_type> time_put_type;
  const ios_base::iostate goodbit = ios_base::goodbit;

  ios_base::iostate err = goodbit;
  const locale loc_c = locale::classic();
  const string x(50, 'x'); // have to have allocated string!
  string res;
  const tm time_sanity = __gnu_test::test_tm(1);
  const char* date = "%X, %A, the second of %B, %Y";

  ostringstream oss; 
  oss.imbue(locale(loc_c, new time_put_type));
  const time_put_type& tp = use_facet<time_put_type>(oss.getloc());

  // 01 date format
  res = x;
  iter_type ret1 = tp.put(res.begin(), oss, ' ', &time_sanity, 
			  date, date + traits::length(date));
  string sanity1(res.begin(), ret1);
  VERIFY( err == goodbit );
  VERIFY( res == "12:00:00, Tuesday, the second of June, 1997xxxxxxx" );
  VERIFY( sanity1 == "12:00:00, Tuesday, the second of June, 1997" );
}

int main()
{
  test09();
  return 0;
}
