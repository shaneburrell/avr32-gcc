
// DO NOT EDIT THIS FILE - it is machine generated -*- c++ -*-

#ifndef __gnu_gcj_jvmti_BreakpointManager__
#define __gnu_gcj_jvmti_BreakpointManager__

#pragma interface

#include <java/lang/Object.h>
extern "Java"
{
  namespace gnu
  {
    namespace gcj
    {
      namespace jvmti
      {
          class Breakpoint;
          class BreakpointManager;
      }
    }
  }
}

class gnu::gcj::jvmti::BreakpointManager : public ::java::lang::Object
{

  BreakpointManager();
public:
  static ::gnu::gcj::jvmti::Breakpoint * newBreakpoint(jlong, jlong);
  static void deleteBreakpoint(jlong, jlong);
  static ::gnu::gcj::jvmti::Breakpoint * getBreakpoint(jlong, jlong);
private:
  static ::gnu::gcj::jvmti::BreakpointManager * _instance;
  ::java::util::Hashtable * __attribute__((aligned(__alignof__( ::java::lang::Object)))) _breakpoints;
public:
  static ::java::lang::Class class$;
};

#endif // __gnu_gcj_jvmti_BreakpointManager__
