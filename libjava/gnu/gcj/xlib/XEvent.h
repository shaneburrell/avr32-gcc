
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_xlib_XEvent__
#define __gnu_gcj_xlib_XEvent__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace xlib
      {
          class Display;
          class XAnyEvent;
          class XEvent;
      }
    }
  }
}

class gnu::gcj::xlib::XEvent : public ::java::lang::Object
{

public:
  XEvent(::gnu::gcj::xlib::XAnyEvent *);
  XEvent(jint, ::gnu::gcj::xlib::Display *);
  virtual ::gnu::gcj::xlib::XAnyEvent * getXAnyEvent();
  virtual ::java::lang::String * toString();
public: // actually package-private
  ::gnu::gcj::xlib::XAnyEvent * __attribute__((aligned(__alignof__( ::java::lang::Object)))) event;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_xlib_XEvent__
